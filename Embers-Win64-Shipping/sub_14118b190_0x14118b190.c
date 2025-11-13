// 函数: sub_14118b190
// 地址: 0x14118b190
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t r12
r12.b = 0
int32_t rax_1 = arg1[1].d - *(arg1 + 0x34)
int64_t* r11 = arg4
int32_t rbp = 1
int64_t rbx = sx.q(arg3)
int32_t rdi_1

if (rax_1 == 1)
    rdi_1 = arg5
label_14118b342:
    int32_t r8_4 = arg1[1].d - *(arg1 + 0x34)
    
    if (r8_4 u>= 4)
        uint32_t rax_14 = r8_4 u>> 1
        uint64_t rflags_1
        int32_t temp0_2
        temp0_2, rflags_1 = _bit_scan_reverse(rax_14 + 8)
        int32_t rcx_11
        
        if (rax_14 == 0xfffffff8)
            rcx_11 = 0x20
        else
            rcx_11 = 0x1f - temp0_2
        
        uint64_t rflags_2
        char temp0_3
        temp0_3, rflags_2 = _bit_scan_reverse(rax_14 + 7)
        char r9_1
        
        if (rax_14 == 0xfffffff9)
            r9_1 = 0x20
        else
            r9_1 = 0x1f - temp0_3
        
        rbp = 1 << ((not.d(rcx_11 << 0x1a s>> 0x1f)).b & (0x20 - r9_1))
    
    int32_t rax_17
    
    if (r8_4 s> 0)
        rax_17 = arg1[9].d
    
    if (r8_4 s> 0 && (rax_17 == 0 || rax_17 s< rbp))
        arg1[9].d = rbp
        sub_1410ae510(arg1)
    else
        void* r9_2 = &arg1[7]
        int32_t rax_20 = (arg1[9].d - 1) & rbx.d
        *(r11 + 0x14) = rax_20
        void* rdx_10 = *(r9_2 + 8)
        int64_t r8_5 = sx.q(rax_20)
        void* rax_21 = r9_2
        
        if (rdx_10 != 0)
            rax_21 = rdx_10
        
        r11[2].d = *(rax_21 + (((sx.q(arg1[9].d) - 1) & r8_5) << 2))
        void* rax_23 = *(r9_2 + 8)
        
        if (rax_23 != 0)
            r9_2 = rax_23
        
        *(r9_2 + (((sx.q(arg1[9].d) - 1) & r8_5) << 2)) = rdi_1
else
    int32_t r15_1 = -1
    int32_t rbx_1
    
    if (rax_1 != 0)
        void* r8 = &arg1[7]
        void* rcx = arg1[8]
        
        if (rcx != 0)
            r8 = rcx
        
        rbx_1 = *(r8 + (((sx.q(arg1[9].d) - 1) & rbx) << 2))
    
    if (rax_1 == 0 || rbx_1 == 0xffffffff)
    label_14118b226:
        rbx_1 = -1
    else
        int64_t rdx_3 = *arg1
        
        while (true)
            int64_t rcx_1 = sx.q(rbx_1) * 3
            
            if (*(rdx_3 + (rcx_1 << 3)) == *arg4)
                break
            
            rbx_1 = *(rdx_3 + (rcx_1 << 3) + 0x10)
            
            if (rbx_1 == 0xffffffff)
                goto label_14118b226
    
    r12.b = rbx_1 != 0xffffffff
    
    if (rbx_1 == 0xffffffff)
        rdi_1 = arg5
    else
        int64_t rcx_2 = sx.q(rbx_1) * 3
        int64_t rax_4 = *arg1
        int64_t* rdi = *(rax_4 + (rcx_2 << 3) + 8)
        
        if (rdi != 0)
            rdi[0x1a].d -= 1
            
            if (rdi[0x1a].d == 1)
                sub_1405d16e0(rdi, nullptr)
                sub_14081d930(&rdi[1], nullptr)
                sub_1405d16e0(&rdi[2], nullptr)
                sub_141096260(&rdi[3], 0)
                sub_141096040(&rdi[0xd], 0)
                r11 = arg4
        
        memmove(rax_4 + (rcx_2 << 3), r11, 0x10)
        int64_t rcx_9 = sx.q(arg5)
        void* r10_1 = &arg1[2]
        
        if (*(arg1 + 0x34) != 0)
            *(*arg1 + sx.q(arg1[6].d) * 0x18) = rcx_9.d
        
        int64_t rax_7 = *arg1
        int64_t rdx_6 = rcx_9 * 3
        *(rax_7 + (rdx_6 << 3)) = 0xffffffff
        
        if (*(arg1 + 0x34) s> 0)
            r15_1 = arg1[6].d
        
        r11 = arg4
        *(rax_7 + (rdx_6 << 3) + 4) = r15_1
        rdi_1 = rbx_1
        *(arg1 + 0x34) += 1
        arg1[6].d = rcx_9.d
        void* rax_8 = *(r10_1 + 0x10)
        
        if (rax_8 != 0)
            r10_1 = rax_8
        
        int32_t temp3_1
        int32_t temp4_1
        temp3_1:temp4_1 = sx.q(rcx_9.d)
        int64_t rcx_10 = sx.q((temp4_1 + (temp3_1 & 0x1f)) s>> 5)
        *(r10_1 + (rcx_10 << 2)) &= not.d(rol.d(1, rcx_9.b))
    
    if (rbx_1 == 0xffffffff)
        rbx = zx.q(arg3)
        goto label_14118b342

*arg2 = rdi_1

if (arg6 != 0)
    *arg6 = r12.b

return arg2
