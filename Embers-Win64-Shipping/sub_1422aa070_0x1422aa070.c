// 函数: sub_1422aa070
// 地址: 0x1422aa070
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

uint32_t r8
uint32_t arg_18 = r8
int64_t r9 = sx.q(*(arg1 + 0x360))
int64_t* result_2 = *(arg1 + 0x358)
uint32_t rbx = r8
int64_t* result = result_2
void* rcx = &result_2[r9]

if (result_2 != rcx)
    while (*result != arg2)
        result = &result[1]
        
        if (result == rcx)
            return result
    
    result = (result - result_2) s>> 3
    
    if (result.d != 0xffffffff)
        int32_t i = 0
        char arg_8
        
        if (r9.d != 0)
            int32_t rdi_1 = 0
            int64_t rbx_1 = 0
            r8.b = *result_2 != arg2
            arg_8 = r8.b
            int32_t r13_1 = 0
            
            do
                int64_t r9_1 = sx.q(rdi_1)
                rbx_1 += 1
                rdi_1 += 1
                
                if (rbx_1 s< r9)
                    int64_t rcx_1 = *(arg1 + 0x358) + (rbx_1 << 3)
                    
                    do
                        int32_t rax_2
                        rax_2.b = *rcx_1 != arg2
                        
                        if (zx.d(r8.b) != rax_2)
                            break
                        
                        rdi_1 += 1
                        rbx_1 += 1
                        rcx_1 += 8
                    while (rbx_1 s< r9)
                
                int32_t r12_2 = rdi_1 - r9_1.d
                
                if (r8.b != 0)
                    if (r13_1 != r9_1.d)
                        int64_t rcx_2 = *(arg1 + 0x358)
                        memmove(rcx_2 + (sx.q(r13_1) << 3), rcx_2 + (r9_1 << 3), r12_2 << 3)
                        r8 = zx.d(arg_8)
                    
                    r13_1 += r12_2
                
                r8.b ^= 1
                arg_8 = r8.b
            while (rbx_1 s< r9)
            
            rbx = arg_18
            *(arg1 + 0x360) = r13_1
        
        int32_t rdx_2 = *(arg1 + 0x34)
        result = zx.q(*(arg1 + 0x30))
        int32_t rcx_4 = *(arg1 + 0x38)
        
        if (result.d s>= rdx_2)
            rdx_2 = result.d
        
        if (rdx_2 s>= rcx_4)
            rcx_4 = rdx_2
        
        if (rcx_4 s<= 0)
            char result_1 = *(arg1 + 0xc)
            
            if (result_1 != 4)
                result = zx.q(result_1)
            else
                result = zx.q(data_1439c7a08)
            
            uint128_t var_78
            
            if (result.d s< 3)
                if (*(arg2 + 0x50) s> 0)
                    int64_t rdx_7 = sx.q(*(arg1 + 0x3b0))
                    int64_t r8_4 = *(arg2 + 0x378)
                    
                    if (*(r8_4 + (rdx_7 << 3)) == arg1)
                        void* r9_3 = arg2 + 0x388
                        
                        if (*(arg2 + 0x3ac) != 0)
                            *(r8_4 + (sx.q(*(arg2 + 0x3a8)) << 3)) = rdx_7.d
                            r8_4 = *(arg2 + 0x378)
                        
                        int32_t rax_20 = -1
                        *(r8_4 + (rdx_7 << 3)) = 0xffffffff
                        
                        if (*(arg2 + 0x3ac) s> 0)
                            rax_20 = *(arg2 + 0x3a8)
                        
                        *(r8_4 + (rdx_7 << 3) + 4) = rax_20
                        *(arg2 + 0x3ac) += 1
                        *(arg2 + 0x3a8) = rdx_7.d
                        int32_t temp2_1
                        int32_t temp3_1
                        temp2_1:temp3_1 = sx.q(rdx_7.d)
                        void* rcx_17 = *(r9_3 + 0x10)
                        
                        if (rcx_17 != 0)
                            r9_3 = rcx_17
                        
                        result = zx.q((temp3_1 + (temp2_1 & 0x1f)) s>> 5)
                        int64_t rcx_18 = sx.q(result.d)
                        *(r9_3 + (rcx_18 << 2)) &= not.d(rol.d(1, rdx_7.b))
                        
                        if (*(arg1 + 0x300) s> 0)
                            int64_t rbx_7 = 0
                            int64_t r11_1 = 0
                            
                            do
                                void* rax_25 = *(arg1 + 0x318)
                                
                                if ((rax_25.b & 1) != 0)
                                    rax_25 = (rax_25 s>> 1) + arg1 + 0x318
                                
                                void* rcx_19 = *(arg1 + 0x2f8)
                                int32_t rax_26 = *(rax_25 + r11_1)
                                
                                if ((rcx_19.b & 1) != 0)
                                    rcx_19 = (rcx_19 s>> 1) + arg1 + 0x2f8
                                
                                int64_t zmm0 = *(rcx_19 + rbx_7)
                                i += 1
                                r11_1 += 4
                                int32_t r8_6 = *(arg2 + 0x34) * *(rcx_19 + rbx_7 + 8)
                                rbx_7 += 0xc
                                var_78.q = zmm0
                                int32_t r8_9 =
                                    (r8_6 + (var_78.q u>> 0x20).d) * *(arg2 + 0x30) + var_78.d
                                uint8_t* rdx_12 =
                                    sx.q((&data_1439c85f4)[sx.q(*(arg2 + 0x5c)) * 0xa] * r8_9)
                                    + *(arg2 + 0x48)
                                *rdx_12 = (rax_26 u>> 0x10).b
                                rdx_12[1] = (rax_26 u>> 8).b
                                rdx_12[2] = rax_26.b
                                rdx_12[3] = 1
                                result = *(arg2 + 0x368)
                                *(sx.q(r8_9) + result) = 0
                            while (i s< *(arg1 + 0x300))
            else if (*(arg2 + 0x60) != 0)
                sub_1422a4ad0(arg1)
                char rax_4 = *(arg1 + 0xc)
                uint32_t rax_5
                
                if (rax_4 != 4)
                    rax_5 = zx.d(rax_4)
                else
                    rax_5 = data_1439c7a08
                
                sub_1419a2ec0(std::_Get_future_error_what((*1111")[sx.q(rax_5)]), &var_78, 
                    &data_143f529a0, 0)
                uint128_t zmm0_1 = var_78
                int32_t rcx_8 = *(arg1 + 0x300)
                int64_t var_50_1
                __builtin_memset(&var_50_1, 0, 0x18)
                int32_t var_58 = rcx_8
                int128_t var_48
                var_48:8.q = *(arg2 + 0x68)
                int64_t var_50_2 = *(arg1 + 0x338)
                var_48.q = *(arg1 + 0x348)
                int32_t temp0_1
                int32_t temp1_1
                temp0_1:temp1_1 = sx.q(rcx_8 + 0x3f)
                var_78:4.d = 1
                uint128_t var_68 = zmm0_1
                uint32_t var_54_1 = rbx
                var_78.d = (temp1_1 + (temp0_1 & 0x3f)) s>> 6
                var_78.q = var_78.q
                var_78:8.d = 1
                sub_142284460(&data_143f02b98, &var_68, &var_58, &var_78)
                int64_t rcx_9 = *(arg2 + 0x68)
                int64_t* rbx_4 = (data_143f02bc8 + 7) & 0xfffffffffffffff8
                arg_8.q = rcx_9
                void* rax_15 = &rbx_4[1]
                
                if (rax_15 u> data_143f02bd0)
                    sub_140b0e3d0(&data_143f02bc8, 0x10)
                    rcx_9 = arg_8.q
                    rbx_4 = (data_143f02bc8 + 7) & 0xfffffffffffffff8
                    rax_15 = &rbx_4[1]
                
                data_143f02bc8 = rax_15
                *rbx_4 = rcx_9
                void*** rcx_12 = (data_143f02bc8 + 7) & 0xfffffffffffffff8
                void* rax_16 = &rcx_12[6]
                
                if (rax_16 u> data_143f02bd0)
                    sub_140b0e3d0(&data_143f02bc8, 0x38)
                    rcx_12 = (data_143f02bc8 + 7) & 0xfffffffffffffff8
                    rax_16 = &rcx_12[6]
                
                data_143f02bac += 1
                data_143f02bc8 = rax_16
                *data_143f02ba0 = rcx_12
                data_143f02ba0 = &rcx_12[1]
                rcx_12[1] = 0
                *rcx_12 = &data_142da7798
                rcx_12[2].d = 1
                rcx_12[3] = rbx_4
                rcx_12[4].d = 0
                *(rcx_12 + 0x24) = 1
                rcx_12[5] = 0
                return sub_1422a9280(arg1)

return result
