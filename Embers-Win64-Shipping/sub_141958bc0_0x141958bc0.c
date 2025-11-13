// 函数: sub_141958bc0
// 地址: 0x141958bc0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

uint32_t rdx = zx.d(*(arg3 + 0x18))
int64_t (* var_c8)(int64_t* arg1, int64_t* arg2)
uint128_t zmm0

if (rdx == 0)
    uint128_t var_f8_3 = *arg3
    zmm0 = zx.o(arg3[1].q)
    void*** rax_8 = j_sub_140a82f30(0x30)
    
    if (rax_8 == 0)
        *arg2 = nullptr
    else
        uint8_t var_c0_1 = zmm0.b
        var_c8 = arg1
        int64_t var_b8_2 = var_f8_3.q
        void*** rax_9 = sub_140a82f30(0x38, 8)
        double zmm0_6[0x2] = var_c8.o
        *rax_9 = &data_142ec17a8
        *(rax_9 + 8) = zmm0_6
        *(rax_9 + 0x18) = var_b8_2.o
        zmm0_6 = _mm_unpacklo_pd(var_f8_3, zmm0.q)
        *(rax_9 + 0x28) = zmm0_6
        void*** var_38_1 = rax_9
        int64_t (* var_48)(int64_t* arg1, int64_t* arg2)
        int64_t (* rax_10)(int64_t* arg1, int64_t* arg2) = var_48
        
        if (rax_9 != -8)
            rax_10 = sub_141953f90
        
        var_48 = rax_10
        uint128_t var_b0_1 = zmm0_6
        void*** rax_11 = sub_1419517f0(rax_8, &var_48)
        
        if (rax_11 != 0)
            rax_11[1].d += 1
        
        *arg2 = rax_11
else
    void*** rax_4
    
    if (rdx == 1)
        zmm0 = *arg3
        void*** rax_5 = j_sub_140a82f30(0x30)
        
        if (rax_5 != 0)
            int64_t (* var_e0_2)(int64_t* arg1, int64_t* arg2) = arg1
            void*** rax_6 = sub_140a82f30(0x28, 8)
            *rax_6 = &data_142ec17e8
            *(rax_6 + 8) = zmm0.q.o
            *(rax_6 + 0x18) = zmm0
            void*** var_78_1 = rax_6
            int64_t (* var_88)(int64_t* arg1, int64_t* arg2)
            int64_t (* rax_7)(int64_t* arg1, int64_t* arg2) = var_88
            
            if (rax_6 != -8)
                rax_7 = sub_141953eb0
            
            var_88 = rax_7
            rax_4 = sub_1419517f0(rax_5, &var_88)
            goto label_141958d0a
        
    label_141958d08:
        rax_4 = nullptr
    label_141958d0a:
        *arg2 = rax_4
        
        if (rax_4 != 0)
            rax_4[1].d += 1
    else
        if (rdx == 2)
            zmm0 = *arg3
            void*** rax_1 = j_sub_140a82f30(zx.q(rdx + 0x2e))
            
            if (rax_1 == 0)
                goto label_141958d08
            
            int64_t (* var_e0_1)(int64_t* arg1, int64_t* arg2) = arg1
            void*** rax_2 = sub_140a82f30(0x28, 8)
            *rax_2 = &data_142ec17e8
            *(rax_2 + 8) = zmm0.q.o
            *(rax_2 + 0x18) = zmm0
            void*** var_b8_1 = rax_2
            int64_t (* rax_3)(int64_t* arg1, int64_t* arg2) = var_c8
            
            if (rax_2 != -8)
                rax_3 = sub_141953e10
            
            var_c8 = rax_3
            rax_4 = sub_1419517f0(rax_1, &var_c8)
            goto label_141958d0a
        
        *arg2 = nullptr
return arg2
