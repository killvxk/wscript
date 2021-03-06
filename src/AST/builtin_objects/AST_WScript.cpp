#include "../../includes/AST/builtin_objects/AST_WScript.hpp"
#include "../../includes/Scope.hpp"


AST_WScript::AST_WScript(Token* token) : AST_Object(token) {
    this->private_scope->define_builtin_function(new AST_WScript_Echo("echo"));
};

AST_WScript::~AST_WScript() {};
