// 函数: sub_142a1d660
// 地址: 0x142a1d660
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* const* result = &__return_addr
int32_t i = 0
void* r9 = &arg1[0x182]
char* r14 = arg2
void* var_68 = r9

if (arg1[0x177].d s> 0)
    int64_t r10_1 = sx.q(*(arg1 + 0xba4))
    void* rbx_1 = arg7
    int128_t* rsi_1 = arg6
    void* rdi_1 = arg8
    int64_t var_60_1 = r10_1
    
    do
        char r8 = *r14
        int32_t rbp_1
        
        if (r8 == 4 || r8 == 9 || r14[9] == 0)
            rbp_1 = 0
        else
            rbp_1 = 1
        
        uint64_t rcx_1 = zx.q(*(zx.q(*(zx.q(r8) + r9 + 0xd00)) + r9
            + ((zx.q(r14[2]) + (zx.q(r14[0xb]) << 2)) << 2) + 0xc40))
        
        if (rcx_1.d != 0)
            uint64_t rdx_1 = zx.q(rcx_1.d)
            uint64_t rcx_2 = rcx_1 << 4
            void* var_58 = rcx_2 + r9
            void* var_50_1 = rcx_2 + 0x400 + r9
            void* var_48_1 = ((rdx_1 + 0x80) << 4) + r9
            void* var_40_1 = ((zx.q(*(((r10_1 + 0x32) << 6) + rdx_1 + r9)) + 0xc0) << 4) + r9
            
            if (i s> 0)
                sub_142a21d00(rsi_1, rbx_1, rdi_1, arg4, arg5, &var_58)
            
            if (rbp_1 == 0)
                sub_142a21bc0(rsi_1, rbx_1, rdi_1, arg4, arg5, &var_58)
            
            if (arg3 s> 0)
                sub_142a21c90(rsi_1, rbx_1, rdi_1, arg4, arg5, &var_58)
            
            if (rbp_1 == 0)
                sub_142a21ac0(rsi_1, rbx_1, rdi_1, arg4, arg5, &var_58)
            
            r10_1 = var_60_1
            r9 = var_68
        
        result = arg1
        rsi_1 = &rsi_1[1]
        rdi_1 += 8
        rbx_1 += 8
        r14 = &r14[0x4c]
        i += 1
    while (i s< result[0x177].d)

return result
