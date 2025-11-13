// 函数: sub_141311280
// 地址: 0x141311280
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* rdi = *arg3
*arg1 = 0
arg1[1] = 0
int64_t var_34 = 0
int32_t var_2c = 0
char var_20 = 0
char r9
char var_37 = r9
char var_36 = 1

if (*(rdi + 0x54) != 0)
    int32_t var_2c_1 = *(rdi + 0x4c)

void*** rax_2 = sub_14081d830(0x38, *(arg2 + 8), 1, 0)

if (rax_2 == 0)
    rax_2 = nullptr
else
    rax_2[1] = *(rdi + 8)
    rax_2[2] = 0
    *(rax_2 + 0x18) = 0.o
    *rax_2 = &data_142f34e88
    *(rax_2 + 0x28) = rdi.o

void* rdi_1 = arg3[1]
*arg1 = rax_2

if (rdi_1 != 0)
    int64_t var_34_1 = 0
    int32_t var_2c_2 = 0
    char var_20_1 = 0
    char var_37_1 = r9
    char var_36_1 = 1
    
    if (*(rdi_1 + 0x54) != 0)
        int32_t var_2c_3 = *(rdi_1 + 0x4c)
    
    void*** rax_4 = sub_14081d830(0x38, *(arg2 + 8), 1, 0)
    
    if (rax_4 == 0)
        rax_4 = nullptr
    else
        rax_4[1] = *(rdi_1 + 8)
        rax_4[2] = 0
        *(rax_4 + 0x18) = 0.o
        *rax_4 = &data_142f34e88
        *(rax_4 + 0x28) = rdi_1.o
    
    arg1[1] = rax_4

return arg1
