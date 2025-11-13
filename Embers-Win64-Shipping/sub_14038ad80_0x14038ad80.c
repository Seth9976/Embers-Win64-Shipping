// 函数: sub_14038ad80
// 地址: 0x14038ad80
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_288
int64_t result = __security_cookie ^ &var_288
int64_t result_1 = result
int32_t* r15 = *(arg1 + 8)
int128_t* rbx = *(arg1 + 0x10)
int64_t r12 = sx.q(r15[1])
int64_t rbp = 0
void* r14 = arg3
void var_268
uint128_t zmm0
uint128_t zmm1
uint128_t zmm2

if (r12 s> 0)
    int64_t rdi_1 = sx.q(*r15)
    uint128_t zmm6
    uint128_t var_38_1 = zmm6
    int128_t zmm7
    int128_t var_48_1 = zmm7
    
    do
        zmm6 = *rbx
        rbx += 4
        result = 0
        
        if (rdi_1 s>= 4)
            void* rcx = arg2 + 8
            int64_t i_2 = ((rdi_1 - 4) u>> 2) + 1
            result = i_2 << 2
            int64_t i
            
            do
                zmm1 = *(rcx - 4)
                zmm0 = *(rcx - 8)
                rbx = &rbx[1]
                rcx += 0x10
                zmm0.d = zmm0.d f* rbx[-1].d
                zmm1.d = zmm1.d f* *(rbx - 0xc)
                zmm0.d = zmm0.d f+ zmm6.d
                zmm6 = zmm1
                zmm1.d = (*(rcx - 0xc)).d f* *(rbx - 4)
                zmm6.d = zmm6.d f+ zmm0.d
                zmm0.d = (*(rbx - 8)).d f* *(rcx - 0x10)
                zmm6.d = zmm6.d f+ zmm0.d
                zmm6.d = zmm6.d f+ zmm1.d
                i = i_2
                i_2 -= 1
            while (i != 1)
        
        while (result s< rdi_1)
            zmm0 = *(arg2 + (result << 2))
            result += 1
            rbx += 4
            zmm0.d = zmm0.d f* *(rbx - 4)
            zmm6.d = zmm6.d f+ zmm0.d
        
        zmm7 = 0x3f800000
        float zmm3
        
        if (not(8f f> zmm6.d))
            zmm3 = 1f
        else if (zmm6.d f> -8f)
            if (not(0f f<= zmm6.d))
                zmm6 ^= 0x80000000
                zmm7 = 0xbf800000
            
            zmm0.d = zmm6.d f* 25f
            zmm0.d = zmm0.d f+ 0.5f
            zmm0.q = fconvert.d(zmm0.d)
            int32_t result_2 = int.d(floor(zmm0.q).q)
            result = sx.q(result_2)
            zmm2 = *(&data_1435fdf80 + (result << 2))
            zmm0.d = zmm2.d f* zmm2.d
            zmm1.d = _mm_cvtepi32_ps(zx.o(result_2)).d f* 0.0399999991f
            zmm6.d = zmm6.d f- zmm1.d
            zmm3 = (1f f- zmm0.d) f* zmm6.d
            zmm0.d = zmm2.d f* zmm6.d
            zmm1.d = 1f f- zmm0.d
            zmm3 = (zmm3 f* zmm1.d f+ zmm2.d) f* zmm7.d
        else
            zmm3 = -1f
        
        *(&var_268 + (rbp << 2)) = zmm3
        rbp += 1
    while (rbp s< r12)

int32_t i_1 = 0

if (r15[2] s> 0)
    do
        int64_t rcx_1 = sx.q(r15[1])
        zmm2 = *rbx
        rbx += 4
        int64_t j = 0
        
        if (rcx_1 s>= 4)
            do
                int32_t var_264[0x63]
                zmm1 = var_264[j]
                zmm0 = *(&var_268 + (j << 2))
                j += 4
                rbx = &rbx[1]
                zmm0.d = zmm0.d f* rbx[-1].d
                zmm1.d = zmm1.d f* *(rbx - 0xc)
                zmm0.d = zmm0.d f+ zmm2.d
                zmm2 = zmm1
                void var_26c
                zmm1.d = (*(&var_26c + (j << 2))).d f* *(rbx - 4)
                zmm2.d = zmm2.d f+ zmm0.d
                void var_270
                zmm0.d = (*(&var_270 + (j << 2))).d f* *(rbx - 8)
                zmm2.d = zmm2.d f+ zmm0.d
                zmm2.d = zmm2.d f+ zmm1.d
            while (j s< rcx_1 - 3)
        
        while (j s< rcx_1)
            zmm1 = *(&var_268 + (j << 2))
            j += 1
            rbx += 4
            zmm1.d = zmm1.d f* *(rbx - 4)
            zmm2.d = zmm2.d f+ zmm1.d
        
        zmm0, result = sub_14038b0f0(zmm2)
        i_1 += 1
        r14 += 4
        *(r14 - 4) = zmm0.d
    while (i_1 s< r15[2])

__security_check_cookie(result_1 ^ &var_288)
return result
