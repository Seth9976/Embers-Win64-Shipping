// 函数: sub_1422cbaf0
// 地址: 0x1422cbaf0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t result = sub_141dd1900(arg1)

if (arg1[0x44] != 0)
    void* r12_1 = nullptr
    int32_t i_13 = 0
    int32_t rdx_1 = 0
    int32_t i = 0
    int64_t* r13_1 = nullptr
    int32_t i_12 = 0
    int32_t var_4c_1 = 0
    int32_t i_7 = 0
    int64_t* var_58 = nullptr
    int32_t i_6
    
    if (arg1[0x4a].d s> 0)
        int64_t r15_1 = 0
        int64_t* r8_1 = nullptr
        
        do
            int64_t r13_2 = arg1[0x49]
            int32_t j = 0
            
            if (*(r15_1 + r13_2 + 0x10) s> 0)
                int64_t* rsi_1 = nullptr
                
                do
                    int64_t r12_2 = *(rsi_1 + *(r15_1 + r13_2 + 8))
                    
                    if (r12_2 != 0)
                        int64_t i_15 = sx.q(i_13)
                        i_13 = (i_15 + 1).d
                        i_6 = i_13
                        
                        if (i_13 s> rdx_1)
                            sub_1405a4d70(&var_58)
                            rdx_1 = var_4c_1
                            i_13 = i_6
                            r8_1 = var_58
                        
                        r8_1[i_15] = r12_2
                    
                    j += 1
                    rsi_1 = &rsi_1[1]
                while (j s< *(r15_1 + r13_2 + 0x10))
                
                i = i_7
                r12_1 = nullptr
                i_12 = i_13
            
            i += 1
            r15_1 += 0x18
            i_7 = i
        while (i s< arg1[0x4a].d)
        
        r13_1 = var_58
    
    uint8_t r8_3
    
    if (data_143f53f80 != 0)
        r8_3 = data_143f53f89
    else
        int64_t* rdi_1 = arg1[2]
        void* rcx_1 = rdi_1[0x23]
        
        if (rcx_1 == 0)
            (*(*rdi_1 + 0x390))(rdi_1)
            rcx_1 = rdi_1[0x23]
        
        char rax_2 = *(rcx_1 + 0x280) & 1
        r8_3 = (*(rcx_1 + 0x280) u>> 1).b & 1
        data_143f53f8c = (*(rcx_1 + 0x284))[0]
        data_143f53f89 = r8_3
        data_143f53f88 = rax_2
    
    result = zx.q(*(arg1 + 0x28c))
    int32_t rdx_3 = arg1[0x50].d
    
    if (data_143f53f8a != result.b)
        rdx_3 |= 1
        arg1[0x50].d = rdx_3
    
    uint64_t i_9 = zx.q(i_12)
    
    if (r8_3 == ((rdx_3 u>> 1).b & 1))
    label_1422cbcc6:
        
        if (data_143f53f88 == 0)
            goto label_1422cbcd3
    else
        if (data_143f53f88 != 0)
            if ((rdx_3.b & 1) != 0 && i_9.d s> 0)
                int64_t* rdi_2 = r13_1
                uint64_t i_10 = zx.q(i_9.d)
                uint64_t i_1
                
                do
                    void* rsi_2 = *rdi_2
                    
                    if (rsi_2 != 0)
                        result = sub_140d21950(rsi_2, sub_142545a80())
                        
                        if (result != 0)
                            int64_t r8_4 = *result
                            result = (*(r8_4 + 0x20))(result, arg1, r8_4)
                    
                    rdi_2 = &rdi_2[1]
                    i_1 = i_10
                    i_10 -= 1
                while (i_1 != 1)
            
            goto label_1422cbcc6
        
    label_1422cbcd3:
        
        if ((arg1[0x50].b & 1) != 0 || not(data_143f53f8c[0] f== *(arg1 + 0x284)))
            result = sub_142097540(arg1)
            
            if ((arg1[0x50].b & 2) == 0)
                result = (*(*arg1 + 0x630))(arg1)
            
            if (i_9.d s> 0)
                int64_t* rsi_3 = r13_1
                uint64_t i_11 = zx.q(i_9.d)
                uint64_t i_2
                
                do
                    void* rdi_3 = *rsi_3
                    result = sub_14208b040(arg1, rdi_3)
                    int64_t result_2 = result
                    
                    if (rdi_3 != 0)
                        int32_t rcx_11 = *(rdi_3 + 0xc)
                        void* const rax_7
                        
                        if (rcx_11 s>= data_143e1d9b4)
                            rax_7 = nullptr
                        else
                            uint32_t rdx_7 = zx.d(rcx_11.w)
                            
                            if (rcx_11 s< 0)
                                rcx_11 += 0xffff
                                rdx_7 -= 0x10000
                            
                            rax_7 = *(data_143e1d9a0 + (sx.q(rcx_11 s>> 0x10) << 3))
                                + sx.q(rdx_7) * 0x18
                        
                        result = zx.q(*(rax_7 + 8) u>> 0x1d)
                        
                        if ((result.b & 1) == 0 && result_2 != 0)
                            result = sub_141dba030(rdi_3, arg1)
                            
                            if ((arg1[0x50].b & 1) != 0)
                                result = sub_140d21950(rdi_3, sub_142545a80())
                                
                                if (result != 0)
                                    int64_t r8_5 = *result
                                    result = (*(r8_5 + 0x10))(result, arg1, r8_5)
                    
                    rsi_3 = &rsi_3[1]
                    i_2 = i_11
                    i_11 -= 1
                while (i_2 != 1)
    
    if (not(data_143f53f8c[0] f== *(arg1 + 0x284)))
        int32_t result_1 = arg1[0x50].d
        int32_t i_8 = 0
        void* var_48 = nullptr
        int32_t r15_2 = 0
        int32_t var_3c_1 = 0
        result = zx.q(result_1)
        
        if ((result_1.b & 1) == 0 && data_143f53f88 == 0 && arg1[0x44] != 0)
            int64_t rax_11 = (*(*arg1 + 0x150))(arg1)
            sub_1423ddac0(data_143f5b298, &var_58, rax_11)
            int64_t* r8_7 = var_58
            int32_t i_3 = i_6
            
            while (i_3 s>= 0)
                if (i_3 s< r8_7[1].d && *(*r8_7 + (sx.q(i_3) << 3)) == 0)
                    i_3 += 1
                    i_6 = i_3
                    continue
                
                while (i_3 s>= 0)
                    if (i_3 s>= r8_7[1].d)
                        break
                    
                    void* rax_14 = *(*(*r8_7 + (sx.q(i_3) << 3)) + 0x30)
                    
                    if (rax_14 != 0 && *(rax_14 + 0x2b8) != 0)
                        int64_t i_14 = sx.q(i_8)
                        i_8 = (i_14 + 1).d
                        
                        if (i_8 s> r15_2)
                            sub_1405a4df0(&var_48)
                            i_3 = i_6
                            r8_7 = var_58
                            r15_2 = var_3c_1
                            r12_1 = var_48
                        
                        void* r9_1 = r12_1 + i_14 * 0x18
                        
                        if (r9_1 != 0)
                            void* rcx_27 = *(*(*(*r8_7 + (sx.q(i_3) << 3)) + 0x30) + 0x2b8)
                            *r9_1 = rcx_27
                            *(r9_1 + 8) = (*(rcx_27 + 0x2710) u>> 2).b & 1
                            *(r9_1 + 0xc) = *(rcx_27 + 0x25c)
                            *(r9_1 + 0x10) = *(rcx_27 + 0x2668)
                            i_3 = i_6
                            r8_7 = var_58
                    
                    do
                        i_3 += 1
                        i_6 = i_3
                        
                        if (i_3 s< 0)
                            goto label_1422cbf36
                        
                        if (i_3 s>= r8_7[1].d)
                            break
                    while (*(*r8_7 + (sx.q(i_3) << 3)) == 0)
                
                break
            
        label_1422cbf36:
            result = zx.q(arg1[0x50].d)
        
        if ((result.b & 1) == 0)
            result = sub_1420ab490(arg1, *(arg1 + 0x284), 0, 0)
        else
            int128_t zmm1 = data_143f53f8c
            
            if (zmm1.d f== -1f)
                result = sub_1420ab490(arg1, *(arg1 + 0x284), 0, 0)
            else
                uint32_t zmm0_1[0x4] = *(arg1 + 0x284)
                zmm0_1[0] = zmm0_1[0] f- zmm1.d
                
                if (__andps_xmmxud_memxud(zmm0_1, data_142d3f770)[0] f>= arg1[0x51].d)
                    result = sub_1420ab490(arg1, *(arg1 + 0x284), 0, 0)
                else
                    *(arg1 + 0x284) = zmm1.d
        
        void* r8_8 = r12_1
        
        if (i_8 != 0)
            int32_t i_4
            
            do
                void* rcx_30 = *r8_8
                uint32_t rax_22 = zx.d(*(r8_8 + 8))
                r8_8 += 0x18
                *(rcx_30 + 0x2710) ^= (rax_22 << 2 ^ *(rcx_30 + 0x2710)) & 4
                *(*(r8_8 - 0x18) + 0x25c) = *(r8_8 - 0xc)
                result = zx.q(*(r8_8 - 8))
                *(*(r8_8 - 0x18) + 0x2668) = result.d
                i_4 = i_8
                i_8 -= 1
            while (i_4 != 1)
        
        if (r12_1 != 0)
            result = sub_140a74f90(r12_1)
    
    if ((data_143f53f88 != 0 || not(data_143f53f8c[0] f== *(arg1 + 0x284)))
            && (arg1[0x50].b & 1) == 0)
        result = sub_1420a6540(arg1)
        
        if (i_9.d s> 0)
            int64_t* rsi_4 = r13_1
            uint64_t i_5
            
            do
                void* rdi_4 = *rsi_4
                
                if (rdi_4 != 0)
                    result = sub_141dd4670(rdi_4, arg1)
                    
                    if (data_143f53f88 != 0)
                        result = sub_140d21950(rdi_4, sub_142545a80())
                        
                        if (result != 0)
                            int64_t r8_9 = *result
                            result = (*(r8_9 + 0x18))(result, arg1, r8_9)
                
                rsi_4 = &rsi_4[1]
                i_5 = i_9
                i_9 -= 1
            while (i_5 != 1)
    
    if (r13_1 != 0)
        return sub_140a74f90(r13_1)

return result
