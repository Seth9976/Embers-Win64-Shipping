// 函数: sub_1428220d8
// 地址: 0x1428220d8
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t rbx = arg2
char* rdx_2
wchar16 arg_10
wchar16 arg_18
int32_t rsi
char rdi_1

if (arg2 u<= 0x10ffff)
    rsi = rbx
    
    if (rbx s> 0x7f)
        rdi_1 = (rbx s>> 6).b
        
        if (rbx s> 0x7ff)
            goto label_142822103
        
        arg_10.b = rdi_1 | 0xc0
        sub_14281f460(arg1, &arg_10, 1)
        rbx.b &= 0x3f
        rdx_2 = &arg_18
        rbx.b |= 0x80
        arg_18.b = rbx.b
    else
        arg_10.b = rbx.b
        rdx_2 = &arg_10
else
    rbx = 0xfffd
    rdi_1 = -1
    rsi = 0xfffd
label_142822103:
    int32_t r12_1 = rsi
    wchar16* rdx = &arg_10
    rsi.b &= 0x3f
    char r12_2 = (r12_1 s>> 0xc).b
    rsi.b |= 0x80
    rdi_1 = (rdi_1 & 0x3f) | 0x80
    char arg_20
    
    if (rbx s> 0xffff)
        arg_10.b = (rbx s>> 0x12).b | 0xf0
        sub_14281f460(arg1, rdx, 1)
        arg_18.b = (r12_2 & 0x3f) | 0x80
        sub_14281f460(arg1, &arg_18, 1)
        arg_20 = rdi_1
        sub_14281f460(arg1, &arg_20, 1)
        char var_48
        rdx_2 = &var_48
        var_48 = rsi.b
    else
        arg_10.b = r12_2 | 0xe0
        sub_14281f460(arg1, rdx, 1)
        arg_18.b = rdi_1
        sub_14281f460(arg1, &arg_18, 1)
        rdx_2 = &arg_20
        arg_20 = rsi.b
return sub_14281f460(arg1, rdx_2, 1)
