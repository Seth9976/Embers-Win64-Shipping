// 函数: sub_1422ce970
// 地址: 0x1422ce970
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t rbx = sx.q(arg2)

if (arg1[1].d != *(arg1 + 0x34))
    void* r8_1 = &arg1[7]
    void* r9_1 = *arg1
    void* rdx = *(r8_1 + 8)
    int64_t r10_2 = rbx * 0x60
    int64_t rcx_1 = sx.q(arg1[9].d - 1) & sx.q(*(r10_2 + r9_1 + 0x5c))
    
    if (rdx != 0)
        r8_1 = rdx
    
    int32_t i = *(r8_1 + (rcx_1 << 2))
    void* rdx_1 = r8_1 + (rcx_1 << 2)
    
    for (; i != 0xffffffff; i = *rdx_1)
        if (i == rbx.d)
            *rdx_1 = *(r10_2 + r9_1 + 0x58)
            break
        
        rdx_1 = r9_1 + 0x58 + sx.q(i) * 0x60

void* rsi_2 = rbx * 0x60 + *arg1
*(rsi_2 + 0x50) = 0
int64_t rcx_3 = *(rsi_2 + 0x48)

if (rcx_3 != 0)
    sub_140a74f90(rcx_3)

sub_141fa5d70(rsi_2 + 8)
return sub_140bb6940(arg1, rbx.d, 1) __tailcall
