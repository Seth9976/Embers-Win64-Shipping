// 函数: sub_1403da4c0
// 地址: 0x1403da4c0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_268
int64_t rax_1 = __security_cookie ^ &var_268
char rax_2 = (*(arg1 + 0x154)).b

if ((rax_2 & 1) == 0)
    png_error(arg1, "Missing IHDR before hIST")
    noreturn

int32_t result

if ((rax_2 & 4) != 0)
    png_warning(arg1, "Invalid hIST after IDAT")
    result = sub_1403d8880(arg1, arg3)
else if ((rax_2 & 2) == 0)
    png_warning(arg1, "Missing PLTE before hIST")
    result = sub_1403d8880(arg1, arg3)
else if (arg2 == 0 || (*(arg2 + 8) & 0x40) == 0)
    uint32_t rax_4
    
    if (arg3 u<= 0x201)
        rax_4 = arg3 u>> 1
    
    if (arg3 u> 0x201 || rax_4 != zx.d(*(arg1 + 0x250)))
        png_warning(arg1, "Incorrect hIST chunk length")
        result = sub_1403d8880(arg1, arg3)
    else
        void var_238
        
        if (rax_4 != 0)
            int64_t i = 0
            
            do
                int16_t var_23a
                sub_1403cc480(arg1, &var_23a, 2)
                sub_1403be770(arg1, &var_23a, 2)
                *(&var_238 + i) = rol.w(var_23a, 8)
                i += 2
            while (zx.q(rax_4) * 2 != i)
        
        result = sub_1403d8880(arg1, 0)
        
        if (result == 0)
            result = png_set_hIST(arg1, arg2, &var_238)
else
    png_warning(arg1, "Duplicate hIST chunk")
    result = sub_1403d8880(arg1, arg3)

__security_check_cookie(rax_1 ^ &var_268)
return result
