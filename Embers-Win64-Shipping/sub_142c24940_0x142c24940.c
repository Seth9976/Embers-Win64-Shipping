// 函数: sub_142c24940
// 地址: 0x142c24940
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

uint32_t rax

if (sub_142bf7510(arg2, arg1 + 4, 4).b != 0 && (zx.d(*(arg1 + 5)) << 0x10)
        + (zx.d(*(arg1 + 6)) << 8) + (zx.d(*(arg1 + 4)) << 0x18) + zx.d(*(arg1 + 7)) u>= 0x10)
    rax = sub_142bf7510(arg2, arg1, 
        (zx.d(*(arg1 + 5)) << 0x10) + (zx.d(*(arg1 + 6)) << 8) + (zx.d(*(arg1 + 4)) << 0x18)
            + zx.d(*(arg1 + 7)))
    
    if (rax.b != 0)
        uint64_t rcx_6 = zx.q((zx.d(*(arg1 + 9)) << 0x10) + (zx.d(*(arg1 + 0xa)) << 8)
            + (zx.d(*(arg1 + 8)) << 0x18) + zx.d(*(arg1 + 0xb)))
        uint64_t rax_14
        
        if (rcx_6.d u< 0x15555555)
            rax_14 = sub_142bf7510(arg2, arg1 + 0x10, (rcx_6 * 3).d << 2)
        
        if (rcx_6.d u>= 0x15555555 || rax_14.b == 0)
        label_142c24ac5:
            rax_14.b = 0
        else
            void* rbx_3 = zx.q(((zx.d(*(arg1 + 9)) << 0x10) + (zx.d(*(arg1 + 0xa)) << 8)
                + (zx.d(*(arg1 + 8)) << 0x18) + zx.d(*(arg1 + 0xb))) * 0xc) + arg1 + 0x10
            uint32_t rbp_5 = (zx.d(*(arg1 + 0xd)) << 0x10) + (zx.d(*(arg1 + 0xe)) << 8)
                + (zx.d(*(arg1 + 0xc)) << 0x18)
            rax_14 = zx.q(*(arg1 + 0xf))
            int32_t i = 0
            
            if (rbp_5 != neg.d(rax_14.d))
                do
                    if (sub_142c24ae0(rbx_3, arg2).b == 0)
                        goto label_142c24ac5
                    
                    i += 1
                    rbx_3 = zx.q(*(rbx_3 + 3)) + rbx_3 + (((((zx.q(*rbx_3) << 8)
                        + zx.q(*(rbx_3 + 1))) << 8) + zx.q(*(rbx_3 + 2))) << 8)
                while (i u< rbp_5 + rax_14.d)
            
            rax_14.b = 1
        
        return rax_14

rax.b = 0
return rax
