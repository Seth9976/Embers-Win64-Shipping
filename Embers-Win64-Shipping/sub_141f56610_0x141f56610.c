// 函数: sub_141f56610
// 地址: 0x141f56610
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int128_t zmm2
int128_t zmm3
zmm2, zmm3 = sub_141f08a30(arg1)
int32_t i = 0

if (arg1[0x8d].d s> 0)
    int64_t rsi_1 = 0
    
    do
        int64_t rdx_1 = arg1[0x8c]
        int64_t* rcx = *(rsi_1 + rdx_1 + 0x30)
        
        if (rcx != 0)
            sub_141997f50(rcx)
            rdx_1 = arg1[0x8c]
        
        zmm2 = sub_141997f50(sx.q(i) * 0x90 + rdx_1 + 0x48, rdx_1 + 0x48)
        i += 1
        rsi_1 += 0x90
    while (i s< arg1[0x8d].d)

return sub_141997ac0(&arg1[0x7e], 0, zmm2, zmm3) __tailcall
