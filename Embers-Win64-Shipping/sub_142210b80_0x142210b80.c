// 函数: sub_142210b80
// 地址: 0x142210b80
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t entry_zmm2
sub_142235740(sub_140d3c6e0(*arg1 + 0x100), arg1[1], entry_zmm2)
int64_t* rcx_4 = *arg1 + 0xf0
uint64_t var_18 = 0
int32_t result_1 = 0
sub_142259140(rcx_4, &var_18)
uint64_t rbx_1 = var_18
int64_t result = sx.q(result_1)
int64_t rdi = rbx_1 + (result << 3)

if (rbx_1 != rdi)
    do
        result = sub_14226e880(rbx_1)
        
        if (result.b == 5)
            void arg_8
            sub_14226c680(&arg_8, rbx_1)
            sub_142278bf0(rbx_1, sub_14183e350(&arg_8))
            result = sub_14225b2b0(&arg_8)
        
        rbx_1 += 8
    while (rbx_1 != rdi)
    
    rbx_1 = var_18

if (rbx_1 == 0)
    return result

return sub_140a74f90(rbx_1)
