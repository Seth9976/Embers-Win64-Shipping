// 函数: sub_141042be0
// 地址: 0x141042be0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* rbp = *arg1
void* rsi = *(arg1[1] + 0xc8)
int32_t r14 = *(rsi + 0xf0)
int32_t r15 = *(arg1[2] + 0x10)
sub_1410129f0(rbp, rsi, r14, 0x800, r15)
void* rcx_2 = **(*arg1[3] + 0x6d8)
*(rcx_2 + 0x3b90) += 1
void* rax_4 = *arg1
void* rdi = *(rax_4 + 8)
int32_t rdx_1 = *(rdi + 0x128)
int64_t* rcx_3 = *(rdi + 0x30)

if (rdx_1 != 0)
    (*(*rcx_3 + 0xd0))(rcx_3, rdx_1, *(rdi + 0x120))
    *(rdi + 0x128) = 0
    rax_4 = *arg1

int64_t* rcx_4 = *(*(rax_4 + 8) + 0x30)
(*(*rcx_4 + 0x80))(rcx_4, arg1[4], 0, 0, 0, arg1[2], 0)
void* rdx_3 = *(arg1[1] + 0xc8)
void* rax_9 = *(rdx_3 + 0x28)

if (rax_9 == 0)
    if (data_1439b4ad4 != 0 && *(rdx_3 + 0x38) != 0)
        sub_141026da0(*(*(*arg1 + 8) + 0x118), rdx_3 + 0x30)
else if (data_1439b4ad4 != 0 && *(rax_9 + 0x30) != 0)
    sub_141026da0(*(*(*arg1 + 8) + 0x118), rax_9 + 0x28)

return sub_1410129f0(rbp, rsi, 0x800, r14, r15)
