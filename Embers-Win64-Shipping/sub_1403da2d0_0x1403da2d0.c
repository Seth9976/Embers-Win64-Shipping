// 函数: sub_1403da2d0
// 地址: 0x1403da2d0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_58
int64_t var_28 = __security_cookie ^ &var_58
char rcx = (*(arg1 + 0x154)).b

if ((rcx & 1) == 0)
    png_error(arg1, "Missing IHDR before bKGD")
    noreturn

int32_t result

if ((rcx & 4) != 0)
    png_warning(arg1, "Invalid bKGD after IDAT")
    result = sub_1403d8880(arg1, arg3)
else
    int64_t rax_1
    rax_1.b = *(arg1 + 0x25e)
    
    if ((rcx & 2) == 0 && rax_1.b == 3)
        png_warning(arg1, "Missing PLTE before bKGD")
        result = sub_1403d8880(arg1, arg3)
    else if (arg2 == 0 || (*(arg2 + 8) & 0x20) == 0)
        void* rdi_1 = 1
        
        if (rax_1.b != 3)
            rax_1.b &= 2
            rax_1.b u>>= 1
            rdi_1 = (zx.q(rax_1.b) << 2) + 2
        
        if (rdi_1 != zx.q(arg3))
            png_warning(arg1, "Incorrect bKGD chunk length")
            result = sub_1403d8880(arg1, arg3)
        else
            int16_t var_2e
            sub_1403cc480(arg1, &var_2e, rdi_1)
            sub_1403be770(arg1, &var_2e, rdi_1.d)
            result = sub_1403d8880(arg1, 0)
            
            if (result == 0)
                char rcx_8 = *(arg1 + 0x25e)
                
                if (rcx_8 != 3)
                    int16_t rax_8 = rol.w(var_2e, 8)
                    
                    if ((rcx_8 & 2) != 0)
                        *(arg1 + 0x272) = rax_8
                        int16_t var_2c
                        *(arg1 + 0x274) = rol.w(var_2c, 8)
                        int16_t var_2a
                        *(arg1 + 0x276) = rol.w(var_2a, 8)
                    else
                        *(arg1 + 0x278) = rax_8
                        *(arg1 + 0x276) = rax_8
                        *(arg1 + 0x274) = rax_8
                        *(arg1 + 0x272) = rax_8
                    
                    result = png_set_bKGD(arg1, arg2, arg1 + 0x270)
                else
                    uint32_t rax_4 = zx.d(var_2e.b)
                    *(arg1 + 0x270) = rax_4.b
                    
                    if (arg2 == 0)
                        result = png_set_bKGD(arg1, arg2, arg1 + 0x270)
                    else
                        uint32_t rcx_9 = zx.d(*(arg2 + 0x20))
                        
                        if (rcx_9 == 0)
                            result = png_set_bKGD(arg1, arg2, arg1 + 0x270)
                        else if (rax_4 u>= rcx_9)
                            result = png_warning(arg1, "Incorrect bKGD chunk index value")
                        else
                            int64_t rcx_10 = *(arg1 + 0x248)
                            uint64_t rax_6 = zx.q(rax_4) * 3
                            *(arg1 + 0x272) = zx.w(*(rcx_10 + rax_6))
                            *(arg1 + 0x274) = zx.w(*(rcx_10 + rax_6 + 1))
                            *(arg1 + 0x276) = zx.w(*(rcx_10 + rax_6 + 2))
                            result = png_set_bKGD(arg1, arg2, arg1 + 0x270)
    else
        png_warning(arg1, "Duplicate bKGD chunk")
        result = sub_1403d8880(arg1, arg3)

__security_check_cookie(var_28 ^ &var_58)
return result
