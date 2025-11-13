// 函数: sub_1426f2670
// 地址: 0x1426f2670
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

*arg1 = 0
*(arg1 + 0x14) = data_143dbb1f8.q
int32_t rax = data_143dbb200
*(arg1 + 0x1c) = rax
arg1[1] = *(arg1 + 0x14)
arg1[2].d = rax
arg1[4].b = 0
*(arg1 + 0x24) = 0x7f7fffff
arg1[5].d = 0x7f7fffff
*(arg1 + 0x2c) = 0x7f7fffff
*(arg1 + 0x34) = 0
*(arg1 + 0x3c) = 0
__builtin_memset(&arg1[9], 0, 0x20)
*(arg1 + 0x6c) = 0
int64_t i_3 = sx.q(arg2[1].d)

if (i_3.d == 0)
    return arg1

uint128_t zmm1 = data_143dbb1f8
char r8 = 0
int32_t zmm3 = data_143dbb1fc
uint128_t zmm2 = zmm1
uint128_t zmm4 = data_143dbb200
int32_t zmm5 = zmm3
int64_t i_2 = i_3
uint128_t zmm6 = zmm4
int32_t var_4c = zmm1.d
int32_t var_48 = zmm3
int32_t var_44 = zmm4.d
int32_t var_58 = zmm1.d
int32_t var_54 = zmm3
int32_t var_50 = zmm4.d
char var_40 = 0

if (i_3.d s> 0)
    uint128_t* rcx_1 = *arg2 + 0x10
    int64_t i
    
    do
        uint128_t zmm0
        
        if (r8 == 0)
            if (rcx_1[1].b != 0)
                zmm1 = zx.o(*(rcx_1 + 8))
                zmm2 = *(rcx_1 - 8)
                int32_t rax_1 = rcx_1[1].d
                r8 = rax_1.b
                var_48.q = zmm1.q
                zmm3 = var_48
                zmm0 = _mm_shuffle_ps(zmm1, zmm1, 0x55)
                var_58.o = zmm2
                var_40.d = rax_1
                zmm6 = var_50
                zmm4 = zmm0
                zmm5 = var_54
                zmm0 = zmm2
                zmm2 = var_58
                zmm1 = _mm_shuffle_ps(zmm0, zmm0, 0xff)
        else if (rcx_1[1].b != 0)
            zmm0 = *(rcx_1 - 8)
            
            if (not(zmm2.d f<= zmm0.d))
                var_58 = zmm0.d
                zmm2 = zmm0
            
            zmm0 = *(rcx_1 - 4)
            
            if (not(zmm5 f<= zmm0.d))
                var_54 = zmm0.d
                zmm5 = zmm0.d
            
            zmm0 = *rcx_1
            
            if (not(zmm6.d f<= zmm0.d))
                var_50 = zmm0.d
                zmm6 = zmm0
            
            zmm0 = *(rcx_1 + 4)
            
            if (not(zmm1.d f>= zmm0.d))
                int32_t var_4c_1 = zmm0.d
                zmm1 = zmm0
            
            zmm0 = *(rcx_1 + 8)
            
            if (not(zmm3 f>= zmm0.d))
                var_48 = zmm0.d
                zmm3 = zmm0.d
            
            zmm0 = *(rcx_1 + 0xc)
            
            if (not(zmm4.d f>= zmm0.d))
                int32_t var_44_1 = zmm0.d
                zmm4 = zmm0
        rcx_1 -= -0x80
        i = i_2
        i_2 -= 1
    while (i != 1)

int32_t i_1 = 0
float zmm2_1 = 1f / sub_142703bd0(arg1, data_143b58064, &var_58)
arg1[0xe].d = int.d(zmm2_1 f* *(arg1 + 0x24))
arg1[0xf].d = int.d(zmm2_1 f* *(arg1 + 0x2c))
*(arg1 + 0x74) = int.d(zmm2_1 f* arg1[5].d)

if (arg1[0xa].d s<= 0)
    return arg1

char* r15 = nullptr

do
    int32_t temp2_1 = arg1[8].d
    int64_t rdi_1 = sx.q(arg2[1].d)
    bool r11_1 = false
    int64_t r10_1 = 0
    uint64_t rcx_3
    bool cond:0_1
    
    if (rdi_1 s<= 0)
    label_1426f293f:
        cond:0_1 = r11_1 != 0
    else
        int64_t rdx_2 = 0
        
        while (true)
            cond:0_1 = r11_1 != 0
            
            if (r11_1 != 0)
                break
            
            int64_t r8_2 = *arg2
            int32_t r9_2 = arg1[0xe].d + divu.dp.d(0:i_1, temp2_1) - *(rdx_2 + r8_2 + 0x70)
            rcx_3 = zx.q(*(arg1 + 0x74) + modu.dp.d(0:i_1, temp2_1) - *(rdx_2 + r8_2 + 0x74))
            
            if (r9_2 s>= 0 && r9_2 s< *(rdx_2 + r8_2 + 0x3c) && rcx_3.d s>= 0)
                int32_t rax_5 = *(rdx_2 + r8_2 + 0x40)
                
                if (rcx_3.d s< rax_5)
                    int32_t rax_7 = rax_5 * r9_2 + rcx_3.d
                    
                    if (rax_7 != 0xffffffff)
                        r11_1 = *(sx.q(rax_7) + *(rdx_2 + r8_2 + 0x48)) != 0
            
            r10_1 += 1
            rdx_2 -= -0x80
            
            if (r10_1 s>= rdi_1)
                goto label_1426f293f
    
    rcx_3.b = cond:0_1
    i_1 += 1
    r15[arg1[9]] = rcx_3.b
    r15 = &r15[1]
while (i_1 s< arg1[0xa].d)

return arg1
