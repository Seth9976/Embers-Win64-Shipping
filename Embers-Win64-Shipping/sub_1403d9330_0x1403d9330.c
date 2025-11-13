// 函数: sub_1403d9330
// 地址: 0x1403d9330
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_58
int64_t rax_1 = __security_cookie ^ &var_58
int32_t var_2c = 0
char rax_2 = (*(arg1 + 0x154)).b

if ((rax_2 & 1) == 0)
    png_error(arg1, "Missing IHDR before sBIT")
    noreturn

int32_t result

if ((rax_2 & 4) != 0)
    png_warning(arg1, "Invalid sBIT after IDAT")
    result = sub_1403d8880(arg1, arg3)
else
    if ((rax_2 & 2) != 0)
        png_warning(arg1, "Out of place sBIT chunk")
    
    if (arg2 == 0 || (*(arg2 + 8) & 2) == 0)
        uint64_t rdi_1 = 3
        
        if (*(arg1 + 0x25e) != 3)
            rdi_1 = zx.q(*(arg1 + 0x262))
        
        if (arg3 u> 4 || rdi_1 != zx.q(arg3))
            png_warning(arg1, "Incorrect sBIT chunk length")
            result = sub_1403d8880(arg1, arg3)
        else
            sub_1403cc480(arg1, &var_2c, rdi_1)
            sub_1403be770(arg1, &var_2c, rdi_1.d)
            result = sub_1403d8880(arg1, 0)
            
            if (result == 0)
                result.b = var_2c.b
                void* rcx_4
                char rdx_2
                char rbx_1
                
                if ((*(arg1 + 0x25e) & 2) != 0)
                    rcx_4 = &var_2c:3
                    rdx_2 = var_2c:1.b
                    rbx_1 = var_2c:2.b
                else
                    rcx_4 = &var_2c:1
                    *(arg1 + 0x2db) = result.b
                    rdx_2 = result.b
                    rbx_1 = result.b
                
                rcx_4.b = *rcx_4
                *(arg1 + 0x2d8) = result.b
                *(arg1 + 0x2d9) = rdx_2
                *(arg1 + 0x2da) = rbx_1
                *(arg1 + 0x2dc) = rcx_4.b
                result = png_set_sBIT(arg1, arg2, arg1 + 0x2d8)
    else
        png_warning(arg1, "Duplicate sBIT chunk")
        result = sub_1403d8880(arg1, arg3)

__security_check_cookie(rax_1 ^ &var_58)
return result
