// 函数: sub_1409de350
// 地址: 0x1409de350
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t var_28 = arg2
int64_t var_38 = *(arg1 + 0x28) + 0x1a8
void* var_30 = arg3
sub_14099cf40(arg3 + 0x10, &var_38)
int64_t rsi = 0
int64_t* rdi = *(arg1 + 0x3b8)
void* result = &rdi[sx.q(*(arg1 + 0x3c0))]
uint64_t r14_1 = sx.q(*(arg1 + 0x3c0)) << 3 u>> 3

if (rdi u> result)
    r14_1 = 0

if (r14_1 != 0)
    do
        int64_t* rcx_1 = *rdi
        result = (*(*rcx_1 + 0x300))(rcx_1, arg1, zx.q(arg2), arg3)
        rsi += 1
        rdi = &rdi[1]
    while (rsi != r14_1)

return result
