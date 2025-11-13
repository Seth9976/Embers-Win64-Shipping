// 函数: sub_1403da090
// 地址: 0x1403da090
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

uint64_t rsi = arg1
void var_168
int64_t rax_1 = __security_cookie ^ &var_168
char rax_2 = (*(arg1 + 0x154)).b

if ((rax_2 & 1) == 0)
    png_error(rsi, "Missing IHDR before tRNS")
    noreturn

int32_t result
char const* const rdx_2

if ((rax_2 & 4) != 0)
    rdx_2 = "Invalid tRNS after IDAT"
label_1403da24c:
    png_warning(rsi, rdx_2)
    result = sub_1403d8880(rsi, arg3)
else
    if (arg2 != 0 && (*(arg2 + 8) & 0x10) != 0)
        rdx_2 = "Duplicate tRNS chunk"
        goto label_1403da24c
    
    arg1.b = *(rsi + 0x25e)
    int16_t var_138
    
    if (arg1.b == 3)
        if ((rax_2 & 2) == 0)
            png_warning(rsi, "Missing PLTE before tRNS")
        
        if (arg3 u> 0x100 || zx.d(*(rsi + 0x250)) u< arg3)
            rdx_2 = "Incorrect tRNS chunk length"
            goto label_1403da24c
        
        if (arg3 != 0)
            uint64_t r14_1 = zx.q(arg3)
            sub_1403cc480(rsi, &var_138, r14_1)
            sub_1403be770(rsi, &var_138, r14_1.d)
            *(rsi + 0x252) = arg3.w
            goto label_1403da225
        
        png_warning(rsi, "Zero length tRNS chunk")
        result = sub_1403d8880(rsi, 0)
    else
        if (arg1.b != 2)
            if (arg1.b != 0)
                rdx_2 = "tRNS chunk not allowed with alpha channel"
                goto label_1403da24c
            
            if (arg3 != 2)
                rdx_2 = "Incorrect tRNS chunk length"
                goto label_1403da24c
            
            sub_1403cc480(rsi, &var_138, 2)
            sub_1403be770(rsi, &var_138, 2)
            *(rsi + 0x252) = 1
            *(rsi + 0x2f8) = rol.w(var_138, 8)
            goto label_1403da225
        
        if (arg3 != 6)
            rdx_2 = "Incorrect tRNS chunk length"
            goto label_1403da24c
        
        sub_1403cc480(rsi, &var_138, 6)
        sub_1403be770(rsi, &var_138, 6)
        *(rsi + 0x252) = 1
        *(rsi + 0x2f2) = rol.w(var_138, 8)
        int16_t var_136
        *(rsi + 0x2f4) = rol.w(var_136, 8)
        int16_t var_134
        *(rsi + 0x2f6) = rol.w(var_134, 8)
    label_1403da225:
        result = sub_1403d8880(rsi, 0)
        
        if (result == 0)
            result = png_set_tRNS(rsi, arg2, &var_138, zx.d(*(rsi + 0x252)), rsi + 0x2f0)
        else
            *(rsi + 0x252) = 0
__security_check_cookie(rax_1 ^ &var_168)
return result
