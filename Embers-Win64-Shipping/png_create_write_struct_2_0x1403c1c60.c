// 函数: png_create_write_struct_2
// 地址: 0x1403c1c60
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

uint64_t rbx
uint64_t var_40 = rbx
void var_58
int64_t rax_1 = __security_cookie ^ &var_58
int32_t var_a4 = 0
void* result_1 = sub_1403cc5b0(1, arg6)
void* const result

if (result_1 == 0)
    result = nullptr
else
    *(result_1 + 0x45c) = 0xf4240
    *(result_1 + 0x460) = 0xf4240
    void var_d8
    
    if (__intrinsic_setjmp(png_set_longjmp_fn(result_1, longjmp, 0x100), &var_d8) != 0)
        TerminateProcess(GetCurrentProcess(), 0)
        noreturn
    
    png_set_mem_fn(result_1, arg5, arg6, arg7)
    png_set_error_fn(result_1, arg2, arg3, arg4)
    
    if (arg1 != 0)
        int64_t rsi_1 = 0
        bool cond:0_1
        
        do
            if (arg1[rsi_1] != (*"1.5.2")[rsi_1])
                *(result_1 + 0x15a) |= 2
            
            cond:0_1 = (*"1.5.2")[rsi_1] != 0
            rsi_1 += 1
        while (cond:0_1)
    
    if ((*(result_1 + 0x15a) & 2) != 0)
        if (arg1 == 0)
        label_1403c1dd5:
            
            if (arg1 != 0)
                char const* const var_b8_1 = "1.5.2"
                void var_98
                _snscanf(&var_98, 0x50, 
                    "Application built with libpng-%.20s but running with %.20s", arg1)
                png_warning(result_1, &var_98)
            
            var_a4 = 1
        else
            rbx.b = *arg1
            
            if (rbx.b != 0x31)
                goto label_1403c1dd5
            
            char rax_10 = *arg1
            
            if (rax_10 == 0x31)
                rbx.b = arg1[2]
                
                if (rbx.b != 0x35)
                    goto label_1403c1dd5
                
                rax_10 = *arg1
            
            if (rax_10 == 0x30 && arg1[2] s<= 0x38)
                goto label_1403c1dd5
    
    *(result_1 + 0x1c0) = 0x2000
    
    if (var_a4 == 0)
        *(result_1 + 0x1b8) = png_malloc_warn(result_1, zx.q(*(result_1 + 0x1c0)))
        
        if (*(result_1 + 0x1b8) == 0)
            var_a4 = 1
    
    if (var_a4 == 0)
        png_set_write_fn(result_1, 0, nullptr, nullptr)
        *(result_1 + 0x3b0) = 1
        int64_t rdx_8 = *(result_1 + 0x3b8)
        
        if (rdx_8 != 0)
            *(result_1 + 0x3b8) = 0
            png_free(result_1, rdx_8)
        
        int64_t rdx_9 = *(result_1 + 0x3c0)
        
        if (rdx_9 != 0)
            *(result_1 + 0x3c0) = 0
            png_free(result_1, rdx_9)
        
        int64_t rdx_10 = *(result_1 + 0x3c8)
        
        if (rdx_10 != 0)
            *(result_1 + 0x3c8) = 0
            png_free(result_1, rdx_10)
        
        result = result_1
    else
        png_free(result_1, *(result_1 + 0x1b8))
        *(result_1 + 0x1b8) = 0
        sub_1403cc660(result_1, arg7)
        result = nullptr

__security_check_cookie(rax_1 ^ &var_58)
return result
