// 函数: sub_141d9a160
// 地址: 0x141d9a160
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* r8 = *arg1
int64_t rax = sx.q(arg1[1].d)

if (rax.d != *(r8 + 0x158))
    *(r8 + 0x2e0) = 0
    
    if (*(r8 + 0x2e4) != 0)
        sub_1405c5510(r8 + 0x2d8, 0)
    
    *(*arg1 + 0x2e8) = 0
    void* rbx = *arg1
    int64_t rax_2 = sub_141d9bed0(rbx)
    *(rbx + 0x39c) = 1
    return rax_2

if (*(arg2 + 0xa8) s<= 0)
    if (*(r8 + 0x174) != 0)
        *(r8 + 0x174) = 0
    
    return rax

if (*(r8 + 0x2e0) == 0)
    *(r8 + 0x148) = *(*(r8 + 0x138) + rax * 0x28 + 4)
    rax = zx.q(arg1[1].d)
    r8 = *arg1

*(r8 + 0x14c) = *(*(r8 + 0x138) + sx.q(rax.d) * 0x28 + 8)
void* rcx_6 = *arg1
sub_141d9b700(rcx_6, *(*(rcx_6 + 0x138) + sx.q(arg1[1].d) * 0x28), arg2 + 0xa0)
sub_141d93690(*arg1 + 0x2d8, arg2 + 0xa0)
int64_t rsi = data_143f387d0
int64_t rcx_9

if (data_143de5480 == 0)
    rcx_9 = 0
else
    rcx_9.b = GetCurrentThreadId() != data_143de5470

int32_t rdx_3 = *(rsi + (rcx_9 << 2))

if (rdx_3 s> 0)
    int32_t rax_11 = arg1[1].d - rdx_3 + 1
    
    if (rax_11 s<= 0)
        rax_11 = 0
    
    if (rax_11 s> 0)
        int64_t rbp_1 = sx.q(rax_11) * 0x28
        void* rcx_11 = *arg1
        int32_t rbx_3 = *(*(rcx_11 + 0x138) + rbp_1 + 0x20) - *(rcx_11 + 0x150)
        
        if (rbx_3 s> 0 && *(rcx_11 + 0x2e8) s>= rbx_3)
            int32_t rax_14 = *(rcx_11 + 0x2e0)
            
            if (rax_14 != rbx_3)
                int64_t rcx_12 = *(rcx_11 + 0x2d8)
                memmove(rcx_12, sx.q(rbx_3) + rcx_12, rax_14 - rbx_3)
                rax_14 = *(rcx_11 + 0x2e0)
            
            *(rcx_11 + 0x2e0) = rax_14 - rbx_3
            sub_1405dac10(rcx_11 + 0x2d8)
            void* rax_16 = *arg1
            *(rax_16 + 0x2e8) -= rbx_3
            void* rdx_8 = *arg1
            *(rdx_8 + 0x148) = *(*(rdx_8 + 0x138) + rbp_1 + 4)
            void* rcx_15 = *arg1
            *(rcx_15 + 0x150) += sx.q(rbx_3)

void* rax_19 = *arg1
*(rax_19 + 0x158) += 1
return rax_19
