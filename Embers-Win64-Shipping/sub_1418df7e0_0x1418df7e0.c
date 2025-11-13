// 函数: sub_1418df7e0
// 地址: 0x1418df7e0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

uint64_t r12
r12.b = 0
int32_t rax_1 = arg1[1].d - *(arg1 + 0x34)
int32_t rbp = 1
int64_t r10 = sx.q(arg3)
int32_t i_1

if (rax_1 == 1)
    i_1 = arg5
label_1418df98a:
    int32_t rdx_12 = arg1[1].d - *(arg1 + 0x34)
    
    if (rdx_12 u>= 4)
        uint32_t rax_15 = rdx_12 u>> 1
        uint64_t rflags_1
        int32_t temp0_2
        temp0_2, rflags_1 = _bit_scan_reverse(rax_15 + 8)
        int32_t rcx_10
        
        if (rax_15 == 0xfffffff8)
            rcx_10 = 0x20
        else
            rcx_10 = 0x1f - temp0_2
        
        uint64_t rflags_2
        char temp0_3
        temp0_3, rflags_2 = _bit_scan_reverse(rax_15 + 7)
        char r8_4
        
        if (rax_15 == 0xfffffff9)
            r8_4 = 0x20
        else
            r8_4 = 0x1f - temp0_3
        
        rbp = 1 << ((not.d(rcx_10 << 0x1a s>> 0x1f)).b & (0x20 - r8_4))
    
    int32_t rax_18
    
    if (rdx_12 s> 0)
        rax_18 = arg1[9].d
    
    if (rdx_12 s> 0 && (rax_18 == 0 || rax_18 s< rbp))
        arg1[9].d = rbp
        sub_140837b00(arg1)
    else
        void* r9_3 = &arg1[7]
        int32_t rax_21 = (arg1[9].d - 1) & r10.d
        arg4[9] = rax_21
        void* rdx_13 = *(r9_3 + 8)
        int64_t r8_5 = sx.q(rax_21)
        void* rax_22 = r9_3
        
        if (rdx_13 != 0)
            rax_22 = rdx_13
        
        arg4[8] = *(rax_22 + (((sx.q(arg1[9].d) - 1) & r8_5) << 2))
        void* rax_24 = *(r9_3 + 8)
        
        if (rax_24 != 0)
            r9_3 = rax_24
        
        *(r9_3 + (((sx.q(arg1[9].d) - 1) & r8_5) << 2)) = i_1
else
    int32_t i_2 = -1
    int32_t i
    
    if (rax_1 != 0)
        void* r8 = &arg1[7]
        void* rcx = arg1[8]
        
        if (rcx != 0)
            r8 = rcx
        
        i = *(r8 + (((sx.q(arg1[9].d) - 1) & r10) << 2))
        
        if (i != 0xffffffff)
            int64_t r15_1 = *arg1
            r12 = zx.q(*arg4)
            
            do
                int64_t rcx_1 = sx.q(i) * 5
                void* rdi_1 = r15_1 + (rcx_1 << 3)
                
                if (*(r15_1 + (rcx_1 << 3)) == r12.d)
                    int64_t* rcx_2 = *(rdi_1 + 8)
                    int64_t* rdx_3 = *(arg4 + 8)
                    int64_t count = sx.q(rcx_2[1].d)
                    
                    if (count.d == rdx_3[1].d && memcmp(*rcx_2, *rdx_3, count) == 0)
                        goto label_1418df8a5
                
                i = *(rdi_1 + 0x20)
            while (i != 0xffffffff)
            
            i_2 = i
    
    i = i_2
label_1418df8a5:
    r12.b = i != 0xffffffff
    
    if (i == 0xffffffff)
        i_1 = arg5
    else
        int64_t rcx_4 = sx.q(i) * 5
        int64_t rax_5 = *arg1
        int64_t* rdi_2 = *(rax_5 + (rcx_4 << 3) + 0x10)
        
        if (rdi_2 != 0)
            int64_t rcx_5 = *rdi_2
            
            if (rcx_5 != 0)
                sub_140a74f90(rcx_5)
            
            j_sub_140a74f90(rdi_2)
        
        memmove(rax_5 + (rcx_4 << 3), arg4, 0x20)
        int64_t rcx_8 = sx.q(arg5)
        void* r10_1 = &arg1[2]
        
        if (*(arg1 + 0x34) != 0)
            *(*arg1 + sx.q(arg1[6].d) * 0x28) = rcx_8.d
        
        int64_t rax_8 = *arg1
        int64_t rdx_8 = rcx_8 * 5
        int32_t r9 = -1
        *(rax_8 + (rdx_8 << 3)) = 0xffffffff
        
        if (*(arg1 + 0x34) s> 0)
            r9 = arg1[6].d
        
        *(rax_8 + (rdx_8 << 3) + 4) = r9
        *(arg1 + 0x34) += 1
        i_1 = i
        arg1[6].d = rcx_8.d
        void* rax_9 = *(r10_1 + 0x10)
        
        if (rax_9 != 0)
            r10_1 = rax_9
        
        int32_t temp2_1
        int32_t temp3_1
        temp2_1:temp3_1 = sx.q(rcx_8.d)
        int64_t rcx_9 = sx.q((temp3_1 + (temp2_1 & 0x1f)) s>> 5)
        *(r10_1 + (rcx_9 << 2)) &= not.d(rol.d(1, rcx_8.b))
    
    if (i == 0xffffffff)
        r10 = zx.q(arg3)
        goto label_1418df98a

if (arg6 != 0)
    *arg6 = r12.b

*arg2 = i_1
return arg2
