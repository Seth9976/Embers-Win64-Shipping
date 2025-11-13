// 函数: sub_14176bff0
// 地址: 0x14176bff0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_1c8
int64_t rax_1 = __security_cookie ^ &var_1c8
int32_t rsi = 0
uint64_t j_4 = zx.q(*(arg1 + 0x6c))
int64_t rdi = 0
int128_t zmm7 = arg2
int64_t var_128
__builtin_memset(&var_128, 0, 0x2c)
int32_t var_fc = 0x80
int32_t var_f8 = 0xffffffff
int32_t var_f4 = 0
int64_t var_e8 = 0
int32_t var_e0 = 0
char var_188 = 0
int64_t* var_1a8
int32_t* var_1a0
int32_t* var_198
int64_t var_120

if (j_4.d s> 0)
    float (* i)[0x4] = *(arg1 + 0x10)
    int64_t var_168_1 = *(arg1 + 0x58)
    int32_t var_150_1 = 0
    char* var_148_1 = &var_188
    void* r12_1 = sx.q(*(arg1 + 0x18)) * 0xe0
    int32_t var_16c_1 = *(arg1 + 0x74)
    int32_t var_160 = zmm7.d
    void* r12_2 = r12_1 + i
    float zmm6[0x4] = *(arg1 + 0x70)
    float var_170 = zmm6[0]
    int32_t r8
    int32_t var_15c_1 = r8
    int32_t r9
    int32_t var_158_1 = r9
    int32_t j_5 = j_4.d
    uint64_t var_140[0x3]
    void var_d8
    void var_a8
    
    for (; i != r12_2; i = &i[0xe])
        int64_t* rbx_1 = i[6][0].q
        int64_t* rdi_1 = *(i + 0x68)
        
        if (j_4.d s> 0)
            uint64_t j_2 = j_4
            uint64_t j
            
            do
                sub_141682450(&var_a8, i[6][0].q)
                sub_141682450(&var_d8, *(i + 0x68))
                (*i)[0x27] = zmm6[0]
                float zmm11[0x4]
                sub_1416fd0f0(i, &var_a8, &var_d8, zmm6, zmm11)
                var_198 = &var_170
                var_1a0 = &var_160
                var_1a8 = &var_128
                float* rax_4
                rax_4, zmm6, zmm7, zmm11 =
                    sub_14176cf00(&var_140, &i[8], rbx_1, rdi_1, var_1a8, var_1a0, var_198)
                i[7][0] = *rax_4 + i[7][0]
                (*i)[0x1d] = rax_4[1] + (*i)[0x1d]
                (*i)[0x1e] = rax_4[2] + (*i)[0x1e]
                j = j_2
                j_2 -= 1
            while (j != 1)
    
    float (* rbx_2)[0x4] = *(arg1 + 0x20)
    void* rdi_3 = sx.q(*(arg1 + 0x28)) * 0xe0 + rbx_2
    
    if (rbx_2 != rdi_3)
        do
            zmm7 = sub_14176cd70(rbx_2, &var_128, &var_160, &var_170)
            rbx_2 = &rbx_2[0xe]
        while (rbx_2 != rdi_3)
        
        zmm6 = var_170
        j_4 = zx.q(j_5)
    
    float (* i_1)[0x4] = *(arg1 + 0x30)
    
    for (void* r12_5 = &i_1[sx.q(*(arg1 + 0x38)) * 0x14]; i_1 != r12_5; i_1 = &i_1[0x14])
        int64_t* rbx_3 = i_1[6][0].q
        int64_t* rdi_4 = *(i_1 + 0x68)
        
        if (j_4.d s> 0)
            uint64_t j_3 = zx.q(j_4.d)
            uint64_t j_1
            
            do
                sub_141682450(&var_d8, i_1[6][0].q)
                sub_141682450(&var_a8, *(i_1 + 0x68))
                (*i_1)[0x27] = zmm6[0]
                sub_1416fe020(i_1, &var_d8, &var_a8, zmm6)
                var_198 = &var_170
                var_1a0 = &var_160
                var_1a8 = &var_128
                uint64_t* rax_7
                rax_7, zmm6, zmm7 =
                    sub_14176cf00(&var_140, &i_1[8], rbx_3, rdi_4, var_1a8, var_1a0, var_198)
                i_1[7][0] = *rax_7 + i_1[7][0]
                (*i_1)[0x1d] = *(rax_7 + 4) + (*i_1)[0x1d]
                (*i_1)[0x1e] = rax_7[1].d f+ (*i_1)[0x1e]
                j_1 = j_3
                j_3 -= 1
            while (j_1 != 1)
    
    rsi = var_120:4.d
    rdi = var_e8

if (*(arg1 + 0xd0) != 0)
    void* rcx_9 = arg1 + 0xf0
    char var_180 = var_188
    void* rax_9 = *(arg1 + 0xe0)
    int32_t var_178 = zmm7.d
    
    if (rax_9 != 0)
        rcx_9 = rax_9
    
    (*(arg1 + 0xd0))((*(*rcx_9 + 8))(rcx_9), &var_178, arg1 + 0x40, &var_180, var_1a8, var_1a0, 
        var_198)

char rbx_5 = var_188
int32_t var_e0_1 = 0

if (rdi != 0)
    sub_140a74f90(rdi)

var_120.d = 0

if (rsi != 0)
    sub_1405a5410(&var_128, 0)

int32_t var_f8_1 = 0xffffffff
int32_t var_f4_1 = 0
int64_t var_118
sub_14059a8e0(&var_118, 0)
int64_t var_108

if (var_108 != 0)
    sub_140a74f90(var_108)

int64_t rcx_15 = var_128

if (rcx_15 != 0)
    sub_140a74f90(rcx_15)

__security_check_cookie(rax_1 ^ &var_1c8)
return zx.q(rbx_5)
