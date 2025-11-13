// 函数: sub_142688aa0
// 地址: 0x142688aa0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t r9
int32_t arg_c = r9
int32_t arg_18
sub_142681570(arg1 + 0x10, &arg_18, arg3.q)
int64_t rax = sx.q(arg_18)
void* rcx_3

if (rax.d == 0xffffffff)
    rcx_3 = nullptr
else
    rcx_3 = (rax << 5) + *(arg1 + 0x10)

void* const rdx_1 = rcx_3 + 8

if (rcx_3 == 0)
    rdx_1 = nullptr

int64_t rax_1

if (rdx_1 != 0)
    rax_1 = sx.q(arg4)

if (rdx_1 == 0 || rax_1.d s< 0 || rax_1.d s>= *(rdx_1 + 8))
    *arg2 = 0
    arg2[8] = 0
    *(arg2 + 0x28) = 0
    *(arg2 + 0x30) = 0
else
    int32_t* rcx_5 = rax_1 * 0x38 + *rdx_1
    *arg2 = *rcx_5
    *(arg2 + 4) = *(rcx_5 + 4)
    *(arg2 + 0x14) = *(rcx_5 + 0x14)
    arg2[7] = rcx_5[7]
    arg2[8] = rcx_5[8]
    *(arg2 + 0x28) = *(rcx_5 + 0x28)
    void* rax_6 = *(rcx_5 + 0x30)
    *(arg2 + 0x30) = rax_6
    
    if (rax_6 != 0)
        *(rax_6 + 8) += 1

return arg2
