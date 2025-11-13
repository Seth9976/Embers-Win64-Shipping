// 函数: sub_140dbaab0
// 地址: 0x140dbaab0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t rbx = sx.q(arg2)

if (arg1[1].d != *(arg1 + 0x34))
    void* r8_1 = &arg1[7]
    void* r9_1 = *arg1
    void* rdx = *(r8_1 + 8)
    int64_t r10_2 = rbx * 0x12
    int64_t rcx_1 = sx.q(arg1[9].d - 1) & sx.q(*(r9_1 + (r10_2 << 3) + 0x8c))
    
    if (rdx != 0)
        r8_1 = rdx
    
    int32_t i = *(r8_1 + (rcx_1 << 2))
    void* rdx_1 = r8_1 + (rcx_1 << 2)
    
    for (; i != 0xffffffff; i = *rdx_1)
        if (i == rbx.d)
            *rdx_1 = *(r9_1 + (r10_2 << 3) + 0x88)
            break
        
        rdx_1 = r9_1 + 0x88 + sx.q(i) * 0x90

sub_140d95250(rbx * 0x90 + *arg1)
return sub_140dbb160(arg1, rbx.d, 1) __tailcall
