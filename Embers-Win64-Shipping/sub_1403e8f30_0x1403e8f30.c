// 函数: sub_1403e8f30
// 地址: 0x1403e8f30
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

__chkstk(0x1190)
void var_11b8
int64_t result = __security_cookie ^ &var_11b8
int64_t result_1 = result
int64_t rcx = sx.q(*(arg1 + 0x16a4))
void* rsi_2 = arg1 + ((rcx * 9 + 0x602) << 2)

if (*(arg1 + 0x1800) != 0 && *(arg1 + 0x11cc) s> 0x4d)
    void* rdx = arg1 + 0x90
    *(arg1 + (rcx << 2) + 0x12a4) = 1
    void var_1188
    void* rcx_1 = &var_1188
    
    if (((rdx.d | &var_1188) & 0xf) != 0)
        memcpy(&var_1188, rdx, 0x111c)
    else
        int64_t i_2 = 0x22
        int64_t i
        
        do
            int128_t zmm0 = *rdx
            int128_t zmm1 = *(rdx + 0x10)
            rcx_1 += 0x80
            rdx += 0x80
            *(rcx_1 - 0x80) = zmm0
            zmm0 = *(rdx - 0x60)
            *(rcx_1 - 0x70) = zmm1
            zmm1 = *(rdx - 0x50)
            *(rcx_1 - 0x60) = zmm0
            zmm0 = *(rdx - 0x40)
            *(rcx_1 - 0x50) = zmm1
            zmm1 = *(rdx - 0x30)
            *(rcx_1 - 0x40) = zmm0
            zmm0 = *(rdx - 0x20)
            *(rcx_1 - 0x30) = zmm1
            zmm1 = *(rdx - 0x10)
            *(rcx_1 - 0x20) = zmm0
            *(rcx_1 - 0x10) = zmm1
            i = i_2
            i_2 -= 1
        while (i != 1)
        int64_t rax_4 = *(rdx + 0x10)
        *rcx_1 = *rdx
        *(rcx_1 + 0x10) = rax_4
        *(rcx_1 + 0x18) = *(rdx + 0x18)
    
    *rsi_2 = *(arg1 + 0x12b0)
    *(rsi_2 + 8) = *(arg1 + 0x12b8)
    *(rsi_2 + 0x10) = *(arg1 + 0x12c0)
    *(rsi_2 + 0x18) = *(arg1 + 0x12c8)
    *(rsi_2 + 0x20) = *(arg1 + 0x12d0)
    void var_68
    memcpy(&var_68, arg2, *(arg1 + 0x11fc) << 2)
    int64_t rax_11 = sx.q(*(arg1 + 0x16a4))
    
    if (rax_11.d == 0 || *(arg1 + (rax_11 << 2) + 0x12a0) == 0)
        char rdx_2 = 0x3f
        *(arg1 + 0x11d4) = *(arg1 + 0x1c38)
        int32_t rcx_4 = sx.d(*(arg1 + 0x1804) + *rsi_2)
        
        if (rcx_4 s< 0x3f)
            rdx_2 = rcx_4.b
        
        *rsi_2 = rdx_2
    
    int32_t i_1 = 0
    int32_t r9
    r9.b = arg4 == 2
    void var_58
    sub_1403e8180(&var_58, rsi_2, arg1 + 0x11d4, r9, *(arg1 + 0x11fc))
    
    if (*(arg1 + 0x11fc) s> 0)
        void* rax_16 = arg2
        
        do
            uint128_t zmm0_1 = zx.o(*(&var_58 - arg2 + rax_16))
            i_1 += 1
            rax_16 += 4
            zmm0_1.d = _mm_cvtepi32_ps(zmm0_1).d f* 1.52587891e-05f
            *(rax_16 - 4) = zmm0_1.d
        while (i_1 s< *(arg1 + 0x11fc))
    
    int32_t var_1198_1
    var_1198_1.q = arg1 + 0x1874 + sx.q(*(arg1 + 0x16a4)) * 0x140
    sub_1403ec8a0(arg1, arg2, rsi_2, &var_1188, var_1198_1, arg3)
    result = memcpy(arg2, &var_68, *(arg1 + 0x11fc) << 2)

__security_check_cookie(result_1 ^ &var_11b8)
return result
