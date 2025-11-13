// 函数: sub_1418ea1b0
// 地址: 0x1418ea1b0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

uint64_t var_58 = 0
int32_t result_1 = 0
int32_t var_28 = arg5[1].d
int128_t var_38 = *arg5
int128_t var_48 = *arg3
sub_1418e9940(arg1, arg2, &var_48, &var_58, &var_38)
uint64_t r15 = var_58
int64_t result = sx.q(result_1)
uint64_t rsi = r15
int64_t r14 = r15 + (result << 2)

if (r15 != r14)
    do
        int32_t* rax_2 = sub_140acc920(&var_48, rsi)
        int64_t rdi_1 = sx.q(arg4[1].d)
        int32_t rcx_1 = (rdi_1 + 1).d
        arg4[1].d = rcx_1
        
        if (rcx_1 s> *(arg4 + 0xc))
            sub_140610660(arg4)
        
        result = *arg4
        rsi += 4
        *(result + rdi_1 * 0x10) = *rax_2
    while (rsi != r14)

if (r15 == 0)
    return result

return sub_140a74f90(r15)
