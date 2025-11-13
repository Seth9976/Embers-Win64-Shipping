// 函数: sub_140b57e80
// 地址: 0x140b57e80
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

bool cond:0 = *(arg2 + 4) == 0
int64_t rax = -1
char const* const var_28 = arg2 + 6

if (cond:0)
    do
        rax += 1
    while ((arg2 + 6)[rax] != 0)
    
    char var_1c_1 = 0
else
    do
        rax += 1
    while (*(arg2 + 6 + (rax << 1)) != 0)
    
    char var_1c = 1

int32_t var_20 = rax.d

if (_mm_bsrli_si128(var_28.o, 8).d u>= 0x400)
    int32_t var_20_1 = 0x18
    var_28 = "ERROR_NAME_SIZE_EXCEEDED"
    var_28.o = var_28.o
    sub_140b57990(arg1, &var_28, 1)
    return arg1

void* rax_2

if (data_143e05168 == 0)
    rax_2 = sub_140b58510(&data_143e05180)
    data_143e05168 = 1
else
    rax_2 = &data_143e05180

var_28.o = var_28.o
void var_18
*arg1 = *sub_140b637e0(rax_2, &var_18, &var_28)
*(arg1 + 4) = 0
return arg1
