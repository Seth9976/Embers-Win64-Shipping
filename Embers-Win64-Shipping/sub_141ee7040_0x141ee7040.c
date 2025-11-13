// 函数: sub_141ee7040
// 地址: 0x141ee7040
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_1b8
void* result = __security_cookie ^ &var_1b8
void* result_1 = result

if (arg1[0x29] != 0)
    result = (*(*arg1 + 0x430))()

int512_t zmm0

if (arg1[0x29] == 0 || (*(result + 0x264) & 1) == 0)
    zmm0.o = zx.o(0)
else
    int64_t* rcx = arg1[0x29]
    int32_t var_168
    void var_150
    result = (*(*rcx + 0x560))(rcx, &var_150, &var_168)
    int128_t zmm7 = var_168
    
    if (zmm7.d f== 0f || 0f f== arg1[0x3b].d)
        zmm0.o = 0x3f800000
    else
        int64_t* rdi_1 = *((*(*arg1 + 0x430))(arg1) + 0x238)
        void var_138
        result = memset(&var_138, 0, 0x88)
        float zmm6[0x4] = 0x3f800000
        int32_t var_130_1 = 0x3f800000
        
        if (rdi_1 != 0)
            uint64_t rcx_3 = zx.q(data_14401b1a0)
            float zmm3[0x4] = *(arg1[0x16] + 0x1d0)
            TEB* gsbase
            void* ThreadLocalStoragePointer = gsbase->ThreadLocalStoragePointer
            float temp0_1[0x4] = _mm_shuffle_ps(zmm3, zmm3, 0xaa)
            float temp0_2[0x4] = _mm_shuffle_ps(zmm3, zmm3, 0xaa)
            float temp0_3[0x4] = _mm_shuffle_ps(zmm3, zmm3, 0x55)
            temp0_1[0] = temp0_1[0] f+ zmm7.d
            int64_t rax_6 = *(ThreadLocalStoragePointer + (rcx_3 << 3))
            temp0_2[0] = temp0_2[0] f- zmm7.d
            float var_15c_1 = temp0_3[0]
            float temp0_4[0x4] = _mm_shuffle_ps(zmm3, zmm3, 0x55)
            float var_160_1 = zmm3[0]
            bool cond:1_1 = data_143f3ad00 s> *(0x14 + rax_6)
            float var_158_1 = temp0_1[0]
            float var_178 = zmm3[0]
            float var_174_1 = temp0_4[0]
            float var_170_1 = temp0_2[0]
            
            if (cond:1_1)
                _Init_thread_header(&data_143f3ad00)
                
                if (data_143f3ad00 == 0xffffffff)
                    zmm6 = sub_140b58170(&data_143f3acf8, "ImmersionDepth", 1)
                    _Init_thread_footer(&data_143f3ad00)
            
            void var_188
            void var_a8
            sub_141eb54c0(&var_a8, data_143f3acf8, &var_188, 1, nullptr)
            float var_140_1 = var_170_1
            float var_170_2 = var_158_1
            int64_t rax_9 = *rdi_1
            int64_t var_148 = var_178.q
            var_178.q = var_160_1.q
            result = (*(rax_9 + 0x828))(rdi_1, &var_138, &var_178, &var_148, &var_a8)
            int64_t var_48
            
            if (var_48 != 0)
                result = sub_140a74f90(var_48)
            
            int64_t var_68
            
            if (var_68 != 0)
                result = sub_140a74f90(var_68)
            
            float zmm0_1[0x4] = var_130_1
            
            if (not(zmm0_1[0] == zmm6[0]))
                zmm6[0] = zmm6[0] - zmm0_1[0]
__security_check_cookie(result_1 ^ &var_1b8)
return result
