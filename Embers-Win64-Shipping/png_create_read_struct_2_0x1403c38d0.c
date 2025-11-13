// 函数: png_create_read_struct_2
// 地址: 0x1403c38d0
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
    *(result_1 + 0x464) = 0
    void var_d8
    
    if (__intrinsic_setjmp(png_set_longjmp_fn(result_1, longjmp, 0x100), &var_d8) != 0)
        TerminateProcess(GetCurrentProcess(), 0)
        noreturn
    
    png_set_mem_fn(result_1, arg5, arg6, arg7)
    png_set_error_fn(result_1, arg2, arg3, arg4)
    
    if (arg1 == 0)
        *(result_1 + 0x15a) |= 2
    else
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
        label_1403c3a62:
            
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
                goto label_1403c3a62
            
            char rax_12 = *arg1
            
            if (rax_12 == 0x31)
                rbx.b = arg1[2]
                
                if (rbx.b != 0x35)
                    goto label_1403c3a62
                
                rax_12 = *arg1
            
            if (rax_12 == 0x30 && arg1[2] s<= 0x38)
                goto label_1403c3a62
    
    if (var_a4 == 0)
        *(result_1 + 0x1c0) = 0x2000
        *(result_1 + 0x1b8) = png_malloc_warn(result_1, zx.q(*(result_1 + 0x1c0)))
        
        if (*(result_1 + 0x1b8) == 0)
            var_a4 = 1
    
    *(result_1 + 0x190) = sub_1403be6d0
    *(result_1 + 0x198) = j_png_free
    *(result_1 + 0x1a0) = result_1
    
    if (var_a4 == 0)
        uint64_t rax_23 = zx.q(sub_140371c50(result_1 + 0x160, "1.2.8", 0x58) + 6)
        
        if (rax_23.d u> 6)
        label_1403c3b62:
            png_warning(result_1, "Unknown zlib error")
            var_a4 = 1
        else
            switch (rax_23)
                case 0
                    png_warning(result_1, "zlib version error")
                    var_a4 = 1
                case 1, 3, 5
                    goto label_1403c3b62
                case 2
                    png_warning(result_1, "zlib memory error")
                    var_a4 = 1
                case 4
                    png_warning(result_1, "zlib stream error")
                    var_a4 = 1
    
    int64_t rdx_7 = *(result_1 + 0x1b8)
    
    if (var_a4 == 0)
        *(result_1 + 0x170) = rdx_7
        *(result_1 + 0x178) = *(result_1 + 0x1c0)
        png_set_read_fn(result_1, 0, nullptr)
        result = result_1
    else
        png_free(result_1, rdx_7)
        *(result_1 + 0x1b8) = 0
        sub_1403cc660(result_1, arg7)
        result = nullptr

__security_check_cookie(rax_1 ^ &var_58)
return result
