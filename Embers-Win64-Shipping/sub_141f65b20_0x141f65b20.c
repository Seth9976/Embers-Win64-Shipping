// 函数: sub_141f65b20
// 地址: 0x141f65b20
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t rax_8 = *(arg1 + 0x440)

if (rax_8 s<= 0)
    int32_t rax_6 = data_143f3bbfc
    *arg2 = data_143f3bbf4
    arg2[1].d = rax_6
    return arg2

if (*(arg1 + 0x4e1) == 0 || arg3 s< rax_8)
    int32_t rax = rax_8 - 1
    
    if (arg3 s>= 0)
        if (arg3 s< rax)
            rax = arg3
        
        void* rcx_2 = sx.q(rax) * 0x2c + *(arg1 + 0x438)
        int32_t rax_4 = *(rcx_2 + 0xc)
        *arg2 = *(rcx_2 + 4)
        arg2[1].d = rax_4
        return arg2

void* rcx = *(arg1 + 0x438)
int32_t rax_1 = *(rcx + 0xc)
*arg2 = *(rcx + 4)
arg2[1].d = rax_1
return arg2
