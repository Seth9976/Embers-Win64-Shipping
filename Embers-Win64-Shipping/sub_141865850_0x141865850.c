// 函数: sub_141865850
// 地址: 0x141865850
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

*arg1 = *arg2
*(arg1 + 8) = *(arg2 + 8)
arg1[3] = &data_142fe6b70
__builtin_memset(&arg1[4], 0, 0x14)

for (int128_t* i = arg2[4]; i != 0; i = *(i + 0x28))
    int128_t* rax_1 = j_sub_140a82f30(0x38)
    
    if (rax_1 != 0)
        *rax_1 = *i
        rax_1[1] = i[1]
        rax_1[2].q = i[2].q
        *(rax_1 + 0x28) = 0
        rax_1[3].q = 0
        void* rcx = arg1[5]
        
        if (rcx == 0)
            arg1[4] = rax_1
        else
            *(rcx + 0x28) = rax_1
            rax_1[3].q = arg1[5]
        
        arg1[5] = rax_1
        (*(arg1[3] + 8))(&arg1[3], zx.q(arg1[6].d + 1))

arg1[7] = 0
arg1[8] = 0
return arg1
