// 函数: sub_1427483c0
// 地址: 0x1427483c0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* r14 = arg2
void* r13 = arg1[0x86]
void* rbx_1

if ((arg1[0xc8].b & 1) == 0)
    rbx_1 = r13 + 0x408

if ((arg1[0xc8].b & 1) != 0 || r13 == 0)
    rbx_1 = &arg1[0xc9]

void* arg_18 = rbx_1

if (r13 == 0)
    return 

void* rax_1 = sub_142749290()
void* rdx = *(r13 + 0x10)
void* rax = sx.q(*(rax_1 + 0x38))

if (rax.d s> *(rdx + 0x38) || *(*(rdx + 0x30) + (rax << 3)) != rax_1 + 0x30)
    return 

int32_t rdi_1 = 0
int32_t* r12_1 = nullptr
uint64_t r15_1 = 0
int32_t* var_88 = nullptr
int32_t var_7c_1 = 0

if (*(r14 + 0x40) u<= 0)
    return 

uint128_t zmm7 = 0x3f800000
int128_t zmm8 = 0x3f000000
int128_t zmm9 = zx.o(0)
uint128_t zmm6
uint128_t var_48_1 = zmm6

do
    int64_t r14_1 = *(r14 + 0x38)
    uint64_t rsi_1 = r15_1 * 5
    
    if (*(r14_1 + (rsi_1 << 3) + 4) u< *(rbx_1 + 8))
        int64_t* rcx_1 = *(r13 + 0x418)
        rax = (*(*rcx_1 + 0x150))(rcx_1, zx.q(*(r14_1 + (rsi_1 << 3))))
        int32_t rbx_2 = 0
        
        if (rax.d s>= 0)
            rbx_2 = rax.d
        
        if ((*(r14_1 + (rsi_1 << 3) + 0x24) & 8) != 0)
            int32_t* rcx_2 = r12_1
            void* rdx_2 = &r12_1[sx.q(rdi_1)]
            
            if (r12_1 != rdx_2)
                do
                    if (*rcx_2 == rbx_2)
                        goto label_142748680
                    
                    rcx_2 = &rcx_2[1]
                while (rcx_2 != rdx_2)
            
            uint128_t zmm0_1
            zmm0_1.d = (*(r14_1 + (rsi_1 << 3) + 0x1c)).d f+ *(r14_1 + (rsi_1 << 3) + 0x10)
            uint128_t zmm1
            zmm1.d = (*(r14_1 + (rsi_1 << 3) + 8)).d f+ *(r14_1 + (rsi_1 << 3) + 0x14)
            zmm1.d = zmm1.d f* zmm8.d
            zmm0_1.d = zmm0_1.d f* zmm8.d
            void** rsi_4 = (sx.q(*(r14_1 + (rsi_1 << 3) + 4)) << 4) + *arg_18
            float zmm2 = (*(r14_1 + (rsi_1 << 3) + 0x18) f+ *(r14_1 + (rsi_1 << 3) + 0xc)) f* zmm8.d
            int32_t var_f0_1 = zmm0_1.d
            int64_t* rdx_3 = rsi_4[1]
            zmm0_1.d = zmm1.d
            _mm_shuffle_ps(zmm0_1, zmm0_1, 0xe1)
            zmm1.d = zmm2
            zmm1 = _mm_shuffle_ps(zmm1, zmm1, 0xe1)
            uint64_t var_f8 = zmm1.q
            zmm6 = zmm1
            int64_t var_110
            
            if (rdx_3 != 0)
                int32_t rax_3 = data_143dbb210
                var_110 = 0
                uint64_t var_e8 = data_143dbb208
                int32_t var_e0_1 = rax_3
                uint64_t var_d8 = zmm1.q
                int32_t var_d0_1 = var_f0_1
                rax, zmm6, zmm7, zmm8, zmm9 = sub_142035e10(arg1, rdx_3, &var_d8, &var_e8, zmm7.d, 
                    zmm7.d, zmm9.d, nullptr, nullptr, 0)
            
            void* rdx_4 = *rsi_4
            
            if (rdx_4 != 0)
                var_110.b = 1
                uint64_t var_c8 = (_mm_unpacklo_ps(zmm7, zmm7.q)).q
                int32_t var_118
                var_118.b = 0
                int32_t var_90_1 = 0x3f800000
                int32_t var_c0_1 = 0x3f800000
                int32_t var_b0_1 = data_143dbb210
                int32_t var_120
                var_120.b = 1
                uint64_t var_b8 = data_143dbb208
                int32_t var_128
                var_128.q = &var_c8
                uint64_t var_a8 = zmm6.q
                int32_t var_a0_1 = var_f0_1
                rax, zmm7, zmm8, zmm9 =
                    sub_14203e750(arg1, rdx_4, &var_a8, &var_b8, var_128, 1, 0, 1)
                
                if (rax != 0)
                    *(rax + 0x20b) &= 0xf7
            
            int64_t rsi_5 = sx.q(rdi_1)
            rdi_1 = (rsi_5 + 1).d
            
            if (rdi_1 s> var_7c_1)
                sub_1405a4cf0(&var_88)
                r12_1 = var_88
            
            r12_1[rsi_5] = rbx_2
        
    label_142748680:
        rbx_1 = arg_18
    
    r14 = arg2
    r15_1 = zx.q(r15_1.d + 1)
while (r15_1.d u< *(r14 + 0x40))

if (r12_1 != 0)
    sub_140a74f90(r12_1)
