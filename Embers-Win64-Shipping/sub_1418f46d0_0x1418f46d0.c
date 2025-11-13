// 函数: sub_1418f46d0
// 地址: 0x1418f46d0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

*arg1 = &data_142d3ff08
arg1[1].d = 0
*(arg1 + 0xc) = 0
arg1[2].w = 0x100
arg1[3] = arg3
*arg1 = &data_142ff1d08
arg1[0xa] = 0
arg1[0xb].d = 0
*(arg1 + 0x5c) = 6
arg1[0x12] = 0
arg1[0x13].d = 0
*(arg1 + 0x9c) = 6
arg1[0x26] = 0
arg1[0x27].d = 0
*(arg1 + 0x13c) = 6
arg1[0x28] = 0
arg1[0x29] = 0
InitializeCriticalSection(&arg1[0x2a])
SetCriticalSectionSpinCount(&arg1[0x2a], 0xfa0)
arg1[0x30].d = arg5
*(arg1 + 0x184) = arg6
arg1[0x31].b = arg7
*(arg1 + 0x18c) = arg8
arg1[0x2f] = arg2
arg1[0x32].d = 0xffffffff
arg1[0x33] = 0
arg1[0x34] = arg4
arg1[0x35].d = 0
*(arg1 + 0x1ac) = 1
__builtin_memset(&arg1[0x36], 0, 0x20)
__builtin_memset(&arg1[4], 0, 0x40)
void* rdi = arg1[0x2f]
int64_t rsi_1 = sx.q(*(rdi + 0x68))
int32_t rax_4 = (rsi_1 + 1).d
*(rdi + 0x68) = rax_4

if (rax_4 s> *(rdi + 0x6c))
    sub_1405a4d70(rdi + 0x60)

*(*(rdi + 0x60) + (rsi_1 << 3)) = arg1
sub_1418e2f60(arg1[0x2f])
sub_1418f7610(arg1, nullptr)
int64_t rbp_1 = sx.q(arg1[0x13].d)

if (rbp_1 s> 0)
    int64_t rdi_1 = 0
    
    do
        void*** rax_6 = j_sub_140a82f30(0x28)
        void*** rdx_2
        
        if (rax_6 == 0)
            rdx_2 = nullptr
        else
            rdx_2 = sub_1418b8750(rax_6, arg3)
        
        void* rcx_6 = arg1[0x12]
        void* rax_8 = &arg1[0xc]
        
        if (rcx_6 != 0)
            rax_8 = rcx_6
        
        void* rcx_7 = &arg1[0xc]
        *(rax_8 + (rdi_1 << 3)) = rdx_2
        void* rax_9 = arg1[0x12]
        
        if (rax_9 != 0)
            rcx_7 = rax_9
        
        void* rax_10 = *(rcx_7 + (rdi_1 << 3))
        *(rax_10 + 8) += 1
        rdi_1 += 1
    while (rdi_1 s< rbp_1)

return arg1
