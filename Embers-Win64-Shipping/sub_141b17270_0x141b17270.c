// 函数: sub_141b17270
// 地址: 0x141b17270
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_188
uint64_t result = __security_cookie ^ &var_188
uint64_t result_1 = result
bool cond:0 = *(arg1 + 0x20) == 0
void* r15 = arg1 + 0x20
void* var_148 = arg5

if (not(cond:0))
    int32_t* r13_1 = arg1 + 0x14
    char rdi_1 = (*(sub_140d3c6e0(r13_1) + 0xc9)).b
    TEB* gsbase
    
    if (data_143f2c800
            s> *(0x14 + *(gsbase->ThreadLocalStoragePointer + (zx.q(data_14401b1a0) << 3))))
        _Init_thread_header(&data_143f2c800)
        
        if (data_143f2c800 == 0xffffffff)
            int64_t rax_33 = data_143f2c7f8
            
            if (rax_33 == 0)
                rax_33 = sub_141a54240(&data_143f2c7f8, 0)
            
            data_143f2c7f0 = rax_33
            _Init_thread_footer(&data_143f2c800)
    
    int64_t rbx_1 = data_143f2c7f0
    int32_t var_168
    int64_t var_158
    
    if (sub_141aef7d0(arg5 + 0x60, rbx_1) == 0)
        void*** rax_5 = sub_141af28c0()
        void** r15_1 = &rax_5[3]
        
        if (rax_5 == -0x10)
            r15_1 = nullptr
        
        if (r15_1 != 0)
            void* rax_6
            
            if (*r15_1 != 0)
                rax_6 = r15_1[1]
            
            if (*r15_1 == 0 || rax_6 == 0 || *(rax_6 + 8) s<= 0)
                if (rax_5 != 0)
                    rax_5[1].d += 1
                
                *r15_1 = &rax_5[2]
                int64_t* rcx_4 = r15_1[1]
                
                if (rax_5 != rcx_4)
                    if (rax_5 != 0)
                        *(rax_5 + 0xc) += 1
                        rcx_4 = r15_1[1]
                    
                    if (rcx_4 != 0)
                        int32_t temp6_1 = *(rcx_4 + 0xc)
                        *(rcx_4 + 0xc) -= 1
                        
                        if (temp6_1 == 1)
                            (*(*rcx_4 + 8))(rcx_4, 1)
                    
                    r15_1[1] = rax_5
                
                if (rax_5 != 0)
                    rax_5[1].d -= 1
                    
                    if (rax_5[1].d == 1)
                        (**rax_5)(rax_5)
                        int32_t temp5_1 = *(rax_5 + 0xc)
                        *(rax_5 + 0xc) -= 1
                        
                        if (temp5_1 == 1)
                            (*rax_5)[1](rax_5, 1)
        
        var_168.q = &rax_5[2]
        
        if (rax_5 != 0)
            rax_5[1].d += 1
        
        int64_t* rcx_8 = var_148 + 0x60
        var_158 = rbx_1
        sub_1405a72d0(rcx_8, &var_158, &var_168)
        
        if (rax_5 != 0)
            rax_5[1].d -= 1
            
            if (rax_5[1].d == 1)
                (**rax_5)(rax_5)
                int32_t temp2_1 = *(rax_5 + 0xc)
                *(rax_5 + 0xc) -= 1
                
                if (temp2_1 == 1)
                    (*rax_5)[1](rax_5, 1)
        
        if (rax_5 != 0)
            rax_5[1].d -= 1
            
            if (rax_5[1].d == 1)
                (**rax_5)(rax_5)
                int32_t temp3_1 = *(rax_5 + 0xc)
                *(rax_5 + 0xc) -= 1
                
                if (temp3_1 == 1)
                    (*rax_5)[1](rax_5, 1)
        
        r13_1 = arg1 + 0x14
        r15 = arg1 + 0x20
    
    int32_t rax_14 = *(arg3 + 0x24)
    int64_t* rsi_2 = 0x10
    int64_t rdx_2
    
    if (rax_14 == 0x80000000)
        int64_t* rdx_3 = 0x10
        
        if (*(arg3 + 0x20) != 0)
            rdx_3 = 4
        
        rdx_2 = *(rdx_3 + arg3)
    else
        var_168 = rax_14
        int32_t var_164_1 = 0
        rdx_2 = var_168.q
    
    int128_t zmm0_1
    int512_t zmm7_1
    zmm0_1, zmm7_1 = sub_141b29040(r15, rdx_2, *(arg3 + 0x18))
    int64_t* rdx_4 = 4
    
    if (*(arg3 + 0x20) != 0)
        rdx_4 = 0x10
    
    zmm7_1.o = zmm0_1
    int128_t zmm0_2
    int512_t zmm8_1
    zmm0_2, zmm8_1 = sub_141b29040(r15, *(rdx_4 + arg3), *(arg3 + 0x18))
    int32_t rax_15 = *(arg3 + 0x24)
    zmm8_1.o = zmm0_2
    int32_t var_150 = 0x3f800000
    int64_t rdx_6
    
    if (rax_15 == 0x80000000)
        int64_t* rdx_7 = 0x10
        
        if (*(arg3 + 0x20) != 0)
            rdx_7 = 4
        
        rdx_6 = *(rdx_7 + arg3)
    else
        var_168 = rax_15
        int32_t var_164_2 = 0
        rdx_6 = var_168.q
    
    int32_t zmm8_2
    int64_t zmm9_1
    zmm8_2, zmm9_1 = sub_141a467f0(arg1 + 0x48, rdx_6, &var_150)
    int32_t rax_16 = *(arg3 + 0x24)
    int64_t rdx_8
    
    if (rax_16 == 0x80000000)
        int64_t* rdx_9 = 0x10
        
        if (*(arg3 + 0x20) != 0)
            rdx_9 = 4
        
        rdx_8 = *(rdx_9 + arg3)
    else
        var_168 = rax_16
        int32_t var_164_3 = 0
        rdx_8 = var_168.q
    
    int128_t zmm0_3
    int32_t zmm7_2
    zmm0_3, zmm7_2 = sub_141a47d70(arg1, rdx_8)
    int64_t zmm6_1
    zmm6_1.d = zmm0_3.q.d f* var_150
    void* rax_17 = sub_140d3c6e0(r13_1)
    var_168 = 0xffffffff
    int32_t var_164_4 = 0
    int64_t rax_18
    
    if (rax_17 == 0)
        rax_18 = var_168.q
    else
        sub_140d3a3a0(&var_158, rax_17)
        rax_18 = var_158
    
    int64_t rcx_19 = *r15
    void* r13_3 = var_148
    char var_e0
    char var_e0_1 = var_e0 & 0xfc
    zmm0_3 = *(r13_3 + 0x124)
    char var_10c_1 = *(arg1 + 0xe8)
    int64_t var_11c_1 = *(arg1 + 0x3c)
    char var_10b_1 = *(arg1 + 0xe9)
    int64_t* rax_21 = sub_140a82f30(0x40, 8)
    float zmm10_1[0x4] = rcx_19.o
    int64_t* var_100 = rax_21
    char rcx_21 = var_e0_1 | 1
    char var_e0_2 = rcx_21
    int64_t* rcx_22 = &var_100
    
    if ((rcx_21 & 2) == 0)
        rcx_22 = rax_21
    
    zmm10_1 = _mm_shuffle_ps(zmm10_1, zmm10_1, 0xd2)
    zmm10_1[0] = zmm8_2
    zmm10_1 = _mm_shuffle_ps(zmm10_1, zmm10_1, 0x27)
    int128_t zmm11_1
    zmm11_1.d = zmm6_1.d
    zmm10_1[0] = zmm7_2
    *rcx_22 = &data_14305da58
    *(rcx_22 + 8) = _mm_shuffle_ps(zmm10_1, zmm10_1, 0x39)
    *(rcx_22 + 0x18) = zmm11_1
    *(rcx_22 + 0x28) = zmm0_3
    rcx_22[7] = rax_18
    int32_t var_c4_1 = 0x3f800000
    int128_t var_d8_1 = *(r13_3 + 0x124)
    char var_c0_1 = rdi_1
    int32_t var_c8_1 = *(r13_3 + 0x188)
    sub_141aebd90(sub_1405a8fd0(r13_3 + 0xb0, sub_1405be5b0(r13_3 + 0x110), r13_3 + 0x110), rbx_1, 
        &var_100)
    
    if ((var_e0_2 & 1) != 0)
        int64_t** rcx_26 = &var_100
        
        if ((var_e0_2 & 2) == 0)
            rcx_26 = var_100
        
        var_e0_2 &= 0xfe
        (**rcx_26)(rcx_26, 0)
        
        if ((var_e0_2 & 2) == 0)
            sub_140a74f90(var_100)
    
    result = sub_141a58000(arg4, arg3)
    
    if (result.b != 0)
        int64_t var_78_1 = zmm9_1
        sub_141a52af0(&var_168, arg3)
        int32_t rax_27 = *(arg3 + 0x24)
        int64_t rdx_15
        
        if (rax_27 == 0x80000000)
            if (*(arg3 + 0x20) != 0)
                rsi_2 = 4
            
            rdx_15 = *(rsi_2 + arg3)
        else
            var_158.d = rax_27
            var_158:4.d = 0
            rdx_15 = var_158
        
        int128_t zmm0_5
        int512_t zmm8_3
        zmm0_5, zmm8_3 = sub_141b29040(r15, rdx_15, *(arg3 + 0x18))
        zmm8_3.o = zmm0_5
        int128_t zmm0_6
        int512_t zmm7_3
        zmm0_6, zmm7_3 = sub_141b29040(r15, var_168.q, *(arg3 + 0x18))
        var_148.d = 0x3f800000
        zmm7_3.o = zmm0_6
        int64_t zmm6_2
        int32_t zmm8_4
        int128_t zmm11_2
        int128_t zmm12_2
        zmm6_2, zmm8_4, zmm11_2, zmm12_2 = sub_141a467f0(arg1 + 0x48, var_168.q, &var_148)
        float zmm0_7
        int32_t zmm7_4
        float zmm10_2[0x4]
        zmm0_7, zmm7_4, zmm10_2 = sub_141a47d70(arg1, var_168.q)
        char var_e0_3 = var_e0_2 & 0xfc
        float zmm6_3 = zmm0_7 f* var_148.d
        int64_t** rax_28 = sub_140a82f30(0x40, 8)
        int64_t** rdx_19 = &var_100
        var_100 = rax_28
        char result_2 = var_e0_3 | 1
        zmm10_2 = _mm_shuffle_ps(zmm10_2, zmm10_2, 0xd2)
        
        if ((result_2 & 2) == 0)
            rdx_19 = rax_28
        
        zmm10_2[0] = zmm8_4
        zmm10_2 = _mm_shuffle_ps(zmm10_2, zmm10_2, 0x27)
        zmm10_2[0] = zmm7_4
        zmm11_2.d = zmm6_3
        *(rdx_19 + 8) = _mm_shuffle_ps(zmm10_2, zmm10_2, 0x39)
        *rdx_19 = &data_14305da68
        *(rdx_19 + 0x18) = zmm11_2
        *(rdx_19 + 0x28) = zmm12_2
        rdx_19[7] = zmm6_2
        int32_t var_c4_2 = 0x3f800000
        int128_t var_d8_2 = *(r13_3 + 0x124)
        char var_c0_2 = rdi_1
        int32_t var_c8_2 = *(r13_3 + 0x188)
        sub_141aebd90(sub_1405a8fd0(r13_3 + 0xb0, sub_1405be5b0(r13_3 + 0x110), r13_3 + 0x110), 
            rbx_1, &var_100)
        result = zx.q(result_2)
        
        if ((result.b & 1) != 0)
            int64_t* rcx_37 = &var_100
            
            if ((result.b & 2) == 0)
                rcx_37 = var_100
            
            result.b &= 0xfe
            char var_e0_5 = result.b
            result = (**rcx_37)(rcx_37, 0)
            
            if ((var_e0_5 & 2) == 0)
                result = sub_140a74f90(var_100)

__security_check_cookie(result_1 ^ &var_188)
return result
