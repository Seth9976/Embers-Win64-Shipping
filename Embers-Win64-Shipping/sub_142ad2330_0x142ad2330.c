// 函数: sub_142ad2330
// 地址: 0x142ad2330
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t r14 = arg2 - 0x1dbb18
int32_t rcx = arg1[0x4d].d
int32_t result
int32_t rdx_6
int32_t rbp_1
int32_t rsi_1

if (((rcx - 1) & 0xfffffffd) == 0)
    int32_t rax_19
    rax_19.b = rcx != 3
    r14 = arg2 - (rax_19 + 0x1dbb17)
    int32_t rax_22 = sub_142accb50(sx.q(r14) * 0x1e + 0x2996, 0x2987)
    rbp_1 = rax_22
    rdx_6 = rax_22
label_142ad254e:
    int32_t rax_24 =
        int.d(sub_142a4b990(_mm_cvtepi32_pd(zx.q(r14 - sub_142ad2dc0(arg1, rdx_6) - 0x1d)) / 29.5))
    rsi_1 = 0xb
    
    if (rax_24 s< 0xb)
        rsi_1 = rax_24
    
    sub_142ad2a30(arg1, rbp_1, rsi_1)
label_142ad2583:
    int32_t rbx_5 = r14 - sub_142ad2a30(arg1, rbp_1, rsi_1) + 1
    result = sub_142ad2a30(arg1, rbp_1, 0)
    *(arg1 + 0xc) = 0
    arg1[0x10].d = 1
    arg1[0xd].w = 0x101
    arg1[2].d = rbp_1
    *(arg1 + 0x84) = 1
    arg1[0xb].d = rbp_1
    *(arg1 + 0xcc) = 1
    *(arg1 + 0x7b) = 1
    *(arg1 + 0x14) = rsi_1
    arg1[0x11].d = 1
    *(arg1 + 0x6a) = 1
    arg1[4].d = rbx_5
    *(arg1 + 0x94) = 1
    *(arg1 + 0x6d) = 0x101
    *(arg1 + 0x24) = r14 - result + 1
    arg1[0x13].d = 1
else
    if (rcx != 0)
        if (rcx != 2)
            abort()
            noreturn
        
        if (r14 s< sub_142ad2dc0(arg1, 0x514))
            rbp_1 = int.d(sub_142a4b9b0(_mm_cvtepi32_pd(zx.q(r14 * 0x1e + 0x2996)) / 10631.0))
            rdx_6 = rbp_1
            goto label_142ad254e
        
        rbp_1 = 0x513
        rsi_1 = 0
        int32_t i
        
        do
            rbp_1 += 1
            i = r14 - sub_142ad2dc0(arg1, rbp_1) + 1
            
            if (i == (*(*arg1 + 0x110))(arg1, zx.q(rbp_1)))
                rsi_1 = 0xb
                break
            
            if (i s< (*(*arg1 + 0x110))(arg1, zx.q(rbp_1)))
                for (int32_t j = (*(*arg1 + 0x108))(arg1, zx.q(rbp_1), 0); i s> j; 
                        j = (*(*arg1 + 0x108))(arg1, zx.q(rbp_1), zx.q(rsi_1)))
                    i -= j
                    rsi_1 += 1
                
                break
        while (i s> 0)
        goto label_142ad2583
    
    int32_t rsi = int.d(sub_142a4b9b0(_mm_cvtepi32_pd(zx.q(r14)) f/ 29.530588853000001))
    int32_t rbp = int.d(sub_142a4b9b0(_mm_cvtepi32_pd(zx.q(rsi)) * 29.530588853000001).q)
    int64_t zmm0_3
    result, zmm0_3 = sub_142ad2b10(zx.o(arg1[0x1c]), arg3)
    
    if (*arg3 s<= 0)
        if (r14 - rbp s>= 0x19 && not(zmm0_3 f<= 0.0))
            rsi += 1
        
        if (sub_142ad2c60(arg1, rsi) s> r14)
            int32_t rax_4
            
            do
                rsi -= 1
                rax_4 = sub_142ad2c60(arg1, rsi)
            while (rax_4 s> r14)
        
        uint64_t rdx_5 = zx.q(rsi s/ 0xc)
        rbp_1 = (rdx_5 + 1).d
        rsi_1 = rsi - ((rdx_5 * 3).d << 2)
        goto label_142ad2583
    
    *arg3 = 7
return result
