// 函数: sub_142a3ee60
// 地址: 0x142a3ee60
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void** rbx = arg2

if (arg1 u<= 0x4000)
    int64_t* rcx = *arg2
    
    if (rcx != 0)
        return sub_142a3f950(rcx, rbx) __tailcall
    
    int64_t* rax_1 = sub_142a3f460(rcx, 0, zx.q((&rcx[2]).d), arg2, arg3)
    
    if (rax_1 != 0)
        rax_1[2] = 0
        rax_1[3] = rbx[1]
        void* rax_3 = rbx[1]
        
        if (rax_3 != 0)
            *(rax_3 + 0x10) = rax_1
            rbx[1] = rax_1
            return sub_142a3f950(*rbx, rbx) __tailcall
        
        *rbx = rax_1
        rbx[1] = rax_1
        return sub_142a3f950(rax_1, rbx) __tailcall
else if (arg1 u<= 0x20000)
    int64_t* rcx_4 = arg2[2]
    
    if (rcx_4 != 0)
        return sub_142a3f950(rcx_4, rbx) __tailcall
    
    int64_t* rax_6 = sub_142a3f460(rcx_4, (rcx_4 + 1).d, zx.q((rcx_4 + 0x13).d), rbx, arg3)
    
    if (rax_6 != 0)
        rax_6[2] = 0
        rax_6[3] = rbx[3]
        void* rax_8 = rbx[3]
        
        if (rax_8 != 0)
            *(rax_8 + 0x10) = rax_6
            rbx[3] = rax_6
            return sub_142a3f950(rbx[2], rbx) __tailcall
        
        rbx[2] = rax_6
        rbx[3] = rax_6
        return sub_142a3f950(rax_6, rbx) __tailcall
else if (arg1 u> 0x200000)
    int64_t* rax_13 = sub_142a3f460(arg1, 3, 0x16, rbx, arg3)
    
    if (rax_13 != 0)
        rax_13[6] = 1
        rax_13[0xc] = 0
        *(rax_13 + 0x71) |= 1
        return &rax_13[0xe]
else
    int64_t* rax_11 = sub_142a3f460(0, 2, 0x16, rbx, arg3)
    
    if (rax_11 != 0)
        rax_11[6] = 1
        *(rax_11 + 0x71) |= 1
        return &rax_11[0xe]

return 0
