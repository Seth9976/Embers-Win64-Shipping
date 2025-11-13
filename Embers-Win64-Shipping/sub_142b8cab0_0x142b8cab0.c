// 函数: sub_142b8cab0
// 地址: 0x142b8cab0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* rbx = arg1[9]
int32_t rax = sub_142a959a0(arg1, 0x10ffff)
int32_t rbp = rax
int32_t rsi_1 = (sub_142b8cc30(rbx, rax) + 0x7ff) & 0xfffff800

if (rsi_1 == 0x110000)
    rbp = arg1[5].d

*(rbx + 0x23328) = rsi_1
*(arg1 + 0x2c) = rsi_1
int32_t result

if (rsi_1 s< 0x110000)
    int32_t rdx_1 = rsi_1
    
    if (rsi_1 s<= 0x10000)
        rdx_1 = 0x10000
    
    result = sub_142b8d8c0(arg1, rdx_1, 0x10ffff, *(arg1 + 0x24), 1, arg2)

if (rsi_1 s>= 0x110000 || *arg2 s<= 0)
    sub_142b8c510(rbx)
    
    if (rsi_1 s> 0x10000)
        sub_142b8c810(rbx)
    
    *(*(rbx + 0x23300) + (sx.q(*(rbx + 0x23318)) << 2)) = rbp
    *(rbx + 0x23318) += 1
    result = *(rbx + 0x23318)
    
    while ((result.b & 3) != 0)
        *(*(rbx + 0x23300) + (sx.q(result) << 2)) = *(arg1 + 0x24)
        *(rbx + 0x23318) += 1
        result = *(rbx + 0x23318)
    
    *(rbx + 0x2332c) = 1

return result
