// 函数: sub_140a6f7b0
// 地址: 0x140a6f7b0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t r15
r15.b = 0
int32_t rax_1 = arg1[0x602] - arg1[0x611]
int64_t r13 = sx.q(arg3)
int32_t rdi

if (rax_1 == 1)
    rdi = arg5
label_140a6f8c5:
    int32_t r9_2 = arg1[0x602] - arg1[0x611]
    uint32_t rax_7 = r9_2 u>> 1
    uint64_t rflags_1
    int32_t temp0_1
    temp0_1, rflags_1 = _bit_scan_reverse(rax_7)
    int32_t rcx_5
    
    if (rax_7 == 0)
        rcx_5 = 0x20
    else
        rcx_5 = 0x1f - temp0_1
    
    uint64_t rflags_2
    char temp0_3
    temp0_3, rflags_2 = _bit_scan_reverse(rax_7 - 1)
    char r8_1
    
    if (rax_7 == 1)
        r8_1 = 0x20
    else
        r8_1 = 0x1f - temp0_3
    
    int32_t rax_9 = 0x80
    int32_t rbp_1 = 1 << ((not.d(rcx_5 << 0x1a s>> 0x1f)).b & (0x20 - r8_1))
    
    if (rbp_1 u>= 0x80)
        if (r9_2 u< 4)
            rbp_1 = 0x80
        
        rax_9 = rbp_1
    
    int32_t rcx_10
    
    if (r9_2 s> 0)
        rcx_10 = arg1[0x694]
    
    if (r9_2 s> 0 && (rcx_10 == 0 || rcx_10 s< rax_9))
        arg1[0x694] = rax_9
        sub_140a85820(arg1)
    else
        void* r9_3 = &arg1[0x612]
        int32_t rax_12 = (arg1[0x694] - 1) & r13.d
        arg4[5] = rax_12
        void* rdx_8 = *(r9_3 + 0x200)
        int64_t r8_2 = sx.q(rax_12)
        void* rax_13 = r9_3
        
        if (rdx_8 != 0)
            rax_13 = rdx_8
        
        arg4[4] = *(rax_13 + (((sx.q(arg1[0x694]) - 1) & r8_2) << 2))
        void* rax_15 = *(r9_3 + 0x200)
        
        if (rax_15 != 0)
            r9_3 = rax_15
        
        *(r9_3 + (((sx.q(arg1[0x694]) - 1) & r8_2) << 2)) = rdi
else
    int32_t rbx_1
    
    if (rax_1 != 0)
        void* r8 = &arg1[0x612]
        void* rcx = *(arg1 + 0x1a48)
        
        if (rcx != 0)
            r8 = rcx
        
        rbx_1 = *(r8 + (((sx.q(arg1[0x694]) - 1) & r13) << 2))
    
    if (rax_1 == 0 || rbx_1 == 0xffffffff)
    label_140a6f856:
        rbx_1 = -1
    else
        int32_t* rax_2 = *(arg1 + 0x1800)
        int32_t* rdx_3 = arg1
        
        if (rax_2 != 0)
            rdx_3 = rax_2
        
        while (true)
            int64_t rcx_1 = sx.q(rbx_1) * 3
            
            if (rdx_3[rcx_1 * 2] == *arg4)
                break
            
            rbx_1 = rdx_3[rcx_1 * 2 + 4]
            
            if (rbx_1 == 0xffffffff)
                goto label_140a6f856
    
    r15.b = rbx_1 != 0xffffffff
    
    if (rbx_1 == 0xffffffff)
        rdi = arg5
    else
        int32_t* rax_4 = *(arg1 + 0x1800)
        int32_t* rdx_4 = arg1
        
        if (rax_4 != 0)
            rdx_4 = rax_4
        
        memmove(&rdx_4[sx.q(rbx_1) * 6], arg4, 0x10)
        sub_140a87a70(arg1, arg5, 1)
        rdi = rbx_1
    
    if (rbx_1 == 0xffffffff)
        goto label_140a6f8c5

*arg2 = rdi

if (arg6 != 0)
    *arg6 = r15.b

return arg2
