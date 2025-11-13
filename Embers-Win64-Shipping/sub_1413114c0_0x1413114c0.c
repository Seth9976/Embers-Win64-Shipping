// 函数: sub_1413114c0
// 地址: 0x1413114c0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* rsi = *arg3
*arg1 = 0
arg1[1] = 0
char r9
char var_20 = r9
char var_1f = 0
void*** rax = sub_14081d830(0x28, *(arg2 + 8), 1, 0)

if (rax == 0)
    rax = nullptr
else
    rax[1] = *(rsi + 8)
    rax[2] = 0
    *(rax + 0x18) = rsi.o
    *rax = &data_142f285c0

void* rdi_1 = arg3[1]
*arg1 = rax

if (rdi_1 != 0)
    char var_20_1 = r9
    char var_1f_1 = 0
    void*** rax_1 = sub_14081d830(0x28, *(arg2 + 8), 1, 0)
    
    if (rax_1 == 0)
        rax_1 = nullptr
    else
        rax_1[1] = *(rdi_1 + 8)
        rax_1[2] = 0
        *(rax_1 + 0x18) = rdi_1.o
        *rax_1 = &data_142f285c0
    
    arg1[1] = rax_1

return arg1
