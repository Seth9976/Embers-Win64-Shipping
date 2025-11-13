// 函数: sub_142bceba0
// 地址: 0x142bceba0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

*(arg1 + 0x5c) = 1
arg1[0xb].d = 0
arg1[1] = arg2
arg1[2] = arg4
int64_t* result = *(arg2 + 0x98)
*arg1 = result

if (arg4 != 0)
    void* rcx = **(arg4 + 0xf0)
    arg1[3] = rcx
    arg1[4] = rcx + 0x18
    arg1[5] = rcx + 0x60
    sub_142b92d20(rcx)
    result = *(arg3 + 0x38)
    arg1[0xd] = *result
    arg1[0xc] = 0
    
    if (arg5 != 0)
        result = *(arg4 + 0xf0)
        arg1[0xc] = result[5]

__builtin_memset(&arg1[6], 0, 0x18)
__builtin_memcpy(&arg1[0xe], 
    "\xa0\xeb\xbc\x42\x01\x00\x00\x00\x80\xec\xbc\x42\x01\x00\x00\x00\xb0\xec\xbc\x42\x01\x00\x00\x00\x"
"e0\xec\xbc\x42\x01\x00\x00\x00\x70\xed\xbc\x42\x01\x00\x00\x00\x20\xee\xbc\x42\x01\x00\x00\x00\xb0"
"ee\xbc\x42\x01\x00\x00\x00\x10\xef\xbc\x42\x01\x00\x00\x00", 
    0x40)
return result
