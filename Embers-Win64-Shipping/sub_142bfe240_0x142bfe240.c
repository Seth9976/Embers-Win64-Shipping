// 函数: sub_142bfe240
// 地址: 0x142bfe240
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int128_t* rsi = *arg1
int128_t* const rbx = &data_14369a5d0
int128_t* const rax = &data_14369a5d0

if (rsi != 0)
    rax = rsi

int128_t* const rcx = &data_14369a5d0

if (*(rax + 0x18) u>= 8)
    rcx = rax[1].q

int128_t* rax_1 = sub_142bfd220(rcx, arg2)
int128_t* const rax_2 = &data_14369a5d0
int128_t* const r8 = &data_14369a5d0

if (rsi != 0)
    rax_2 = rsi

if (*(rax_2 + 0x18) u>= 8)
    r8 = rax_2[1].q

void* r13_1 = zx.q(*(rax_1 + 3)) +
    &r8[(zx.q(*(rax_1 + 2)) + (((zx.q(*rax_1) << 8) + zx.q(*(rax_1 + 1))) << 8)) * 0x10]
uint64_t result = sub_142bfdaf0(r13_1, arg3, 
    (zx.d(*(rax_1 + 9)) << 0x10) + (zx.d(*(rax_1 + 0xa)) << 8) + (zx.d(*(rax_1 + 8)) << 0x18)
        + zx.d(*(rax_1 + 0xb)))

if (result == 0 || *(rax_1 + 0x2c) == 0 || *(rax_1 + 0x2d) == 0)
    result.b = 0
else
    uint32_t r10_1 = 0
    int32_t r8_8 = (zx.d(*result) << 8) + zx.d(*(result + 1))
    uint32_t arg_8 = 0
    uint32_t r14_1 = 0
    uint32_t var_58[0x4]
    var_58[0] = 0
    
    if (arg3 u< r8_8 || arg3 u> zx.d(*(result + 3)) + (zx.d(*(result + 2)) << 8))
        result.b = 0
    else
        uint64_t r11_1 = zx.q(*(result + 6))
        uint64_t rsi_1 = zx.q(*(result + 4))
        uint64_t r9 = zx.q(*(result + 5))
        uint64_t rdx_6 = zx.q(*(result + 7))
        int128_t* const r11_2
        
        if ((rsi_1.d << 0x18) + (r11_1.d << 8) + (r9.d << 0x10) != neg.d(rdx_6.d))
            r11_2 = ((r11_1 + (((rsi_1 << 8) + r9) << 8)) << 8) + r13_1 + rdx_6
        else
            r11_2 = &data_14369a5d0
        
        uint64_t r15_1 = zx.q(arg3 - r8_8)
        uint32_t rsi_4 = (zx.d(*(r11_2 + 2)) << 8) + zx.d(*(r11_2 + 3))
        int32_t rcx_15 = (zx.d(*r11_2) << 8) + zx.d(*(r11_2 + 1))
        
        if (rcx_15 == 1)
            result = sub_142bff050(r11_2, r15_1.d, &arg_8, &var_58)
            r10_1 = arg_8
            r14_1 = var_58[0]
        label_142bfe513:
            
            if (result.b == 0)
                result.b = 0
            else
                int128_t* rax_42 = arg1[1]
                int128_t* const rcx_20 = &data_14369a5d0
                
                if (rax_42 != 0)
                    rcx_20 = rax_42
                
                result = zx.q(*(rcx_20 + 0x18))
                
                if (r10_1 u> result.d || result.d - r10_1 u< r14_1)
                    result.b = 0
                else
                    bool cond:5_1
                    
                    if (rsi_4 == 0x11)
                        cond:5_1 = r14_1 u< 9
                    label_142bfe55a:
                        
                        if (cond:5_1)
                            result.b = 0
                        else
                            int128_t* rax_43 = arg1[1]
                            int128_t* const rcx_21 = &data_14369a5d0
                            
                            if (rax_43 != 0)
                                rcx_21 = rax_43
                            
                            if (*(rcx_21 + 0x18) u>= 4)
                                rbx = rcx_21[1].q
                            
                            void* rcx_23 = zx.q(r10_1) + rbx
                            *arg4 = sx.d(*(rcx_23 + 2))
                            arg4[1] = sx.d(*(rcx_23 + 3))
                            arg4[2] = zx.d(*(rcx_23 + 1))
                            arg4[3] = neg.d(zx.d(*rcx_23))
                            int128_t zmm7
                            zmm7.q = float.d(zx.q(arg1[2].d))
                            uint32_t rax_51 = zx.d(*(rax_1 + 0x2d))
                            int128_t zmm6
                            zmm6.q = zmm7.q f/ _mm_cvtepi32_pd(zx.q(*(rax_1 + 0x2c))).q
                            zmm7.q = zmm7.q f/ _mm_cvtepi32_pd(zx.q(rax_51)).q
                            uint64_t _X = _mm_cvtepi32_pd(zx.q(*arg4)).q f* zmm6.q
                            round(_X)
                            int32_t rax_52 = int.d(_X)
                            _X = _mm_cvtepi32_pd(zx.q(arg4[1])).q
                            *arg4 = rax_52
                            _X = _X f* zmm7.q
                            round(_X)
                            int32_t rax_53 = int.d(_X)
                            _X = _mm_cvtepi32_pd(zx.q(arg4[2])).q
                            arg4[1] = rax_53
                            _X = _X f* zmm6.q
                            round(_X)
                            int32_t rax_54 = int.d(_X)
                            _X = _mm_cvtepi32_pd(zx.q(arg4[3])).q
                            arg4[2] = rax_54
                            _X = _X f* zmm7.q
                            round(_X)
                            arg4[3] = int.d(_X)
                            result.b = 1
                    else
                        if (rsi_4 == 0x12)
                            cond:5_1 = r14_1 u< 0xc
                            goto label_142bfe55a
                        
                        result.b = 0
        else
            if (rcx_15 == 3)
                int128_t* const r8_9 = &data_14369a5d0
                uint64_t rax_19 = zx.q((r15_1 + 1).d)
                int128_t* const rdx_7 = &data_14369a5d0
                arg_8.q = rax_19
                void* rax_21 = (rax_19 << 1) + r11_2 + 8
                
                if (rax_21 u>= r11_2 + 8)
                    r8_9 = rax_21
                
                void* rax_23 = (r15_1 << 1) + r11_2 + 8
                
                if (rax_23 u>= r11_2 + 8)
                    rdx_7 = rax_23
                
                if (zx.w(*r8_9) * 0x100 + zx.w(*(r8_9 + 1))
                        u> zx.w(*(rdx_7 + 1)) + zx.w(*rdx_7) * 0x100)
                    void* rax_26 = (r15_1 << 1) + r11_2 + 8
                    void* rcx_17 = &data_14369a5d0
                    void* rdx_10 = &data_14369a5d0
                    
                    if (rax_26 u>= r11_2 + 8)
                        rcx_17 = rax_26
                    
                    uint32_t r10_7 = (zx.d(*(r11_2 + 5)) << 0x10) + (zx.d(*(r11_2 + 6)) << 8)
                        + (zx.d(*(r11_2 + 4)) << 0x18) + (zx.d(*rcx_17) << 8) + zx.d(*(rcx_17 + 1))
                    void* rcx_18 = &data_14369a5d0
                    r10_1 = r10_7 + zx.d(*(r11_2 + 7))
                    void* rax_37 = (arg_8.q << 1) + r11_2 + 8
                    
                    if (rax_37 u>= r11_2 + 8)
                        rdx_10 = rax_37
                    
                    void* rax_39 = (r15_1 << 1) + r11_2 + 8
                    
                    if (rax_39 u>= r11_2 + 8)
                        rcx_18 = rax_39
                    
                    r14_1 = ((zx.d(*rdx_10) - zx.d(*rcx_18)) << 8) - zx.d(*(rcx_18 + 1))
                        + zx.d(*(rdx_10 + 1))
                    result.b = 1
                else
                    result.b = 0
                
                goto label_142bfe513
            
            result.b = 0

return result
