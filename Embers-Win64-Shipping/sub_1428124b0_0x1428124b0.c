// 函数: sub_1428124b0
// 地址: 0x1428124b0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int128_t zmm1 = arg4[1]
int32_t r15_1 = arg5 * arg6
uint128_t var_40 = *arg4
uint64_t var_20 = arg4[2].q
int128_t var_30 = zmm1
var_30:8.d = arg5
int128_t var_58 = zmm1
var_58:8.d = arg5
uint128_t var_68 = *arg4
var_30:4.d = r15_1
uint64_t var_48 = arg4[2].q
var_58:4.d = arg5 * arg7
sub_142817350(arg1, 1, "+++++++++++++++++++++++++++++++++++++++++++++\n", 
    sub_142817350(arg1, 1, "extra data ptrs\n", arg4))
int64_t var_70 = *(arg4 + 8)
int32_t var_78 = sx.d(*arg2)
sub_142817350(arg1, 1, "\t0x%p\t%x\t\t\t%s", arg2)

if (r15_1 s> 1)
    void* rbx_1 = arg2 + 1
    uint64_t i_1 = zx.q(r15_1 - 1)
    void* rdi_1 = rbx_1
    uint64_t i
    
    do
        int32_t var_78_1 = sx.d(*rbx_1)
        sub_142817350(arg1, 1, "\t0x%p\t%x\t\t\t.", rdi_1)
        rdi_1 += 1
        rbx_1 += 1
        i = i_1
        i_1 -= 1
    while (i != 1)

sub_142817060(arg1, arg2, &var_40)
return sx.q(r15_1) + arg2
