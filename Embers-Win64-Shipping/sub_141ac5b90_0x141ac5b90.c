// 函数: sub_141ac5b90
// 地址: 0x141ac5b90
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

ModQueryFile(arg1)
sub_141e29640(&arg1[2], arg2)
*(arg1 + 0x41) = 0
int32_t i = 0
*(arg1 + 0x8b) = 0
arg1[0x49].d = 0

if (*(arg1 + 0x24c) s<= 0xffffffff)
    sub_1405dadb0(&arg1[0x48], 0)

uint64_t result = zx.q(*(arg1 + 0x23c))
arg1[0x47].d = 0

if (result.d s< 0 && result.d != 0)
    result = sub_140638cc0(&arg1[0x46], 0)

int64_t rbp = sx.q(arg1[0x22].d)

if (rbp.d s<= 1)
    *(arg1 + 0x1ab) = 0
else
    int64_t r15_1 = sx.q(arg1[0x49].d)
    int32_t rax = (r15_1 + rbp).d
    arg1[0x49].d = rax
    
    if (rax s> *(arg1 + 0x24c))
        sub_1405a4cf0(&arg1[0x48])
    
    memset(arg1[0x48] + (r15_1 << 2), 0, rbp << 2)
    int64_t rbp_1 = sx.q(arg1[0x22].d)
    int64_t r15_2 = sx.q(arg1[0x47].d)
    int32_t rax_2 = (r15_2 + rbp_1).d
    arg1[0x47].d = rax_2
    
    if (rax_2 s> *(arg1 + 0x23c))
        sub_140638a00(&arg1[0x46])
    
    memset(arg1[0x46] + r15_2 * 0xc, 0, rbp_1 * 0xc)
    int32_t rax_4 = arg1[0x22].d
    int128_t zmm6
    
    if (rax_4 s<= 1)
        zmm6 = zx.o(0)
    else
        zmm6.d = 1f f/ _mm_cvtepi32_ps(zx.o(rax_4 - 1)).d
    
    result = sub_141f8b8d0(&arg1[0x24])
    uint64_t result_1 = result
    
    if (arg1[0x22].d s<= 0)
        *(arg1 + 0x1ab) = 0
    else
        int64_t rbp_2 = 0
        
        do
            int32_t* rbx_2 = arg1[0x48]
            uint128_t zmm1
            zmm1.d = _mm_cvtepi32_ps(zx.o(i)).d f* zmm6.d
            int32_t zmm0_2
            zmm0_2, result, zmm6 = sub_141f86ef0(result_1, zmm1, zx.o(0))
            *(rbx_2 + rbp_2) = zmm0_2
            rbp_2 += 4
            i += 1
        while (i s< arg1[0x22].d)
        
        *(arg1 + 0x1ab) = 0

return result
