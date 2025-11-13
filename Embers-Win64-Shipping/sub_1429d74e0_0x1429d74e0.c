// 函数: sub_1429d74e0
// 地址: 0x1429d74e0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t* rcx = *(arg1 + 0x10)
sub_14058d4e0(&rcx[6], sx.q(*rcx * 2))
int32_t* result = *(arg1 + 0x10)
uint64_t r8 = 0

if (*result s> 0)
    int64_t r9_1 = 0
    
    do
        int32_t rdx_1 = (r8 << 2).d
        r8 = zx.q(r8.d + 1)
        r9_1 += 8
        *(r9_1 + *(*(arg1 + 0x10) + 0x18) - 8) = 4
        *(*(*(arg1 + 0x10) + 0x18) + r9_1 - 4) = rdx_1
        result = *(arg1 + 0x10)
    while (r8.d s< *result)

return result
