// 函数: sub_1420d1790
// 地址: 0x1420d1790
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (arg1 == 0)
    return 

uint64_t rax = *(arg1 + 0x10)

if (arg2 == 0)
    return 

uint64_t var_28 = rax
void* const i_2

if (rax == 0)
    i_2 = nullptr
else
    i_2 = *(rax + 0x50)

int32_t var_18_1 = 0xffffffff
int16_t var_14_1 = 0x101
char var_12_1 = 0
sub_1420c86c0(&var_28)
void* i_1

for (void* const i = i_2; i != 0; i = i_1)
    rax = *(i + 0x28)
    uint64_t arg_8 = rax
    
    if (rax == arg2)
        if (i != 0)
            char* rdx_1 = sx.q(*(i + 0x4c)) + zx.q(*(i + 0x79)) + arg1
            char r8
            
            if (arg3 == 0)
                r8 = 0
            else
                r8 = *(i + 0x7a)
            
            rax.b = not.b(*(i + 0x7b))
            rax.b &= *rdx_1
            rax.b |= r8
            *rdx_1 = rax.b
        
        break
    
    i_1 = *(i + 0x20)
    sub_1420c86c0(&var_28)
