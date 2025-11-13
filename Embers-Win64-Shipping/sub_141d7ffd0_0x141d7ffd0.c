// 函数: sub_141d7ffd0
// 地址: 0x141d7ffd0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* rcx = arg1[0xc]

if (rcx == 0)
    return 

void* var_48
sub_141d7a6b0(rcx, &var_48)
void* rbx_1 = var_48
int32_t var_40
void* i = rbx_1 + sx.q(var_40) * 0x28

if (rbx_1 != i)
    int32_t* rbx_2 = rbx_1 + 8
    
    do
        int64_t rax_2 = *(rbx_2 - 8)
        *(rbx_2 - 8) = 0
        int64_t var_38 = rax_2
        int32_t var_30_1 = *rbx_2
        int32_t rax_4 = rbx_2[1]
        *rbx_2 = 0
        int32_t var_2c_1 = rax_4
        int64_t var_28_1 = *(rbx_2 + 8)
        int64_t var_20_1 = *(rbx_2 + 0x10)
        int64_t rax_7 = *(rbx_2 + 0x18)
        *(rbx_2 + 0x18) = 0
        int64_t var_18_1 = rax_7
        *(rbx_2 + 0x10) = 0
        (*(*arg1 + 0x2e0))(arg1, &var_38)
        rbx_2 = &rbx_2[0xa]
    while (&rbx_2[-2] != i)

sub_141d750f0(&var_48)
