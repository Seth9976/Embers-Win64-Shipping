// 函数: sub_1426111b0
// 地址: 0x1426111b0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t* rdi = arg1
sub_142613c20(arg1)
rdi[0xac0] = arg3.d
*rdi = arg2
float zmm1 = arg3.d f+ arg3.d
int64_t* result_1 = nullptr
rdi[1] = 0
rdi[0x1b5] = zmm1
rdi[0x1b7] = zmm1
rdi[0x1b6] = arg3.d * 1.5f
int64_t* result = sub_142624a90()
*(rdi + 0x6c0) = result

if (result == 0)
labelid_2:
    result.b = 0
else
    int128_t zmm6
    zmm6.d = arg3.d f* 3f
    
    if (sub_14262ceb0(result, *rdi << 2, zmm6.d).b == 0)
    labelid_2:
        result.b = 0
    else
        rdi[0x1b4] = 0x100
        result = data_143b50290(0x800, 0)
        *(rdi + 0x6c8) = result
        
        if (result == 0)
        labelid_2:
            result.b = 0
        else if (sub_14262cdc0(&rdi[8], rdi[0x1b4], 0x1000, arg4).b == 0)
        labelid_2:
            result.b = 0
        else
            result = data_143b50290(zx.q(*rdi * 0x328), 0)
            *(rdi + 8) = result
            
            if (result == 0)
            labelid_2:
                result.b = 0
            else
                result = data_143b50290(zx.q(*rdi << 3), 0)
                *(rdi + 0x10) = result
                
                if (result == 0)
                labelid_2:
                    result.b = 0
                else
                    result = data_143b50290(zx.q(*rdi << 6), 0)
                    *(rdi + 0x18) = result
                    
                    if (result == 0)
                    label_1426117fe:
                        result.b = 0
                    else
                        int32_t rax = *rdi
                        int32_t rbp_1 = 0
                        
                        if (rax s> 0)
                            int64_t r14_1 = 0
                            
                            do
                                void* rbx_2 = *(rdi + 8) + r14_1
                                memset(rbx_2, 0, 0x328)
                                sub_14261b020(rbx_2)
                                sub_14261aff0(rbx_2 + 0x58)
                                *(rbx_2 + 0x270) = 0
                                *(rbx_2 + 0x278) = 0
                                *(r14_1 + *(rdi + 8) + 0x326) = 0
                                
                                if (sub_14262cd70(sx.q(rbp_1) * 0x328 + *(rdi + 8), 
                                        zx.q(rdi[0x1b4])).b == 0)
                                    goto label_1426117fe_2
                                
                                rax = *rdi
                                rbp_1 += 1
                                r14_1 += 0x328
                            while (rbp_1 s< rax)
                        
                        int32_t i = 0
                        
                        if (rax s> 0)
                            int64_t rcx_12 = 0
                            
                            do
                                rcx_12 += 0x40
                                i += 1
                                *(*(rdi + 0x18) + rcx_12 - 8) = 0
                            while (i s< *rdi)
                        
                        for (int64_t i_1 = 0xc; i_1 s< 0x10c; )
                            __builtin_memcpy(i_1 + rdi + 0x28dc, 
                                "\xff\xff\x7f\x7f\xff\xff\x7f\x7f\xff\xff\x7f\x7f\xff\xff\x7f\x7f\xff\x"
                            "ff\x7f\x7f\xff\xff\x7f\x7f\xff\xff\x7f\x7f\xff\xff\x7f\x7f\xff\xff\x7f"
                            "7f\xff\xff\x7f\x7f\xff\xff\x7f\x7f\xff\xff\x7f\x7f\xff\xff\x7f\x7f\xff"
                            "ff\x7f\x7f\xff\xff\x7f\x7f\xff\xff\x7f\x7f\xff\xff\x7f\x7f\xff\xff\x7f"
                            "7f\xff\xff\x7f\x7f\xff\xff\x7f\x7f\xff\xff\x7f\x7f\xff\xff\x7f\x7f\xff"
                            "ff\x7f\x7f\xff\xff\x7f\x7f\xff\xff\x7f\x7f\xff\xff\x7f\x7f\xff\xff\x7f"
                            "7f\xff\xff\x7f\x7f\xff\xff\x7f\x7f\xff\xff\x7f\x7f\xff\xff\x7f\x7f\xff"
                            "ff\x7f\x7f", 
                                0x80)
                            rdi[0xabb] = _mm_min_ss(rdi[0xabb], 0x7f7fffff)
                            rdi[0xabb] = _mm_min_ss(rdi[0xabb], 0x7f7fffff)
                            rdi[0xabb] = _mm_min_ss(rdi[0xabb], 0x7f7fffff)
                            rdi[0xabb] = _mm_min_ss(rdi[0xabb], 0x7f7fffff)
                            rdi[0xabb] = _mm_min_ss(rdi[0xabb], 0x7f7fffff)
                            rdi[0xabb] = _mm_min_ss(rdi[0xabb], 0x7f7fffff)
                            rdi[0xabb] = _mm_min_ss(rdi[0xabb], 0x7f7fffff)
                            rdi[0xabb] = _mm_min_ss(rdi[0xabb], 0x7f7fffff)
                            rdi[0xabb] = _mm_min_ss(rdi[0xabb], 0x7f7fffff)
                            rdi[0xabb] = _mm_min_ss(rdi[0xabb], 0x7f7fffff)
                            rdi[0xabb] = _mm_min_ss(rdi[0xabb], 0x7f7fffff)
                            rdi[0xabb] = _mm_min_ss(rdi[0xabb], 0x7f7fffff)
                            rdi[0xabb] = _mm_min_ss(rdi[0xabb], 0x7f7fffff)
                            rdi[0xabb] = _mm_min_ss(rdi[0xabb], 0x7f7fffff)
                            rdi[0xabb] = _mm_min_ss(rdi[0xabb], 0x7f7fffff)
                            rdi[0xabb] = _mm_min_ss(rdi[0xabb], 0x7f7fffff)
                            rdi[0xabb] = _mm_min_ss(rdi[0xabb], 0x7f7fffff)
                            rdi[0xabb] = _mm_min_ss(rdi[0xabb], 0x7f7fffff)
                            rdi[0xabb] = _mm_min_ss(rdi[0xabb], 0x7f7fffff)
                            rdi[0xabb] = _mm_min_ss(rdi[0xabb], 0x7f7fffff)
                            rdi[0xabb] = _mm_min_ss(rdi[0xabb], 0x7f7fffff)
                            rdi[0xabb] = _mm_min_ss(rdi[0xabb], 0x7f7fffff)
                            rdi[0xabb] = _mm_min_ss(rdi[0xabb], 0x7f7fffff)
                            rdi[0xabb] = _mm_min_ss(rdi[0xabb], 0x7f7fffff)
                            rdi[0xabb] = _mm_min_ss(rdi[0xabb], 0x7f7fffff)
                            rdi[0xabb] = _mm_min_ss(rdi[0xabb], 0x7f7fffff)
                            rdi[0xabb] = _mm_min_ss(rdi[0xabb], 0x7f7fffff)
                            rdi[0xabb] = _mm_min_ss(rdi[0xabb], 0x7f7fffff)
                            rdi[0xabb] = _mm_min_ss(rdi[0xabb], 0x7f7fffff)
                            rdi[0xabb] = _mm_min_ss(rdi[0xabb], 0x7f7fffff)
                            rdi[0xabb] = _mm_min_ss(rdi[0xabb], 0x7f7fffff)
                            i_1 -= -0x80
                            rdi[0xabb] = _mm_min_ss(rdi[0xabb], 0x7f7fffff)
                        
                        result = data_143b50290(0x80, 0)
                        
                        if (result != 0)
                            *result = 0
                            result[1] = 0
                            __builtin_memset(&result[0xc], 0, 0x1c)
                            memset(&result[2], 0, 0x50)
                            result_1 = result
                        
                        *(rdi + 0x2b18) = result_1
                        
                        if (result_1 == 0)
                        label_1426117fe_1:
                            result.b = 0
                        else if ((sub_142611af0(result_1, arg4, 0x200, nullptr) u>> 0x1f).b != 0)
                        label_1426117fe_2:
                            result.b = 0
                        else
                            sub_14261e370(&rdi[0xde])
                            result.b = 1
                            rdi[0xac3] = 0xbf800000

return result
