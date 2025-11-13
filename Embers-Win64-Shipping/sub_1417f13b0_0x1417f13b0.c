// 函数: sub_1417f13b0
// 地址: 0x1417f13b0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* rax = data_143f5b298
int64_t* rcx = rax[0x161]

if (rcx != 0)
    rax = (*(*rcx + 0x100))(rcx)
    
    if (rax != 0)
        int64_t rdx = *rax
        *arg1 = (*(rdx + 0x198))(rax, rdx)
        int64_t rdx_1 = *rax
        char rax_3 = (*(rdx_1 + 0x1a0))(rax, rdx_1)
        *arg2 = rax_3
        return rax_3

*arg2 = 0
*arg1 = 0
return rax
