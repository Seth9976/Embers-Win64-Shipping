// 函数: sub_140d9c550
// 地址: 0x140d9c550
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

uint8_t r8 = arg3[2].b
int64_t rcx = sx.q(arg1[1].d)
int64_t* rsi = nullptr

if (rcx.d s> 0)
    int64_t rax_1 = *arg1
    
    if ((r8 & 2) != 0)
        rsi = (sx.q(*(rax_1 + (rcx << 2) - 4)) << 6) + arg1[2]
    else
        int64_t rcx_1 = rcx - 1
        int32_t* rdx_1 = rax_1 + (rcx_1 << 2)
        int64_t temp0_1
        
        do
            int64_t* rax_4 = (sx.q(*rdx_1) << 6) + arg1[2]
            
            if ((rax_4[7].b & 1) != 0)
                rsi = rax_4
                break
            
            rdx_1 -= 4
            temp0_1 = rcx_1
            rcx_1 -= 1
        while (temp0_1 - 1 s>= 0)

*arg2 = 0
arg2[1] = 0
*(arg2 + 0x34) = 0
arg2[7].b = r8 u>> 2 & 1

if (rsi != 0)
    if (*(rsi + 0x34) == 0)
        if (arg2 != rsi)
            int64_t rbp_1 = sx.q(rsi[1].d)
            int64_t rsi_3 = *rsi
            arg2[1].d = rbp_1.d
            
            if (rbp_1.d != 0)
                sub_1409912e0(arg2, rbp_1.d, 0)
                memcpy(*arg2, rsi_3, (rbp_1 * 0x24).d)
            else
                *(arg2 + 0xc) = 0
        
    label_140d9c789:
        int64_t rsi_4 = sx.q(arg2[1].d)
        int32_t rax_9 = (rsi_4 + 1).d
        arg2[1].d = rax_9
        
        if (rax_9 s> *(arg2 + 0xc))
            sub_140adefe0(arg2)
        
        int64_t rcx_12 = *arg2
        int64_t rdx_8 = rsi_4 * 9
        *(rcx_12 + (rdx_8 << 2)) = *arg3
        *(rcx_12 + (rdx_8 << 2) + 0x10) = arg3[1]
        *(rcx_12 + (rdx_8 << 2) + 0x20) = arg3[2].d
    else
        if ((arg3[2].b & 1) == 0)
            arg2[1].d = 1
            sub_140adefe0(arg2)
            void* rcx_8 = *arg2
            *rcx_8 = *(rsi + 0x10)
            *(rcx_8 + 0x10) = *(rsi + 0x20)
            *(rcx_8 + 0x20) = rsi[6].d
            goto label_140d9c789
        
        float temp0_2[0x4] = __minss_xmmss_memss((*(rsi + 0x2c))[0], *(arg3 + 0x1c))
        float temp0_3[0x4] = __maxss_xmmss_memss((*(rsi + 0x14))[0], *(arg3 + 4))
        int32_t zmm3 = *arg3
        int32_t temp0_4 = __minss_xmmss_memss(rsi[5].d, *(arg3 + 0x18))
        int32_t temp0_5 = __maxss_xmmss_memss(zmm3, rsi[2].d)
        bool cond:1_1 = temp0_2[0] < temp0_3[0]
        int32_t var_48 = temp0_5
        float var_44_1 = temp0_3[0]
        int32_t var_40_1 = temp0_4
        float var_3c_1 = temp0_2[0]
        
        if (cond:1_1 || not(temp0_4 f>= temp0_5))
            var_48.o = zx.o(0)
        
        int128_t var_38
        sub_140d92f10(&var_38, &var_48)
        
        if (&var_38 != &arg2[2])
            *(arg2 + 0x10) = var_38
            int128_t var_28
            *(arg2 + 0x20) = var_28
            int32_t var_18
            arg2[6].d = var_18
            *(arg2 + 0x34) = 1
else if ((arg3[2].b & 1) == 0)
    arg2[1].d = 1
    sub_140adefe0(arg2)
    void* rcx_4 = *arg2
    *rcx_4 = *arg3
    *(rcx_4 + 0x10) = arg3[1]
    *(rcx_4 + 0x20) = arg3[2].d
else if (arg3 != &arg2[2])
    if (*(arg2 + 0x34) != 0)
        *(arg2 + 0x34) = 0
    
    *(arg2 + 0x10) = *arg3
    *(arg2 + 0x20) = arg3[1]
    arg2[6].d = arg3[2].d
    *(arg2 + 0x34) = 1

return arg2
