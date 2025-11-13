// 函数: sub_140ed4f30
// 地址: 0x140ed4f30
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t rbx = sx.q(arg2)

if (arg1[1].d != *(arg1 + 0x34))
    void* r8_1 = &arg1[7]
    int64_t r9_1 = *arg1
    void* r10_1 = r9_1 + rbx * 0x28
    void* rdx_1 = *(r8_1 + 8)
    int64_t rcx_1 = sx.q(arg1[9].d - 1) & sx.q(*(r10_1 + 0x24))
    
    if (rdx_1 != 0)
        r8_1 = rdx_1
    
    int32_t i = *(r8_1 + (rcx_1 << 2))
    void* rdx_2 = r8_1 + (rcx_1 << 2)
    
    while (i != 0xffffffff)
        if (i == rbx.d)
            *rdx_2 = *(r10_1 + 0x20)
            break
        
        int64_t i_1 = sx.q(i)
        int64_t rdx_4 = i_1 + ((i_1 + 1) << 2)
        i = *(r9_1 + (rdx_4 << 3))
        rdx_2 = r9_1 + (rdx_4 << 3)

sub_140e53610(*arg1 + rbx * 0x28)
return sub_1405c3590(arg1, rbx.d, 1) __tailcall
