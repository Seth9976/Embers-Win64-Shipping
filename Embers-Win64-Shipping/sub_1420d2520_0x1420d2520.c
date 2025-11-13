// 函数: sub_1420d2520
// 地址: 0x1420d2520
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (arg1 == 0)
    return 

uint64_t rax = *(arg1 + 0x10)

if (arg2 == 0)
    return 

uint64_t var_38 = rax
void* const i_2

if (rax == 0)
    i_2 = nullptr
else
    i_2 = *(rax + 0x50)

int32_t var_28_1 = 0xffffffff
int16_t var_24_1 = 0x101
char var_22_1 = 0
sub_1420c8e40(&var_38)
void* i_1

for (void* const i = i_2; i != 0; i = i_1)
    rax = *(i + 0x28)
    uint64_t arg_8 = rax
    
    if (rax == arg2)
        if (i != 0 && sub_140be1130(*(*arg3 + 0x10), *(i + 0x78)).b != 0)
            int64_t* rcx_3 = sx.q(*(i + 0x4c))
            *(rcx_3 + arg1) = *arg3
            *(rcx_3 + arg1 + 8) = arg3[1]
        
        break
    
    i_1 = *(i + 0x20)
    sub_1420c8e40(&var_38)
