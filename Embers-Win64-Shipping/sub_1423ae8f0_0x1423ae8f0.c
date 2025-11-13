// 函数: sub_1423ae8f0
// 地址: 0x1423ae8f0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t rsi
rsi.b = 0
int32_t rax_1 = arg1[1].d - *(arg1 + 0x34)
int64_t r13 = sx.q(arg3)
int32_t rdi_6

if (rax_1 == 1)
    rdi_6 = arg5
label_1423aeaba:
    
    if (sub_1405b6520(arg1, arg1[1].d - *(arg1 + 0x34), 0) == 0)
        void* r9_2 = &arg1[7]
        int32_t rax_18 = (arg1[9].d - 1) & r13.d
        *(arg4 + 0x1c) = rax_18
        void* rdx_12 = *(r9_2 + 8)
        int64_t r8_5 = sx.q(rax_18)
        void* rax_19 = r9_2
        
        if (rdx_12 != 0)
            rax_19 = rdx_12
        
        arg4[3].d = *(rax_19 + (((sx.q(arg1[9].d) - 1) & r8_5) << 2))
        void* rax_21 = *(r9_2 + 8)
        
        if (rax_21 != 0)
            r9_2 = rax_21
        
        *(r9_2 + (((sx.q(arg1[9].d) - 1) & r8_5) << 2)) = rdi_6
else
    int32_t r12_1 = -1
    int32_t rbx_1
    
    if (rax_1 != 0)
        void* r8 = &arg1[7]
        void* rcx = arg1[8]
        
        if (rcx != 0)
            r8 = rcx
        
        rbx_1 = *(r8 + (((sx.q(arg1[9].d) - 1) & r13) << 2))
    
    if (rax_1 == 0 || rbx_1 == 0xffffffff)
    label_1423ae9eb:
        rbx_1 = -1
    else
        int64_t rax_2 = *arg1
        
        while (true)
            rsi = sx.q(rbx_1) << 5
            void* const rdi_2
            
            if (*(rsi + rax_2) == 0)
                rdi_2 = nullptr
            else
                void* rax_3 = sub_1425b3a40()
                
                if (rax_3 == 0)
                    rdi_2 = nullptr
                else
                    rdi_2 = *(rsi + rax_2)
                    int64_t rax_4 = sx.q(*(rax_3 + 0x38))
                    
                    if (rax_4.d s> *(rdi_2 + 0x38)
                            || *(*(rdi_2 + 0x30) + (rax_4 << 3)) != rax_3 + 0x30)
                        rdi_2 = nullptr
            
            int64_t rdx_4
            
            if (*arg4 == 0)
                rdx_4 = 0
            else
                void* rax_6 = sub_1425b3a40()
                
                if (rax_6 == 0)
                    rdx_4 = 0
                else
                    rdx_4 = *arg4
                    int64_t rax_7 = sx.q(*(rax_6 + 0x38))
                    
                    if (rax_7.d s> *(rdx_4 + 0x38)
                            || *(*(rdx_4 + 0x30) + (rax_7 << 3)) != rax_6 + 0x30)
                        rdx_4 = 0
            
            if (rdi_2 == rdx_4)
                break
            
            rax_2 = *arg1
            rbx_1 = *(rsi + rax_2 + 0x18)
            
            if (rbx_1 == 0xffffffff)
                goto label_1423ae9eb
    
    rsi.b = rbx_1 != 0xffffffff
    
    if (rbx_1 == 0xffffffff)
        rdi_6 = arg5
    else
        void* rdi_5 = (sx.q(rbx_1) << 5) + *arg1
        int64_t rcx_3 = *(rdi_5 + 8)
        
        if (rcx_3 != 0)
            sub_140a74f90(rcx_3)
        
        memmove(rdi_5, arg4, 0x18)
        int64_t rcx_5 = sx.q(arg5)
        void* r10_1 = &arg1[2]
        
        if (*(arg1 + 0x34) != 0)
            *((sx.q(arg1[6].d) << 5) + *arg1) = rcx_5.d
        
        int32_t* r8_4 = (rcx_5 << 5) + *arg1
        *r8_4 = 0xffffffff
        
        if (*(arg1 + 0x34) s> 0)
            r12_1 = arg1[6].d
        
        r8_4[1] = r12_1
        *(arg1 + 0x34) += 1
        rdi_6 = rbx_1
        arg1[6].d = rcx_5.d
        void* rax_10 = *(r10_1 + 0x10)
        
        if (rax_10 != 0)
            r10_1 = rax_10
        
        int32_t temp0_1
        int32_t temp1_1
        temp0_1:temp1_1 = sx.q(rcx_5.d)
        int64_t rcx_6 = sx.q((temp1_1 + (temp0_1 & 0x1f)) s>> 5)
        *(r10_1 + (rcx_6 << 2)) &= not.d(rol.d(1, rcx_5.b))
    
    if (rbx_1 == 0xffffffff)
        goto label_1423aeaba

*arg2 = rdi_6

if (arg6 != 0)
    *arg6 = rsi.b

return arg2
