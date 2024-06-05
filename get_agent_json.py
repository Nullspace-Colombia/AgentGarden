import unreal

def export_object_to_t3d(object_path, destination_path):
    # Cargar el objeto
    obj = unreal.load_asset(object_path)
    if not obj:
        unreal.log_error(f"Object not found at path: {object_path}")
        return

    # Configurar el exportador
    #export_options = unreal.ExporterOptions()
    #export_options.export_selected = False
    #export_options.prompt = False

    # Exportar el objeto
    exportTask = unreal.AssetExportTask()
    exportTask.object=obj
    exportTask.filename=destination_path

    exportTask.prompt=False
    exportTask.automated=True

    success = unreal.Exporter.run_asset_export_task(exportTask)
    
    if success:
        unreal.log(f"Object exported to: {destination_path}")
    else:
        unreal.log_error(f"Failed to export object to: {destination_path}")

# Ruta del objeto en el proyecto
object_path = "/Game/Football/Blueprints/Agent1/BP_Agent1.BP_Agent1"
# Ruta de destino del archivo .T3D
destination_path = unreal.Paths.project_content_dir() + "Agent1.COPY" 
print(destination_path)

export_object_to_t3d(object_path, destination_path)


#blueprint_path =  '/Game/Football/Blueprints/Agent1/BP_Agent1.BP_Agent1' # Cambia esta ruta por la ruta de tu Blueprint

#export_path = 'C:/Users/Valentina/Documents/GitHub/AgentGarden/json_files/test1.json'  


"""

def export_blueprint_to_text(blueprint_path, export_path):
    # Carga el Blueprint
    blueprint= ue.EditorAssetLibrary.load_asset(blueprint_path)

    print(ue.BlueprintEditorLibrary.find_graph(blueprint, "GetReward"))


    
# Ruta del Blueprint que deseas exportar
blueprint_path = "/Game/Football/Blueprints/Agent1/BP_Agent1.BP_Agent1"

# Ruta de destino para el archivo exportado
export_path = "C:/Users/Valentina/Documents/GitHub/AgentGarden/json_files/test1.txt"

# Llama a la función para exportar el Blueprint
export_blueprint_to_text(blueprint_path, export_path)

def export_blueprint_to_text(blueprint_path, export_path):
    # Carga el Blueprint
    blueprint = unreal.EditorAssetLibrary.load_asset(blueprint_path)

    # Inicializa una cadena para almacenar el texto
    blueprint_text = ""

    # Obtiene el grafo de nodos del Blueprint
    blueprint_graph = unreal.BlueprintEditorLibrary.find_event_graph(blueprint)

    # Recorre cada nodo en el grafo
    print(blueprint_graph)
"""