// 函数: sub_142c25170
// 地址: 0x142c25170
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (sub_142bf7510(arg2, arg1, 4).b != 0
        && (zx.d(arg1[1]) << 0x10) + (zx.d(arg1[2]) << 8) + (zx.d(*arg1) << 0x18) + zx.d(arg1[3])
        u>= 0x10000 && sub_142bf7510(arg2, &arg1[4], 4).b != 0)
    void* rdi_1 = &arg1[8]
    uint32_t rsi_3 = (zx.d(arg1[5]) << 0x10) + (zx.d(arg1[6]) << 8) + (zx.d(arg1[4]) << 0x18)
    uint64_t rax_9 = zx.q(arg1[7])
    int32_t rbp_2 = 0
    int32_t rsi_4 = rsi_3 + rax_9.d
    
    if (rsi_3 == neg.d(rax_9.d))
    label_142c2529e:
        rax_9.b = 1
    else
        while (true)
            if (sub_142bf7510(arg2, rdi_1, 8).b != 0)
                char* rdx_3 = nullptr
                
                if (rbp_2 u< rsi_4 - 1)
                    rdx_3 = rdi_1
                
                sub_142c18fb0(arg2, rdx_3)
                
                if (sub_142c24e20(rdi_1, arg2) == 0)
                    void* rax_17 = *(arg2 + 0x28)
                    int64_t rcx_12 = *(rax_17 + 0x10)
                    *(arg2 + 8) = rcx_12
                    *(arg2 + 0x10) = zx.q(*(rax_17 + 0x18)) + rcx_12
                else
                    rbp_2 += 1
                    void* rax_15 = *(arg2 + 0x28)
                    rdi_1 = rdi_1 + zx.q(*(rdi_1 + 3)) + (((((zx.q(*rdi_1) << 8)
                        + zx.q(*(rdi_1 + 1))) << 8) + zx.q(*(rdi_1 + 2))) << 8)
                    int64_t rcx_11 = *(rax_15 + 0x10)
                    *(arg2 + 8) = rcx_11
                    *(arg2 + 0x10) = zx.q(*(rax_15 + 0x18)) + rcx_11
                    
                    if (rbp_2 u>= rsi_4)
                        goto label_142c2529e
                    
                    continue
            
            rax_9.b = 0
            break
    
    return rax_9

uint32_t rax
rax.b = 0
return rax
