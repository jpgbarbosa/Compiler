#include "structures.h"
#include <stdbool.h>

void translateProgramFile(is_ProgramFile* pF);
void translateHeader();
void translateFooter();
void translateRedirector();
void translateGlobalVariables();
void translateMain(is_MethodDeclaration* mainDecl);
void translateMethodDeclaration(is_MethodDeclaration* mD);
void translateParametersIntoLocals(is_MethodDeclaration* mD);
void translateGlobalVariablesDeclarator(tableElement* element, bool isGlobal);
void translateVariablesDeclarator(is_VariablesDeclarator* vD, is_TypeSpecifier *tS, environmentList *environment);
void translateBlock(is_Block* block, environmentList *environment);
void translateLocalVariableDeclarationsOrStatements(is_LocalVariableDeclarationsOrStatements* lvdos, environmentList *environment);
void translateLocalVariableDeclarationStatement(is_LocalVariableDeclarationStatement* lvds, environmentList *environment);
void translateStatement(is_Statement* s, environmentList *environment);
int translateExpression(is_Expression* exp, environmentList *environment, bool isArgument);
int translateConditionalExpression(is_ConditionalExpression* cExp, environmentList *environment, bool isArgument);
int translateAssignmentExpression(is_AssignmentExpression* aExp, environmentList *environment, bool isArgument);
int translateLabeledStatement(is_LabeledStatement* lS, environmentList *environment);
int translateSelectionStatement(is_SelectionStatement* sS, environmentList *environment);
int translateIterationStatement(is_IterationStatement* iS, environmentList *environment);
void translateJumpStatement(is_JumpStatement* jS, environmentList *environment);
int translateRelationalExpression(is_RelationalExpression* rExp, environmentList *environment, bool isArgument);
int translateArithmeticExpression(is_ArithmeticExpression* aExp, environmentList *environment, bool isArgument);
void translateCastExpression(is_CastExpression* cExp, environmentList *environment, bool isArgument);
void translateUnaryExpression(is_UnaryExpression* uE, environmentList *environment);
void translateBasicElement(is_BasicElement* bE, environmentList *environment);
void translateMethodCall(is_MethodCall* mC, environmentList *environment);
void translatePassParameters(is_MethodCall* mC, environmentList *environment);
void translateSystemOutPrintln(is_SystemOutPrintln* p, environmentList *environment);
void translateForInit(is_ForInit* fI, environmentList *environment);
void printPrimitiveType(is_TypeSpecifier* tS);
void translateTypeSpecifier(is_PrimitiveType type, bool isPointer);
