// 函数: sub_142194d10
// 地址: 0x142194d10
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

uint64_t result = sub_140d23dc0(arg1, 0x30)

if (result.b != 1)
    void* rcx = arg1[0xca]
    int32_t i = 0
    
    if (rcx != 0)
        int64_t rax = 0
        
        if (0 == *(rcx + 8))
            *(rcx + 8) = 0
        else
            rax = *(rcx + 8)
        
        result = rax u>> 0x1a
        
        if ((result.b & 1) == 0)
            int32_t zmm0_1 = sub_14218eae0(&data_143a2edd8)
            int64_t performanceCount
            QueryPerformanceCounter(&performanceCount)
            
            while (*(arg1 + 0x434) != 0)
                zmm0_1 = sub_140b732d0((zx.o(0)).d)
            
            int64_t performanceCount_1
            QueryPerformanceCounter(&performanceCount_1)
            result = sub_14218e220(arg1, zmm0_1)
    
    void* rcx_4 = arg1[0x81]
    
    if (rcx_4 != 0)
        *(arg1 + 0x4ac) = *(rcx_4 + 0x38)
        int32_t rax_4 = *(rcx_4 + 0x3c)
        *(arg1 + 0x432) |= 0x40
        arg1[0x96].d = rax_4
        int32_t rcx_5 = data_143a30368:4.d
        char rax_5 = sub_141f35d70(arg1)
        int64_t rdi_1 = sx.q(arg1[0xc1].d)
        char r10_1 = rax_5
        int32_t r13_1 = arg1[0xc1].d
        int64_t rbp_1 = sx.q(*(arg1[0x81] + 0x48))
        
        if (rbp_1.d s> rdi_1.d)
            arg1[0xc1].d = rbp_1.d
            
            if (rbp_1.d s> *(arg1 + 0x60c))
                sub_1405a4d70(&arg1[0xc0])
            
            memset(arg1[0xc0] + (rdi_1 << 3), 0, sx.q(rbp_1.d - rdi_1.d) << 3)
            r10_1 = rax_5
        else if (rbp_1.d s< rdi_1.d && rdi_1.d != rbp_1.d)
            arg1[0xc1].d = rbp_1.d
            sub_1405c53d0(&arg1[0xc0])
            r10_1 = rax_5
        
        char rcx_11 = arg1[0x86].b
        char rdx_1
        
        rdx_1 = r13_1 != 0 ? rcx_11 : 0
        
        int32_t result_2 = *(arg1 + 0x4b4)
        char r8_1 = 0
        char var_67_1 = 0
        result.b = rcx_11 ^ rdx_1
        result.b &= 1
        result.b ^= rcx_11
        arg1[0x86].b = result.b
        rdi_1.b = result_2 s> 0
        char var_68_1 = rdi_1.b
        
        if (rbp_1.d s> 0)
            int32_t r9_1 = rcx_5
            int64_t rbp_2 = 0
            int32_t rdx_3 = rol.d(1, r9_1.b)
            int32_t var_60_1 = rdx_3
            
            do
                result = arg1[0x81]
                int64_t* r14_3 = *(*(result + 0x40) + (rbp_2 << 3))
                
                if (r14_3 == 0)
                    rdi_1 = zx.q(var_68_1)
                else
                    uint64_t result_1
                    
                    if (r13_1 != 0)
                        result_1 = *(arg1[0xc0] + (rbp_2 << 3))
                    else
                        result_1 = 0
                    
                    result = zx.q(arg1[0x2a].b)
                    
                    if (result.d s> r9_1 || (*(r14_3 + 0x5c) & rdx_3) == 0)
                    label_142194f37:
                        
                        if (result_1 == 0)
                            rdi_1 = zx.q(var_68_1)
                        else
                            (**result_1)(result_1, 1)
                            result = arg1[0xc0]
                            r8_1 = 1
                            var_67_1 = 1
                            *(result + (rbp_2 << 3)) = 0
                            r9_1 = rcx_5
                            rdi_1 = zx.q(var_68_1)
                    else
                        uint64_t* rcx_14 = r14_3[8]
                        result = sx.q(r14_3[9].d)
                        void* rdx_4 = &rcx_14[result]
                        
                        if (rcx_14 == rdx_4)
                            goto label_142194f37
                        
                        while (true)
                            result = *rcx_14
                            
                            if (result != 0 && (*(result + 0x2c) & 1) != 0)
                                break
                            
                            rcx_14 = &rcx_14[1]
                            
                            if (rcx_14 == rdx_4)
                                goto label_142194f37
                        
                        if (r10_1 == 0)
                            goto label_142194f37
                        
                        if (result_1 == 0)
                            result = (*(*r14_3 + 0x260))(r14_3, arg1)
                            result_1 = result
                            *(arg1[0xc0] + (rbp_2 << 3)) = result
                        else
                            (*(*result_1 + 0xf8))(result_1, 0)
                            result = (*(*result_1 + 0x100))(result_1, 0)
                        
                        if (result_1 == 0)
                            r8_1 = var_67_1
                            r9_1 = rcx_5
                            rdi_1 = zx.q(var_68_1)
                        else
                            int64_t r9_2 = *result_1
                            *(result_1 + 0xe0) |= 1
                            (*(r9_2 + 8))(result_1, r14_3, arg1, r9_2, var_68_1, var_60_1, rbp_1)
                            (*(*result_1 + 0x10))(result_1)
                            result = zx.q(r14_3[9].d)
                            r8_1 = var_67_1
                            
                            if (result_2 s<= result.d)
                                result = zx.q(result_2)
                            
                            r9_1 = rcx_5
                            result_2 = result.d
                            result.b = r13_1 != 0
                            rdi_1.b = var_68_1 | result.b
                            var_68_1 = rdi_1.b
                
                rdx_3 = var_60_1
                rbp_2 += 1
                r10_1 = rax_5
            while (rbp_2 s< rbp_1)
            
            if (r8_1 != 0)
                void* rdx_7 = arg1[0xca]
                
                if (rdx_7 != 0)
                    int64_t rax_13 = 0
                    
                    if (0 == *(rdx_7 + 8))
                        *(rdx_7 + 8) = 0
                    else
                        rax_13 = *(rdx_7 + 8)
                    
                    result = rax_13 u>> 0x1a
                    
                    if ((result.b & 1) == 0)
                        float zmm0_2 = sub_14218eae0(&data_143a2edd8)
                        int64_t performanceCount_2
                        QueryPerformanceCounter(&performanceCount_2)
                        
                        while (*(arg1 + 0x434) != 0)
                            zmm0_2 = sub_140b732d0((zx.o(0)).d)
                        
                        int64_t performanceCount_3[0x2]
                        QueryPerformanceCounter(&performanceCount_3)
                        result = sub_14218e220(arg1, zmm0_2)
                
                int64_t rcx_25 = arg1[0x7d]
                
                if (rcx_25 != 0)
                    result = sub_142208350(rcx_25)
        
        if (rdi_1.b != 0)
            if (result_2 != *(arg1 + 0x4b4))
                *(arg1 + 0x4b4) = result_2
            
            if (arg1[0xc1].d s> 0)
                int64_t r8_5 = 0
                
                do
                    result = arg1[0xc0]
                    void* rdx_9 = *(r8_5 + result)
                    
                    if (rdx_9 != 0)
                        int32_t rax_16 = *(arg1 + 0x4b4)
                        void* r9_3 = *(rdx_9 + 0x10)
                        *(rdx_9 + 0x20) = rax_16
                        int32_t rcx_26 = *(r9_3 + 0x48)
                        
                        if (rax_16 s>= rcx_26)
                            rax_16 = rcx_26 - 1
                            *(rdx_9 + 0x20) = rax_16
                        
                        result = *(r9_3 + 0x40)
                        *(rdx_9 + 0x28) = *(result + (sx.q(rax_16) << 3))
                    
                    i += 1
                    r8_5 += 8
                while (i s< arg1[0xc1].d)

return result
