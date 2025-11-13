// 函数: sub_142c3bbe0
// 地址: 0x142c3bbe0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* rdi = *(arg1 + 0x98)

if ((*(rdi + 0x28) & 1) == 0)
    return 

int32_t* i = *(rdi + 0x20)
int32_t var_38
int32_t var_38_1 = var_38

for (; i == 0; i = *(rdi + 0x20))
    int32_t* i_1
    int512_t zmm0_1
    i_1, zmm0_1 = sub_140dc0ea0(1, 0xe8)
    i = i_1
    
    if (i_1 == 0)
        i = &data_14369a5d0
    else
        *i_1 = 0
        i_1[1].b = 0
        char rax_1
        int512_t zmm0_2
        rax_1, zmm0_2 = sub_142c3b750(i_1, arg1, arg2, zmm0_1)
        
        if (rax_1 == 0 && sub_142c3b8c0(i, arg1, arg2, zmm0_2) == 0)
            j_sub_140a74f90(i)
            i = &data_14369a5d0
    
    bool z_1
    
    if (0 == *(rdi + 0x20))
        *(rdi + 0x20) = i
        z_1 = true
    else
        *(rdi + 0x20)
        z_1 = false
    
    if (z_1)
        break
    
    sub_142c3b6b0(i)

sub_142c3bae0(i, arg2, arg3)
