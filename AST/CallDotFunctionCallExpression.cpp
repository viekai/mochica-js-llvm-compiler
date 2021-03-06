#include "AST/CallDotFunctionCallExpression.h"

namespace MoEnjin
{
	CallDotFunctionCallExpression::CallDotFunctionCallExpression(mo_int32 lineNumber, Expression* base, const UTF8String& id, ArgumentsNode* args, mo_uint32 divot, mo_uint16 startPos, mo_uint16 endPos)
		: DotFunctionCallExpression(lineNumber, base, id, args, divot, startPos, endPos) { }
}