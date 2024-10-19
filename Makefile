BUILD_DIR := build
EXE_NAME := dungeon

prepare:
	@echo "Preparing the environment..."
	@echo "Creating the directories..."
	@mkdir -p $(BUILD_DIR)
	@echo "Done."

prebuild:
	@echo "Prebuilding the project..."
	@cd $(BUILD_DIR) && cmake ..
	@cd ..
	@echo "Done."

build:
	@echo "Building the project..."
	@cd $(BUILD_DIR) && make
	@if [ -f $(BUILD_DIR)/$(EXE_NAME) ]; then echo "Build successful: $(EXE_NAME) found."; else echo "Build failed: $(EXE_NAME) not found."; if
	@cd ..
	@echo "Done."

run:
	@echo "Running the project..."
	@cd $(BUILD_DIR) && ./$(EXE_NAME)
	@cd ..
	@echo "Done."