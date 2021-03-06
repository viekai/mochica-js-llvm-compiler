#ifndef MOENJIN_PARSER_LEXERCHARACTERTYPES_H
#define MOENJIN_PARSER_LEXERCHARACTERTYPES_H

#include "Platform/Configuration.h"

namespace MoEnjin
{
	enum LexCharacterType
	{
		// Types for the main switch

		// The first three types are fixed, and also used for identifying
		// ASCII alpha and alphanumeric characters (see isIdentStart and isIdentPart).
		LexCharacterIdentifierStart,
		LexCharacterZero,
		LexCharacterNumber,

		LexCharacterInvalid,
		LexCharacterLineTerminator,
		LexCharacterExclamationMark,
		LexCharacterOpenParen,
		LexCharacterCloseParen,
		LexCharacterOpenBracket,
		LexCharacterCloseBracket,
		LexCharacterComma,
		LexCharacterColon,
		LexCharacterQuestion,
		LexCharacterTilde,
		LexCharacterQuote,
		LexCharacterDot,
		LexCharacterSlash,
		LexCharacterBackSlash,
		LexCharacterSemicolon,
		LexCharacterOpenBrace,
		LexCharacterCloseBrace,

		LexCharacterAdd,
		LexCharacterSub,
		LexCharacterMultiply,
		LexCharacterModulo,
		LexCharacterAnd,
		LexCharacterXor,
		LexCharacterOr,
		LexCharacterLess,
		LexCharacterGreater,
		LexCharacterEqual,

		// Other types (only one so far)
		LexCharacterWhiteSpace,
	};

	// 256 Latin-1 codes
	static const unsigned short typesOfLatin1Characters[256] = {
	/*   0 - Null               */ LexCharacterInvalid,
	/*   1 - Start of Heading   */ LexCharacterInvalid,
	/*   2 - Start of Text      */ LexCharacterInvalid,
	/*   3 - End of Text        */ LexCharacterInvalid,
	/*   4 - End of Transm.     */ LexCharacterInvalid,
	/*   5 - Enquiry            */ LexCharacterInvalid,
	/*   6 - Acknowledgment     */ LexCharacterInvalid,
	/*   7 - Bell               */ LexCharacterInvalid,
	/*   8 - Back Space         */ LexCharacterInvalid,
	/*   9 - Horizontal Tab     */ LexCharacterWhiteSpace,
	/*  10 - Line Feed          */ LexCharacterLineTerminator,
	/*  11 - Vertical Tab       */ LexCharacterWhiteSpace,
	/*  12 - Form Feed          */ LexCharacterWhiteSpace,
	/*  13 - Carriage Return    */ LexCharacterLineTerminator,
	/*  14 - Shift Out          */ LexCharacterInvalid,
	/*  15 - Shift In           */ LexCharacterInvalid,
	/*  16 - Data Line Escape   */ LexCharacterInvalid,
	/*  17 - Device Control 1   */ LexCharacterInvalid,
	/*  18 - Device Control 2   */ LexCharacterInvalid,
	/*  19 - Device Control 3   */ LexCharacterInvalid,
	/*  20 - Device Control 4   */ LexCharacterInvalid,
	/*  21 - Negative Ack.      */ LexCharacterInvalid,
	/*  22 - Synchronous Idle   */ LexCharacterInvalid,
	/*  23 - End of Transmit    */ LexCharacterInvalid,
	/*  24 - Cancel             */ LexCharacterInvalid,
	/*  25 - End of Medium      */ LexCharacterInvalid,
	/*  26 - Substitute         */ LexCharacterInvalid,
	/*  27 - Escape             */ LexCharacterInvalid,
	/*  28 - File Separator     */ LexCharacterInvalid,
	/*  29 - Group Separator    */ LexCharacterInvalid,
	/*  30 - Record Separator   */ LexCharacterInvalid,
	/*  31 - Unit Separator     */ LexCharacterInvalid,
	/*  32 - Space              */ LexCharacterWhiteSpace,
	/*  33 - !                  */ LexCharacterExclamationMark,
	/*  34 - "                  */ LexCharacterQuote,
	/*  35 - #                  */ LexCharacterInvalid,
	/*  36 - $                  */ LexCharacterIdentifierStart,
	/*  37 - %                  */ LexCharacterModulo,
	/*  38 - &                  */ LexCharacterAnd,
	/*  39 - '                  */ LexCharacterQuote,
	/*  40 - (                  */ LexCharacterOpenParen,
	/*  41 - )                  */ LexCharacterCloseParen,
	/*  42 - *                  */ LexCharacterMultiply,
	/*  43 - +                  */ LexCharacterAdd,
	/*  44 - ,                  */ LexCharacterComma,
	/*  45 - -                  */ LexCharacterSub,
	/*  46 - .                  */ LexCharacterDot,
	/*  47 - /                  */ LexCharacterSlash,
	/*  48 - 0                  */ LexCharacterZero,
	/*  49 - 1                  */ LexCharacterNumber,
	/*  50 - 2                  */ LexCharacterNumber,
	/*  51 - 3                  */ LexCharacterNumber,
	/*  52 - 4                  */ LexCharacterNumber,
	/*  53 - 5                  */ LexCharacterNumber,
	/*  54 - 6                  */ LexCharacterNumber,
	/*  55 - 7                  */ LexCharacterNumber,
	/*  56 - 8                  */ LexCharacterNumber,
	/*  57 - 9                  */ LexCharacterNumber,
	/*  58 - :                  */ LexCharacterColon,
	/*  59 - ;                  */ LexCharacterSemicolon,
	/*  60 - <                  */ LexCharacterLess,
	/*  61 - =                  */ LexCharacterEqual,
	/*  62 - >                  */ LexCharacterGreater,
	/*  63 - ?                  */ LexCharacterQuestion,
	/*  64 - @                  */ LexCharacterInvalid,
	/*  65 - A                  */ LexCharacterIdentifierStart,
	/*  66 - B                  */ LexCharacterIdentifierStart,
	/*  67 - C                  */ LexCharacterIdentifierStart,
	/*  68 - D                  */ LexCharacterIdentifierStart,
	/*  69 - E                  */ LexCharacterIdentifierStart,
	/*  70 - F                  */ LexCharacterIdentifierStart,
	/*  71 - G                  */ LexCharacterIdentifierStart,
	/*  72 - H                  */ LexCharacterIdentifierStart,
	/*  73 - I                  */ LexCharacterIdentifierStart,
	/*  74 - J                  */ LexCharacterIdentifierStart,
	/*  75 - K                  */ LexCharacterIdentifierStart,
	/*  76 - L                  */ LexCharacterIdentifierStart,
	/*  77 - M                  */ LexCharacterIdentifierStart,
	/*  78 - N                  */ LexCharacterIdentifierStart,
	/*  79 - O                  */ LexCharacterIdentifierStart,
	/*  80 - P                  */ LexCharacterIdentifierStart,
	/*  81 - Q                  */ LexCharacterIdentifierStart,
	/*  82 - R                  */ LexCharacterIdentifierStart,
	/*  83 - S                  */ LexCharacterIdentifierStart,
	/*  84 - T                  */ LexCharacterIdentifierStart,
	/*  85 - U                  */ LexCharacterIdentifierStart,
	/*  86 - V                  */ LexCharacterIdentifierStart,
	/*  87 - W                  */ LexCharacterIdentifierStart,
	/*  88 - X                  */ LexCharacterIdentifierStart,
	/*  89 - Y                  */ LexCharacterIdentifierStart,
	/*  90 - Z                  */ LexCharacterIdentifierStart,
	/*  91 - [                  */ LexCharacterOpenBracket,
	/*  92 - \                  */ LexCharacterBackSlash,
	/*  93 - ]                  */ LexCharacterCloseBracket,
	/*  94 - ^                  */ LexCharacterXor,
	/*  95 - _                  */ LexCharacterIdentifierStart,
	/*  96 - `                  */ LexCharacterInvalid,
	/*  97 - a                  */ LexCharacterIdentifierStart,
	/*  98 - b                  */ LexCharacterIdentifierStart,
	/*  99 - c                  */ LexCharacterIdentifierStart,
	/* 100 - d                  */ LexCharacterIdentifierStart,
	/* 101 - e                  */ LexCharacterIdentifierStart,
	/* 102 - f                  */ LexCharacterIdentifierStart,
	/* 103 - g                  */ LexCharacterIdentifierStart,
	/* 104 - h                  */ LexCharacterIdentifierStart,
	/* 105 - i                  */ LexCharacterIdentifierStart,
	/* 106 - j                  */ LexCharacterIdentifierStart,
	/* 107 - k                  */ LexCharacterIdentifierStart,
	/* 108 - l                  */ LexCharacterIdentifierStart,
	/* 109 - m                  */ LexCharacterIdentifierStart,
	/* 110 - n                  */ LexCharacterIdentifierStart,
	/* 111 - o                  */ LexCharacterIdentifierStart,
	/* 112 - p                  */ LexCharacterIdentifierStart,
	/* 113 - q                  */ LexCharacterIdentifierStart,
	/* 114 - r                  */ LexCharacterIdentifierStart,
	/* 115 - s                  */ LexCharacterIdentifierStart,
	/* 116 - t                  */ LexCharacterIdentifierStart,
	/* 117 - u                  */ LexCharacterIdentifierStart,
	/* 118 - v                  */ LexCharacterIdentifierStart,
	/* 119 - w                  */ LexCharacterIdentifierStart,
	/* 120 - x                  */ LexCharacterIdentifierStart,
	/* 121 - y                  */ LexCharacterIdentifierStart,
	/* 122 - z                  */ LexCharacterIdentifierStart,
	/* 123 - {                  */ LexCharacterOpenBrace,
	/* 124 - |                  */ LexCharacterOr,
	/* 125 - }                  */ LexCharacterCloseBrace,
	/* 126 - ~                  */ LexCharacterTilde,
	/* 127 - Delete             */ LexCharacterInvalid,
	/* 128 - Cc category        */ LexCharacterInvalid,
	/* 129 - Cc category        */ LexCharacterInvalid,
	/* 130 - Cc category        */ LexCharacterInvalid,
	/* 131 - Cc category        */ LexCharacterInvalid,
	/* 132 - Cc category        */ LexCharacterInvalid,
	/* 133 - Cc category        */ LexCharacterInvalid,
	/* 134 - Cc category        */ LexCharacterInvalid,
	/* 135 - Cc category        */ LexCharacterInvalid,
	/* 136 - Cc category        */ LexCharacterInvalid,
	/* 137 - Cc category        */ LexCharacterInvalid,
	/* 138 - Cc category        */ LexCharacterInvalid,
	/* 139 - Cc category        */ LexCharacterInvalid,
	/* 140 - Cc category        */ LexCharacterInvalid,
	/* 141 - Cc category        */ LexCharacterInvalid,
	/* 142 - Cc category        */ LexCharacterInvalid,
	/* 143 - Cc category        */ LexCharacterInvalid,
	/* 144 - Cc category        */ LexCharacterInvalid,
	/* 145 - Cc category        */ LexCharacterInvalid,
	/* 146 - Cc category        */ LexCharacterInvalid,
	/* 147 - Cc category        */ LexCharacterInvalid,
	/* 148 - Cc category        */ LexCharacterInvalid,
	/* 149 - Cc category        */ LexCharacterInvalid,
	/* 150 - Cc category        */ LexCharacterInvalid,
	/* 151 - Cc category        */ LexCharacterInvalid,
	/* 152 - Cc category        */ LexCharacterInvalid,
	/* 153 - Cc category        */ LexCharacterInvalid,
	/* 154 - Cc category        */ LexCharacterInvalid,
	/* 155 - Cc category        */ LexCharacterInvalid,
	/* 156 - Cc category        */ LexCharacterInvalid,
	/* 157 - Cc category        */ LexCharacterInvalid,
	/* 158 - Cc category        */ LexCharacterInvalid,
	/* 159 - Cc category        */ LexCharacterInvalid,
	/* 160 - Zs category (nbsp) */ LexCharacterWhiteSpace,
	/* 161 - Po category        */ LexCharacterInvalid,
	/* 162 - Sc category        */ LexCharacterInvalid,
	/* 163 - Sc category        */ LexCharacterInvalid,
	/* 164 - Sc category        */ LexCharacterInvalid,
	/* 165 - Sc category        */ LexCharacterInvalid,
	/* 166 - So category        */ LexCharacterInvalid,
	/* 167 - So category        */ LexCharacterInvalid,
	/* 168 - Sk category        */ LexCharacterInvalid,
	/* 169 - So category        */ LexCharacterInvalid,
	/* 170 - Ll category        */ LexCharacterIdentifierStart,
	/* 171 - Pi category        */ LexCharacterInvalid,
	/* 172 - Sm category        */ LexCharacterInvalid,
	/* 173 - Cf category        */ LexCharacterInvalid,
	/* 174 - So category        */ LexCharacterInvalid,
	/* 175 - Sk category        */ LexCharacterInvalid,
	/* 176 - So category        */ LexCharacterInvalid,
	/* 177 - Sm category        */ LexCharacterInvalid,
	/* 178 - No category        */ LexCharacterInvalid,
	/* 179 - No category        */ LexCharacterInvalid,
	/* 180 - Sk category        */ LexCharacterInvalid,
	/* 181 - Ll category        */ LexCharacterIdentifierStart,
	/* 182 - So category        */ LexCharacterInvalid,
	/* 183 - Po category        */ LexCharacterInvalid,
	/* 184 - Sk category        */ LexCharacterInvalid,
	/* 185 - No category        */ LexCharacterInvalid,
	/* 186 - Ll category        */ LexCharacterIdentifierStart,
	/* 187 - Pf category        */ LexCharacterInvalid,
	/* 188 - No category        */ LexCharacterInvalid,
	/* 189 - No category        */ LexCharacterInvalid,
	/* 190 - No category        */ LexCharacterInvalid,
	/* 191 - Po category        */ LexCharacterInvalid,
	/* 192 - Lu category        */ LexCharacterIdentifierStart,
	/* 193 - Lu category        */ LexCharacterIdentifierStart,
	/* 194 - Lu category        */ LexCharacterIdentifierStart,
	/* 195 - Lu category        */ LexCharacterIdentifierStart,
	/* 196 - Lu category        */ LexCharacterIdentifierStart,
	/* 197 - Lu category        */ LexCharacterIdentifierStart,
	/* 198 - Lu category        */ LexCharacterIdentifierStart,
	/* 199 - Lu category        */ LexCharacterIdentifierStart,
	/* 200 - Lu category        */ LexCharacterIdentifierStart,
	/* 201 - Lu category        */ LexCharacterIdentifierStart,
	/* 202 - Lu category        */ LexCharacterIdentifierStart,
	/* 203 - Lu category        */ LexCharacterIdentifierStart,
	/* 204 - Lu category        */ LexCharacterIdentifierStart,
	/* 205 - Lu category        */ LexCharacterIdentifierStart,
	/* 206 - Lu category        */ LexCharacterIdentifierStart,
	/* 207 - Lu category        */ LexCharacterIdentifierStart,
	/* 208 - Lu category        */ LexCharacterIdentifierStart,
	/* 209 - Lu category        */ LexCharacterIdentifierStart,
	/* 210 - Lu category        */ LexCharacterIdentifierStart,
	/* 211 - Lu category        */ LexCharacterIdentifierStart,
	/* 212 - Lu category        */ LexCharacterIdentifierStart,
	/* 213 - Lu category        */ LexCharacterIdentifierStart,
	/* 214 - Lu category        */ LexCharacterIdentifierStart,
	/* 215 - Sm category        */ LexCharacterInvalid,
	/* 216 - Lu category        */ LexCharacterIdentifierStart,
	/* 217 - Lu category        */ LexCharacterIdentifierStart,
	/* 218 - Lu category        */ LexCharacterIdentifierStart,
	/* 219 - Lu category        */ LexCharacterIdentifierStart,
	/* 220 - Lu category        */ LexCharacterIdentifierStart,
	/* 221 - Lu category        */ LexCharacterIdentifierStart,
	/* 222 - Lu category        */ LexCharacterIdentifierStart,
	/* 223 - Ll category        */ LexCharacterIdentifierStart,
	/* 224 - Ll category        */ LexCharacterIdentifierStart,
	/* 225 - Ll category        */ LexCharacterIdentifierStart,
	/* 226 - Ll category        */ LexCharacterIdentifierStart,
	/* 227 - Ll category        */ LexCharacterIdentifierStart,
	/* 228 - Ll category        */ LexCharacterIdentifierStart,
	/* 229 - Ll category        */ LexCharacterIdentifierStart,
	/* 230 - Ll category        */ LexCharacterIdentifierStart,
	/* 231 - Ll category        */ LexCharacterIdentifierStart,
	/* 232 - Ll category        */ LexCharacterIdentifierStart,
	/* 233 - Ll category        */ LexCharacterIdentifierStart,
	/* 234 - Ll category        */ LexCharacterIdentifierStart,
	/* 235 - Ll category        */ LexCharacterIdentifierStart,
	/* 236 - Ll category        */ LexCharacterIdentifierStart,
	/* 237 - Ll category        */ LexCharacterIdentifierStart,
	/* 238 - Ll category        */ LexCharacterIdentifierStart,
	/* 239 - Ll category        */ LexCharacterIdentifierStart,
	/* 240 - Ll category        */ LexCharacterIdentifierStart,
	/* 241 - Ll category        */ LexCharacterIdentifierStart,
	/* 242 - Ll category        */ LexCharacterIdentifierStart,
	/* 243 - Ll category        */ LexCharacterIdentifierStart,
	/* 244 - Ll category        */ LexCharacterIdentifierStart,
	/* 245 - Ll category        */ LexCharacterIdentifierStart,
	/* 246 - Ll category        */ LexCharacterIdentifierStart,
	/* 247 - Sm category        */ LexCharacterInvalid,
	/* 248 - Ll category        */ LexCharacterIdentifierStart,
	/* 249 - Ll category        */ LexCharacterIdentifierStart,
	/* 250 - Ll category        */ LexCharacterIdentifierStart,
	/* 251 - Ll category        */ LexCharacterIdentifierStart,
	/* 252 - Ll category        */ LexCharacterIdentifierStart,
	/* 253 - Ll category        */ LexCharacterIdentifierStart,
	/* 254 - Ll category        */ LexCharacterIdentifierStart,
	/* 255 - Ll category        */ LexCharacterIdentifierStart
	};

	mo_inline bool IsIdentifierStart(mo_utf8char ch)
	{
		return (typesOfLatin1Characters[ch] == LexCharacterIdentifierStart);
	}

	mo_inline bool IsIdentifierPart(mo_utf8char ch)
	{
		return (typesOfLatin1Characters[ch] <= LexCharacterNumber);
	}

	mo_inline LexCharacterType GetLexerCharacter(mo_utf8char ch)
	{
		return static_cast<LexCharacterType>(typesOfLatin1Characters[ch]);
	}
}

#endif