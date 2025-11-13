// 函数: sub_141d6dc30
// 地址: 0x141d6dc30
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_138
int64_t rax_1 = __security_cookie ^ &var_138
int64_t* result
float zmm6_1[0x4]
result, zmm6_1 = sub_141ddacb0(arg1, arg2)

if (arg1[0x49] != 0)
    int64_t* rax_3 = (*(arg1[0x44] + 0x18))(&arg1[0x44])
    uint32_t zmm7[0x4]
    int128_t zmm8
    
    if (rax_3 != 0)
        void* rax_5 = sub_140d21950(rax_3, sub_141b37470())
        char rax_7
        
        if (rax_5 == 0)
            void* rax_6 = sub_141b37470()
            rax_7 = sub_140be1130(rax_3[2], rax_6)
        
        if (rax_5 != 0 || rax_7 != 0)
            uint32_t var_48_1[0x4] = zmm7
            int128_t var_58_1 = zmm8
            TEB* gsbase
            
            if (data_143f38028 s>
                    *(0x14 + *(gsbase->ThreadLocalStoragePointer + (zx.q(data_14401b1a0) << 3))))
                _Init_thread_header(&data_143f38028)
                
                if (data_143f38028 == 0xffffffff)
                    sub_141b220b0(&data_143f38010)
                    _Init_thread_footer(&data_143f38028)
            
            uint32_t (* rax_11)[0x4]
            uint32_t var_a8[0x3][0x4]
            
            if (rax_5 == 0)
                rax_11 = sub_141b38b60(&var_a8, rax_3)
            else
                void var_d8
                (*(*rax_5 + 0x10))(rax_5, &var_d8)
                rax_11 = &var_d8
            zmm7 = *rax_11
            zmm8 = rax_11[1]
            int128_t zmm9 = rax_11[2]
            void var_110
            sub_141a312b0(&var_110, arg1[0x49] + 0x28)
            int64_t* var_100
            void* const r8_2
            
            if (var_100[1].d == *(var_100 + 0x34))
            label_141d6de28:
                r8_2 = nullptr
            else
                int32_t rax_13 = sub_1405be780(&data_143f38010)
                void* rcx_8 = var_100[8]
                void* r8_1 = &var_100[7]
                
                if (rcx_8 != 0)
                    r8_1 = rcx_8
                
                int32_t rax_15 = *(r8_1 + (((sx.q(var_100[9].d) - 1) & sx.q(rax_13)) << 2))
                
                if (rax_15 == 0xffffffff)
                label_141d6de28_1:
                    r8_2 = nullptr
                else
                    int64_t r10_1 = *var_100
                    
                    while (true)
                        int64_t rdx_10 = sx.q(rax_15) * 5
                        r8_2 = r10_1 + (rdx_10 << 3)
                        
                        if (*(r10_1 + (rdx_10 << 3)) == data_143f38010
                                && *(r8_2 + 0x14) == data_143f38024 && ((*(r8_2 + 8)
                                ^ data_143f38018) | (*(r8_2 + 0xc) ^ data_143f3801c)
                                | (*(r8_2 + 0x10) ^ data_143f38020)
                                | (*(r8_2 + 4) ^ data_143f38014)) == 0)
                            break
                        
                        rax_15 = *(r8_2 + 0x20)
                        
                        if (rax_15 == 0xffffffff)
                            goto label_141d6de28_2
                    
                    if (rax_15 == 0xffffffff)
                    label_141d6de28_2:
                        r8_2 = nullptr
            
            int64_t** rbx_4 = r8_2 + 0x18
            
            if (r8_2 == 0)
                rbx_4 = nullptr
            
            int64_t* rbx_5
            
            if (rbx_4 == 0)
                int64_t* rax_16 = j_sub_140a82f30(0x40)
                rbx_5 = rax_16
                
                if (rax_16 == 0)
                    rbx_5 = nullptr
                else
                    int128_t zmm2_1 = zx.o(0)
                    *rbx_5 = &data_14322dc98
                    float zmm1[0x4] = data_143f37f90
                    zmm1[0].q = zmm2_1 u>> 0x40
                    *(rbx_5 + 0x10) = _mm_shuffle_ps(zx.o(0), zmm1, 0xc4)
                    *(rbx_5 + 0x20) = zmm2_1
                    *(rbx_5 + 0x30) = __andps_xmmxud_memxud(data_143f37f90, data_143f37fa0)
                
                int64_t* var_118 = rbx_5
                sub_1405a7400(var_100, &data_143f38010, &var_118)
                int64_t* rcx_17 = var_118
                
                if (rcx_17 != 0)
                    (**rcx_17)(rcx_17, 1)
            else
                rbx_5 = *rbx_4
            
            *(rbx_5 + 0x10) = zmm7
            zmm7 = var_48_1
            *(rbx_5 + 0x20) = zmm8
            zmm8 = var_58_1
            *(rbx_5 + 0x30) = zmm9
    
    result = sub_141a6b840(arg1[0x49], zmm6_1, zmm6_1, zmm7, zmm8)

__security_check_cookie(rax_1 ^ &var_138)
return result
