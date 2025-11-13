// 函数: sub_140fcbc40
// 地址: 0x140fcbc40
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* var_18 = nullptr
int32_t i_2 = 0
int32_t rax = sub_140a2ccb0(arg1, &var_18, U":\t", 0)
char rax_1

if (rax == 2)
    rax_1 = sub_140fcbb40(var_18, arg2)

int64_t rsi

if (rax != 2 || rax_1 == 0)
    rsi.b = 0
else
    void* rax_2 = var_18
    
    if (*(rax_2 + 0x18) == 0)
        *(arg2 + 4) = _wtoi(&data_142d40450)
        rsi.b = 1
    else
        *(arg2 + 4) = _wtoi(*(rax_2 + 0x10))
        rsi.b = 1

int32_t i_1 = i_2
void* rbx_1 = var_18

if (i_1 != 0)
    int32_t i
    
    do
        int64_t rcx_2 = *rbx_1
        
        if (rcx_2 != 0)
            sub_140a74f90(rcx_2)
        
        rbx_1 += 0x10
        i = i_1
        i_1 -= 1
    while (i != 1)
    rbx_1 = var_18

if (rbx_1 != 0)
    sub_140a74f90(rbx_1)

return zx.q(rsi.b)
