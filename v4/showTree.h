#include <stdbool.h>
#include "structures.h"

void printTabs();
void showProgramFile(is_ProgramFile* pF);
void showClassHeader(is_ClassHeader *cH);
void showFieldDeclaration(is_FieldDeclaration* fD);
void showAttrDeclaration(is_AttrDeclaration* aD);
void showMethodDeclaration(is_MethodDeclaration* mD);
void showMethodDeclarator(is_MethodDeclarator* mD);
void showParameter(is_Parameter* par);
void showVariablesDeclarator(is_VariablesDeclarator* vD);
void showTypeSpecifier(is_TypeSpecifier* tS);
void showTypename(is_Typename* tn);
void showBlock(is_Block* block, bool isDoWhile);
void showLocalVariableDeclarationsOrStatements(is_LocalVariableDeclarationsOrStatements* lvdos);
void showLocalVariableDeclarationStatement(is_LocalVariableDeclarationStatement* lvds);
void showStatement(is_Statement* s, bool isToTab, bool isElseIf, bool isDoWhile);
void showExpression(is_Expression* exp, bool nextLine, bool isTabs);
void showConditionalExpression(is_ConditionalExpression* cExp, bool nextLine, bool isTabs);
void showAssignmentExpression(is_AssignmentExpression* aExp, bool nextLine, bool isTabs);
void showLabeledStatement(is_LabeledStatement* lS);
void showSelectionStatement(is_SelectionStatement* sS, bool isElseIf);
void showIterationStatement(is_IterationStatement* iS);
void showJumpStatement(is_JumpStatement* jS);
void showRelationalExpression(is_RelationalExpression* rExp, bool nextLine, bool isTabs);
void showArithmeticExpression(is_ArithmeticExpression* aExp, bool nextLine, bool isTabs);
void showCastExpression(is_CastExpression* cExp, bool nextLine, bool isTabs);
void showUnaryExpression(is_UnaryExpression* uE, bool nextLine, bool isTabs);
void showBasicElement(is_BasicElement* bE, bool nextLine, bool isTabs);
void showMethodCall(is_MethodCall* mC, bool nextLine, bool isTabs);
void showForInit(is_ForInit* fI);
