// 函数: sub_14062b790
// 地址: 0x14062b790
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t rax

if (arg1 != 0)
    void* rax_1 = sub_1424890f0()
    void* rcx = *(arg1 + 0x10)
    rax = sx.q(*(rax_1 + 0x38))
    
    if (rax.d s<= *(rcx + 0x38) && *(*(rcx + 0x30) + (rax << 3)) == rax_1 + 0x30
            && *(arg1 + 0x280) != 0)
        int32_t rdi = 0
        uint64_t var_18 = 0
        int32_t var_10 = 0
        arg2[1].d = 0
        
        if (*(arg2 + 0xc) != 0)
            sub_140638cc0(arg2, 0)
        
        sub_141f5e6a0(*(arg1 + 0x280), &var_18)
        
        if (var_10 s> 0)
            do
                int32_t var_28[0x4]
                int32_t* rax_4 =
                    sub_141f5e140(*(arg1 + 0x280), &var_28, *(var_18 + (sx.q(rdi) << 3)), 0)
                int64_t rsi_1 = sx.q(arg2[1].d)
                int32_t rcx_5 = (rsi_1 + 1).d
                arg2[1].d = rcx_5
                
                if (rcx_5 s> *(arg2 + 0xc))
                    sub_140638a00(arg2)
                
                int64_t rax_5 = *arg2
                int64_t rdx_4 = rsi_1 * 3
                rdi += 1
                *(rax_5 + (rdx_4 << 2)) = *rax_4
                *(rax_5 + (rdx_4 << 2) + 8) = rax_4[2]
            while (rdi s< var_10)
        
        uint64_t rcx_8 = var_18
        
        if (rcx_8 != 0)
            sub_140a74f90(rcx_8)
        
        int32_t rax_2
        rax_2.b = 1
        return rax_2

rax.b = 0
return rax
