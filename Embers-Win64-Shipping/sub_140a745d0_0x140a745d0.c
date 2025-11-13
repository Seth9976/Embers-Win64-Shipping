// 函数: sub_140a745d0
// 地址: 0x140a745d0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_228
int64_t rax_1 = __security_cookie ^ &var_228
int32_t rsi = *(arg3 + 8)
int32_t r14 = *(arg3 + 0x10)
int32_t rbp = *(arg3 + 0xc)
uint128_t zmm6 = arg1
int32_t rbx = *(arg3 + 0x14)

if (rsi s<= 0)
    rsi = 0

arg1.d = fconvert.s(zmm6.q)

if (r14 s<= 0)
    r14 = 0

*(arg3 + 8) = rsi
*(arg3 + 0x10) = r14

if (rsi s>= rbp)
    rbp = rsi

*(arg3 + 0xc) = rbp
arg1 = _mm_cvtps_pd(arg1.q)

if (r14 s>= rbx)
    rbx = r14

*(arg3 + 0x14) = rbx
int64_t result

if (_isnan(arg1.q) == 0)
    int32_t r9 = *(arg3 + 4)
    uint64_t var_1c8
    uint64_t* var_200_1 = &var_1c8
    var_1c8 = zmm6.q
    uint64_t rdi_1 = var_1c8
    int64_t var_1d0
    int64_t* var_208_1 = &var_1d0
    int32_t rax_2
    rax_2.b = rdi_1 u>= -0x8000000000000000
    char var_1d8_1 = rax_2.b
    var_1d0 = (zx.o(0)).q
    var_1c8 = (zx.o(0)).q
    double zmm8_1 = sub_140a749c0(rax_2.b, zmm6, rbx, r9, var_208_1, var_200_1)
    uint128_t zmm1_1 = zx.o(var_1d0)
    uint128_t zmm6_1 = zx.o(var_1c8)
    
    if (rdi_1 u>= -0x8000000000000000)
        zmm1_1 ^= data_142d8e3c0
        zmm6_1 ^= data_142d8e3c0
    
    int64_t zmm7_1 = 0x43e0000000000000
    int64_t rax_4 = 0
    
    if (not(zmm1_1.q f< zmm7_1))
        zmm1_1.q = zmm1_1.q f- zmm7_1
        
        if (not(zmm1_1.q f>= zmm7_1))
            rax_4 = -0x8000000000000000
    
    char r8_2 = *(arg2 + 0x74)
    char rdx_1
    
    if (arg3[1] == 0 || r8_2 == 0)
        rdx_1 = 0
    else
        rdx_1 = 1
    
    int32_t var_1e0_1 = 0x29
    var_208_1.w = arg2[0xe].w
    void var_e8
    int32_t rax_6 = sub_140a80ad0(int.q(zmm1_1.q) + rax_4, rdx_1, r8_2, *(arg2 + 0x75), 
        var_208_1.w, arg2 + 0x76, rsi, rbp, &var_e8)
    var_1d0.d = rax_6
    int32_t r8_3 = rax_6
    int32_t rsi_1 = 0
    int16_t var_1a8[0x30]
    
    if (not(zmm6_1.q f== zmm8_1))
        int64_t rdx_2 = 0
        
        if (not(zmm6_1.q f< zmm7_1))
            zmm6_1.q = zmm6_1.q f- zmm7_1
            
            if (not(zmm6_1.q f>= zmm7_1))
                rdx_2 = -0x8000000000000000
        
        int64_t rcx_6 = int.q(zmm6_1.q)
        int32_t rdi_2 = 0
        uint64_t i = rcx_6 + rdx_2
        void var_148
        
        if (rcx_6 != neg.q(rdx_2) && rbx s> 0)
            void* r8_4 = &var_148
            
            while (i != 0)
                rsi_1 += 1
                rdi_2 += 1
                int16_t rax_10 = *(arg2 + 0x76 + ((i u% 0xa) << 1))
                i u/= 0xa
                *r8_4 = rax_10
                r8_4 += 2
                
                if (rdi_2 s>= rbx)
                    break
        
        uint64_t rcx_8 = zx.q(0x14 - rdi_2)
        int32_t rdi_3 = neg.d(rdi_2)
        
        if (rdi_3 s<= rcx_8.d)
            rcx_8 = zx.q(rdi_3)
        
        if (rcx_8.d s> 0)
            int64_t rax_11 = sx.q(rsi_1)
            rsi_1 += rcx_8.d
            int64_t rcx_9
            int64_t rdi_5
            rdi_5, rcx_9 = __memfill_u16(&var_148 + (rax_11 << 1), *(arg2 + 0x76), rcx_8)
        
        int64_t r8_5 = sx.q(rsi_1)
        
        if (rsi_1 s> 0)
            int64_t rcx_10 = 0
            void* rdx_6 = &var_228 + (r8_5 << 1) + 0xde
            
            do
                int16_t rax_13 = *rdx_6
                rdx_6 -= 2
                var_1a8[rcx_10] = rax_13
                rcx_10 += 1
            while (rcx_10 s< r8_5)
        
        int32_t rbx_1 = rbx - rsi_1
        var_1a8[r8_5] = 0
        int32_t rbp_1 = 0x12 - rsi_1
        
        if (rbx_1 s<= rbp_1)
            rbp_1 = rbx_1
        
        if (rbp_1 s> 0)
            memmove(&var_1a8[sx.q(rbp_1)], &var_1a8, r8_5.d * 2)
            rsi_1 += rbp_1
            int64_t rcx_13
            int64_t rdi_6
            rdi_6, rcx_13 = __memfill_u16(&var_1a8, *(arg2 + 0x76), (sx.q(rbp_1) * 2) u>> 1)
        
        if (rsi_1 s> r14)
            void* rcx_14 = &var_228 + (sx.q(rsi_1) << 1) + 0x7e
            
            while (*rcx_14 == *(arg2 + 0x76))
                rsi_1 -= 1
                rcx_14 -= 2
                
                if (rsi_1 s<= r14)
                    break
        
        r8_3 = var_1d0.d
    
    int64_t rax_18 = sx.q(rsi_1) * 2
    int64_t rax_21
    
    if (rax_18 u< 0x52)
        int32_t r12_1 = 0x12 - rsi_1
        void* rdi_7 = &var_1a8[sx.q(rsi_1)]
        int32_t r14_1 = r14 - rsi_1
        
        if (r14_1 s<= r12_1)
            r12_1 = r14_1
        
        *rdi_7 = 0
        
        if (r12_1 s> 0)
            rsi_1 += r12_1
            int64_t rcx_16
            int64_t rdi_8
            rdi_8, rcx_16 = __memfill_u16(rdi_7, *(arg2 + 0x76), zx.q(r12_1))
        
        rax_21 = sx.q(rsi_1) * 2
    
    if (rax_18 u>= 0x52 || rax_21 u>= 0x52)
        __report_rangecheckfailure()
        noreturn
    
    var_1a8[sx.q(rsi_1)] = 0
    int32_t var_1f0_1
    var_1f0_1.q = arg4
    var_208_1.d = r8_3
    result = sub_140a6a820(var_1d8_1, *arg3, arg2, &var_e8, var_208_1.d, &var_1a8, rsi_1, var_1f0_1)
else
    int32_t rax_3 = arg2[1].d
    int32_t r8 = rax_3 - 1
    
    if (rax_3 == 0)
        r8 = 0
    
    result = sub_140a20ba0(arg4, *arg2, r8)

__security_check_cookie(rax_1 ^ &var_228)
return result
