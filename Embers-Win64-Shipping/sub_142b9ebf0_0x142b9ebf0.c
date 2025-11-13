// 函数: sub_142b9ebf0
// 地址: 0x142b9ebf0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (arg1 == 0)
    return zx.q((&arg1[5]).d)

arg1[2] = 0
*arg1 = 0
*(arg1 + 0xc) = 0
arg1[4] = 0
arg1[5] = 0
arg1[3] = arg2
FILE* _Stream = fopen(arg2, "rb")

if (_Stream == 0)
    return zx.q((&_Stream->_Placeholder + 1).d)

fseek(_Stream, 0, 2)
int32_t rax_3 = ftell(_Stream)
arg1[1].d = rax_3

if (rax_3 == 0)
    fclose(_Stream)
    return 0x51

fseek(_Stream, 0, 0)
arg1[2] = _Stream
arg1[4] = sub_142b9ecf0
arg1[5] = sub_142b9ecc0
return 0
