// 函数: sub_141d510b0
// 地址: 0x141d510b0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* rcx = *(arg1 + 0x130)

if (rcx != 0)
    int64_t* rax_2 = (*(*rcx + 0x10))(rcx)
    int64_t rdx_1 = *rax_2
    
    if ((*(rdx_1 + 0x50))(rax_2, rdx_1) != 0)
        int128_t zmm6
        zmm6.d = arg2.d f* *(arg1 + 0x108)
        
        if (not(zmm6.d f>= 0f))
            sub_141d4d130(arg1)
        
        return 1

return 0
