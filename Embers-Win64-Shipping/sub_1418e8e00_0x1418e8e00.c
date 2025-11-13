// 函数: sub_1418e8e00
// 地址: 0x1418e8e00
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t rsi
int64_t var_10 = rsi
BOOL rax = *(arg2 + 0x18)

if (rax == 1)
    int32_t rcx = *(arg2 + 0x38)
    
    if (rcx - 3 u<= 1)
        *arg3 = *(arg2 + 0x20)
        int64_t rax_6
        rax_6.b = 1
        return rax_6
    
    if (rcx != 0)
        void* rcx_1 = *(arg2 + 0x30)
        rax = *(rcx_1 + 0x38)
        
        if (rax == 3)
        label_1418e8e5e:
            int32_t r9 = *(arg2 + 0x28)
            void* r10 = *(arg2 + 0x30)
            uint64_t r8_1 = zx.q(r9) u>> 6
            int64_t r11 = sx.q(r9)
            *(arg2 + 0x20) = *(*(r10 + 0x28) + (r11 << 3))
            int64_t rdx_1 = *(r10 + 0x58)
            *(rdx_1 + (r8_1 << 3)) &= not.q(1 << ((zx.q(r9) & 0x3f) u% 0x40))
            *(*(r10 + 0x48) + (r11 << 3)) = 0
            int64_t rax_5 = *(arg2 + 0x20)
            *(arg2 + 0x28) = 0xffffffff
            *(arg2 + 0x38) = 3
            *arg3 = rax_5
            rax_5.b = 1
            return rax_5
        
        if (rax == 2 && sub_1418e3430(rcx_1, arg4).b != 0)
            goto label_1418e8e5e
else if (rax == 2)
    uint32_t rdi_1 = *(arg2 + 0x68)
    int32_t r8_2
    
    if (arg4 == 0)
        r8_2 = 1
    
    int64_t zmm0
    bool cond:1
    
    if (arg4 == 0 && *(arg2 + 0x6c) u> 1)
        while (true)
            rsi = sx.q(rdi_1)
            int64_t* rdx_4 = (rsi << 4) + *(arg2 + 0x78)
            
            if (rdx_4[1] u< *(*rdx_4 + 0x98))
                void* rcx_7 = *(*(arg2 + 0x88) + 0x10)
                sub_1418c2300(*(rcx_7 + 0x28), zx.q(*(rcx_7 + 0x1c)), zx.q(*(rcx_7 + 0x18)))
                void* rcx_9 = *(*(arg2 + 0x88) + 0x10)
                int64_t rax_14 = *(*(*(rcx_9 + 0x28) + 0x18) + zx.q(*(rcx_9 + 0x24)) + (rsi << 3))
                cond:1 = rax_14 s>= 0
                zmm0 = float.d(rax_14)
                break
            
            int32_t rcx_6 = *(arg2 + 0x70)
            r8_2 += 1
            rdi_1 = modu.dp.d(0:(rcx_6 - 1 + rdi_1), rcx_6)
            
            if (r8_2 u>= *(arg2 + 0x6c))
                goto label_1418e8f35
        
        goto label_1418e8fa2
    
label_1418e8f35:
    rax = *(arg2 + 0x6c)
    
    if (rax != 0 || arg4 != 0)
        if (rax == *(arg2 + 0x70) || arg4 != 0)
            rsi.b = 1
        else
            rsi.b = 0
        
        int64_t performanceCount[0x2]
        QueryPerformanceCounter(&performanceCount)
        
        if (rsi.b != 0)
            int64_t* rsi_6 = (sx.q(rdi_1) << 4) + *(arg2 + 0x78)
            int64_t rcx_14 = *(*rsi_6 + 0x98)
            int64_t temp7_1 = rsi_6[1]
            int64_t r15
            r15.b = temp7_1 == rcx_14
            
            if (temp7_1 == rcx_14)
                int32_t rbp_1 = data_143f029c8
                sub_140b34200("FlushRHIThreadTotal", rbp_1)
                
                if (data_143f02bac u> 0)
                    j_sub_14196ef60(&data_143f02b88, &data_143f02b98, arg5, arg6)
                
                sub_14198b230()
                
                if (data_143f01c92 != 0)
                    sub_14198b3f0()
                
                int64_t rdx_9
                rdx_9.b = 1
                sub_14198b7d0()
                sub_140b38680("FlushRHIThreadTotal", rbp_1)
                sub_1418c8680(*(arg1 + 0x58))
            
            if (r15.b != 0 && rsi_6[1] == *(*rsi_6 + 0x98))
                sub_1418c9280(*(*(*(arg1 + 0x58) + 0x1a50) + 0x240), *rsi_6, 0x41200000)
        
        void* rcx_22 = *(*(arg2 + 0x88) + 0x10)
        sub_1418c2300(*(rcx_22 + 0x28), zx.q(*(rcx_22 + 0x1c)), zx.q(*(rcx_22 + 0x18)))
        int64_t performanceCount_1
        QueryPerformanceCounter(&performanceCount_1)
        data_143f138d8:4.d += 1
        data_143f138cc += performanceCount_1.d - performanceCount[0].d
        void* rcx_25 = *(*(arg2 + 0x88) + 0x10)
        int64_t rdx_14 = *(*(*(rcx_25 + 0x28) + 0x18) + zx.q(*(rcx_25 + 0x24)) + (sx.q(rdi_1) << 3))
        cond:1 = rdx_14 s>= 0
        zmm0 = float.d(rdx_14)
    label_1418e8fa2:
        arg5 = 0x43f0000000000000
        
        if (not(cond:1))
            zmm0 = zmm0 f+ arg5.q
        
        int64_t rax_15 = data_143f0f168
        double zmm1 = float.d(rax_15)
        
        if (rax_15 s< 0)
            zmm1 = zmm1 f+ arg5.q
        
        zmm0 = zmm0 f/ zmm1
        int64_t rcx_12 = 0
        zmm1 = 9.2233720368547758e+18
        zmm0 = zmm0 f* 1000000.0
        
        if (not(zmm0 f< zmm1))
            zmm0 = zmm0 f- zmm1
            
            if (not(zmm0 f>= zmm1))
                rcx_12 = -0x8000000000000000
        
        *arg3 = int.q(zmm0) + rcx_12
        int64_t rax_17
        rax_17.b = 1
        return rax_17

rax.b = 0
return rax
