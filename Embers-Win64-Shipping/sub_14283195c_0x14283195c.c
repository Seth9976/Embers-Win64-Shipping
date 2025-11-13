// 函数: sub_14283195c
// 地址: 0x14283195c
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t rsi = sx.q(arg3)
uint64_t rcx = 0
int32_t* result
int64_t* r8

if (*(arg1 + 8) s> 0)
    int64_t* rdi_1 = *(arg1 + 0x68)
    r8 = rdi_1
    
    while (true)
        void* rax_1 = *r8
        
        if (*(rax_1 + 4) == 0)
            break
        
        if (*(rax_1 + 4) == 3)
            break
        
        rcx = zx.q(rcx.d + 1)
        r8 = &r8[1]
        
        if (rcx.d s>= *(arg1 + 8))
            goto label_1428319b6
    
    result = rdi_1[rcx]

if (*(arg1 + 8) s> 0 && result != 0)
    goto label_1428319e9

label_1428319b6:
int32_t* result_1
result_1, r8 = sub_142831d50(arg1)
result = result_1

if (result_1 != 0)
label_1428319e9:
    uint128_t zmm0
    
    if (*(arg1 + 0xe) != 0)
        int32_t rdx = 0
        
        if (*(arg1 + 8) s> 0)
            int64_t* rcx_3 = *(arg1 + 0x68)
            uint64_t i_1 = zx.q(*(arg1 + 8))
            uint64_t i
            
            do
                void* rax_2 = *rcx_3
                
                if (*(rax_2 + 4) != 0 && *(rax_2 + 4) != 3)
                    rdx += 1
                
                rcx_3 = &rcx_3[1]
                i = i_1
                i_1 -= 1
            while (i != 1)
        
        int32_t var_28_1 = rdx
        zmm0.d = float.s(zx.q(*(arg1 + 0x2c)))
        int32_t rax_4 = *(arg1 + 0x74)
        zmm0.d = zmm0.d f/ 44100f
        int32_t var_30
        var_30.q = (zx.o(0)).q
        int32_t var_38
        var_38.q = _mm_cvtps_pd(zmm0.q)
        int32_t var_40_1 = rax_4
        int32_t var_48_1 = arg5
        r8 = sub_142833a04(3, "noteon\t%d\t%d\t%d\t%05d\t%.3f\t\t%.3f\t%d", zx.q(rsi.d))
    
    if (rsi.d s>= 0)
        int64_t rax_5 = *(arg1 + 0x58)
        zmm0 = _mm_cvtpd_ps(zx.o(*(arg1 + 0x50)))
        sub_142838f3c(result, arg2, *(rax_5 + (rsi << 3)), arg4.b, arg5.b, *(arg1 + 0x74), 
            *(arg1 + 0x2c), zmm0.d)
        sub_142838550(result, &data_144020520, 2)
        sub_142838550(result, &data_144020500, 2)
        sub_142838550(result, &data_1440204e0, 2)
        sub_142838550(result, &data_1440204c0, 2)
        sub_142838550(result, &data_1440204a0, 2)
        sub_142838550(result, &data_144020480, 2)
        sub_142838550(result, &data_144020460, 2)
        sub_142838550(result, &data_144020440, 2)
        sub_142838550(result, &data_144020420, 2)
        sub_142838550(result, &data_144020400, 2)
        return result
    
    sub_142833a04(2, "Channel should be valid", r8)
else
    sub_142833a04((result_1 + 2).d, "Failed to allocate a synthesis process. (chan=%d,key=%d)", 
        zx.q(rsi.d))

return nullptr
