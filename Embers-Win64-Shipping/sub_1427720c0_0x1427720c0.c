// 函数: sub_1427720c0
// 地址: 0x1427720c0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t rax = *arg1
int64_t* arg_18 = nullptr
int32_t rax_1 = (*(rax + 0x18))(arg1, &data_14349d4e8, 1, 0, &arg_18)
int64_t* rcx = nullptr
int32_t rbx = rax_1
int64_t* arg_20 = nullptr

if (rax_1 s>= 0)
    int64_t* rcx_1 = arg_18
    int32_t rax_3 = (*(*rcx_1 + 0x18))(rcx_1, 0, 0, &arg_20)
    int64_t* rcx_2 = arg_18
    rbx = rax_3
    (*(*rcx_2 + 0x10))(rcx_2)
    rcx = arg_20
    arg_18 = nullptr

int64_t* var_18 = nullptr

if (rbx s>= 0)
    int32_t rax_6 = (**rcx)(rcx, &data_14349d4f8, &var_18)
    int64_t* rcx_3 = arg_20
    rbx = rax_6
    int64_t rdx = *rcx_3
    (*(rdx + 0x10))(rcx_3, rdx)
    arg_20 = nullptr
    
    if (rbx s>= 0)
        int64_t* rcx_4 = var_18
        int32_t rax_8 = (*(*rcx_4 + 0x80))(rcx_4, zx.q(arg2))
        int64_t* rcx_5 = var_18
        rbx = rax_8
        int64_t rdx_2 = *rcx_5
        (*(rdx_2 + 0x10))(rcx_5, rdx_2)

return zx.q(rbx)
