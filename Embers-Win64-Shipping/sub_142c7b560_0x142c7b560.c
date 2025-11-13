// 函数: sub_142c7b560
// 地址: 0x142c7b560
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* rdi = *arg1
int32_t arg_8
int32_t result
int64_t r8_1
int512_t zmm2
result, r8_1, zmm2 = sub_142c8f450(&arg1[0xe4], arg1, zx.q(arg2), &arg_8, arg4, arg3)

if (result == 0)
    int32_t rcx_1 = arg_8
    
    if (rcx_1 == 0)
        char rax_1 = (*(arg1 + 0x744)).b & (arg1[0xe8].d).b
        
        if ((rax_1 & 2) != 0)
            return sub_142c7b0b0(arg1)
        
        if ((rax_1 & 1) != 0)
            return sub_142c7b460(arg1)
        
        sub_142c64760(rdi, "Authentication cancelled", r8_1, zmm2)
        return 0x43
    
    if (rcx_1 == 2)
        arg1[0xe1].d = result

return result
