// 函数: sub_141f39c80
// 地址: 0x141f39c80
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_258
uint128_t* result = __security_cookie ^ &var_258
uint128_t* result_1 = result

if (arg1[0x2f].d != 0)
    int64_t r10_1 = arg1[0x2e]
    int32_t rcx = arg1[0x2f].d
    int64_t* rdi_1 = *(r10_1 + (sx.q(rcx - 1) << 3))
    
    if (0 != 0)
        memmove(r10_1 + (sx.q(rcx - 1) << 3), r10_1 + (sx.q(rcx) << 3), 0 << 3)
        rcx = arg1[0x2f].d
    
    arg1[0x2f].d = rcx - 1
    
    if (rcx != 1)
        result = sub_141f43160(*(arg1[0x2e] + (sx.q(rcx) << 3) - 0x10), rdi_1)
    else
        int512_t zmm1_1
        result, zmm1_1 = sub_141f40e50(rdi_1)
        char rsi_1 = result.b
        
        if (result.b != 0)
            sub_141f44ed0(arg1, 1, 0, *(rdi_1 + 0x14), zmm1_1)
        label_141f39d4e:
            void* rax_8 = sub_142577430()
            void* rdx_3 = arg1[2]
            result = sx.q(*(rax_8 + 0x38))
            uint128_t* result_3
            
            if (result.d s<= *(rdx_3 + 0x38))
                result_3 = result
            
            if (result.d s<= *(rdx_3 + 0x38)
                    && *(*(rdx_3 + 0x30) + (result_3 << 3)) == rax_8 + 0x30)
                void* rax_9 = rdi_1[0x44]
                void* rcx_5 = &rdi_1[0xf]
                int64_t var_50_1 = 0
                int32_t var_48_1 = 0
                
                if (rax_9 != 0)
                    rcx_5 = rax_9
                
                int32_t var_44_1 = 3
                int32_t rax_10 = rdi_1[0x45].d
                void* var_228 = rcx_5
                int32_t var_220_1 = rax_10
                void var_218
                uint128_t var_1f8[0x1a]
                int64_t r8_5
                result, r8_5 = sub_141f2c2a0(rdi_1, &var_218, arg1, &var_1f8, rsi_1)
                
                if (arg1[0x2f].d s<= 0)
                    if (data_143a2d7b4 != 1 || (*(arg1 + 0x14c) & 2) == 0)
                        result.b = 0
                    else
                        result.b = 1
                    
                    if (result.b == 0)
                        r8_5.b = 1
                        result = (*(*arg1 + 0x468))(arg1, &var_228, r8_5)
                        *(arg1 + 0x14c) &= 0xfd
                        result.b &= 1
                        result.b *= 2
                        *(arg1 + 0x14c) |= result.b
                else
                    result = arg1[0x2e]
                    void* rdx_5 = *(result + (sx.q(arg1[0x2f].d) << 3) - 8)
                    *(rdx_5 + 0x350) |= 2
                    *(rdx_5 + 0x10) = 3
                    *(rdx_5 + 0x74) = 0xffffffff
                
                char var_208_1 = 0
                
                if (var_50_1 != 0)
                    result = sub_140a74f90(var_50_1)
            else if (arg1[0x2f].d s<= 0)
                if (data_143a2d7b4 != 1 || (*(arg1 + 0x14c) & 2) == 0)
                    result.b = 0
                else
                    result.b = 1
                
                if (result.b == 0)
                    void* r8_3
                    r8_3.b = 1
                    result = (*(*arg1 + 0x468))(arg1, 0, r8_3, 0)
                    *(arg1 + 0x14c) &= 0xfd
                    result.b &= 1
                    result.b *= 2
                    *(arg1 + 0x14c) |= result.b
            else
                result = arg1[0x2e]
                void* rdx_7 = *(result + (sx.q(arg1[0x2f].d) << 3) - 8)
                *(rdx_7 + 0x350) |= 2
                *(rdx_7 + 0x10) = 3
                *(rdx_7 + 0x74) = 0xffffffff
        else if ((rdi_1[0x6a].b & 2) != 0)
            goto label_141f39d4e
        
        if (rdi_1[0x69].d s> 0)
            int64_t* r12_1 = arg1[0x14]
            
            if (r12_1 != 0)
                void* i_1 = rdi_1[0x68]
                void* i = &rdi_1[0x46]
                
                if (i_1 != 0)
                    i = i_1
                
                result = sx.q(rdi_1[0x69].d)
                
                for (void* r15_2 = result * 0x88 + i; i != r15_2; i += 0x88)
                    int32_t rax_13 = *(arg1 + 0xc)
                    void* const rax_17
                    
                    if (rax_13 s>= data_143e1d9b4)
                        rax_17 = nullptr
                    else
                        uint32_t rdx_8 = zx.d(rax_13.w)
                        
                        if (rax_13 s< 0)
                            rax_13 += 0xffff
                            rdx_8 -= 0x10000
                        
                        rax_17 =
                            *(data_143e1d9a0 + (sx.q(rax_13 s>> 0x10) << 3)) + sx.q(rdx_8) * 0x18
                    
                    result = zx.q(*(rax_17 + 8) u>> 0x1d)
                    
                    if ((result.b & 1) != 0)
                        break
                    
                    result = sub_140d3c6e0(i + 0x70)
                    uint128_t* result_4 = result
                    
                    if (result != 0)
                        int64_t rdx_10 = *arg1
                        result = (*(rdx_10 + 0x4c8))(arg1, rdx_10)
                        
                        if (result.d != 0)
                            int64_t rdx_11 = *result_4
                            result = (*(rdx_11 + 0x4c8))(result_4, rdx_11)
                            
                            if (result.d != 0)
                                int32_t rax_20 = (*(*arg1 + 0x4d8))(arg1)
                                int64_t rdx_12 = *result_4
                                int32_t rax_21 = (*(rdx_12 + 0x4d8))(result_4, rdx_12)
                                int64_t r8_6 = *arg1
                                int32_t result_2 = (*(r8_6 + 0x4d0))(arg1, zx.q(rax_21), r8_6)
                                int64_t r8_7 = *result_4
                                result = (*(r8_7 + 0x4d0))(result_4, zx.q(rax_20), r8_7)
                                
                                if (result_2 s<= result.d)
                                    result = zx.q(result_2)
                                
                                if (result.d == 2)
                                    result = sub_141f0f7a0(arg1, r12_1, i)

__security_check_cookie(result_1 ^ &var_258)
return result
