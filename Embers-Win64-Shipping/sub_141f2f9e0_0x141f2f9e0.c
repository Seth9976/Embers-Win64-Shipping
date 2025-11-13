// 函数: sub_141f2f9e0
// 地址: 0x141f2f9e0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

uint64_t var_18 = 0
int32_t result_1 = 0
sub_142216840(*arg1 + 0x2a8, &var_18)
uint64_t rbx = var_18
int64_t result = sx.q(result_1)
int64_t rsi = rbx + (result << 3)

if (rbx != rsi)
    do
        result = sub_14221b2d0(*arg1 + 0x2a8, rbx)
        
        if (result.b != 0)
            void* rax_1 = *(*(*arg1 + 0x408) + 0x28)
            *(rax_1 + 0x20) = 6
            *(rax_1 + 0x28) = rax_1
            result = sub_142277d00(rbx, rax_1 + 0x20)
        
        rbx += 8
    while (rbx != rsi)
    
    rbx = var_18

if (rbx == 0)
    return result

return sub_140a74f90(rbx)
