// 函数: sub_140e3f4b0
// 地址: 0x140e3f4b0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t rax = *(arg1 + 0x1cc)

if (rax == 4)
    sub_140e43530(arg1, 0xffffff18)
    noreturn

int32_t i_1 = 0
int32_t r13 = 0

if (rax s> 0)
    void* r12_1 = arg1 + 0x328
    void* r15_1 = &arg1[0x1d]
    
    while (true)
        int32_t rbp_2 = *(r15_1 + 0x10) * arg1[0x252].d
        int32_t r14_2 = *r15_1 * *(arg1 + 0x2508)
        void** rax_1 = arg1[0x10].q
        void* rdi_2
        
        if (rax_1 != 0)
            int64_t rcx
            
            while (true)
                rcx = rax_1[1]
                
                if (rcx + 0x20 u<= rax_1[2])
                    break
                
                rax_1 = *rax_1
                
                if (rax_1 == 0)
                    goto label_140e3f55c
            
            rax_1[1] = rcx + 0x20
            rdi_2 = &rax_1[3] + rcx
            
            if (&rax_1[3] != neg.q(rcx))
                goto label_140e3f58f
            
            goto label_140e3f55c
        
    label_140e3f55c:
        int64_t* rax_2 = sub_140a82f30(0x7f20, 0)
        
        if (rax_2 != 0)
            rdi_2 = &rax_2[3]
            *rax_2 = arg1[0x10].q
            arg1[0x10].q = rax_2
            rax_2[1] = 0x20
            rax_2[2] = 0x7f00
        label_140e3f58f:
            *(rdi_2 + 0xc) = rbp_2
            *(rdi_2 + 8) = r14_2
            *(rdi_2 + 0x10) = 1
            *(rdi_2 + 0x14) = 1
            *(rdi_2 + 0x18) = 2
            *rdi_2 = sub_140e34940(arg1, sx.q(rbp_2 * r14_2 * 2), 1)
            *(r12_1 - 0x20) = rdi_2
            int32_t rbp_6 = *(r15_1 + 0x10) * arg1[0x252].d
            int32_t r14_4 = *r15_1 * *(arg1 + 0x2508)
            void** rax_4 = arg1[0x10].q
            void* rdi_4
            
            if (rax_4 != 0)
                int64_t rcx_3
                
                while (true)
                    rcx_3 = rax_4[1]
                    
                    if (rcx_3 + 0x20 u<= rax_4[2])
                        break
                    
                    rax_4 = *rax_4
                    
                    if (rax_4 == 0)
                        goto label_140e3f61c
                
                rax_4[1] = rcx_3 + 0x20
                rdi_4 = &rax_4[3] + rcx_3
                
                if (&rax_4[3] != neg.q(rcx_3))
                    goto label_140e3f64f
                
                goto label_140e3f61c
            
        label_140e3f61c:
            int64_t* rax_5 = sub_140a82f30(0x7f20, 0)
            
            if (rax_5 != 0)
                rdi_4 = &rax_5[3]
                *rax_5 = arg1[0x10].q
                arg1[0x10].q = rax_5
                rax_5[1] = 0x20
                rax_5[2] = 0x7f00
            label_140e3f64f:
                *(rdi_4 + 0xc) = rbp_6
                *(rdi_4 + 8) = r14_4
                *(rdi_4 + 0x10) = 8
                *(rdi_4 + 0x14) = 8
                *(rdi_4 + 0x18) = 0x80
                *rdi_4 = sub_140e34940(arg1, sx.q((rbp_6 * r14_4) << 7), 1)
                r13 += 1
                *r12_1 = rdi_4
                r15_1 += 4
                r12_1 += 8
                
                if (r13 s>= *(arg1 + 0x1cc))
                    break
                
                continue
        
        sub_140e43530(arg1, 0xffffff20)
        noreturn

int32_t rax_7
int512_t zmm1
rax_7, zmm1 = sub_140e3f880(arg1, arg2)

if (rax_7 != 0)
    int32_t i
    
    do
        int32_t rdx_5 = *(arg1 + 0x264)
        int32_t rax_8 = *(arg1 + 0x268)
        int32_t rcx_7 = arg1[0x27].d
        bool cond:0_1
        
        if (rdx_5 s<= rax_8 && rax_8 s<= 0x3f)
            if (rdx_5 != 0)
                cond:0_1 = arg1[0x23].d != 1
            else
                cond:0_1 = rax_8 != 0
        
        if (rdx_5 s> rax_8 || rax_8 s> 0x3f || cond:0_1)
            sub_140e43530(arg1, 0xffffff1d)
            noreturn
        
        if (rcx_7 != 0 && *(arg1 + 0x26c) != rcx_7 - 1)
            sub_140e43530(arg1, 0xffffff1e)
            noreturn
        
        int64_t (* rdx_6)(struct _SETJMP_FLOAT128* arg1, int32_t arg2, int32_t arg3, int32_t arg4, 
            int512_t arg5 @ zmm1)
        
        if (rdx_5 != 0)
            rdx_6 = sub_140e3aac0
            
            if (rcx_7 != 0)
                rdx_6 = sub_140e3ac70
        else
            rdx_6 = sub_140e3b1d0
            
            if (rcx_7 == 0)
                rdx_6 = sub_140e3b110
        
        sub_140e3b760(arg1, rdx_6, zmm1)
        *(arg1 + 0x24f8) <<= 0x10
        *(arg1 + 0x24f4) = 0
        int32_t rax_10 = sub_140e3cd90(arg1, zmm1)
        int32_t rax_11 = sub_140e3cd90(arg1, zmm1)
        int32_t rdx_7 = *(arg1 + 0x24f4)
        int32_t rdi_9 = (rax_10 << 8 | (*(arg1 + 0x24f8) & 0xffff0000) | rax_11) << (neg.d(rdx_7)).b
        *(arg1 + 0x24f4) = rdx_7
        int32_t rdi_15
        
        if (rdx_7 s> 0)
            rdi_15 = rdi_9 << 0x10
        else
            *(arg1 + 0x24f8) = rdi_9 << (rdx_7 + 0x10).b
            int32_t rax_13 = sub_140e3cd90(arg1, zmm1)
            int32_t rax_14 = sub_140e3cd90(arg1, zmm1)
            int32_t rcx_20 = *(arg1 + 0x24f4)
            int32_t rdi_14 = rax_13 << 8 | (*(arg1 + 0x24f8) & 0xffff0000) | rax_14
            *(arg1 + 0x24f8) = rdi_14
            rdi_15 = rdi_14 << (neg.d(rcx_20)).b
            *(arg1 + 0x24f4) = rcx_20 + 0x10
        
        *(arg1 + 0x24f8) = rdi_15
        i, zmm1 = sub_140e3f880(arg1, zmm1)
    while (i != 0)

int32_t rax_16 = *(arg1 + 0x1cc)
arg1[0x23].d = rax_16

if (rax_16 s> 0)
    void* __offset(_SETJMP_FLOAT128, 0x234) rax_17 = arg1 + 0x234
    
    do
        *rax_17 = i_1
        rax_17 += 4
        i_1 += 1
    while (i_1 s< *(arg1 + 0x1cc))

return sub_140e39df0(arg1) __tailcall
