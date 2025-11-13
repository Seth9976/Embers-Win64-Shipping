// 函数: sub_1411d20c0
// 地址: 0x1411d20c0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (arg3 s< 0 || arg3 s>= *(arg5 + 0x20) || arg3 s>= *(arg5 + 0x30))
    return 

int64_t r9 = sx.q(arg3)
void* rbp_2 = r9 * 0x38 + *(arg5 + 0x28)

if (*(arg4 + 8) u<= 0)
    return 

void* rsi_2 = r9 * 0x58 + *(arg5 + 0x18)

if (*(rsi_2 + 0x38) u<= 0)
    return 

int32_t* rax_1
int512_t zmm6_1
rax_1, zmm6_1 = sub_14081d830(0x30, *(arg1 + 8), 1, 0)
int32_t* rbx_1 = rax_1

if (rax_1 == 0)
    rbx_1 = nullptr
else
    __builtin_memset(&rax_1[2], 0, 0x28)

int32_t var_94_1 = 1
__builtin_memset(rbx_1, 0, 0x30)
*rbx_1 = *(rsi_2 + 0x38)
*(rbx_1 + 8) = *(*(rsi_2 + 0x48) + 0x10)
*(rbx_1 + 0x10) = *(*(rsi_2 + 0x40) + 0x10)
*(rbx_1 + 0x18) = *(*(rsi_2 + 0x50) + 0x10)
*(rbx_1 + 0x20) = *(*(rbp_2 + 0x28) + 0x10)
*(rbx_1 + 0x28) = *(*(rbp_2 + 0x30) + 8)
int32_t temp0_1
int32_t temp1_1
temp0_1:temp1_1 = sx.q(*(rsi_2 + 0x38) + 0x83)
int128_t var_88
char rcx_6 = sub_1419a2ec0(arg2, &var_88, &data_143e76190, 0)
int128_t zmm7 = var_88
zmm6_1.o = zx.o(0)
int128_t var_78 = sub_1411e2cd0(rcx_6)
sub_141998c50(zmm7.q, &data_143e7ad50, rbx_1)
int32_t var_48_1 = 1
int64_t var_50_1 = ((temp1_1 + (temp0_1 & 0x7f)) s>> 7).q
void*** rax_13
char rcx_8
rax_13, rcx_8 = sub_14081d830(0x60, *(arg1 + 8), 1, 0)
void*** rsi_3 = rax_13

if (rax_13 == 0)
    rsi_3 = nullptr
else
    int32_t var_98_1
    var_98_1.q = rbx_1
    sub_1411e2cd0(rcx_8)
    void* var_90_1 = &data_143e7ad80
    var_78 = var_98_1.o
    void arg_18
    sub_141992bd0(rsi_3, &arg_18, &var_78, 2)
    *rsi_3 = &data_142f389d8
    *(rsi_3 + 0x38) = rbx_1.o
    *(rsi_3 + 0x48) = zmm7
    rsi_3[0xb] = var_48_1.q

sub_1419968d0(arg1, rsi_3)
int64_t rdi_1 = sx.q(arg6[1].d)
int64_t rsi_4 = *(*(rbp_2 + 0x30) + 8)
int32_t rax_15 = (rdi_1 + 1).d
arg6[1].d = rax_15

if (rax_15 s> *(arg6 + 0xc))
    sub_1405a4d70(arg6)

*(*arg6 + (rdi_1 << 3)) = rsi_4
