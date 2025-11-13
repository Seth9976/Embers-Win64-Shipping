// 函数: sub_142bee790
// 地址: 0x142bee790
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

char* r9 = nullptr
*arg3 = 0

if (arg1 == 0 || *(arg1 + 0xc) == 0)
    return 0

int32_t i = 0
int64_t result = **arg1

do
    char* rdx = *(*arg1 + (zx.q(i) << 3))
    char j = *rdx
    
    while (j != 0)
        r9[result] = j
        rdx = &rdx[1]
        j = *rdx
        r9 = zx.q(r9.d + 1)
    
    i += 1
    
    if (i u>= *(arg1 + 0xc))
        break
    
    r9[result] = arg2
    r9 = zx.q(r9.d + 1)
while (i u< *(arg1 + 0xc))

if (result != &data_1436994ac)
    r9[result] = 0

*arg3 = r9.d
return result
