// 函数: sub_1408bdd50
// 地址: 0x1408bdd50
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t rbp
rbp.b = 0
int32_t rax_1 = arg1[1].d - *(arg1 + 0x34)
int32_t rsi = 1
int64_t r12 = sx.q(arg3)
int32_t rbx_1

if (rax_1 != 1 && rax_1 != 0)
    void* r8 = &arg1[7]
    void* rcx = arg1[8]
    
    if (rcx != 0)
        r8 = rcx
    
    rbx_1 = *(r8 + (((sx.q(arg1[9].d) - 1) & r12) << 2))

if (rax_1 == 1 || rax_1 == 0 || rbx_1 == 0xffffffff)
label_1408bddd6:
    rbx_1 = arg5
label_1408bddde:
    int32_t r10_2 = arg1[1].d - *(arg1 + 0x34)
    
    if (r10_2 u>= 4)
        uint32_t rdx_5 = r10_2 u>> 1
        uint64_t rflags_1
        int32_t temp0_1
        temp0_1, rflags_1 = _bit_scan_reverse(rdx_5 + 8)
        uint64_t rflags_2
        char temp0_2
        temp0_2, rflags_2 = _bit_scan_reverse(rdx_5 + 7)
        rsi = 1 << ((0x20 - (0x1f - temp0_2)) & (not.d((0x1f - temp0_1) << 0x1a s>> 0x1f)).b)
    
    int32_t rax_5
    
    if (r10_2 s> 0)
        rax_5 = arg1[9].d
    
    if (r10_2 s> 0 && (rax_5 == 0 || rax_5 s< rsi))
        arg1[9].d = rsi
        sub_1408c20a0(arg1)
    else
        void* r9_5 = &arg1[7]
        int32_t rax_9 = (arg1[9].d - 1) & r12.d
        *(arg4 + 0x14) = rax_9
        void* rdx_8 = *(r9_5 + 8)
        int64_t r8_2 = sx.q(rax_9)
        void* rax_10 = r9_5
        
        if (rdx_8 != 0)
            rax_10 = rdx_8
        
        arg4[2].d = *(rax_10 + (((sx.q(arg1[9].d) - 1) & r8_2) << 2))
        void* rax_12 = *(r9_5 + 8)
        
        if (rax_12 != 0)
            r9_5 = rax_12
        
        *(r9_5 + (((sx.q(arg1[9].d) - 1) & r8_2) << 2)) = rbx_1
else
    int64_t rdx_3 = *arg1
    
    while (true)
        int64_t rcx_1 = sx.q(rbx_1) * 3
        
        if (*(rdx_3 + (rcx_1 << 3)) == *arg4)
            break
        
        rbx_1 = *(rdx_3 + (rcx_1 << 3) + 0x10)
        
        if (rbx_1 == 0xffffffff)
            goto label_1408bddd6
    
    rbp.b = rbx_1 != 0xffffffff
    
    if (rbx_1 == 0xffffffff)
        rbx_1 = arg5
    else
        memmove(rdx_3 + sx.q(rbx_1) * 0x18, arg4, 0x10)
        sub_140638300(arg1, arg5, 1)
    
    if (rbp.b == 0)
        goto label_1408bddde

*arg2 = rbx_1

if (arg6 != 0)
    *arg6 = rbp.b

return arg2
