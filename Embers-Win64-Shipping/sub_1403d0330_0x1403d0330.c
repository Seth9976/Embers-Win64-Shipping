// 函数: sub_1403d0330
// 地址: 0x1403d0330
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

uint64_t rbx = arg3
void var_98
int64_t rax_1 = __security_cookie ^ &var_98
__builtin_memset(arg5, 0, 0x20)

if (arg4.d == 0xffffffff)
    *arg5 = arg2
    arg5[1] = rbx
else
    if (arg4.d s>= 3)
        void var_78
        _snscanf(&var_78, 0x32, "Unknown compression type %d", arg4)
        png_warning(arg1, &var_78)
    
    *(arg1 + 0x168) = rbx.d
    *(arg1 + 0x160) = arg2
    *(arg1 + 0x178) = *(arg1 + 0x1c0)
    *(arg1 + 0x170) = *(arg1 + 0x1b8)
    
    while (true)
        if (sub_14036f750(arg1 + 0x160, 0) != 0)
        label_1403d05fa:
            char const* const rdx_13 = *(arg1 + 0x180)
            
            if (rdx_13 == 0)
                rdx_13 = "zlib error"
            
            png_error(arg1, rdx_13)
            noreturn
        
        if (*(arg1 + 0x178) == 0)
            int64_t rax_4 = sx.q(arg5[2].d)
            int64_t rbx_1 = sx.q(*(arg5 + 0x14))
            
            if (rax_4.d s>= rbx_1.d)
                *(arg5 + 0x14) = rax_4.d + 4
                int64_t rdi_1 = arg5[3]
                int64_t rax_5 = png_malloc(arg1, (rax_4 << 3) + 0x20)
                arg5[3] = rax_5
                
                if (rdi_1 != 0)
                    memcpy(rax_5, rdi_1, (rbx_1 << 3).d)
                    png_free(arg1, rdi_1)
            
            *(arg5[3] + (sx.q(arg5[2].d) << 3)) = png_malloc(arg1, zx.q(*(arg1 + 0x1c0)))
            memcpy(*(arg5[3] + (sx.q(arg5[2].d) << 3)), *(arg1 + 0x1b8), *(arg1 + 0x1c0))
            arg5[2].d += 1
            *(arg1 + 0x178) = *(arg1 + 0x1c0)
            *(arg1 + 0x170) = *(arg1 + 0x1b8)
            
            if (*(arg1 + 0x168) == 0)
                break
        else
            if (*(arg1 + 0x168) == 0)
                break
    
    while (true)
        int32_t rax_15 = sub_14036f750(arg1 + 0x160, 4)
        
        if (rax_15 == 1)
            int32_t rax_18 = *(arg1 + 0x178)
            int32_t rcx_20 = *(arg1 + 0x1c0)
            int32_t rbx_6 = arg5[2].d * rcx_20
            
            if (rcx_20 u<= rax_18)
                rcx_20 = rax_18
            
            rbx = zx.q(rbx_6 - rax_18 + rcx_20)
            break
        
        if (rax_15 != 0)
            goto label_1403d05fa
        
        if (*(arg1 + 0x178) == 0)
            int64_t rax_16 = sx.q(arg5[2].d)
            int64_t rbx_3 = sx.q(*(arg5 + 0x14))
            
            if (rax_16.d s>= rbx_3.d)
                *(arg5 + 0x14) = rax_16.d + 4
                int64_t rdi_2 = arg5[3]
                int64_t rax_17 = png_malloc(arg1, (rax_16 << 3) + 0x20)
                arg5[3] = rax_17
                
                if (rdi_2 != 0)
                    memcpy(rax_17, rdi_2, (rbx_3 << 3).d)
                    png_free(arg1, rdi_2)
            
            *(arg5[3] + (sx.q(arg5[2].d) << 3)) = png_malloc(arg1, zx.q(*(arg1 + 0x1c0)))
            memcpy(*(arg5[3] + (sx.q(arg5[2].d) << 3)), *(arg1 + 0x1b8), *(arg1 + 0x1c0))
            arg5[2].d += 1
            *(arg1 + 0x178) = *(arg1 + 0x1c0)
            *(arg1 + 0x170) = *(arg1 + 0x1b8)

__security_check_cookie(rax_1 ^ &var_98)
return zx.q(rbx.d)
