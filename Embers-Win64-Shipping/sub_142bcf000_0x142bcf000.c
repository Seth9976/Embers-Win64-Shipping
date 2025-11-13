// 函数: sub_142bcf000
// 地址: 0x142bcf000
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

arg1[0xb].w = 0x100
arg1[1] = arg2
arg1[2] = arg4
int64_t* result = *(arg2 + 0x98)
*arg1 = result

if (arg4 != 0)
    void* rcx = **(arg4 + 0xf0)
    arg1[3] = rcx
    arg1[4] = rcx + 0x18
    arg1[5] = rcx + 0x60
    result = sub_142b92d20(rcx)
    arg1[0xd] = 0
    arg1[0xc] = 0
    
    if (arg5 != 0 && arg3 != 0)
        result = **(arg3 + 0x38)
        
        if (result != 0)
            arg1[0xd] = *result
            result = *(arg4 + 0xf0)
            arg1[0xc] = result[5]

__builtin_memset(&arg1[6], 0, 0x18)
__builtin_memcpy(&arg1[0xe], 
    "\x00\xf0\xbc\x42\x01\x00\x00\x00\x80\xec\xbc\x42\x01\x00\x00\x00\xb0\xec\xbc\x42\x01\x00\x00\x00\x"
"f0\xf0\xbc\x42\x01\x00\x00\x00\x40\xf1\xbc\x42\x01\x00\x00\x00\x30\xf2\xbc\x42\x01\x00\x00\x00\xd0"
"f1\xbc\x42\x01\x00\x00\x00\x10\xef\xbc\x42\x01\x00\x00\x00", 
    0x40)
return result
