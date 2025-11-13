// 函数: sub_141fc4210
// 地址: 0x141fc4210
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

*(arg1 + 0x10c9) = 0
int32_t r8 = *(arg2 + 8)
*(arg1 + 0xb0b) = r8 == 0
uint32_t result = zx.d(*(arg2 + 0x10))

if (r8 != 0)
    if (result.b == 0)
        return sub_141fbe070(arg1, 1) __tailcall
    
    return sub_141fca380(arg1) __tailcall

if (result.b == 0)
    int32_t rbx_1 = 0
    int64_t var_38 = 0
    int64_t var_30_1 = 0
    int64_t performanceCount
    QueryPerformanceCounter(&performanceCount)
    int128_t zmm6
    zmm6.q = float.d(performanceCount)
    zmm6.q = zmm6.q f* data_143d796f8
    int512_t zmm1_3
    double zmm6_1
    result, zmm1_3, zmm6_1 = sub_141fb7350(arg1, &var_38)
    
    if (result.b != 0)
        result.b = *(arg2 + 8) == 0
        *(arg1 + 0xb0b) = result.b
        void* _String = sub_142411ce0(&arg1[0x16d], u"SkipToLevelIndex=", nullptr)
        
        if (_String != 0)
            int32_t rax_3 = _wtoi(_String)
            int64_t rdi_1 = sx.q(rax_3)
            
            if (rax_3 s>= 0 && rdi_1.d s< arg1[0x190].d)
                void*** rax_4 = j_sub_140a82f30(0x50)
                void*** rax_5
                
                if (rax_4 == 0)
                    rax_5 = nullptr
                else
                    int128_t zmm2_1
                    zmm2_1.d = float.s(zx.q(*(arg1[0x18f] + rdi_1 * 0x18 + 0x10)))
                    zmm2_1.d = zmm2_1.d f* 0.00100000005f
                    rax_5, zmm1_3 = sub_141fa4c40(rax_4, arg1, zmm2_1)
                
                zmm6_1 = sub_141fa9990(arg1, rax_5, zmm1_3)
        
        if (*data_143f3d540 != 0)
            int64_t* rcx_9 = arg1[0xee]
            
            if ((*(*rcx_9 + 0x128))(rcx_9) != 0)
                int64_t* rcx_10 = arg1[0xee]
                
                if ((*(*rcx_10 + 0x60))(rcx_10) u> 0x3a98)
                    QueryPerformanceCounter(&performanceCount)
                    
                    if (float.d(performanceCount) f* data_143d796f8 f- zmm6_1 f>= 10.0)
                        void*** rax_11 = j_sub_140a82f30(0x30)
                        void*** rdi_2 = rax_11
                        
                        if (rax_11 == 0)
                            rdi_2 = nullptr
                        else
                            rax_11[1] = 0
                            rax_11[2] = 0
                            *rdi_2 = &data_14328e970
                            zmm1_3 = sub_140d3a3a0(&rdi_2[3], arg1)
                            *rdi_2 = &data_14328f100
                            
                            if (sub_140d3e110(&rdi_2[3]) != 0)
                                int64_t* rcx_16 = *(sub_140d3c6e0(&rdi_2[3]) + 0x770)
                                rdi_2[4].d = (*(*rcx_16 + 0x60))(rcx_16)
                                QueryPerformanceCounter(&performanceCount)
                                rdi_2[5] = float.d(performanceCount) f* data_143d796f8 f+ 16777216.0
                        
                        sub_141fa9990(arg1, rdi_2, zmm1_3)
                    else
                        sub_141fba820(arg1)
        
        int64_t r14
        r14.b = 0
        int32_t rdx_8 = data_143a2dc40
        int32_t rcx_20 = data_143a2dc4c + 1
        data_143a2dc4c = rcx_20
        result = rdx_8 - 1
        int64_t result_1 = sx.q(result)
        
        if (result s>= 0)
            int64_t rdi_4 = result_1 << 4
            int64_t result_2
            
            do
                int64_t rcx_21 = data_143a2dc38
                
                if (*(rdi_4 + rcx_21 + 8) == 0)
                    r14.b = 1
                else
                    int64_t* rcx_22 = *(rdi_4 + rcx_21)
                    
                    if (rcx_22 == 0)
                        r14.b = 1
                    else
                        result = (*(*rcx_22 + 0x50))(rcx_22, arg1)
                        
                        if (result.b == 0)
                            r14.b = 1
                
                rdi_4 -= 0x10
                result_2 = result_1
                result_1 -= 1
            while (result_2 - 1 s>= 0)
            rcx_20 = data_143a2dc4c
            rdx_8 = data_143a2dc40
        
        data_143a2dc4c = rcx_20 - 1
        
        if (r14.b != 0 && rcx_20 - 1 s<= 0)
            int32_t rsi_1 = rdx_8
            
            if (rdx_8 s> 0)
                int64_t* rdi_5 = nullptr
                
                do
                    int64_t rcx_24 = data_143a2dc38
                    
                    if (*(rdi_5 + rcx_24 + 8) == 0)
                        sub_1405a4880(&data_143a2dc38, rbx_1, 1, 1)
                    else
                        int64_t* rcx_25 = *(rdi_5 + rcx_24)
                        
                        if (rcx_25 == 0)
                            sub_1405a4880(&data_143a2dc38, rbx_1, 1, 1)
                        else if ((*(*rcx_25 + 0x20))(rcx_25) != 0)
                            sub_1405a4880(&data_143a2dc38, rbx_1, 1, 1)
                        else
                            rbx_1 += 1
                            rdi_5 = &rdi_5[2]
                    
                    rdx_8 = data_143a2dc40
                while (rbx_1 s< rdx_8)
            
            result = rdx_8 * 2
            
            if (result s<= 2)
                result = 2
            
            data_143a2dc48 = result
            
            if (rsi_1 s> result && data_143a2dc44 != rdx_8)
                result = sub_1405a5410(&data_143a2dc38, rdx_8)
    
    int64_t rcx_26 = var_38
    
    if (rcx_26 != 0)
        return sub_140a74f90(rcx_26)

return result
