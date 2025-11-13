// 函数: sub_141dda830
// 地址: 0x141dda830
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

uint32_t result
void* rax_1

if (arg1[0x26] != 0)
    rax_1 = (*(*arg1 + 0x150))()
    
    if (*(arg1[0x26] + 0x14f) == 0)
        result = sub_14242d3a0(rax_1)

if (arg1[0x26] == 0 || (*(arg1[0x26] + 0x14f) == 0 && result.b != 0))
    result.b = 0
else
    float rcx_1 = data_143dbb200
    int64_t zmm2 = data_143dbb1f8.q
    float var_68
    int32_t var_64
    int64_t var_58
    uint128_t zmm0
    float zmm1[0x4]
    
    if (arg4 != 0)
        void* rax_2 = arg1[0x26]
        int32_t* rax_3
        
        if (rax_2 == 0)
            var_58 = zmm2
            rax_3 = &var_58
            float var_50_1 = rcx_1
        else
            zmm1 = *(rax_2 + 0x1d0)
            rax_3 = &var_68
            var_68 = zmm1[0]
            zmm0 = _mm_shuffle_ps(zmm1, zmm1, 0x55)
            float var_60_1 = _mm_shuffle_ps(zmm1, zmm1, 0xaa)[0]
            var_64 = zmm0.d
        
        zmm0 = zx.o(*rax_3)
        var_68.q = zmm0.q
        
        if (zmm0.d f!= *arg2 || var_64.d f!= arg2[1] || rax_3[2].d f!= arg2[2])
            result.b = 0
        else
            result.b = 1
    
    if (arg4 == 0 || result.b == 0)
        int64_t* rdi_1 = arg1[0x26]
        float var_50_2
        
        if (rdi_1 == 0)
            var_58 = zmm2
            var_50_2 = rcx_1
        else
            zmm1 = *(rdi_1 + 0x1d0)
            var_58.d = zmm1[0]
            zmm0 = _mm_shuffle_ps(zmm1, zmm1, 0x55)
            var_50_2 = _mm_shuffle_ps(zmm1, zmm1, 0xaa)[0]
            int32_t var_54_1 = zmm0.d
        
        int32_t rcx_2 = arg2[2]
        float* rsi
        rsi.b = 1
        var_68.q = var_58
        int64_t var_78 = *arg2
        int32_t var_70_1 = rcx_2
        
        if (rdi_1 != 0)
            void* rax_5 = sub_142577430()
            void* rdx = rdi_1[2]
            int64_t rax_6 = sx.q(*(rax_5 + 0x38))
            
            if (rax_6.d s> *(rdx + 0x38) || *(*(rdx + 0x30) + (rax_6 << 3)) != rax_5 + 0x30)
                int64_t* rdi_2 = arg1[0x26]
                zmm1 = zx.o(var_78)
                
                if (rdi_2 != 0)
                    int32_t var_50_6 = *(arg3 + 8)
                    int32_t var_60_5 = var_70_1
                    var_58 = *arg3
                    var_68.q = zmm1.q
                    sub_141f4a260(rdi_2, &var_68, &var_58, 0, 0, 1)
            else
                int64_t zmm0_1
                
                if (arg8 != 0)
                    zmm2 = var_78.d
                else
                    int32_t rax_10
                    rax_10.b = (((*(*rdi_1 + 0x4c8))(rdi_1) - 1) & 0xfffffffd) == 0
                    int32_t rax_11
                    
                    if (rax_10.b == 0)
                        rax_11, arg5, arg6, arg7 = sub_141dcdc50(arg1)
                    
                    if (rax_10.b == 0 && rax_11 == 3)
                        zmm2 = var_78.d
                    else
                        void* rax_12 = arg1[0x26]
                        int32_t var_28_1 = arg5.d
                        float var_38_1 = arg6[0]
                        int32_t var_48_1 = arg7.d
                        arg6 = *(rax_12 + 0x104)
                        int32_t rax_13 = *(arg3 + 8)
                        arg7.d = (*(rax_12 + 0x108)).d f- var_50_2
                        arg5.d = (*(rax_12 + 0x100)).d f- var_68
                        arg6[0] = arg6[0] f- var_64
                        int32_t var_50_3 = rax_13
                        zmm0_1.d = arg7.d f+ var_70_1
                        zmm2.d = arg5.d f+ var_78.d
                        arg6[0] = arg6[0] f+ var_78:4.d
                        int32_t var_70_2 = zmm0_1.d
                        var_58 = *arg3
                        var_78.d = zmm2.d
                        var_78:4.d = arg6[0]
                        char rax_14
                        int32_t zmm6
                        float zmm7
                        int32_t zmm8
                        rax_14, zmm6, zmm7, zmm8 = sub_1420e3b00(rax_1, arg1, &var_78, &var_58)
                        rsi = zx.q(rax_14)
                        zmm1 = var_78:4.d
                        zmm2.d = var_78.d.d f- zmm6
                        zmm1[0] = zmm1[0] - zmm7
                        zmm0_1.d = var_70_2.d f- zmm8
                        var_78.d = zmm2.d
                        var_78:4.d = zmm1[0]
                        var_70_1 = zmm0_1.d
                
                int32_t rax_15
                
                if (_finite(_mm_cvtps_pd(zmm2)) == 0)
                    rax_15.b = 1
                else if (_finite(_mm_cvtps_pd(var_78:4.d)) == 0)
                    rax_15.b = 1
                else if (_finite(_mm_cvtps_pd(var_70_1)) == 0)
                    rax_15.b = 1
                else
                    rax_15.b = 0
                
                int32_t rax_16
                
                if (rax_15.b == 0)
                    if (_finite(_mm_cvtps_pd(var_68)) == 0)
                        rax_16.b = 1
                    else if (_finite(_mm_cvtps_pd(var_64)) == 0)
                        rax_16.b = 1
                    else if (_finite(_mm_cvtps_pd(var_50_2)) == 0)
                        rax_16.b = 1
                    else
                        rax_16.b = 0
                
                if (rax_15.b != 0 || rax_16.b != 0)
                    return 0
                
                if (rsi.b != 0)
                    if (arg4 != 0 || arg8 != arg4)
                        int32_t var_50_5 = *(arg3 + 8)
                        int32_t var_60_4 = var_70_1
                        var_58 = *arg3
                        var_68.q = var_78
                        sub_141f4a260(rdi_1, &var_68, &var_58, 0, 0, 0)
                    else
                        zmm0_1.d = var_78.d.d f- var_68
                        zmm1 = var_78:4.d
                        zmm1[0] = zmm1[0] f- var_64
                        var_58.d = zmm0_1.d
                        zmm0_1.d = var_70_1.d f- var_50_2
                        float var_54_2 = zmm1[0]
                        int32_t var_50_4 = zmm0_1.d
                        rsi = zx.q(sub_141f42080(rdi_1, &var_58, arg3, 0, nullptr, 0, 1))
                    
                    if (rsi.b != 0)
                        (*(*arg1 + 0x4f8))(arg1, zx.q(arg4))
        
        return zx.d(rsi.b)
    
    result.b = 1

return result
