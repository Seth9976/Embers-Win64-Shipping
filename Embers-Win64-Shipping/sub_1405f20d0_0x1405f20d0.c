// 函数: sub_1405f20d0
// 地址: 0x1405f20d0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t var_48 = -2
int128_t zmm7
int128_t var_28 = zmm7
void* const* result

if (*(arg1 + 0x88) != 0)
    int32_t* rdi_1 = arg1 + 0xc0
    
    if (not(arg2.d f< 0f))
        if (0f f> *rdi_1)
            if (*(arg1 + 0xc4) == 5)
                goto label_1405f2210
            
            goto label_1405f21b0
        
        if (arg2.d f>= 0f)
            goto label_1405f2210
        
        goto label_1405f2185
    
label_1405f2185:
    rdi_1 = arg1 + 0xc0
    void arg_8
    
    if (0f f> *rdi_1 || *(arg1 + 0xc4) == 5)
    label_1405f2210:
        int32_t zmm0
        
        if (not(arg2.d f!= 0f))
            zmm0 = *rdi_1
            
            if (zmm0 f!= 0f)
                goto label_1405f2248
            
            goto label_1405f221e
        
        zmm0 = *(arg1 + 0xc0)
        
        if (zmm0 f!= 0f)
        label_1405f221e:
            
            if (arg2.d f== zmm0)
                goto label_1405f22b7
            
            int64_t rdx_2
            
            if (sub_1405f2790(arg1 + 0xe8, arg2.d) == 0)
                if (sub_1405f2790(arg1 + 0xd8, arg2.d).b != 0)
                    rdx_2 = 1
                    goto label_1405f2289
                
                result.b = 0
            else
                rdx_2 = 0
            label_1405f2289:
                int64_t* rcx_8 = *(arg1 + 0x88)
                int512_t zmm2
                zmm2.o = arg2
                
                if ((*(*rcx_8 + 0x18))(rcx_8, rdx_2, zmm2).d s< 0)
                    result.b = 0
                else if (*(arg1 + 0x78) != 0)
                    result.b = 1
                else
                    *(arg1 + 0x78) = 1
                    zmm0 = *rdi_1
                label_1405f22b7:
                    
                    if (zmm0 f* arg2.d f<= 0f)
                        if (not(arg2.d f== 0f))
                            goto label_1405f22df
                        
                        result.b = 1
                    else if (*(arg1 + 0xc4) == 3 || arg2.d f== 0f)
                        result.b = 1
                    else
                    label_1405f22df:
                        
                        if (*(arg1 + 0xc4) != 3 || *(arg1 + 0x78) != 0)
                            void** result_1
                            
                            if (*(arg1 + 0xb8) == 0)
                                result_1 = *(*(*(arg1 + 8) + 0x30))(arg1 + 8, &arg_8)
                            else
                                result_1 = *(arg1 + 0xb0)
                            
                            result = result_1
                            
                            if (result_1 == 0 && not(arg2.d f>= 0f))
                                result_1 = *(arg1 + 0x40)
                                result = result_1
                            else if (result == *(arg1 + 0x40) && not(arg2.d f<= 0f))
                                result_1 = nullptr
                                result = nullptr
                            
                            if (*(arg1 + 0x78) == 0)
                                sub_1405f2370(arg1, result_1)
                            else if (&arg_8 != arg1 + 0xb0)
                                *(arg1 + 0xb0) = result
                                *(arg1 + 0xb8) = 1
                        
                        result.b = 1
        else
        label_1405f2248:
            result = zx.q(*(arg1 + 0xc4))
            
            if (result.d == 2 || result.d == 5)
                goto label_1405f221e
            
            int64_t* rcx_6 = *(arg1 + 0x60)
            
            if ((*(*rcx_6 + 0x50))(rcx_6).d s>= 0)
            label_1405f21fa:
                void arg_10
                
                if (&arg_10 == arg1 + 0x9c)
                    *(arg1 + 0x78) = 1
                    result.b = 1
                else
                    *(arg1 + 0x9c) = arg2.d
                    *(arg1 + 0xa0) = 1
                    *(arg1 + 0x78) = 1
                    result.b = 1
            else
                result.b = 0
    else
    label_1405f21b0:
        *(arg1 + 0x70) = *(*(*(arg1 + 8) + 0x30))(arg1 + 8, &arg_8)
        int64_t* rcx_3 = *(arg1 + 0x60)
        
        if ((*(*rcx_3 + 0x58))(rcx_3).d s>= 0)
            if (*(arg1 + 0xb8) == 0 && arg1 + 0x70 != arg1 + 0xb0)
                if (*(arg1 + 0xb8) != 0)
                    *(arg1 + 0xb8) = 0
                
                *(arg1 + 0xb0) = *(arg1 + 0x70)
                *(arg1 + 0xb8) = 1
            
            goto label_1405f21fa
        
        result.b = 0
else if (arg2.d f!= 0f)
    if (*(arg1 + 0xc4) == 3)
        *(arg1 + 0x78) = 1
        result.b = 1
    else
        int64_t var_40
        __builtin_memset(&var_40, 0, 0x18)
        int64_t* rcx_1 = *(arg1 + 0x60)
        
        if ((*(*rcx_1 + 0x48))(rcx_1, 0, &var_40).d s>= 0)
            *(arg1 + 0x78) = 1
            result.b = 1
        else
            result.b = 0
else if (*(arg1 + 0xc4) != 3)
    *(arg1 + 0x78) = 1
    result.b = 1
else
    int64_t* rcx = *(arg1 + 0x60)
    
    if ((*(*rcx + 0x50))(rcx).d s>= 0)
        *(arg1 + 0x78) = 1
        result.b = 1
    else
        result.b = 0

return result
