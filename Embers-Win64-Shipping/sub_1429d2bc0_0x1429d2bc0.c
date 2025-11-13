// 函数: sub_1429d2bc0
// 地址: 0x1429d2bc0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t i = 0

if (*(*arg1 + 0x2c) s> 0)
    int64_t r9_1 = 0
    
    do
        r9_1 += 1
        i += 1
        *(r9_1 + *(arg1[4] + 0x30) - 1) = 0
    while (i s< *(*arg1 + 0x2c))

int64_t r10 = sx.q(*(*arg1 + 0x2c))
void* result = arg1[3]

if (r10.d s< *(result + 4))
    int64_t r11_1 = r10
    
    do
        r11_1 += 1
        r10 = zx.q(r10.d + 1)
        *(r11_1 + *(arg1[4] + 0x30) - 1) =
            *(sx.q(*(*(*arg1 + 0x120) + (r11_1 << 2) - 4)) + *(arg1[2] + 0x30))
        result = arg1[3]
    while (r10.d s< *(result + 4))

return result
