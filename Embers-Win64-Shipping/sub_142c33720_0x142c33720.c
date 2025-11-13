// 函数: sub_142c33720
// 地址: 0x142c33720
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (sub_142bf7510(arg2, arg1, 2).b != 0 && zx.w(*arg1) * 0x100 + zx.w(arg1[1]) u>= 2
        && sub_142bf7510(arg2, &arg1[4], 4).b != 0)
    void* rdi_1 = &arg1[8]
    uint32_t rsi_3 = (zx.d(arg1[5]) << 0x10) + (zx.d(arg1[6]) << 8) + (zx.d(arg1[4]) << 0x18)
    uint64_t rax_5 = zx.q(arg1[7])
    int32_t rbp_2 = 0
    int32_t rsi_4 = rsi_3 + rax_5.d
    
    if (rsi_3 == neg.d(rax_5.d))
    label_142c33840:
        rax_5.b = 1
    else
        while (true)
            if (sub_142bf7510(arg2, rdi_1, 0xc).b != 0)
                char* rdx_3 = nullptr
                
                if (rbp_2 u< rsi_4 - 1)
                    rdx_3 = rdi_1
                
                sub_142c18fb0(arg2, rdx_3)
                
                if (sub_142c34c10(rdi_1, arg2) == 0)
                    void* rax_13 = *(arg2 + 0x28)
                    int64_t rcx_12 = *(rax_13 + 0x10)
                    *(arg2 + 8) = rcx_12
                    *(arg2 + 0x10) = zx.q(*(rax_13 + 0x18)) + rcx_12
                else
                    rbp_2 += 1
                    void* rax_11 = *(arg2 + 0x28)
                    rdi_1 = rdi_1 + zx.q(*(rdi_1 + 3)) + (((((zx.q(*rdi_1) << 8)
                        + zx.q(*(rdi_1 + 1))) << 8) + zx.q(*(rdi_1 + 2))) << 8)
                    int64_t rcx_11 = *(rax_11 + 0x10)
                    *(arg2 + 8) = rcx_11
                    *(arg2 + 0x10) = zx.q(*(rax_11 + 0x18)) + rcx_11
                    
                    if (rbp_2 u>= rsi_4)
                        goto label_142c33840
                    
                    continue
            
            rax_5.b = 0
            break
    
    return rax_5

uint16_t rax
rax.b = 0
return rax
