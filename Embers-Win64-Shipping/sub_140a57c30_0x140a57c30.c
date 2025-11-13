// 函数: sub_140a57c30
// 地址: 0x140a57c30
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t rbp
rbp.b = 0
int32_t rax_1 = arg1[1].d - *(arg1 + 0x34)
int32_t r14 = 1
int64_t r13 = sx.q(arg3)
int32_t i_1

if (rax_1 == 1)
    i_1 = arg5
label_140a57d99:
    int32_t r8_7 = arg1[1].d - *(arg1 + 0x34)
    
    if (r8_7 u>= 4)
        uint32_t rax_10 = r8_7 u>> 1
        uint64_t rflags_1
        int32_t temp0_2
        temp0_2, rflags_1 = _bit_scan_reverse(rax_10 + 8)
        int32_t rcx_7
        
        if (rax_10 == 0xfffffff8)
            rcx_7 = 0x20
        else
            rcx_7 = 0x1f - temp0_2
        
        uint64_t rflags_2
        char temp0_3
        temp0_3, rflags_2 = _bit_scan_reverse(rax_10 + 7)
        char r9_4
        
        if (rax_10 == 0xfffffff9)
            r9_4 = 0x20
        else
            r9_4 = 0x1f - temp0_3
        
        r14 = 1 << ((not.d(rcx_7 << 0x1a s>> 0x1f)).b & (0x20 - r9_4))
    
    int32_t rax_13
    
    if (r8_7 s> 0)
        rax_13 = arg1[9].d
    
    if (r8_7 s> 0 && (rax_13 == 0 || rax_13 s< r14))
        arg1[9].d = r14
        sub_1408076e0(arg1)
    else
        void* r9_5 = &arg1[7]
        int32_t rax_16 = (arg1[9].d - 1) & r13.d
        arg4[7] = rax_16
        void* rdx_10 = *(r9_5 + 8)
        int64_t r8_8 = sx.q(rax_16)
        void* rax_17 = r9_5
        
        if (rdx_10 != 0)
            rax_17 = rdx_10
        
        arg4[6] = *(rax_17 + (((sx.q(arg1[9].d) - 1) & r8_8) << 2))
        void* rax_19 = *(r9_5 + 8)
        
        if (rax_19 != 0)
            r9_5 = rax_19
        
        *(r9_5 + (((sx.q(arg1[9].d) - 1) & r8_8) << 2)) = i_1
else
    int32_t rdi = -1
    int32_t i
    
    if (rax_1 != 0)
        void* r8 = &arg1[7]
        void* rcx = arg1[8]
        
        if (rcx != 0)
            r8 = rcx
        
        i = *(r8 + (((sx.q(arg1[9].d) - 1) & r13) << 2))
        
        if (i != 0xffffffff)
            int64_t r10_1 = *arg1
            
            do
                int64_t r9_1 = sx.q(i) << 5
                
                if (*(r9_1 + r10_1) == *arg4)
                    int64_t* rax_2 = *(arg4 + 8)
                    int32_t rdx_3 = 0
                    int64_t* r8_2 = *(r9_1 + r10_1 + 8) - rax_2
                    
                    while (true)
                        int64_t rcx_1 = *(r8_2 + rax_2)
                        
                        if (rcx_1 != *rax_2)
                            break
                        
                        if (rcx_1 == 0)
                            goto label_140a57cf8
                        
                        rdx_3 += 1
                        rax_2 = &rax_2[1]
                        
                        if (rdx_3 u>= 0x40)
                            goto label_140a57cf8
                
                i = *(r9_1 + r10_1 + 0x18)
            while (i != 0xffffffff)
    
    i = -1
label_140a57cf8:
    rbp.b = i != 0xffffffff
    
    if (i == 0xffffffff)
        i_1 = arg5
    else
        memmove((sx.q(i) << 5) + *arg1, arg4, 0x18)
        int64_t rcx_5 = sx.q(arg5)
        void* r10_2 = &arg1[2]
        
        if (*(arg1 + 0x34) != 0)
            *((sx.q(arg1[6].d) << 5) + *arg1) = rcx_5.d
        
        int32_t* r8_5 = (rcx_5 << 5) + *arg1
        *r8_5 = 0xffffffff
        
        if (*(arg1 + 0x34) s> 0)
            rdi = arg1[6].d
        
        r8_5[1] = rdi
        *(arg1 + 0x34) += 1
        i_1 = i
        arg1[6].d = rcx_5.d
        void* rax_4 = *(r10_2 + 0x10)
        
        if (rax_4 != 0)
            r10_2 = rax_4
        
        int32_t temp2_1
        int32_t temp3_1
        temp2_1:temp3_1 = sx.q(rcx_5.d)
        int64_t rcx_6 = sx.q((temp3_1 + (temp2_1 & 0x1f)) s>> 5)
        *(r10_2 + (rcx_6 << 2)) &= not.d(rol.d(1, rcx_5.b))
    
    if (i == 0xffffffff)
        goto label_140a57d99

*arg2 = i_1

if (arg6 != 0)
    *arg6 = rbp.b

return arg2
