// 函数: sub_140a3ba30
// 地址: 0x140a3ba30
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

*arg1 = &data_142e5d298
InitializeCriticalSection(&arg1[1])
SetCriticalSectionSpinCount(&arg1[1], 0xfa0)
arg1[0xb] = arg2
arg1[6].d = 0
arg1[8].d = 0
arg1[0xa].d = 0
void var_a8
int32_t rdx = sub_140b6c480(&var_a8)[2].d

if (rdx == 0)
    rdx = 0x10000

arg1[7] = sub_140b655e0(zx.q(rdx + 0x1fffff) & zx.q(neg.d(rdx)))
int64_t rax_4 = sub_140b655e0(zx.q(sub_140a48c00()))
arg1[9] = rax_4

if (rax_4 == 0 || arg1[7] == 0)
    OutputDebugStringW(u"Memory pools allocations failed, exiting...\n")
    sub_140b721f0(1)

if ((arg1[7].b & 0xf) != 0 || (arg1[9].b & 0xf) != 0)
    OutputDebugStringW(u"OS allocations must be aligned to a value multiple of 16, exiting...\n")
    sub_140b721f0(1)

int32_t i = 0
int32_t* r12 = &data_14399e970

do
    int32_t rcx_12 = r12[1]
    int32_t rdi_1 = 0
    void* rbx_2 = sx.q(i) * 0x4020 + &data_143d79710
    int32_t rax_7 = *r12 + 0x10
    *rbx_2 = 0
    *(rbx_2 + 8) = 0
    *(rbx_2 + 0x10) = rax_7
    *(rbx_2 + 0x4018) = rcx_12
    
    if (rcx_12 != 0)
        do
            int32_t r14_1 = arg1[0xa].d
            int32_t rbp_2 = *(rbx_2 + 0x10) + r14_1
            int64_t* rax_10
            
            if (rbp_2 u> sub_140a48c00())
                rax_10 = nullptr
            else
                arg1[0xa].d = rbp_2
                rax_10 = zx.q(r14_1) + arg1[9]
            
            *rax_10 = 0
            rax_10[1] = &rax_10[2]
            uint64_t rcx_11 = zx.q(rdi_1)
            rdi_1 += 1
            *(rbx_2 + (rcx_11 << 3) + 0x18) = rax_10
            rcx_12 = *(rbx_2 + 0x4018)
        while (rdi_1 u< rcx_12)
    
    if (rcx_12 u< 0x800)
        __builtin_memset(rbx_2 + ((zx.q(rcx_12) + 3) << 3), 0, zx.q(0x800 - rcx_12) << 3)
        rcx_12 = *(rbx_2 + 0x4018)
    
    i += 1
    r12 = &r12[2]
    *(rbx_2 + 0x401c) = *(rbx_2 + 0x10) * rcx_12 + 0x4000
while (i u< 0xe)

return arg1
