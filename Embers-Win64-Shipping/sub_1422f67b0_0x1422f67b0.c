// 函数: sub_1422f67b0
// 地址: 0x1422f67b0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

char rcx = arg1[6].b

if (rcx - 1 u<= 1 || rcx u>= 6)
    return 0

arg1[6].b = 1
arg1[5] = sub_140626600(sub_140cde0b0())
sub_1422dbf70(arg1, arg2)

if (arg1[3].d s> 2)
    sub_1422eba20(arg1, 2)

void*** rax_3 = j_sub_140a82f30(0xb0)
void*** rdi_1 = rax_3

if (rax_3 == 0)
    rdi_1 = nullptr
else
    int64_t var_38_1 = 0
    *rdi_1 = &data_143321810
    void** const var_28_1 = &data_142d42d18
    int64_t (* var_48)() = sub_140594850
    sub_1422d62b0(&rdi_1[2], arg1, 0, &var_48)
    rdi_1[0x12].d = 0
    rdi_1[0x13] = 0
    rdi_1[0x14] = 0

void*** rcx_5 = arg1[0xa]
void*** rsi = rcx_5

if (rcx_5 != rdi_1)
    arg1[0xa] = rdi_1
    rsi = rdi_1
    
    if (rcx_5 != 0)
        (*rcx_5)[2](rcx_5, 1)
        rsi = arg1[0xa]

rsi[0x12].d += 1
int64_t* rcx_6 = rsi[0x13]
rsi[0x14] = 0
sub_140a4fc50(rcx_6)
rsi[0x13] = 0
sub_1422e1ae0(&rsi[2])
rsi[0x12].d -= 1
return arg1[5]
