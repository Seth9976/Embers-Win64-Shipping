// 函数: sub_1420ca6a0
// 地址: 0x1420ca6a0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_108
int64_t rax_1 = __security_cookie ^ &var_108
*arg1 = 0
int32_t rcx
rcx.b = sub_140b5b8a0(*(arg2 + 8), 0) == 0
int64_t* result

if ((*(arg2 + 0xc) != 0 | rcx.b) == 0)
    result = arg1
else
    void* rax_3 = sub_140d3c6e0(arg2)
    
    if (rax_3 == 0)
        result = arg1
    else if (sub_140d1fd20(rax_3, *(arg2 + 8)) == 0)
        result = arg1
    else
        int64_t* rax_5 = sub_140d3c6e0(arg2)
        void* rax_6
        uint128_t zmm6_1
        rax_6, zmm6_1 = sub_1423de540(data_143f5b298, rax_5, 1)
        
        if (rax_6 != 0)
            uint128_t var_38_1 = zmm6_1
            uint128_t zmm1_1 = arg6
            uint128_t zmm0_1
            zmm0_1.d = zmm1_1.d f* 6.10370189e-05f
            zmm6_1.d = _mm_cvtepi32_ps(zx.o(rand())).d f* zmm0_1.d
            zmm6_1.d = zmm6_1.d f- zmm1_1.d
            zmm6_1.d = zmm6_1.d f+ arg5
            zmm6_1.d = zmm6_1.d f+ arg3.d
            
            if (not(arg3.d f<= 0f))
                zmm0_1.d = zmm6_1.d f- zmm1_1.d
            
            int64_t var_d8
            
            if (arg3.d f<= 0f || not(zmm0_1.d f>= 0f))
                var_d8 = 0
                sub_140d23f50(SetTimer passed a negative or zero time.  The associated timer may "
                "fail to fire!  If using InitialStartDelayVariance, b", 3)
            
            void* rax_8 = *(rax_6 + 0x188)
            void* rsi_2
            
            if (rax_8 == 0)
                rsi_2 = *(rax_6 + 0x300)
            else
                rsi_2 = *(rax_8 + 0xc0)
            
            uint128_t var_c8 = *arg2
            int64_t* rax_9 = sub_1423e6b10(rsi_2, &var_d8, &var_c8)
            int32_t var_e0_1 = zmm6_1.d
            int64_t var_b8 = 0
            int32_t var_b0_1 = 0
            *arg1 = *rax_9
            int64_t var_98_1 = 0
            void* var_88_1 = nullptr
            int128_t var_a8_1 = *arg2
            sub_1423e6200(rsi_2, arg1, &var_b8, arg3, arg4, var_e0_1)
            int512_t zmm6_2
            zmm6_2.o = var_38_1
            
            if (var_98_1 != 0)
                void var_78
                void* rcx_7 = &var_78
                
                if (var_88_1 != 0)
                    rcx_7 = var_88_1
                
                int64_t rdx_7 = *rcx_7
                (*(rdx_7 + 0x10))(rcx_7, rdx_7)
            
            sub_140745b20(&var_b8)
        
        result = arg1

__security_check_cookie(rax_1 ^ &var_108)
return result
