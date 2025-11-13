// 函数: sub_1419517f0
// 地址: 0x1419517f0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t rax = *arg2
int64_t var_48 = rax
int64_t var_38 = 0

if (rax != 0)
    void* rax_1 = arg2[2]
    void* rcx = &arg2[4]
    
    if (rax_1 != 0)
        rcx = rax_1
    
    (**rcx)(rcx, &var_38)

sub_141928710(arg1, &var_48)
*arg1 = &data_142ff7530

if (*arg2 != 0)
    void* rdx_2 = arg2[2]
    void* rcx_2 = &arg2[4]
    
    if (rdx_2 != 0)
        rcx_2 = rdx_2
    
    int64_t rdx_3 = *rcx_2
    (*(rdx_3 + 0x10))(rcx_2, rdx_3)

return arg1
