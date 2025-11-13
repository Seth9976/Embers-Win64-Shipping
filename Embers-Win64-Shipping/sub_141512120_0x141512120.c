// 函数: sub_141512120
// 地址: 0x141512120
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* rcx = *(arg1 + 0x60)
arg2[1].d = 0
*arg2 = 0
int64_t* rax_1 = (*(*rcx + 0x248))(rcx)

if (rax_1 != 0)
    int64_t rdx = *rax_1
    
    if ((*(rdx + 0x248))(rax_1, rdx) != 0)
        int64_t rdx_1 = *rax_1
        int64_t* rax_3 = (*(rdx_1 + 0x248))(rax_1, rdx_1)
        int64_t rdx_2 = *rax_3
        
        if ((*(rdx_2 + 0x2c8))(rax_3, rdx_2) u> 1)
            arg2[1].d = 3
            return arg2

arg2[1].d = 1
return arg2
