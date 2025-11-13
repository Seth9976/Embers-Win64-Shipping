// 函数: sub_14075e880
// 地址: 0x14075e880
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (arg2 s>= 0)
    int64_t r10_1 = sx.q(*(arg1 + 0x58) ^ 1)
    
    if (arg2 s< *(((r10_1 + 3) << 4) + arg1))
        int64_t rdx = sx.q((*(arg1 + r10_1 * 0x10 + 0x28))[sx.q(arg2) * 0x28 + 2])
        
        if (rdx.d s>= 0 && rdx.d s< *(arg1 + 0x50))
            int64_t rax_3 = *(arg1 + 0x48)
            int128_t* rcx_2 = rdx * 0x34
            *arg3 = *(rcx_2 + rax_3)
            arg3[1] = *(rcx_2 + rax_3 + 0x10)
            arg3[2] = *(rcx_2 + rax_3 + 0x20)
            arg3[3].d = *(rcx_2 + rax_3 + 0x30)
            int32_t rax_4
            rax_4.b = 1
            return rax_4

int32_t* rax
rax.b = 0
return rax
