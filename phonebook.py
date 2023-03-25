people={
    'Askar':'+7-701-123-4455',
    'Bob':'+7-707-890-5566'
}

name=input('Name: ')
if name in people:
    number=people[name]
    print(f'Number:{number}')