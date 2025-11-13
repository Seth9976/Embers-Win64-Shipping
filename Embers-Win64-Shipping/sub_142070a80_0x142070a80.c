// 函数: sub_142070a80
// 地址: 0x142070a80
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int128_t var_38 = arg1
int128_t var_48 = arg2
int32_t rdx = 0
int128_t var_58 = arg3
void* r14 = nullptr
int128_t var_68 = arg4
int32_t i_4 = 0
int32_t r15 = 0x238946
int64_t i = 0
void* var_1e8 = nullptr
int32_t var_1dc = 0
int32_t var_bc = 0x3f800000

do
    arg1 = data_14399f6e0
    arg2 = data_14399f6f0
    arg3 = data_14399f700
    arg4 = data_14399f710
    int64_t i_5 = sx.q(i_4)
    i_4 = (i_5 + 1).d
    
    if (i_4 s> rdx)
        sub_1405c4fe0(&var_1e8)
        rdx = var_1dc
        r14 = var_1e8
    
    int64_t rax_2 = i_5 << 6
    int32_t var_c0_1 = 0
    *(rax_2 + r14) = arg1
    *(rax_2 + r14 + 0x10) = arg2
    *(rax_2 + r14 + 0x20) = arg3
    *(rax_2 + r14 + 0x30) = arg4
    int128_t zmm1 = (r15 * 0xbb38435 + 0x3619636b) u>> 9 | 0x3f800000
    __builtin_memcpy(i + r14, 
        "\x00\x00\x80\x3f\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x80\x"
    "3f\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x80\x3f\x00\x00\x00"
    "00", 
        0x30)
    r15 = (r15 * 0xbb38435 + 0x3619636b) * 0xbb38435 + 0x3619636b
    zmm1.d = zmm1.d f- 1f
    zmm1.d = zmm1.d f* 10000f
    float var_c8[0x4]
    var_c8[0] = ((r15 u>> 9 | 0x3f800000) - 1f) * 10000f
    float temp0_1[0x4] = _mm_shuffle_ps(var_c8, var_c8, 0xe1)
    temp0_1[0] = zmm1.d
    float temp0_2[0x4] = _mm_shuffle_ps(temp0_1, temp0_1, 0xe1)
    *(i + r14 + 0x30) = temp0_2
    i += 0x40
    var_c8 = temp0_2
while (i s< 0xfa00)

arg1 = data_1432abe90
void* r15_2 = nullptr
char var_1c0 = 1
int32_t i_6 = i_4
int32_t var_1c8 = 0x42c80000
int32_t var_1c4 = 0x42c80000
var_1e8 = nullptr
int32_t var_1dc_1 = 0

if (i_4 s> 0)
    sub_1405c4fe0(&var_1e8)
    i_6 = i_4
    r15_2 = var_1e8
    
    if (i_4 s> 0)
        uint64_t i_3 = zx.q(i_4)
        void* rcx_6 = r14 - r15_2
        void* rax_9 = r15_2
        uint64_t i_1
        
        do
            float zmm0[0x4] = *(rcx_6 + rax_9)
            rax_9 += 0x40
            *(rax_9 - 0x40) = zmm0
            *(rax_9 - 0x30) = *(rcx_6 + rax_9 - 0x30)
            *(rax_9 - 0x20) = *(rcx_6 + rax_9 - 0x20)
            *(rax_9 - 0x10) = *(rcx_6 + rax_9 - 0x10)
            i_1 = i_3
            i_3 -= 1
        while (i_1 != 1)

var_1e8 = nullptr
int32_t rcx_7
void* rbx

if (i_6 != 0)
    sub_1407c35c0(&var_1e8, i_6, 0)
    rbx = var_1e8
    memcpy(rbx, r15_2, i_6 << 6)
    rcx_7 = var_1dc_1
else
    rcx_7 = 0
    rbx = nullptr

int64_t var_1a0 = var_1c8.q
int32_t var_144 = rcx_7
int32_t i_7 = i_6
int128_t var_1b0 = arg1
int32_t var_198 = var_1c0.d
int32_t var_188 = 0x10
int32_t var_180 = 1
int32_t var_17c = 0x3f800000
char var_178 = 0
int64_t var_170
__builtin_memset(&var_170, 0, 0x20)
void* var_150 = rbx
int32_t i_8 = i_6
int64_t var_140
__builtin_memset(&var_140, 0, 0x14)
int64_t var_128
__builtin_memset(&var_128, 0, 0x28)
int512_t zmm6
int512_t zmm7
int512_t zmm8
int512_t zmm9
zmm6, zmm7, zmm8, zmm9 = sub_14204ebe0(&i_7)
int64_t* var_108
int64_t* rsi = var_108
int32_t rdi_1 = 0
char i_2

do
    if (rdi_1 != 0)
        void* rbx_1 = *rsi
        i_2 = 0
        int32_t j = *(rbx_1 + 0xc)
        
        if (j s>= 0 && j s<= *(rbx_1 + 0x1c))
            do
                int32_t var_1f8_1 = 0
                char rax_11
                int32_t r10_1
                rax_11, r10_1, i_2 = sub_142063a80(rsi, j, rdi_1, 1)
                
                if (rax_11 != 0 || i_2 != 0)
                    i_2 = 1
                
                j = r10_1 + 1
            while (j s<= *(rbx_1 + 0x1c))
            
            rsi = var_108
    else
        i_2 = 1
    
    rdi_1 += 1
while (i_2 != 0)
int64_t result = sub_142049690(&i_7)

if (r15_2 != 0)
    result = sub_140a74f90(r15_2)

if (r14 != 0)
    result = sub_140a74f90(r14)

zmm6.o = var_38
zmm7.o = var_48
zmm8.o = var_58
zmm9.o = var_68
return result
