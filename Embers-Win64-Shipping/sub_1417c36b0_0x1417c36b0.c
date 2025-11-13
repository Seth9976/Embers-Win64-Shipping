// 函数: sub_1417c36b0
// 地址: 0x1417c36b0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int128_t zmm6
int128_t var_18 = zmm6
int128_t var_48
void** rax_11
void*** rdi_5

if (arg2 - 1 u<= 0xe)
    switch (arg2)
        case 1
            void*** rax_2 = j_sub_140a82f30(0x18)
            
            if (rax_2 == 0)
                return nullptr
            
            return sub_1417bf920(rax_2, 0)
        case 2
            void*** rax_4 = j_sub_140a82f30(0x30)
            
            if (rax_4 == 0)
                return nullptr
            
            int32_t var_60_1 = 0
            rax_4[1] = 0
            *rax_4 = &data_142fc9648
            zmm6 = sub_140b58170(&rax_4[1], &data_1437020ab, 1)
            rax_4[2].d = 0
            *rax_4 = &data_142fc96b0
            *(rax_4 + 0x14) = _mm_unpacklo_ps(zx.o(0), zmm6.q)
            *(rax_4 + 0x1c) = 0
            rax_4[4] = 1
            rax_4[5].d = 0
            return rax_4
        case 3
            void*** rax_5 = j_sub_140a82f30(0x18)
            
            if (rax_5 == 0)
                return nullptr
            
            return sub_1417bf980(rax_5)
        case 4
            void*** rax_6 = j_sub_140a82f30(0x38)
            
            if (rax_6 == 0)
                return nullptr
            
            int32_t var_60_2 = 0
            rax_6[1] = 0
            *rax_6 = &data_142fc9648
            zmm6 = sub_140b58170(&rax_6[1], &data_1437020ab, 1)
            rax_6[2] = 0x3f800000
            *rax_6 = &data_142fc9720
            *(rax_6 + 0x24) = _mm_unpacklo_ps(zx.o(0), zmm6.q)
            *(rax_6 + 0x2c) = 0
            rax_6[3] = 0x3f800000
            rax_6[4].d = 0
            rax_6[6].d = 1
            return rax_6
        case 5
            void*** rax_7 = j_sub_140a82f30(0x40)
            
            if (rax_7 == 0)
                return nullptr
            
            int32_t var_54_1 = 0x3f800000
            int32_t var_60_3 = 0
            rax_7[1] = 0
            *rax_7 = &data_142fc9648
            zmm6 = sub_140b58170(&rax_7[1], &data_1437020ab, 1)
            rax_7[2] = 0x3f800000
            *(rax_7 + 0x24) = _mm_unpacklo_ps(zx.o(0), zmm6.q)
            *rax_7 = &data_142fc9758
            *(rax_7 + 0x2c) = 0
            rax_7[6] = _mm_unpacklo_ps(zx.o(0), zmm6.q)
            rax_7[7].d = 0x3f800000
            rax_7[3] = 0x3f800000
            rax_7[4].d = 0
            *(rax_7 + 0x3c) = 1
            return rax_7
        case 6
            void*** rax_8
            int64_t rdx_3
            rax_8, rdx_3 = j_sub_140a82f30(0x60)
            
            if (rax_8 == 0)
                return nullptr
            
            int128_t var_38_1 = data_143dbb0d0
            var_48 = data_143dbb0c0
            int128_t var_28_1 = data_143dbb0e0
            return sub_1417bf510(rax_8, rdx_3, zx.o(0), 0x3f800000, 0, &var_48, 1)
        case 7
            void*** rax_9
            int64_t rdx_4
            rax_9, rdx_4 = j_sub_140a82f30(0x50)
            
            if (rax_9 == 0)
                return nullptr
            
            int128_t zmm1 = data_143dbb0d0
            var_48 = data_143dbb0c0
            int128_t var_38_2 = zmm1
            int128_t var_28_2 = data_143dbb0e0
            return sub_1417bf720(rax_9, rdx_4, zx.o(0), &var_48)
        case 8
            void*** rax_10 = j_sub_140a82f30(0x20)
            rdi_5 = rax_10
            
            if (rax_10 == 0)
                return nullptr
            
            int32_t var_54_2 = 0
            rax_10[1] = 0
            *rdi_5 = &data_142fc9648
            zmm6 = sub_140b58170(&rdi_5[1], &data_1437020ab, 1)
            rax_11 = &data_142fc9800
        label_1417c39dd:
            *rdi_5 = rax_11
            rdi_5[2].d = 0x3f800000
            *(rdi_5 + 0x14) = (_mm_unpacklo_ps(zx.o(0), zmm6.q)).q
            *(rdi_5 + 0x1c) = 0
            return rdi_5
        case 9
            void*** rax_12 = j_sub_140a82f30(0x20)
            rdi_5 = rax_12
            
            if (rax_12 == 0)
                return nullptr
            
            int32_t var_54_3 = 0
            rax_12[1] = 0
            *rdi_5 = &data_142fc9648
            zmm6 = sub_140b58170(&rdi_5[1], &data_1437020ab, 1)
            rax_11 = &data_142fc9838
            goto label_1417c39dd
        case 0xa
            void*** rax_13 = j_sub_140a82f30(0x18)
            
            if (rax_13 == 0)
                return nullptr
            
            return sub_1417bf7b0(rax_13)
        case 0xb
            void*** rax_14
            int64_t rdx_5
            rax_14, rdx_5 = j_sub_140a82f30(0x30)
            
            if (rax_14 != 0)
                return sub_1417bf810(rax_14, rdx_5, 0, 0, 0)
        case 0xc
            void*** rax_16
            int64_t rdx_6
            rax_16, rdx_6 = j_sub_140a82f30(0x38)
            
            if (rax_16 == 0)
                return nullptr
            
            return sub_1417bf890(rax_16, rdx_6, 0, 0, 0, 0)
        case 0xd
            if (arg1 == 2)
                void*** rax_17 = j_sub_140a82f30(0x18)
                
                if (rax_17 == 0)
                    return nullptr
                
                return sub_1417bf240(rax_17, 0)
            
            if (arg1 == 3)
                void*** rax_18 = j_sub_140a82f30(0x18)
                
                if (rax_18 == 0)
                    return nullptr
                
                return sub_1417bf1e0(rax_18, 0)
        case 0xe
            if (arg1 == 2)
                void*** rax_19 = j_sub_140a82f30(0x28)
                
                if (rax_19 == 0)
                    return nullptr
                
                return sub_1417bf2a0(rax_19, 0, 0, 0)
            
            if (arg1 == 3)
                void*** rax_20 = j_sub_140a82f30(0x28)
                
                if (rax_20 == 0)
                    return nullptr
                
                return sub_1417bf320(rax_20, 0, 0, 0)
            
            if (arg1 == 4)
                void*** rax_21 = j_sub_140a82f30(0x28)
                
                if (rax_21 == 0)
                    return nullptr
                
                return sub_1417bf3a0(rax_21, 0, 0, 0)
        case 0xf
            if (arg1 == 2)
                void*** rax_22 = j_sub_140a82f30(0x10)
                
                if (rax_22 == 0)
                    return nullptr
                
                return sub_1417bf420(rax_22)
            
            if (arg1 == 3)
                void*** rax_23 = j_sub_140a82f30(0x10)
                
                if (rax_23 == 0)
                    return nullptr
                
                return sub_1417bf470(rax_23)
            
            if (arg1 == 4)
                void*** rax_24 = j_sub_140a82f30(0x10)
                
                if (rax_24 == 0)
                    return nullptr
                
                return sub_1417bf4c0(rax_24)
return nullptr
