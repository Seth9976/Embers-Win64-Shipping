// 函数: sub_14236bd80
// 地址: 0x14236bd80
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

EnterCriticalSection(arg1 + 0x1a8)
int64_t* rdi = *(arg1 + 0x1d0)
int64_t rsi = 0
uint64_t r14_1 = sx.q(*(arg1 + 0x1d8)) << 3 u>> 3

if (rdi u> &rdi[sx.q(*(arg1 + 0x1d8))])
    r14_1 = 0

if (r14_1 != 0)
    do
        int64_t* rcx_1 = *rdi
        (*(*rcx_1 + 0x10))(rcx_1, arg1)
        rsi += 1
        rdi = &rdi[1]
    while (rsi != r14_1)

if (arg1 != -0x1a8)
    LeaveCriticalSection(arg1 + 0x1a8)

int64_t* rax_4 = sub_1405f7040(sub_141f88540())
int64_t r8 = *rax_4

if ((*(r8 + 0xc0))(rax_4, arg1, r8) == 0 && *(arg1 + 0x16f) == 0)
    void** const var_38_1 = &data_142da2668
    *(arg1 + 0x16f) = 1
    int64_t (* var_58)(int64_t* arg1) = sub_14235b290
    int64_t var_48_1 = 0
    void* var_30_1 = arg1
    sub_141e85cb0(&var_58, arg2)

return *(arg1 + 0x16f) == 2
