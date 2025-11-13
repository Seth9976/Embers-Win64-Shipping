// 函数: sub_141ea0170
// 地址: 0x141ea0170
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (arg1 == 0)
    return 

void* rax = *(arg1 + 0x10)

if (arg2 == 0)
    return 

void* var_28 = rax
int64_t* i_2

if (rax == 0)
    i_2 = nullptr
else
    i_2 = *(rax + 0x50)

int32_t var_18_1 = 0xffffffff
int16_t var_14_1 = 0x101
char var_12_1 = 0
sub_141ea61c0(&var_28)
int64_t* i_1

for (int64_t* i = i_2; i != 0; i = i_1)
    rax = i[5]
    void* arg_8 = rax
    
    if (rax == arg2)
        if (i != 0)
            (*(*i + 0xb0))(arg4, sx.q(*(i + 0x4c)) + arg1, arg3, 1)
        
        break
    
    i_1 = i[4]
    sub_141ea61c0(&var_28)
