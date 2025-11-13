// 函数: sub_1428dbd70
// 地址: 0x1428dbd70
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

__chkstk(0x30)
uint64_t rbx = zx.q(arg2)
uint128_t zmm6 = _mm_cvtepi32_pd(zx.q(rbx.d))
int32_t r8 = 0

if (sub_1428a5c60(&data_143fecc48, sub_1428dca20) != 0)
    r8 = data_143fecc50

if (r8 != 0)
    int64_t* rdi_1 = data_143fecc38
    
    if (rdi_1 != 0 && rbx.d s>= 0 && not(0.0 f> zmm6.q))
        int64_t rax_1 = rdi_1[8]
        int64_t zmm0 = float.d(rax_1)
        
        if (rax_1 s< 0)
            zmm0 = zmm0 f+ 1.8446744073709552e+19
        
        if (not(zmm6.q f> zmm0))
            sub_1428dcc50(rdi_1)
            zmm6.q = zmm6.q f* 8.0
            int64_t rax_2 = 0
            zmm0 = 0x43e0000000000000
            
            if (not(zmm6.q f< zmm0))
                zmm6.q = zmm6.q f- zmm0
                
                if (not(zmm6.q f>= zmm0))
                    rax_2 = -0x8000000000000000
            
            int32_t rax_3 = sub_1428dce30(rdi_1, arg1, rbx, int.q(zmm6.q) + rax_2)
            sub_1428dd090(rdi_1)
            return zx.q(rax_3)

return 0
