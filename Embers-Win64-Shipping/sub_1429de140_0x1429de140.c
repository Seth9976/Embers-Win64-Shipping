// 函数: sub_1429de140
// 地址: 0x1429de140
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t result = 0
int32_t* rdx = arg1 + 0x9c0
int64_t r8 = 0

while (*rdx != 0)
    result += 1
    r8 += 1
    rdx = &rdx[1]
    
    if (r8 s>= 4)
        break

*(arg1 + (sx.q(result) << 2) + 0x9c0) = 1
return result
