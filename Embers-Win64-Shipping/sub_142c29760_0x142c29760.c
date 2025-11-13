// 函数: sub_142c29760
// 地址: 0x142c29760
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

char rdi_2 = (zx.d(*arg1) << 8).b + arg1[1]
char* result_3 = &arg4[2]

if ((rdi_2 & 1) == 0)
    result_3 = arg4

char* result_1 = &result_3[2]

if ((rdi_2 & 2) == 0)
    result_1 = result_3

char* result = &result_1[2]

if ((rdi_2 & 4) == 0)
    result = result_1

char* result_2 = &result[2]

if ((rdi_2 & 8) == 0)
    result_2 = result

char* result_4 = result_2

if ((rdi_2 & 0x10) != 0)
    result_4 = &result_2[2]
    result = sub_142c26040(result_2, arg2, arg3)

if ((rdi_2 & 0x10) == 0 || result.b != 0)
    if ((rdi_2 & 0x20) != 0)
        char* result_5 = result_4
        result_4 = &result_4[2]
        result = sub_142c26040(result_5, arg2, arg3)
    
    if ((rdi_2 & 0x20) != 0 && result.b == 0)
        result.b = 0
    else
        if ((rdi_2 & 0x40) != 0)
            char* result_6 = result_4
            result_4 = &result_4[2]
            result = sub_142c26040(result_6, arg2, arg3)
        
        if ((rdi_2 & 0x40) != 0 && result.b == 0)
            result.b = 0
        else
            if (rdi_2 s< 0)
                result = sub_142c26040(result_4, arg2, arg3)
            
            if (rdi_2 s< 0 && result.b == 0)
                result.b = 0
            else
                result.b = 1
else
    result.b = 0

return result
