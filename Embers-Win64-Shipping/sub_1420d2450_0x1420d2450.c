// 函数: sub_1420d2450
// 地址: 0x1420d2450
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (arg1 == 0)
    return 

int32_t* i = *(arg1 + 0x10)

if (arg2 == 0)
    return 

int32_t* i_1 = i
int32_t* i_3

if (i == 0)
    i_3 = nullptr
else
    i_3 = *(i + 0x50)

int32_t var_18_1 = 0xffffffff
int16_t var_14_1 = 0x101
char var_12_1 = 0
sub_1420c8d50(&i_1)
int32_t* i_2

for (i = i_3; i != 0; i = i_2)
    int64_t rcx_1 = *(i + 0x28)
    int64_t arg_8 = rcx_1
    
    if (rcx_1 == arg2)
        if (i != 0)
            *(sx.q(i[0x13]) + arg1) = arg3
        
        break
    
    i_2 = *(i + 0x20)
    sub_1420c8d50(&i_1)
