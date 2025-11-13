// 函数: sub_141e9f5f0
// 地址: 0x141e9f5f0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t rbx_1

if (arg1[1].d != *(arg1 + 0x34))
    void* rdx = arg1[8]
    void* r8 = &arg1[7]
    uint32_t r10_2 = (*arg3 u>> 4).d
    int32_t r9_2 = (0x9e3779b9 - r10_2) ^ r10_2 << 8
    int32_t rcx_2 = neg.d(r9_2 + r10_2) ^ r9_2 u>> 0xd
    int32_t r10_5 = (r10_2 - r9_2 - rcx_2) ^ rcx_2 u>> 0xc
    int32_t r9_5 = (r9_2 - r10_5 - rcx_2) ^ r10_5 << 0x10
    int32_t rcx_5 = (rcx_2 - r9_5 - r10_5) ^ r9_5 u>> 5
    int32_t r10_8 = (r10_5 - r9_5 - rcx_5) ^ rcx_5 u>> 3
    int32_t r9_8 = (r9_5 - r10_8 - rcx_5) ^ r10_8 << 0xa
    
    if (rdx != 0)
        r8 = rdx
    
    rbx_1 =
        *(r8 + (((sx.q(rcx_5 - r9_8 - r10_8) ^ zx.q(r9_8) u>> 0xf) & (sx.q(arg1[9].d) - 1)) << 2))

if (arg1[1].d == *(arg1 + 0x34) || rbx_1 == 0xffffffff)
label_141e9f74b:
    *arg2 = 0xffffffff
else
    int64_t rax_19 = *arg1
    
    while (true)
        int64_t rdi_2 = sx.q(rbx_1) << 5
        void* const rsi_2
        
        if (*(rdi_2 + rax_19) == 0)
            rsi_2 = nullptr
        else
            void* rax_20 = sub_142484770()
            
            if (rax_20 == 0)
                rsi_2 = nullptr
            else
                rsi_2 = *(rdi_2 + rax_19)
                int64_t rax_21 = sx.q(*(rax_20 + 0x38))
                
                if (rax_21.d s> *(rsi_2 + 0x38)
                        || *(*(rsi_2 + 0x30) + (rax_21 << 3)) != rax_20 + 0x30)
                    rsi_2 = nullptr
        
        void* const rax_24
        
        if (*arg3 == 0)
            rax_24 = nullptr
        else
            void* rax_23 = sub_142484770()
            
            if (rax_23 == 0)
                rax_24 = nullptr
            else
                int64_t rcx_12 = sx.q(*(rax_23 + 0x38))
                rax_24 = *arg3
                
                if (rcx_12.d s> *(rax_24 + 0x38)
                        || *(*(rax_24 + 0x30) + (rcx_12 << 3)) != rax_23 + 0x30)
                    rax_24 = nullptr
        
        if (rsi_2 == rax_24)
            *arg2 = rbx_1
            break
        
        rax_19 = *arg1
        rbx_1 = *(rdi_2 + rax_19 + 0x18)
        
        if (rbx_1 == 0xffffffff)
            goto label_141e9f74b

return arg2
