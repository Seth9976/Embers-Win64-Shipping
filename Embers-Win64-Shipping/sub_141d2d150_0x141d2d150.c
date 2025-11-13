// 函数: sub_141d2d150
// 地址: 0x141d2d150
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* rax = data_143f376a0
__builtin_memset(arg1, 0, 0x19)

if (rax == 0)
    j_sub_140b3db50()
    void arg_8
    int64_t rbx_1 = *sub_140b58170(&arg_8, "ChaosSolvers", 1)
    j_sub_140b3db50()
    rax = sub_140b407e0(&data_143de7d78, rbx_1)
    data_143f376a0 = rax

arg1[2] = rax
int64_t* rbx_2 = *(rax + 0x30)

if ((*(*rbx_2 + 0x20))(rbx_2) != 0)
    *arg1 = 0
    arg1[1] = 0
else
    *arg1 = sub_140a491d0(0)
    void*** rax_5 = sub_140a491d0(0)
    arg1[1] = rax_5
    int64_t var_50_1 = *arg1
    void** const var_28_1 = &data_142d42ed8
    int64_t (* var_48)(int64_t* arg1) = sub_141d35b10
    int64_t var_38_1 = 0
    int128_t var_20_1 = rax_5.o
    (*(*rbx_2 + 0x10))(rbx_2, &var_48)
    int64_t* rcx_3 = arg1[1]
    char rax_9 = (*(*rcx_3 + 0x20))(rcx_3, zx.q(arg2), 0)
    arg1[3].b = rax_9
    
    if (rax_9 == 0)
        int64_t* rcx_4 = *arg1
        (*(*rcx_4 + 0x10))(rcx_4)

return arg1
