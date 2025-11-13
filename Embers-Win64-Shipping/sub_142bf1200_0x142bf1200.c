// 函数: sub_142bf1200
// 地址: 0x142bf1200
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* rsi = *arg1
int64_t rax = *(rsi + 0x20)
void* rbp_1
uint32_t count

if (rax == 0)
    uint64_t rax_3 = zx.q(*(rsi + 0xc))
    count = *(rsi + 8) - rax_3.d
    
    if (count u> 0x1000)
        count = 0x1000
    else if (count == 0)
        arg1[0x410] = arg1[0x40f]
        return zx.q(count + 0x55)
    
    rbp_1 = arg1 + 0x74
    memcpy(rbp_1, rax_3 + *rsi, count)
else
    rbp_1 = arg1 + 0x74
    uint32_t count_1 = rax(rsi, zx.q(*(rsi + 0xc)), rbp_1, 0x1000)
    count = count_1
    
    if (count_1 == 0)
        arg1[0x410] = arg1[0x40f]
        return zx.q(count + 0x55)

*(rsi + 0xc) += count
arg1[3] = rbp_1
arg1[4].d = count
return 0
