import os

# Path to the folder containing the images
folder_path = 'C:\\Users\\Michael Angelo\\Desktop\\Python'

# Get a list of all image files in the folder
image_files = [f for f in os.listdir(folder_path) if f.lower().endswith(('.png', '.jpg', '.jpeg', '.gif', '.bmp'))]

# Sort the image files to ensure consistent ordering
image_files.sort()

# Iterate through the image files and rename them sequentially
for index, image_file in enumerate(image_files, start=1):
    extension = os.path.splitext(image_file)[1]
    new_name = f'image_{index:02d}{extension}'
    old_path = os.path.join(folder_path, image_file)
    new_path = os.path.join(folder_path, new_name)
    
    # Rename the image file
    os.rename(old_path, new_path)
    
    print(f'Renamed {image_file} to {new_name}')

print('Renaming complete!')
