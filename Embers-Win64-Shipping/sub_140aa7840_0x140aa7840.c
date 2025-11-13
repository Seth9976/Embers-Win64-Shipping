// 函数: sub_140aa7840
// 地址: 0x140aa7840
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t rbp
rbp.b = 0
int32_t rax_1 = arg1[1].d - *(arg1 + 0x34)
int64_t r13 = sx.q(arg3)
int32_t rdi_1

if (rax_1 == 1)
    rdi_1 = arg5
label_140aa79d9:
    
    if (sub_140aa4d20(arg1, arg1[1].d - *(arg1 + 0x34), 0) == 0)
        void* r9_3 = &arg1[7]
        int32_t rax_17 = (arg1[9].d - 1) & r13.d
        *(arg4 + 0x44) = rax_17
        void* rdx_12 = *(r9_3 + 8)
        int64_t r8_3 = sx.q(rax_17)
        void* rax_18 = r9_3
        
        if (rdx_12 != 0)
            rax_18 = rdx_12
        
        arg4[8].d = *(rax_18 + (((sx.q(arg1[9].d) - 1) & r8_3) << 2))
        void* rax_20 = *(r9_3 + 8)
        
        if (rax_20 != 0)
            r9_3 = rax_20
        
        *(r9_3 + (((sx.q(arg1[9].d) - 1) & r8_3) << 2)) = rdi_1
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
    label_140aa7913:
        rbx_1 = -1
    else
        while (true)
            int64_t* r9 = *arg1 + sx.q(rbx_1) * 0x48
            int16_t* const r8_1
            
            if (arg4[1].d == 0)
                r8_1 = &data_142d40450
            else
                r8_1 = *arg4
            
            int16_t* rax_3
            
            if (r9[1].d == 0)
                rax_3 = &data_142d40450
            else
                rax_3 = *r9
            
            void* r8_2 = r8_1 - rax_3
            uint32_t i
            uint32_t rdx_3
            
            do
                rdx_3 = zx.d(*rax_3)
                i = zx.d(*(rax_3 + r8_2))
                
                if (rdx_3 != i)
                    break
                
                rax_3 = &rax_3[1]
            while (i != 0)
            
            if (rdx_3 - i == 0)
                break
            
            rbx_1 = r9[8].d
            
            if (rbx_1 == 0xffffffff)
                goto label_140aa7913
    
    rbp.b = rbx_1 != 0xffffffff
    
    if (rbx_1 == 0xffffffff)
        rdi_1 = arg5
    else
        int64_t* rdi = *arg1 + sx.q(rbx_1) * 0x48
        sub_140a98ef0(rdi)
        memmove(rdi, arg4, 0x40)
        int64_t rcx_5 = sx.q(arg5)
        void* r10_2 = &arg1[2]
        
        if (*(arg1 + 0x34) != 0)
            *(*arg1 + sx.q(arg1[6].d) * 0x48) = rcx_5.d
        
        int64_t rax_8 = *arg1
        int64_t rdx_7 = rcx_5 * 9
        *(rax_8 + (rdx_7 << 3)) = 0xffffffff
        
        if (*(arg1 + 0x34) s> 0)
            r12_1 = arg1[6].d
        
        *(rax_8 + (rdx_7 << 3) + 4) = r12_1
        *(arg1 + 0x34) += 1
        rdi_1 = rbx_1
        arg1[6].d = rcx_5.d
        void* rax_9 = *(r10_2 + 0x10)
        
        if (rax_9 != 0)
            r10_2 = rax_9
        
        int32_t temp0_1
        int32_t temp1_1
        temp0_1:temp1_1 = sx.q(rcx_5.d)
        int64_t rcx_6 = sx.q((temp1_1 + (temp0_1 & 0x1f)) s>> 5)
        *(r10_2 + (rcx_6 << 2)) &= not.d(rol.d(1, rcx_5.b))
    
    if (rbx_1 == 0xffffffff)
        goto label_140aa79d9

*arg2 = rdi_1

if (arg6 != 0)
    *arg6 = rbp.b

return arg2
