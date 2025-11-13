// 函数: sub_141137c10
// 地址: 0x141137c10
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int128_t* rsi = *(arg2 + 0x18)
int128_t* rbp = data_143e5f630
data_143e5f630 = 0
int64_t* rbx = *(rsi[0xc].q + 0x10)
int64_t* arg_20 = rbx

if (rbx != 0)
    rbx[1].d += 1

int32_t var_78
(*(*rbx + 0x30))(rbx, &var_78)
int32_t r14 = data_143f029c8
int32_t var_60 = var_78
int32_t var_74
int32_t var_5c = var_74
int32_t var_70
int32_t arg_14 = var_70
int64_t var_68 = 0
sub_140b34200("FlushRHIThreadTotal", r14)

if (*(arg1 + 0x14) u> 0)
    j_sub_14196ef60(&data_143f02b88, arg1, arg3, arg4)

sub_14198b230()

if (data_143f01c92 != 0)
    sub_14198b3f0()

int64_t rdx_3
rdx_3.b = 1
sub_14198b7d0()
sub_140b38680("FlushRHIThreadTotal", r14)
int64_t* rcx_4 = data_143f0f180
int128_t var_58 = var_68.o
(*(*rcx_4 + 0x318))(rcx_4, rbx, &var_58, 0.q, rbp + 0x28)
*rbp = *rsi
rbp[1].q = rsi[1].q
*(rbp + 0x18) = *(rsi + 0x18)
*(rbp + 0x1c) = var_78
rbp[2].d = var_74
*(rbp + 0x24) = var_70
int32_t r14_1 = *(rbp + 0x48)
void var_48
int64_t* rax_10 = sub_140958da0(&var_48, nullptr, 0xff)
int64_t* rdi_2 = *rax_10 + 0x10
*rdi_2 = 0
rdi_2[1].d = 0

if (rbp + 0x38 != rdi_2 && rbp[4].d != 0)
    int64_t* rcx_6 = *(rbp + 0x38)
    
    if (rcx_6 != 0)
        (*(*rcx_6 + 0x40))(rcx_6, rdi_2)

rdi_2[2].d = r14_1
void* rcx_7 = *rax_10
int32_t r8_1 = rax_10[2].d
int64_t* rdx_7 = rax_10[1]
int64_t* rbx_2 = *(rcx_7 + 0x30)
int64_t* arg_18 = rbx_2
int32_t* rdi_3 = &rbx_2[9]

if (rbx_2 != 0)
    *rdi_3 += 1
    rbx_2 = arg_18

sub_140978a40(rcx_7, rdx_7, r8_1, 1)

if (rbx_2 != 0)
    int32_t rax_12 = *rdi_3
    *rdi_3 -= 1
    
    if (rax_12 == 1)
        sub_140a2f6e0(arg_18)

return sub_1405d1550(&arg_20)
