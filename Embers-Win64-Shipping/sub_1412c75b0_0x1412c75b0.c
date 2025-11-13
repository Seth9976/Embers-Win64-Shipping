// 函数: sub_1412c75b0
// 地址: 0x1412c75b0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* rax = *(arg1 + 0x20)
void* rdi = arg1
float zmm0 = *(rax + 0x30)
int64_t rsi

if (zmm0 * zmm0 >= 9.99999975e-06f)
label_1412c7600:
    char rax_1
    
    if ((*(rax + 0x138) & 4) != 0)
        rax_1 = sub_14122cc00(arg1)
    
    if ((*(rax + 0x138) & 4) == 0 || rax_1 == 0)
        rsi.b = 1
    else
        rsi.b = 0
else
    zmm0 = *(rax + 0x34)
    
    if (zmm0 * zmm0 >= 9.99999975e-06f)
        goto label_1412c7600
    
    zmm0 = *(rax + 0x38)
    
    if (not(zmm0 * zmm0 < 9.99999975e-06f))
        goto label_1412c7600
    
    rsi.b = 0

char rbp = *(*(rdi + 0x20) + 0x138)
char rbx_1

if ((rbp & 8) == 0)
    arg1.b = 0
    rbx_1 = rbp & 0x10
else
    rbx_1 = rbp & 0x10
    
    if (rbx_1 == 0)
        arg1.b = 0
        rbx_1 = rbp & 0x10
    else if (sub_14122cc00(rdi).b != 0)
        arg1.b = 0
        rbx_1 = rbp & 0x10
    else
        arg1.b = 1

uint64_t result

if (rsi.b != 0 && rbx_1 != 0 && ((*(*(rdi + 0x20) + 0x138) & 4) == 0 || arg1.b != 0))
    result.b = 1
    return result

result.b = 0
return result
