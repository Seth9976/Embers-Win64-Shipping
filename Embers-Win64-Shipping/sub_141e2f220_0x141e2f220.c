// 函数: sub_141e2f220
// 地址: 0x141e2f220
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_e8
int64_t rax_1 = __security_cookie ^ &var_e8
*(arg1 + 0x188) = 0

if (*(arg1 + 0x18c) != 0)
    sub_14083ad30(arg1 + 0x180, 0)

*(arg1 + 0x198) = 0

if (*(arg1 + 0x19c) != 0)
    sub_1405dadb0(arg1 + 0x190, 0)

int64_t i_1 = sx.q(*(arg1 + 0x88))
int64_t rcx_2 = 0
int64_t var_88
__builtin_memset(&var_88, 0, 0x2c)
int32_t rbx = 0
int32_t var_5c = 0x80
int32_t var_58 = 0xffffffff
int32_t var_54 = 0
int64_t var_48 = 0
int32_t var_40 = 0

if (i_1 s> 0)
    int64_t r15_1 = 0
    int64_t i
    
    do
        void* rsi_2 = *(arg1 + 0x80) + r15_1
        
        if (sub_141e44a20(rsi_2) != 0)
            float zmm0_1 = sub_141e43460(rsi_2)
            uint128_t zmm1 = zx.o(rbx.q)
            _mm_shuffle_ps(zmm1, zmm1, 0xe1)
            zmm1.d = zmm0_1
            zmm1 = _mm_shuffle_ps(zmm1, zmm1, 0xe1)
            int32_t var_c4_1
            var_c4_1.q = zmm1.q
            uint64_t var_a8 = zmm1.q
            int32_t var_a0_1 = 0.d
            sub_141e14110(arg1, &var_a8, &var_88)
            
            if (*(rsi_2 + 0x50) != 0)
                int32_t zmm0_2 = sub_141e40fb0(rsi_2)
                zmm1 = zx.o(rbx.q)
                _mm_shuffle_ps(zmm1, zmm1, 0xe1)
                zmm1.d = zmm0_2
                zmm1 = _mm_shuffle_ps(zmm1, zmm1, 0xe1)
                int32_t var_b8_1
                var_b8_1.q = zmm1.q
                uint64_t var_98 = zmm1.q
                int32_t var_90_1 = 1.d
                sub_141e14110(arg1, &var_98, &var_88)
                int64_t rsi_3 = sx.q(*(arg1 + 0x198))
                int32_t rax_5 = (rsi_3 + 1).d
                *(arg1 + 0x198) = rax_5
                
                if (rax_5 s> *(arg1 + 0x19c))
                    sub_1405a4cf0(arg1 + 0x190)
                
                *(*(arg1 + 0x190) + (rsi_3 << 2)) = rbx
        
        rbx += 1
        r15_1 += 0xb8
        i = i_1
        i_1 -= 1
    while (i != 1)
    rcx_2 = var_48

if (*(arg1 + 0x188) s> 0)
    char var_c8
    sub_141e11460(*(arg1 + 0x180), *(arg1 + 0x188), var_c8)
    rcx_2 = var_48

int32_t var_40_1 = 0

if (rcx_2 != 0)
    sub_140a74f90(rcx_2)

int64_t var_80
bool cond:1 = var_80:4.d == 0
var_80.d = 0

if (not(cond:1))
    sub_1405a5130(&var_88, 0)

int32_t var_58_1 = 0xffffffff
int32_t var_54_1 = 0
int64_t var_78
void* result = sub_14059a8e0(&var_78, 0)
int64_t var_68

if (var_68 != 0)
    result = sub_140a74f90(var_68)

int64_t rcx_13 = var_88

if (rcx_13 != 0)
    result = sub_140a74f90(rcx_13)

__security_check_cookie(rax_1 ^ &var_e8)
return result
