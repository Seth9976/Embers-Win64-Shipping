// 函数: sub_140d02e70
// 地址: 0x140d02e70
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

uint64_t rax = sub_140d3c6e0(arg2)
uint64_t rdx = rax

if (rax != 0 || (arg2[6] | arg2[5] | arg2[4] | arg2[3]) == 0)
    return rax

if (rax.d == data_1439a9d84)
    data_1439a9d84 = 0
else
    rax = zx.q(data_1439a9d84)

if (rax.d == arg2[2] && *arg2 == 0xffffffff)
    return rdx

void* rax_2 = sub_140ccdeb0(&arg2[3])
sub_140d3a3a0(arg2, rax_2)

if (rax_2 != 0 || data_143e1d7b4 == 0)
    int32_t rax_3 = 0
    
    if (0 == data_1439a9d84)
        data_1439a9d84 = 0
    else
        rax_3 = data_1439a9d84
    
    arg2[2] = rax_3

return sub_140d3c6e0(arg2)
