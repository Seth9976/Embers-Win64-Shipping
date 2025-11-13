// 函数: sub_1413be260
// 地址: 0x1413be260
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

*(arg1 + 0x60) = 0
int64_t rsi = sx.q(*(arg2 + 0x70))
void* rbp = *(arg2 + 0x60)
*(arg1 + 0x70) = rsi.d

if (rsi.d != 0)
    sub_1413f6990(arg1, rsi.d, 0)
    void* rax_1 = *(arg1 + 0x60)
    void* rdx_1 = arg2
    void* rcx = arg1
    
    if (rbp != 0)
        rdx_1 = rbp
    
    if (rax_1 != 0)
        rcx = rax_1
    
    memcpy(rcx, rdx_1, (rsi << 4).d)
else
    *(arg1 + 0x74) = 6

void* rsi_1 = arg2 + 0x80
*(arg1 + 0x100) = 0
int64_t rbp_1 = sx.q(*(rsi_1 + 0x90))
void* rdi_1 = arg1 + 0x80
void* r14 = *(rsi_1 + 0x80)
*(rdi_1 + 0x90) = rbp_1.d

if (rbp_1.d != 0)
    sub_1413f6a50(rdi_1, rbp_1.d, 0)
    void* rax_2 = *(rdi_1 + 0x80)
    
    if (r14 != 0)
        rsi_1 = r14
    
    if (rax_2 != 0)
        rdi_1 = rax_2
    
    memcpy(rdi_1, rsi_1, (rbp_1 << 4).d)
else
    *(rdi_1 + 0x94) = 8

return arg1
