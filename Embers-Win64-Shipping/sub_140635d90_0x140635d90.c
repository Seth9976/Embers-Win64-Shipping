// 函数: sub_140635d90
// 地址: 0x140635d90
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

float zmm6[0x4] = arg2
int128_t zmm7 = arg3
void* const* result

if (arg1 == 0)
    result.b = 0
else
    void* rax = sub_1424890f0()
    void* rdx_1 = arg1[2]
    result = sx.q(*(rax + 0x38))
    
    if (result.d s> *(rdx_1 + 0x38))
        result.b = 0
    else if ((*(rdx_1 + 0x30))[result] != rax + 0x30)
        result.b = 0
    else
        int64_t* rcx_1 = arg1[0x50]
        
        if (rcx_1 == 0)
            result.b = 0
        else if ((*(*rcx_1 + 0x3f0))(rcx_1).b == 0)
            result.b = 0
        else
            void* rcx_2 = arg1[0x50]
            uint64_t var_78 = 0
            uint64_t var_40 = 0
            int32_t var_38_1 = 0
            int32_t var_70_1 = 0
            sub_141f5e6a0(rcx_2, &var_40)
            uint64_t var_50
            
            if (var_38_1 s> 0)
                int32_t* rax_2
                rax_2, zmm7 = sub_141f5e140(arg1[0x50], &var_50, *var_40, 0)
                var_78 = *rax_2
                var_70_1 = rax_2[2]
            
            void* rax_4 = arg1[0x26]
            arg2 = var_78:4.d
            int32_t var_5c = var_78.d.d
            float var_58_1 = arg2[0]
            uint128_t zmm0_1
            zmm0_1.d = var_70_1.d f+ zmm6[0]
            int32_t var_54_1 = zmm0_1.d
            uint64_t var_68
            float var_60_1
            
            if (rax_4 == 0)
                float rax_5 = data_143dbb200
                var_68 = data_143dbb1f8.q
                var_60_1 = rax_5
            else
                arg2 = *(rax_4 + 0x1d0)
                var_68.d = arg2[0]
                zmm0_1 = _mm_shuffle_ps(arg2, arg2, 0x55)
                arg2 = _mm_shuffle_ps(arg2, arg2, 0xaa)
                var_60_1 = arg2[0]
                var_68:4.d = zmm0_1.d
            
            float var_48_1 = var_60_1
            int64_t rax_7 = *arg1
            var_50 = var_68
            int32_t* rax_9 = sub_140ae3860(&var_68, &var_50, &var_5c, 
                *((*(rax_7 + 0x150))(arg1, arg2) + 0x530), zmm7.d)
            var_78 = *rax_9
            int32_t var_70_2 = rax_9[2]
            sub_141dd67f0(arg1, &var_78, 0, nullptr, 0)
            uint64_t rcx_7 = var_40
            
            if (rcx_7 != 0)
                sub_140a74f90(rcx_7)
            
            result.b = 1

return result
