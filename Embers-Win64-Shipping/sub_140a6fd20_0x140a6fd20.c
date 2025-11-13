// 函数: sub_140a6fd20
// 地址: 0x140a6fd20
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t r14
r14.b = 0
int32_t rax_1 = arg1[1].d - *(arg1 + 0x34)
int32_t r12 = 1
int64_t r11 = sx.q(arg3)
int32_t rdi_2

if (rax_1 == 1)
    rdi_2 = arg5
label_140a6ff01:
    int32_t r8_6 = arg1[1].d - *(arg1 + 0x34)
    
    if (r8_6 u>= 4)
        uint32_t rax_16 = r8_6 u>> 1
        uint64_t rflags_1
        int32_t temp0_2
        temp0_2, rflags_1 = _bit_scan_reverse(rax_16 + 8)
        int32_t rcx_6
        
        if (rax_16 == 0xfffffff8)
            rcx_6 = 0x20
        else
            rcx_6 = 0x1f - temp0_2
        
        uint64_t rflags_2
        char temp0_3
        temp0_3, rflags_2 = _bit_scan_reverse(rax_16 + 7)
        char r9_3
        
        if (rax_16 == 0xfffffff9)
            r9_3 = 0x20
        else
            r9_3 = 0x1f - temp0_3
        
        r12 = 1 << ((not.d(rcx_6 << 0x1a s>> 0x1f)).b & (0x20 - r9_3))
    
    int32_t rax_19
    
    if (r8_6 s> 0)
        rax_19 = arg1[9].d
    
    if (r8_6 s> 0 && (rax_19 == 0 || rax_19 s< r12))
        arg1[9].d = r12
        sub_140a85f20(arg1)
    else
        void* r9_4 = &arg1[7]
        int32_t rax_22 = (arg1[9].d - 1) & r11.d
        *(arg4 + 0xd4) = rax_22
        void* rdx_12 = *(r9_4 + 8)
        int64_t r8_7 = sx.q(rax_22)
        void* rax_23 = r9_4
        
        if (rdx_12 != 0)
            rax_23 = rdx_12
        
        arg4[0x1a].d = *(rax_23 + (((sx.q(arg1[9].d) - 1) & r8_7) << 2))
        void* rax_25 = *(r9_4 + 8)
        
        if (rax_25 != 0)
            r9_4 = rax_25
        
        *(r9_4 + (((sx.q(arg1[9].d) - 1) & r8_7) << 2)) = rdi_2
else
    int32_t rbx_1
    
    if (rax_1 != 0)
        void* r8 = &arg1[7]
        void* rcx = arg1[8]
        
        if (rcx != 0)
            r8 = rcx
        
        rbx_1 = *(r8 + (((sx.q(arg1[9].d) - 1) & r11) << 2))
    
    if (rax_1 == 0 || rbx_1 == 0xffffffff)
    label_140a6fe04:
        rbx_1 = -1
    else
        while (true)
            int64_t* r9_1 = sx.q(rbx_1) * 0xd8 + *arg1
            
            if (r9_1[2].d == arg4[2].d)
                int16_t* const r8_1
                
                if (arg4[1].d == 0)
                    r8_1 = &data_142d40450
                else
                    r8_1 = *arg4
                
                int16_t* rax_3
                
                if (r9_1[1].d == 0)
                    rax_3 = &data_142d40450
                else
                    rax_3 = *r9_1
                
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
            
            rbx_1 = r9_1[0x1a].d
            
            if (rbx_1 == 0xffffffff)
                goto label_140a6fe04
    
    r14.b = rbx_1 != 0xffffffff
    
    if (rbx_1 == 0xffffffff)
        rdi_2 = arg5
    else
        int64_t* rdi_1 = sx.q(rbx_1) * 0xd8 + *arg1
        sub_140a63910(&rdi_1[3])
        int64_t rbp_1 = *rdi_1
        
        if (rbp_1 != 0)
            int64_t* rcx_2 = data_143ddb3f0
            
            if (rcx_2 == 0)
                sub_140a750a0()
                rcx_2 = data_143ddb3f0
            
            (*(*rcx_2 + 0x30))(rcx_2, rbp_1)
        
        memmove(rdi_1, arg4, 0xd0)
        int64_t rcx_4 = sx.q(arg5)
        void* r10_2 = &arg1[2]
        
        if (*(arg1 + 0x34) != 0)
            *(sx.q(arg1[6].d) * 0xd8 + *arg1) = rcx_4.d
        
        int32_t rdx_8 = -1
        int32_t* rax_9 = rcx_4 * 0xd8 + *arg1
        *rax_9 = 0xffffffff
        
        if (*(arg1 + 0x34) s> 0)
            rdx_8 = arg1[6].d
        
        rax_9[1] = rdx_8
        *(arg1 + 0x34) += 1
        rdi_2 = rbx_1
        arg1[6].d = rcx_4.d
        void* rax_10 = *(r10_2 + 0x10)
        
        if (rax_10 != 0)
            r10_2 = rax_10
        
        int32_t temp2_1
        int32_t temp3_1
        temp2_1:temp3_1 = sx.q(rcx_4.d)
        int64_t rcx_5 = sx.q((temp3_1 + (temp2_1 & 0x1f)) s>> 5)
        *(r10_2 + (rcx_5 << 2)) &= not.d(rol.d(1, rcx_4.b))
    
    if (rbx_1 == 0xffffffff)
        r11 = zx.q(arg3)
        goto label_140a6ff01

*arg2 = rdi_2

if (arg6 != 0)
    *arg6 = r14.b

return arg2
