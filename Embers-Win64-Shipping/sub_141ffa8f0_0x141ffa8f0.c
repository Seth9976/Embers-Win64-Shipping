// 函数: sub_141ffa8f0
// 地址: 0x141ffa8f0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void** i = *(arg1 + 8)

for (void* rdi_2 = &i[sx.q(*(arg1 + 0x10)) * 2]; i != rdi_2; i = &i[2])
    void* rdx = *i
    
    if (rdx != 0 && *(rdx + 0x14) == arg2)
        int64_t var_30_1 = arg6
        int64_t var_38_1 = arg5
        int128_t zmm6
        arg3, arg4, zmm6 = sub_141ffa9a0(arg1, rdx, arg3, arg4)
        
        if (*(*i + 0x14) == 0)
            break
