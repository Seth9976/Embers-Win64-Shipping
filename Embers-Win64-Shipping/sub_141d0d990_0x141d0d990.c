// 函数: sub_141d0d990
// 地址: 0x141d0d990
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t rbx = sx.q(arg2)

if (arg1[1].d != *(arg1 + 0x24))
    void* r8_1 = *arg1
    void* rcx = r8_1
    char r9_1 = *arg1 & 1
    
    if (r9_1 != 0)
        rcx = (rcx s>> 1) + arg1
    
    void* rdx = arg1[5]
    void* r10_3 = rbx * 0x50 + rcx
    
    if ((rdx.b & 1) != 0)
        rdx = (rdx s>> 1) + &arg1[5]
    
    int64_t rcx_3 = sx.q(arg1[6].d - 1) & sx.q(*(r10_3 + 0x4c))
    int32_t i = *(rdx + (rcx_3 << 2))
    void* rdx_2 = rdx + (rcx_3 << 2)
    
    for (; i != 0xffffffff; i = *rdx_2)
        if (i == rbx.d)
            *rdx_2 = *(r10_3 + 0x48)
            break
        
        void* rdx_3 = r8_1
        
        if (r9_1 != 0)
            rdx_3 = (rdx_3 s>> 1) + arg1
        
        rdx_2 = rdx_3 + 0x48 + sx.q(i) * 0x50

void* rax_8 = *arg1

if ((rax_8.b & 1) != 0)
    rax_8 = (rax_8 s>> 1) + arg1

void* rsi_2 = rbx * 0x50 + rax_8
*(rsi_2 + 0x40) = 0
sub_140a1d5c0(rsi_2 + 0x38)
sub_141cf8580(rsi_2 + 0x10)
sub_140a1d5c0(rsi_2)
return sub_141d0dc90(arg1, rbx.d, 1) __tailcall
