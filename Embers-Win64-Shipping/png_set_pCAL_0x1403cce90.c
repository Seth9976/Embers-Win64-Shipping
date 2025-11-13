// 函数: png_set_pCAL
// 地址: 0x1403cce90
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (arg1 == 0 || arg2 == 0)
    return 

int32_t rax_3 = MultiByteToWideChar(0, 0, arg3, 0xffffffff, nullptr, 0)

if (arg6 u> 3)
    png_error(arg1, "Invalid pCAL equation type")
    noreturn

if (arg7 s> 0)
    int64_t r13_1 = 0
    
    while (true)
        int64_t rdx =
            sx.q(MultiByteToWideChar(0, 0, *(arg9 + (r13_1 << 3)), 0xffffffff, nullptr, 0))
        
        if (sub_1403bf610(*(arg9 + (r13_1 << 3)), rdx) == 0)
            break
        
        r13_1 += 1
        
        if (r13_1 s>= sx.q(arg7))
            goto label_1403ccf83
    
    png_error(arg1, "Invalid format for pCAL parameter")
    noreturn

label_1403ccf83:
int64_t rbp_2 = sx.q(rax_3 + 1)
int64_t rax_6 = png_malloc_warn(arg1, rbp_2)
*(arg2 + 0xc8) = rax_6

if (rax_6 == 0)
    return png_warning(arg1, "Insufficient memory for pCAL purpose") __tailcall

memcpy(rax_6, arg3, rbp_2.d)
*(arg2 + 0xd0) = arg4
*(arg2 + 0xd4) = arg5
*(arg2 + 0xe8) = arg6.b
*(arg2 + 0xe9) = arg7.b
int64_t rbx_2 = sx.q(MultiByteToWideChar(0, 0, arg8, 0xffffffff, nullptr, 0) + 1)
int64_t rax_12 = png_malloc_warn(arg1, rbx_2)
*(arg2 + 0xd8) = rax_12

if (rax_12 == 0)
    return png_warning(arg1, "Insufficient memory for pCAL units") __tailcall

memcpy(rax_12, arg8, rbx_2.d)
int64_t r14_1 = sx.q(arg7)
int64_t rax_13 = png_malloc_warn(arg1, (r14_1 << 3) + 8)
*(arg2 + 0xe0) = rax_13

if (rax_13 == 0)
    return png_warning(arg1, "Insufficient memory for pCAL params") __tailcall

memset(rax_13, 0, (r14_1 << 3) + 8)

if (arg7 s> 0)
    int64_t rbp_4 = 0
    
    while (true)
        int64_t rbx_4 =
            sx.q(MultiByteToWideChar(0, 0, *(arg9 + (rbp_4 << 3)), 0xffffffff, nullptr, 0) + 1)
        *(*(arg2 + 0xe0) + (rbp_4 << 3)) = png_malloc_warn(arg1, rbx_4)
        int64_t rcx_9 = *(*(arg2 + 0xe0) + (rbp_4 << 3))
        
        if (rcx_9 == 0)
            break
        
        memcpy(rcx_9, *(arg9 + (rbp_4 << 3)), rbx_4.d)
        rbp_4 += 1
        
        if (rbp_4 s>= r14_1)
            goto label_1403cd0e3
    
    return png_warning(arg1, "Insufficient memory for pCAL parameter") __tailcall

label_1403cd0e3:
*(arg2 + 9) |= 4
*(arg2 + 0xec) |= 0x80
