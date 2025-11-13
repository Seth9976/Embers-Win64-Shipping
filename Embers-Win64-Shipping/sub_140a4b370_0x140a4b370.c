// 函数: sub_140a4b370
// 地址: 0x140a4b370
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t r8 = 0
int64_t r9 = 0

while (true)
    int16_t rax_1 = *(arg2 + (r9 << 1))
    r9 += 1
    
    if (rax_1 != (*u"UnknownName")[0xb + r9])
        break
    
    if (r9 == 7)
        *arg1 = 4
        rax_1.b = 1
        return rax_1

int64_t rcx = 0

while (true)
    int16_t rax_2 = *(arg2 + (rcx << 1))
    rcx += 1
    
    if (rax_2 != *((rcx << 1) + 0x142d40536))
        break
    
    if (rcx == 5)
        *arg1 = 1
        rax_2.b = 1
        return rax_2

int64_t rcx_1 = 0

while (true)
    int16_t rax_3 = *(arg2 + (rcx_1 << 1))
    rcx_1 += 1
    
    if (rax_3 != *((rcx_1 << 1) + 0x142e5e32e))
        break
    
    if (rcx_1 == 7)
        *arg1 = 2
        rax_3.b = 1
        return rax_3

int64_t rcx_2 = 0

while (true)
    int16_t rax_4 = *(arg2 + (rcx_2 << 1))
    rcx_2 += 1
    
    if (rax_4 != *((rcx_2 << 1) + 0x142e5e33e))
        break
    
    if (rcx_2 == 7)
        *arg1 = 3
        rax_4.b = 1
        return rax_4

int64_t rcx_3 = 0

while (true)
    int16_t rax_5 = *(arg2 + (rcx_3 << 1))
    rcx_3 += 1
    
    if (rax_5 != *((rcx_3 << 1) + 0x142e5e34e))
        break
    
    if (rcx_3 == 8)
        *arg1 = 5
        rax_5.b = 1
        return rax_5

int16_t rax_6
bool cond:0_1

while (true)
    rax_6 = *(arg2 + (r8 << 1))
    r8 += 1
    int16_t temp0_1 = *((r8 << 1) + 0x142d4043e)
    cond:0_1 = rax_6 == temp0_1
    
    if (rax_6 != temp0_1)
        break
    
    if (r8 == 8)
        cond:0_1 = rax_6 == *((r8 << 1) + 0x142d4043e)
        break

*arg1 = 0
rax_6.b = cond:0_1
return rax_6
