// 函数: sub_141793200
// 地址: 0x141793200
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_198
int64_t rax_1 = __security_cookie ^ &var_198
int32_t var_168 = 0
uint128_t zmm0 = zx.o(*arg3)
float rax_2 = arg3[1].d
uint128_t zmm2 = zmm0
void* r14 = arg1
uint128_t zmm6
uint128_t var_38 = zmm6
int64_t* r15 = arg2
void** var_148 = zmm0.q
int128_t zmm7
int128_t var_48 = zmm7
uint128_t zmm8
uint128_t var_58 = zmm8
int128_t zmm9
int128_t var_68 = zmm9
int32_t* var_120
var_168.q = &var_120
int128_t zmm10
int128_t var_78 = zmm10
uint64_t var_13c = zmm2.q
void var_d0
void* var_f0 = &var_d0
uint128_t zmm11
uint128_t var_88 = zmm11
int16_t var_d4 = 0
char var_d2 = 0
int128_t zmm12
int128_t var_98 = zmm12
int32_t* var_170 = &var_168
int128_t zmm13
int128_t var_a8 = zmm13
zmm0.d = zmm0.d f- arg4.d
zmm2.d = zmm2.d f+ arg4.d
var_120 = nullptr
int32_t var_118 = 0
void*** var_178 = &var_148
var_148.d = zmm0.d
zmm0.d = var_148:4.d.d f- arg4.d
float var_140_1 = rax_2 f- arg4.d
float zmm1 = rax_2 f+ arg4.d
var_13c.d = zmm2.d
var_148:4.d = zmm0.d
zmm0.d = var_13c:4.d.d f+ arg4.d
var_13c:4.d = zmm0.d
uint64_t var_158 = var_158
sub_1416ed5f0(arg1 + 0xb0, arg2, arg3)
int32_t* rbx = var_120
void* rsi = &rbx[sx.q(var_118)]
char rdi

if (rbx != rsi)
    zmm12 = 0x38d1b717
    zmm13 = 0x3f800000
    
    while (true)
        int64_t rdx = *r15
        int64_t r8 = *(r14 + 0x38)
        int64_t r9_1 = sx.q(*rbx) * 3
        int32_t* r14_1 = r8 + sx.q(*(rdx + (r9_1 << 2))) * 0xc
        int64_t rcx_2 = sx.q(*(rdx + (r9_1 << 2) + 4)) * 3
        int128_t* r15_1 = r8 + (rcx_2 << 2)
        zmm6.d = (*(r8 + (rcx_2 << 2))).d f- *r14_1
        float zmm5_1 = *(r15_1 + 4) f- r14_1[1]
        int64_t rcx_3 = sx.q(*(rdx + (r9_1 << 2) + 8)) * 3
        int128_t* r12_1 = r8 + (rcx_3 << 2)
        zmm7.d = (*(r8 + (rcx_3 << 2) + 4)).d f- r14_1[1]
        zmm2.d = (*(r12_1 + 8)).d f- r14_1[2]
        uint128_t zmm4_1
        zmm4_1.d = (*r12_1).d f- *r14_1
        arg4.d = (*(r15_1 + 8)).d f- r14_1[2]
        int64_t zmm0_1 = zmm7.q
        zmm7.d = zmm7.d f* zmm6.d
        zmm8 = zmm2
        zmm2.d = zmm2.d f* zmm6.d
        zmm8.d = zmm8.d f* zmm5_1
        zmm0_1.d = zmm0_1.d f* arg4.d
        zmm11.d = zmm4_1.d f* arg4.d
        zmm8.d = zmm8.d f- zmm0_1.d
        zmm4_1.d = zmm4_1.d f* zmm5_1
        zmm11.d = zmm11.d f- zmm2.d
        zmm7.d = zmm7.d f- zmm4_1.d
        zmm0_1.d = zmm8.q.d f* zmm8.d
        zmm2.d = zmm11.d f* zmm11.d
        zmm2.d = zmm2.d f+ zmm0_1.d
        zmm2.d = zmm2.d f+ zmm7.d f* zmm7.d
        
        if (zmm2.d f>= zmm12.d)
            float temp0_1 = _mm_sqrt_ss(0, zmm2.d)
            zmm0_1.d = zmm13.q.d f/ temp0_1
            zmm8.d = zmm8.d f* zmm0_1.d
            zmm11.d = zmm11.d f* zmm0_1.d
            zmm7.d = zmm7.d f* zmm0_1.d
            var_168 = zmm8.d
            int32_t var_164_1 = zmm11.d
            int32_t var_160_2 = zmm7.d
            
            if (not(temp0_1 f<= zmm12.d))
                r8.b = 2
                sub_1417048d0(&var_148, 0, r8.b)
                zmm6 = *arg3
                zmm9 = *(arg3 + 4)
                zmm10 = arg3[1].d
                var_148 = &data_142fc47b8
                arg4.d = zmm6.d f- (*r14_1):4.d
                int64_t var_12c_1 = var_168.q
                zmm0_1.d = zmm9.q.d f- zmm1
                arg4.d = arg4.d f* zmm8.d
                zmm0_1.d = zmm0_1.d f* zmm11.d
                int32_t var_124_1 = var_160_2
                arg4.d = arg4.d f+ zmm0_1.d
                arg4.d = arg4.d f+ (zmm10.d f- r14_1[2]) f* zmm7.d
                zmm2.d = arg4.d f* zmm11.d
                zmm0_1.d = zmm6.q.d f- arg4.d f* zmm8.d
                arg4.d = arg4.d f* zmm7.d
                int32_t var_110 = zmm0_1.d
                zmm0_1.d = zmm9.q.d f- zmm2.d
                int32_t var_10c_1 = zmm0_1.d
                zmm0_1.d = zmm10.q.d f- arg4.d
                int32_t var_108_1 = zmm0_1.d
                int64_t zmm14_1
                zmm6, zmm9, zmm10, zmm12, zmm13, zmm14_1 =
                    sub_1415c64e0(&var_158, &var_110, r14_1, r15_1, r12_1, arg3)
                zmm7.d = var_158.d.d f- zmm6.d
                zmm8.d = var_158:4.d.d f- zmm9.d
                int32_t var_150
                zmm6.d = var_150.d f- zmm10.d
                sub_141706890(&var_148)
                zmm8.d = zmm8.d f* zmm8.d
                zmm7.d = zmm7.d f* zmm7.d
                zmm6.d = zmm6.d f* zmm6.d
                zmm8.d = zmm8.d f+ zmm7.d
                zmm0_1.d = zmm14_1.d f* zmm14_1.d
                zmm8.d = zmm8.d f+ zmm6.d
                
                if (zmm8.d f<= zmm0_1.d)
                    rbx = var_120
                    rdi = 1
                    goto label_1417936b0
        else
            var_168.q = 0x3f800000
            int32_t var_160_1 = 0
        
        rbx = &rbx[1]
        
        if (rbx == rsi)
            rbx = var_120
            break
        
        r14 = arg1
        r15 = arg2

rdi = 0
label_1417936b0:

if (rbx != 0)
    sub_140a74f90(rbx)

__security_check_cookie(rax_1 ^ &var_198)
return zx.q(rdi)
