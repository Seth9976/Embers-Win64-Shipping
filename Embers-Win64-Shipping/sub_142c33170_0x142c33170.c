// 函数: sub_142c33170
// 地址: 0x142c33170
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

uint32_t rax

if (sub_142bf7510(arg2, arg1 + 4, 4).b != 0 && (zx.d(*(arg1 + 5)) << 0x10)
        + (zx.d(*(arg1 + 6)) << 8) + (zx.d(*(arg1 + 4)) << 0x18) + zx.d(*(arg1 + 7)) u>= 0xc)
    rax = sub_142bf7510(arg2, arg1, 
        (zx.d(*(arg1 + 5)) << 0x10) + (zx.d(*(arg1 + 6)) << 8) + (zx.d(*(arg1 + 4)) << 0x18)
            + zx.d(*(arg1 + 7)))
    
    if (rax.b != 0)
        uint64_t rax_11
        
        if (sub_142bf7510(arg2, arg1 + 0xc, ((zx.d(*(arg1 + 8)) << 8) + zx.d(*(arg1 + 9))) * 0xc).b
            == 0)
        label_142c3329e:
            rax_11.b = 0
        else
            rax_11 = zx.q(*(arg1 + 0xb))
            void* rbx_3 = zx.q(((zx.d(*(arg1 + 8)) << 8) + zx.d(*(arg1 + 9))) * 0xc) + arg1 + 0xc
            uint32_t rbp_2 = zx.d(*(arg1 + 0xa)) << 8
            int32_t i = 0
            
            if (rbp_2 != neg.d(rax_11.d))
                do
                    if (sub_142c332c0(rbx_3, arg2).b == 0)
                        goto label_142c3329e
                    
                    i += 1
                    rbx_3 = zx.q(*(rbx_3 + 1)) + rbx_3 + (zx.q(*rbx_3) << 8)
                while (i u< rbp_2 + rax_11.d)
            
            rax_11.b = 1
        
        return rax_11

rax.b = 0
return rax
