// 函数: sub_140d797d0
// 地址: 0x140d797d0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t r15
r15.b = 0
int32_t rsi = 1
int64_t rbx

if (arg1[1].d - *(arg1 + 0x34) == 1)
    rbx = zx.q(arg5)
label_140d79893:
    int32_t r8_1 = arg1[1].d - *(arg1 + 0x34)
    
    if (r8_1 u>= 4)
        uint32_t rax_5 = r8_1 u>> 1
        uint64_t rflags_1
        int32_t temp0_2
        temp0_2, rflags_1 = _bit_scan_reverse(rax_5 + 8)
        int32_t rcx_4
        
        if (rax_5 == 0xfffffff8)
            rcx_4 = 0x20
        else
            rcx_4 = 0x1f - temp0_2
        
        uint64_t rflags_2
        char temp0_3
        temp0_3, rflags_2 = _bit_scan_reverse(rax_5 + 7)
        char r9
        
        if (rax_5 == 0xfffffff9)
            r9 = 0x20
        else
            r9 = 0x1f - temp0_3
        
        rsi = 1 << ((not.d(rcx_4 << 0x1a s>> 0x1f)).b & (0x20 - r9))
    
    int32_t rax_8
    
    if (r8_1 s> 0)
        rax_8 = arg1[9].d
    
    if (r8_1 s> 0 && (rax_8 == 0 || rax_8 s< rsi))
        arg1[9].d = rsi
        sub_140abe590(arg1)
    else
        void* r9_1 = &arg1[7]
        int32_t rax_11 = (arg1[9].d - 1) & arg3
        *(arg4 + 0x34) = rax_11
        void* rdx_4 = *(r9_1 + 8)
        int64_t r8_2 = sx.q(rax_11)
        void* rax_12 = r9_1
        
        if (rdx_4 != 0)
            rax_12 = rdx_4
        
        arg4[6].d = *(rax_12 + (((sx.q(arg1[9].d) - 1) & r8_2) << 2))
        void* rax_14 = *(r9_1 + 8)
        
        if (rax_14 != 0)
            r9_1 = rax_14
        
        *(r9_1 + (((sx.q(arg1[9].d) - 1) & r8_2) << 2)) = rbx.d
else
    int32_t arg_8
    sub_140d6fba0(arg1, &arg_8, arg3, arg4)
    rbx = sx.q(arg_8)
    r15.b = rbx.d != 0xffffffff
    
    if (rbx.d == 0xffffffff)
        rbx = zx.q(arg5)
    else
        void* rbp_2 = rbx * 0x38 + *arg1
        int64_t* rcx = *(rbp_2 + 0x18)
        
        if (rcx != 0)
            (*(*rcx + 0x10))(rcx)
        
        int64_t* rcx_1 = *(rbp_2 + 8)
        
        if (rcx_1 != 0)
            int32_t temp1_1 = *(rcx_1 + 0xc)
            *(rcx_1 + 0xc) -= 1
            
            if (temp1_1 == 1)
                (*(*rcx_1 + 8))(rcx_1, 1)
        
        memmove(rbp_2, arg4, 0x30)
        sub_140afe9e0(arg1, arg5, 1)
    
    if (r15.b == 0)
        goto label_140d79893

*arg2 = rbx.d

if (arg6 != 0)
    *arg6 = r15.b

return arg2
