import sys
def organize_strings(l:list) -> dict:
    index = {}
    for elt in l:
        key=elt[0]
        if key not in index:
            index[key]=[elt]
        else:
            index[key].append(elt)
    print(index)
    
def organize_strings_lexicalorder(l:list):
    index = {}
    for elt in l:
        key=elt[0]
        if key not in index:
            index[key]=[elt]
        else:
            index[key].append(elt)

    print(dict(sorted(index.items(), key=)))
    
organize_strings(['barbe', 'arbre', 'ville', 'vers', 'veille'])