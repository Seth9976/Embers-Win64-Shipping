// 函数: sub_141739760
// 地址: 0x141739760
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* arg_20 = arg4
int64_t rbx = 0
int64_t* result = arg2
uint64_t i_1 = zx.q(arg1[3].d)
int32_t rdx = 0x10
uint64_t var_88 = 0
uint64_t rdi = 0
int64_t var_80 = 0
int32_t r15 = 0
int32_t rax = int.d(_mm_cvtepi32_pd(zx.q(i_1.d)) f* 0.10000000000000001)

if (rax s<= 0x10)
    rdx = rax

if (rdx s> 0)
    sub_1405a5410(&var_88, rdx)
    arg4 = arg_20
    r15 = var_80.d
    rdi = var_88

int128_t zmm6 = arg5

if (i_1.d s> 0)
    uint64_t i
    
    do
        int32_t var_78
        zmm6 = sub_141737b30(arg1[2] + rbx, &var_78, arg3, arg4, zmm6.d)
        char var_6c
        
        if (var_6c != 0)
            float zmm4_1[0x4] = var_78
            int32_t var_74
            int64_t zmm3_1 = var_74
            float zmm1_1 = zmm4_1[0]
            int32_t var_70
            float zmm0_1[0x4] = var_70
            float zmm2_1 = zmm3_1.d f- *(arg3 + 4)
            zmm0_1[0] = zmm0_1[0] f- *(arg3 + 8)
            zmm1_1 = zmm1_1 f- *arg3
            int64_t r13_1 = sx.q(r15)
            int32_t var_5c_1 = var_70
            zmm0_1[0] = zmm0_1[0] * zmm0_1[0]
            r15 = (r13_1 + 1).d
            var_80.d = r15
            zmm2_1 = zmm2_1 * zmm2_1 + zmm1_1 * zmm1_1 + zmm0_1[0]
            zmm0_1 = _mm_unpacklo_ps(zmm4_1, zmm3_1)
            var_78.q = zmm0_1.q
            int64_t var_64_1 = zmm0_1.q
            
            if (r15 s> var_80:4.d)
                sub_1405a4f90(&var_88)
                r15 = var_80.d
                rdi = var_88
            
            *(rdi + r13_1 * 0x10) = zmm2_1.o
        
        arg4 = arg_20
        rbx += 0x18
        i = i_1
        i_1 -= 1
    while (i != 1)
    result = arg2

char arg_8 = 0
int64_t zmm0_2 = sub_1416e6770(rdi, r15, 0)
uint64_t rbx_1 = rdi
int64_t r15_3 = (sx.q(r15) << 4) + rdi
int32_t rax_5

if (rdi == r15_3)
label_14173992a:
    var_80.d = 0
    rax_5 = 0
    *result = _mm_unpacklo_ps(zx.o(0), 0)
    *(result + 0xc) = 0
else
    zmm6.q = fconvert.d(zmm6.d)
    zmm6.q = zmm6.q f+ 0.0001
    
    while (true)
        (*(*arg1 + 0x20))(arg1, rbx_1 + 4, &var_88)
        
        if (fconvert.d(zmm0_2.d) f< zmm6.q)
            *result = *(rbx_1 + 4)
            rax_5 = *(rbx_1 + 0xc)
            *(result + 0xc) = 1
            break
        
        rbx_1 += 0x10
        
        if (rbx_1 == r15_3)
            goto label_14173992a

result[1].d = rax_5

if (rdi != 0)
    sub_140a74f90(rdi)

return result
