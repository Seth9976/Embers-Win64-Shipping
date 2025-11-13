// 函数: sub_1413f1c20
// 地址: 0x1413f1c20
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_198
uint64_t result = __security_cookie ^ &var_198
uint64_t result_2 = result
bool cond:0 = *(arg1 + 0x204) != 0
int64_t* rdi = *(arg2 + 8)
void* var_168 = arg2

if ((cond:0 || *(rdi + 0x39) s< 0) && (*(rdi + 0x39) & 8) != 0)
    int64_t var_88
    int64_t var_70
    
    if ((*(rdi + 0x3b) & 8) != 0)
        sub_1409d7d20(arg1 + 0x128, &var_168)
        sub_1409740e0(arg1 + 0x148, var_168)
        result = sub_1409d7d20(arg1 + 0x138, &var_168)
        void* r14_1 = var_168
        
        if (*(r14_1 + 0x98) s> 0)
            int64_t* rax_1 = sub_1413bf520(&var_88, r14_1)
            int64_t r15_1 = sx.q(*(arg1 + 0x1a0))
            int32_t rcx_4 = (r15_1 + 1).d
            *(arg1 + 0x1a0) = rcx_4
            
            if (rcx_4 s> *(arg1 + 0x1a4))
                sub_1405c4ec0(arg1 + 0x198)
            
            result = sub_1413bf490(*(arg1 + 0x198) + r15_1 * 0x28, rax_1)
            
            if (var_70 != 0)
                result = sub_140a74f90(var_70)
        
        *(r14_1 + 0x98) = 0
        
        if (*(r14_1 + 0x9c) != 0)
            result = sub_1410b3a30(r14_1 + 0x88, 0)
    
    if ((*(rdi + 0x3b) & 0x10) != 0)
        int64_t rax_3 = *rdi
        int128_t var_128
        int128_t* var_178_1 = &var_128
        __builtin_memset(&var_128, 0, 0x20)
        int128_t var_108_1 = data_14399f6e0
        int128_t var_e8_1 = data_14399f700
        float var_f8_1[0x4] = data_14399f6f0
        int128_t var_a8_1 = zx.o(0)
        float var_d8_1[0x4] = data_14399f710
        int64_t var_c8
        __builtin_memset(&var_c8, 0, 0x1c)
        int32_t var_98_1 = 0xffffffff
        int64_t var_148
        int64_t var_140
        void var_138
        (*(rax_3 + 0xa0))(zx.o(0), &var_148, &var_138, &var_140, var_178_1)
        sub_141feb2c0(&data_143f3d8f0, var_148)
        int64_t rdx_8 = var_140
        
        if (rdx_8 != 0)
            sub_141feb2c0(&data_143f3dad0, rdx_8)
        
        sub_1409d7d20(arg1 + 0x1c8, &var_168)
        result = sub_1409d7d20(arg1 + 0x1d8, &var_168)
        void* rsi_1 = var_168
        
        if (*(rsi_1 + 0x98) s> 0)
            sub_1413bf520(&var_88, rsi_1)
            int64_t rbx_1 = sx.q(*(arg1 + 0x1f0))
            float var_58_1[0x4] = data_142d3f660
            void* rax_4 = *(rsi_1 + 8)
            float zmm3[0x4] = *(rax_4 + 0xc0)
            int32_t rax_5 = *(rax_4 + 0xd8)
            int32_t rax_6 = (rbx_1 + 1).d
            float temp0_1[0x4] = _mm_shuffle_ps(zmm3, zmm3, 0x55)
            float temp0_2[0x4] = _mm_shuffle_ps(zmm3, zmm3, 0xaa)
            float temp0_3[0x4] = _mm_shuffle_ps(zmm3, zmm3, 0xe1)
            temp0_3[0] = temp0_1[0]
            *(arg1 + 0x1f0) = rax_6
            float temp0_4[0x4] = _mm_shuffle_ps(temp0_3, temp0_3, 0xc6)
            temp0_4[0] = temp0_2[0]
            float temp0_5[0x4] = _mm_shuffle_ps(temp0_4, temp0_4, 0x27)
            temp0_5[0] = rax_5
            float temp0_6[0x4] = _mm_shuffle_ps(temp0_5, temp0_5, 0x39)
            
            if (rax_6 s> *(arg1 + 0x1f4))
                sub_1405c4fe0(arg1 + 0x1e8)
            
            int64_t* rbx_3 = (rbx_1 << 6) + *(arg1 + 0x1e8)
            *rbx_3 = var_88
            char var_80
            rbx_3[1].b = var_80
            rbx_3[3] = 0
            void var_78
            
            if (var_70 == 0)
                memmove(&rbx_3[2], &var_78, 4)
            int64_t rcx_15 = rbx_3[3]
            
            if (rcx_15 != 0)
                sub_140a74f90(rcx_15)
            
            rbx_3[3] = var_70
            int64_t var_70_1 = 0
            int32_t var_68
            rbx_3[4].d = var_68
            int32_t result_1
            result = zx.q(result_1)
            *(rbx_3 + 0x24) = result.d
            int32_t var_68_1 = 0
            int32_t var_64 = 1
            *(rbx_3 + 0x30) = temp0_6
            
            if (var_70_1 != 0)
                result = sub_140a74f90(var_70_1)
        
        *(rsi_1 + 0x98) = 0
        
        if (*(rsi_1 + 0x9c) != 0)
            result = sub_1410b3a30(rsi_1 + 0x88, 0)

__security_check_cookie(result_2 ^ &var_198)
return result
