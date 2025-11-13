// 函数: sub_141b1ae00
// 地址: 0x141b1ae00
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

char r12 = *(arg1 + 8)
void* rax = sub_141af0640(arg4)
int64_t* r14 = *(rax + 8)
int64_t* var_38
void** result = sub_141a4a790(arg5, &var_38, arg3, &arg3[4])
int64_t* rdi_1 = var_38
int64_t rbx = 0
int32_t var_30
void* rdx_1 = &rdi_1[sx.q(var_30)]
uint64_t rbp_3 = (rdx_1 - rdi_1 + 7) u>> 3

if (rdi_1 u> rdx_1)
    rbp_3 = 0

if (rbp_3 != 0)
    do
        int64_t arg_8 = *rdi_1
        result = sub_140d3c6e0(&arg_8)
        int64_t* result_1 = result
        
        if (result != 0)
            int32_t rdx_2 = arg5[0x5b].d
            int64_t zmm0_1 = arg5[0x5a]
            void** const var_48 = &data_14305d810
            int32_t var_50_1 = rdx_2
            int64_t rdx_3 = *(rax + 0x18)
            char rax_2 = *(arg5 + 0x2dc)
            int64_t* var_40_1 = r14
            int64_t var_58 = zmm0_1
            sub_1405c5900(&arg5[0x1f], rdx_3, &var_48, result_1, rax_2, &var_58)
            var_48 = &data_142d4ba10
            result = sub_141a288b0(r14, result_1, r12)
        
        rdi_1 = &rdi_1[1]
        rbx += 1
    while (rbx != rbp_3)

return result
