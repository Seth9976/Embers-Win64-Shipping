// 函数: sub_14281cbf4
// 地址: 0x14281cbf4
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t r9 = *(arg1 + 0x60)
int64_t rdx = *(arg1 + 0x78)
int64_t rax = *(arg1 + 0x68)

while (true)
    int64_t result = (rax - r9) s>> 3
    
    if (rdx u>= result)
        return result
    
    result = ***(r9 + (rdx << 3))
    
    if (*result == 0)
        return result
    
    rdx += 1
    *(arg1 + 0x78) = rdx
    rax = *(arg1 + 0x68)
