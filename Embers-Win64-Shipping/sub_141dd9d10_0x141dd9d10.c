// 函数: sub_141dd9d10
// 地址: 0x141dd9d10
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

EnterCriticalSection(arg1 + 0x108)
*(arg1 + 0xb4) = 0
void* rax = sub_141dc9ec0(arg1, arg2, 0, arg1 + 0xbc)
void* rbp = rax
void* rdi

if (rax == 0)
    rdi.b = 0
else
    int32_t r8 = *(arg1 + 0xbc)
    *(arg1 + 0x80) = 0
    *(arg1 + 0x88) = 0
    void* arg_8
    
    if (sub_141e66a60(arg1 + 0x18, rbp, r8, nullptr, 1, &arg_8) == 0)
        rdi.b = 0
    else
        int32_t rax_3 = *(arg1 + 0x58) - rbp.d
        int32_t rcx_4
        
        if (rax_3 u< *(arg1 + 0xbc))
            rcx_4 = 0
        else
            *(arg1 + 0xb4) += 1
            void* rax_4 = sub_141dc9ec0(arg1, arg2, *(arg1 + 0xb4), arg1 + 0xbc)
            rcx_4 = *(arg1 + 0xb4)
            rbp = rax_4
            rax_3 = 0
        
        *(arg1 + 0xd0) = rcx_4
        *(arg1 + 0xcc) = rax_3
        int16_t* rax_5 = *(arg1 + 0x40)
        *(arg1 + 0x80) = rbp
        *(arg1 + 0xb8) = 0
        *(arg1 + 0xd8) = 0
        *(arg1 + 0x130) = 0
        *(arg1 + 0xb0) = 0
        *(arg1 + 0xc0) = 0
        uint32_t rcx_5 = zx.d(*rax_5)
        int16_t* rax_6 = *(arg1 + 0x38)
        *(arg1 + 0xa4) = rcx_5
        uint64_t r10_1 = zx.q(*rax_6)
        *(arg1 + 0xa0) = r10_1.d
        
        if (rcx_5 != 2)
            if (rcx_5 == 1)
                int64_t rax_18 = sx.q(*(arg1 + 0x68))
                *(arg1 + 0x9c) = rax_18.d
                *(arg1 + 0x98) = rax_18.d
                *(arg1 + 0x90) = 0
                *(arg1 + 0xc4) = divu.dp.q(0:(rax_18 u>> 1), r10_1)
                *(arg1 + 0x8c) = 0
                goto label_141dd9f0e
            
            rdi.b = 0
        else
            void* rcx_6 = arg_8
            *(arg1 + 0xc4) = *(rcx_6 + 0x32)
            *(arg1 + 0xc8) = zx.d(*(rcx_6 + 0x12))
            uint64_t r8_2 = zx.q(**(arg1 + 0x28))
            *(arg1 + 0x94) = r8_2.d
            *(arg1 + 0x90) = r8_2.d
            int32_t r9_2 = ((r8_2 << 2) + -0xffffffffffffffe8).d
            *(arg1 + 0x8c) = r9_2
            int64_t rcx_8 = *(arg1 + 0xa8)
            *(arg1 + 0x98) = divu.dp.d(0:0x2000, ((r8_2 << 1) + -0xfffffffffffffff4).d) * r9_2
            int32_t r9_3 = r9_2 * r10_1.d
            *(arg1 + 0x9c) = divu.dp.d(0:(*(arg1 + 0x68) - 1 + r8_2.d), r8_2.d) * r9_2
            *(arg1 + 0xa8) = sub_140a84c80(rcx_8, zx.q(r9_3), 0, r9_3)
        label_141dd9f0e:
            
            if (arg3 != 0)
                int64_t rdx_5 = zx.q(**(arg1 + 0x18))
                *(arg3 + 8) = rdx_5.d
                *(arg3 + 4) = zx.d(**(arg1 + 0x38))
                *(arg3 + 0xc) = *(arg1 + 0x9c)
                *(arg3 + 0x10) = float.s(zx.q(*(arg1 + 0xc4))) / float.s(rdx_5)
            
            rdi.b = 1

if (arg1 != -0x108)
    LeaveCriticalSection(arg1 + 0x108)

return zx.q(rdi.b)
