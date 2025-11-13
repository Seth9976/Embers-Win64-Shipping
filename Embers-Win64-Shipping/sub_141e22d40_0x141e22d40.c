// 函数: sub_141e22d40
// 地址: 0x141e22d40
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* rax = sub_141f3b9f0(arg2)
int32_t rcx_1 = *(arg1 + 0x4c)
int32_t arg_8 = 0x3f800000
bool rdx = sub_140b5b8a0(rcx_1, 0) == 0
rcx_1.b = *(arg1 + 0x50) != 0
rcx_1.b |= rdx
int512_t result

if (rcx_1.b != 0 && rax != 0)
    char rax_2
    rax_2, result = sub_141e019c0(rax, *(arg1 + 0x4c), &arg_8)
    
    if (rax_2 == 0)
        result.o = 0x3f800000
        return result

result.o = arg_8
return result
