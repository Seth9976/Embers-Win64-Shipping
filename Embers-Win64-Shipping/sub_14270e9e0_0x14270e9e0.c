// 函数: sub_14270e9e0
// 地址: 0x14270e9e0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* result = sub_140d3c6e0(arg2 + 0x34)

if (result != 0)
    arg2[6].d
    sub_1426cce30(arg1 + 0x50, result)
    char rax = sub_1426e25f0(arg1 + 0x50)
    int64_t** var_78
    result = sub_1426c5aa0(&var_78, arg1, arg2, 0xffffffff)
    int32_t i_1
    int32_t i = i_1
    int64_t** r8_3 = var_78
    
    while (i s< r8_3[1].d)
        if ((*(r8_3 + 0x13e) & 1) != 0)
            break
        
        double var_68
        
        if (not(var_68 < 0.0))
            int64_t performanceCount
            result = QueryPerformanceCounter(&performanceCount)
            i = i_1
            
            if (float.d(performanceCount) f* data_143d796f8 f+ 0x4170000000000000 >= var_68)
                r8_3 = var_78
                break
        
        void* rax_1 = sub_1426df5e0(arg1, arg2, zx.q(i))
        void* rcx_7
        
        if (rax_1 == 0)
            rcx_7 = nullptr
        else
            rcx_7 = sub_140d21950(rax_1, sub_141cc7c00())
        
        float var_60
        char var_56
        
        if (rcx_7 == 0)
            var_56 |= 3
            var_60 = -3.40282347e+38f
        else
            int64_t rax_4 = *rcx_7
            int64_t var_98
            __builtin_memset(&var_98, 0, 0x20)
            (*(rax_4 + 0x10))(rcx_7, &var_98)
            bool rax_5 = sub_141cc19d0(&var_98, arg1 + 0x1f8)
            int64_t var_88
            
            if (var_88 != 0)
                sub_140a74f90(var_88)
            
            int64_t rcx_10 = var_98
            
            if (rcx_10 != 0)
                sub_140a74f90(rcx_10)
            
            if ((var_56 & 2) == 0)
                uint32_t rcx_11 = zx.d(*(arg1 + 0x4a))
                float zmm1_1
                
                if (rcx_11 != 0 && rcx_11 != 1 && rcx_11 != 2 && rcx_11 == 3 && rax_5 == rax)
                    zmm1_1 = 1f
                    goto label_14270eb96
                
                if ((var_56 & 4) != 0)
                    int16_t var_5a = var_5a + 1
                else
                    zmm1_1 = (zx.o(0)).d
                label_14270eb96:
                    char var_57
                    uint32_t rcx_14 = zx.d(var_57)
                    int16_t var_5c
                    float zmm0_2
                    
                    if (rcx_14 == 0)
                        zmm0_2 = var_60 + zmm1_1
                    label_14270ec07:
                        var_60 = zmm0_2
                        var_5c += 1
                        var_5a += 1
                    else if (rcx_14 == 1)
                        if (var_5c == 0 || not(var_60 <= zmm1_1))
                        label_14270ebef:
                            var_60 = zmm1_1
                            var_5a += 1
                            var_5c += 1
                        else
                            var_5c += 1
                            var_5a += 1
                    else if (rcx_14 == 2)
                        if (var_5c == 0)
                            goto label_14270ebef
                        
                        if (var_60 >= zmm1_1)
                            var_5c += 1
                            var_5a += 1
                        else
                            var_60 = zmm1_1
                            var_5a += 1
                            var_5c += 1
                    else
                        if (rcx_14 == 3)
                            zmm0_2 = var_60 * zmm1_1
                            goto label_14270ec07
                        
                        var_5c += 1
                        var_5a += 1
        
        result = sub_1426ec620(&var_78)
        r8_3 = var_78
        i = i_1
        
        if ((*(r8_3 + 0x13e) & 1) == 0)
            i += 1
            result.b = var_56 & 0xfd
            var_60.q = 0
            result.b |= 1
            i_1 = i
            var_56 = result.b
            
            if (i s>= r8_3[1].d)
                break
            
            do
                result = *r8_3
                int32_t r9_1 = *(&result[sx.q(i)] + 4)
                
                if (not(test_bit(r9_1, 0x1e)) && r9_1 s>= 0)
                    break
                
                i += 1
                i_1 = i
            while (i s< r8_3[1].d)
    
    *(r8_3 + 0x124) = i

return result
