// 函数: sub_1403daad0
// 地址: 0x1403daad0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_68
int64_t rax_1 = __security_cookie ^ &var_68
char rax_2 = (*(arg1 + 0x154)).b

if ((rax_2 & 1) == 0)
    png_error(arg1, "Missing IHDR before sCAL")
    noreturn

uint64_t result

if ((rax_2 & 4) != 0)
    png_warning(arg1, "Invalid sCAL after IDAT")
    result = sub_1403d8880(arg1, arg3)
else if (arg2 == 0 || (*(arg2 + 9) & 0x40) == 0)
    void* rax_3 = png_malloc_warn(arg1, zx.q(arg3 + 1))
    *(arg1 + 0x4a0) = rax_3
    
    if (rax_3 == 0)
        png_warning(arg1, "Out of memory while processing sCAL chunk")
        result = sub_1403d8880(arg1, arg3)
    else
        uint64_t rbx_1 = zx.q(arg3)
        sub_1403cc480(arg1, rax_3, rbx_1)
        sub_1403be770(arg1, rax_3, rbx_1.d)
        *(*(arg1 + 0x4a0) + rbx_1) = 0
        int32_t rax_5 = sub_1403d8880(arg1, 0)
        char* rdx_3 = *(arg1 + 0x4a0)
        
        if (rax_5 == 0)
            rax_5.b = *rdx_3
            rax_5.b -= 1
            
            if (rax_5.b u>= 2)
                png_warning(arg1, "Invalid sCAL ignored: invalid unit")
            else
                void* var_30 = nullptr
                int32_t var_34 = 0
                
                if (rdx_3[1] == 0x2d)
                    png_warning(arg1, "Invalid sCAL chunk ignored: bad width format")
                else if (sub_1403bf470(rdx_3, rbx_1, &var_34, &var_30) == 0)
                    png_warning(arg1, "Invalid sCAL chunk ignored: bad width format")
                else
                    void* rax_7 = var_30
                    
                    if (rax_7 u>= rbx_1)
                        png_warning(arg1, "Invalid sCAL chunk ignored: bad width format")
                    else
                        char* rcx_5 = *(arg1 + 0x4a0)
                        var_30 = rax_7 + 1
                        
                        if (*(rcx_5 + rax_7) == 0)
                            int32_t rax_8
                            
                            if (*(rcx_5 + rax_7 + 1) != 0x2d)
                                rax_8 = sub_1403bf470(rcx_5, rbx_1, &var_34, &var_30)
                            
                            if (*(rcx_5 + rax_7 + 1) == 0x2d || rax_8 == 0 || var_30 != rbx_1)
                                png_warning(arg1, "Invalid sCAL chunk ignored: bad height format")
                            else
                                char* r9_3 = *(arg1 + 0x4a0)
                                png_set_sCAL_s(arg1, arg2, sx.d(*r9_3), &r9_3[1], rax_7 + 1 + r9_3)
                        else
                            png_warning(arg1, "Invalid sCAL chunk ignored: bad width format")
            
            rdx_3 = *(arg1 + 0x4a0)
        
        result = png_free(arg1, rdx_3)
        *(arg1 + 0x4a0) = 0
else
    png_warning(arg1, "Duplicate sCAL chunk")
    result = sub_1403d8880(arg1, arg3)

__security_check_cookie(rax_1 ^ &var_68)
return result
