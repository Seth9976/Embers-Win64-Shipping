// 函数: sub_14214ded0
// 地址: 0x14214ded0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (arg1 == 0)
    return 

int64_t* r15_1 = arg1
void* rcx = arg1[0x88]

if (rcx == 0)
    return 

int32_t var_98
sub_1423633d0(rcx, &var_98)
float zmm6[0x4] = var_98
int32_t var_90
float zmm3[0x4] = var_90
int32_t var_94
int128_t zmm5 = var_94
int32_t var_84
zmm3[0] = zmm3[0] f+ var_84
zmm3[0] = zmm3[0] f- var_84
int32_t var_8c
zmm6[0] = zmm6[0] f- var_8c
zmm6[0] = zmm6[0] f+ var_8c
void* rcx_1 = r15_1[0x88]
int32_t var_88
int128_t zmm7
zmm7.d = zmm5.d f+ var_88
zmm5.d = zmm5.d f- var_88
float var_e8_1 = zmm3[0]
float var_dc_1 = zmm3[0]
int64_t var_f0 = (_mm_unpacklo_ps(zmm6, zmm5.q)).q
int64_t var_e4 = (_mm_unpacklo_ps(zmm6, zmm7.q)).q
char var_d8_1 = 1
uint64_t rax_4 = zx.q(arg4) << 2
*(&var_f0 + rax_4)
int128_t zmm9 = *(&var_e4 + rax_4)
int32_t rax_5 = sub_1423660e0(rcx_1)
sub_142397ac0(r15_1, rax_5, rax_5)
void* rsi_1 = r15_1[0x8c]
int32_t r13_1 = 0
int32_t var_108_1 = 0
void* var_d0_1 = rsi_1
void* rax_9 = sx.q(r15_1[0x8d].d) * 0x90 + rsi_1

if (rsi_1 != rax_9)
    int512_t zmm8_1
    zmm8_1.o = 0x3f800000
    
    do
        float zmm7_1
        float zmm8_2
        zmm7_1, zmm8_2 = sub_141f6f2b0(r15_1, r13_1)
        void* rax_10 = r15_1[0x88]
        int32_t* rbx_2 = nullptr
        int32_t* var_100 = nullptr
        int32_t var_f4_1 = 0
        void* rdx_3 = *(**(rax_10 + 0x50) + (sx.q(r13_1) << 3))
        int64_t rdi_1 = sx.q(*(rdx_3 + 0x12c))
        int32_t var_f8_1 = rdi_1.d
        int32_t r12_1 = rdi_1.d
        
        if (rdi_1.d s> 0)
            sub_1406105e0(&var_100)
            r12_1 = var_f8_1
            rbx_2 = var_100
        
        memset(rbx_2, 0, rdi_1 << 2)
        int32_t i = 0
        
        if (rdi_1.d != 0)
            float zmm6_1 = zmm8_2 / (zmm9.d - zmm7_1)
            
            do
                float zmm3_1 =
                    (*(zx.q(i * *(rdx_3 + 0x128)) + rax_4 + *(rdx_3 + 0x120)) - zmm7_1) * zmm6_1
                var_f0.d = (*arg3 - *arg2) * zmm3_1 + *arg2
                var_f0:4.d = (arg3[1] - arg2[1]) * zmm3_1 + arg2[1]
                float var_e8_2 = (arg3[2] - arg2[2]) * zmm3_1 + arg2[2]
                var_e4.d = (arg3[3] - arg2[3]) * zmm3_1 + arg2[3]
                void var_a8
                char* rax_14
                rax_14, zmm6_1, zmm7_1, zmm9 = sub_140ae16d0(&var_f0, &var_a8, arg5)
                int64_t i_1 = sx.q(i)
                i += 1
                rbx_2[i_1] = *rax_14
            while (i u< rdi_1.d)
            
            rsi_1 = var_d0_1
            r15_1 = arg1
            r12_1 = var_f8_1
            r13_1 = var_108_1
        
        void*** rax_16 = j_sub_140a82f30(0x40)
        
        if (rax_16 != 0)
            rax_16 = sub_1422877b0(rax_16)
        
        *(rsi_1 + 0x30) = rax_16
        sub_1422a3d10(rax_16, rbx_2, r12_1, 4, 1)
        sub_141997e80(*(rsi_1 + 0x30))
        r13_1 += 1
        var_108_1 = r13_1
        
        if (rbx_2 != 0)
            sub_140a74f90(rbx_2)
        
        rsi_1 += 0x90
        var_d0_1 = rsi_1
    while (rsi_1 != rax_9)

sub_141ee8490(r15_1)
*(r15_1 + 0x44c) |= 0x20
