.PHONY: clean All

All:
	@echo "----------Building project:[ banco - Debug ]----------"
	@cd "banco" && "$(MAKE)" -f  "banco.mk"
clean:
	@echo "----------Cleaning project:[ banco - Debug ]----------"
	@cd "banco" && "$(MAKE)" -f  "banco.mk" clean
