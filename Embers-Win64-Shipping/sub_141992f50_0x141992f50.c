// 函数: sub_141992f50
// 地址: 0x141992f50
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

*(arg1 + 8) = 0
uint32_t count = *(arg2 + 0x10)
void* rbp = *(arg2 + 8)
*(arg1 + 0x10) = count

if (count != 0)
    sub_1419ab010(arg1, count, 0)
    void* rax_1 = *(arg1 + 8)
    void* rdx_1 = arg2
    void* rcx = arg1
    
    if (rbp != 0)
        rdx_1 = rbp
    
    if (rax_1 != 0)
        rcx = rax_1
    
    memcpy(rcx, rdx_1, count)
else
    *(arg1 + 0x14) = 8

void* rsi = arg2 + 0x18
*(arg1 + 0x58) = 0
int64_t rbp_1 = sx.q(*(rsi + 0x48))
void* rdi_1 = arg1 + 0x18
void* r14 = *(rsi + 0x40)
*(rdi_1 + 0x48) = rbp_1.d

if (rbp_1.d != 0)
    sub_140b52900(rdi_1, rbp_1.d, 0)
    void* rax_2 = *(rdi_1 + 0x40)
    
    if (r14 != 0)
        rsi = r14
    
    if (rax_2 != 0)
        rdi_1 = rax_2
    
    memcpy(rdi_1, rsi, (rbp_1 << 3).d)
else
    *(rdi_1 + 0x4c) = 8

return arg1
