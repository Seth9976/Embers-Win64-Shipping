// 函数: sub_140e6f230
// 地址: 0x140e6f230
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

__chkstk(0x21e8)
void var_21f8
uint64_t result = __security_cookie ^ &var_21f8
uint64_t result_1 = result
int64_t* rsi = *(arg1 + 0x3a0)
void** r14 = arg3
int64_t* var_2180 = rsi

if (rsi != 0)
    result = zx.q(rsi[1].d)
    
    if (result.d == 0)
        rsi = nullptr
        var_2180 = nullptr
    else
        result = zx.q(result.d + 1)
        rsi[1].d = result.d
    
    if (rsi != 0)
        void* r15_1 = *(arg1 + 0x398)
        
        if (r15_1 != 0)
            float (* (* var_20e8)(void* arg1, float (* arg2)[0x4], double arg3 @ zmm0))[0x4]
            
            if (sub_140e196c0(r15_1) != 0)
            label_140e6f334:
                void var_1be8
                int64_t* rax_4 = _vfprintf_p_l(&var_1be8, u"Minimize", u"WindowTitleBar")
                int64_t var_20d8 = *rax_4
                int64_t* rcx_5 = rax_4[1]
                
                if (rcx_5 != 0)
                    rcx_5[1].d += 1
                
                int32_t var_20c8_1 = rax_4[2].d
                char var_20c0_1 = 1
                int64_t (* var_2138_1)(void* arg1, int512_t arg2 @ zmm1) = sub_140e67880
                int64_t var_20b8 = 0
                int32_t var_20b0_1 = 0
                float (* (* var_2078_1)(void* arg1, float (* arg2)[0x4], double arg3 @ zmm0))[
                    0x4] = sub_140e69b00
                int32_t var_2070_1 = 0
                int32_t var_2130_1 = 0
                int64_t var_20a8
                sub_140b58170(&var_20a8, "NoBorder", 1)
                int32_t var_1b60 = 1
                char* (* var_21b8_1)(void* arg1, char* arg2) = sub_140e725c0
                char var_1b5c_1 = 1
                char var_1b58_1 = 1
                int64_t var_1b50 = 0
                int32_t var_1b48_1 = 0
                int32_t var_21b0_1 = 0
                int128_t var_1e38_1 = zx.o(0)
                char var_1e28_1 = 1
                int64_t var_1e20 = 0
                int32_t var_1e18_1 = 0
                uint8_t rax_6 = sub_140e19830(r15_1)
                int128_t var_1c58 = var_2078_1.o
                int128_t var_1d28 = var_2138_1.o
                uint8_t var_2050_1 = rax_6
                char var_204f_1 = 1
                int64_t var_2048 = 0
                int32_t var_2040_1 = 0
                void var_1b00
                void* rax_9 = sub_140e45660(
                    sub_140e48870(sub_140e4fb70(&var_1b00), arg1, &var_1d28), arg1, &var_1c58)
                sub_14065da90(rax_9 + 0x160, &var_20d8)
                *(rax_9 + 0x178) = var_20c0_1
                sub_140692f90(rax_9 + 0x180, &var_20b8)
                void*** rax_10 = sub_140e48c50()
                void* var_20a0 = &rax_10[2]
                sub_140918950(&var_20a0, &rax_10[2])
                int64_t var_21d8_1 = 0x3a8
                void var_21c8
                void* var_2090_1 = &var_21c8
                void* var_1cf8
                void** rax_11 =
                    sub_140e56930(&var_20a0, &var_1cf8, rax_9, sub_140e23ed0(&rax_10[2], "SImage"))
                int64_t (* var_2108)(void* arg1, int512_t arg2 @ zmm1) = *rax_11
                void* rcx_18 = rax_11[1]
                void* var_2100_1 = rcx_18
                
                if (rcx_18 != 0)
                    *(rcx_18 + 8) += 1
                
                int64_t* rdi_2 = data_143e243c8
                void var_b08
                int64_t* rax_12
                int128_t zmm6_1
                rax_12, zmm6_1 = sub_14068cc20(&var_b08)
                rax_12[0x68].b = 0
                rax_12[0xc].b = rax_6
                *(rax_12 + 0x61) = 1
                sub_140692f90(&rax_12[0xd], &var_2048)
                rax_12[0x3b].b = 1
                *(rax_12 + 0x1c8) = zmm6_1
                sub_140692f90(&rax_12[0x3c], &var_1e20)
                int128_t var_1d18 = var_21b8_1.o
                int64_t* var_2198
                sub_140692f90(&rax_12[0x44], sub_140e45ef0(&var_2198, arg1, &var_1d18))
                int32_t var_2190
                int64_t* rax_15
                
                if (var_2190 == 0)
                    rax_15 = var_2198
                label_140e6f5c3:
                    
                    if (rax_15 != 0)
                        sub_140a74f90(rax_15)
                else
                    int64_t* rcx_24 = var_2198
                    
                    if (rcx_24 != 0)
                        (*(*rcx_24 + 0x38))(rcx_24, 0)
                        rax_15 = var_2198
                        
                        if (rax_15 != 0)
                            rax_15 = sub_140a84c80(rax_15, 0, 0)
                            var_2198 = rax_15
                        
                        int32_t var_2190_1 = 0
                        goto label_140e6f5c3
                void* rax_16 = sub_140e5df00(rax_12, &var_1b60)
                int64_t r8_5 = var_20a8
                int64_t r9_3 = *rdi_2
                int64_t var_2078_2 = r8_5
                int64_t rax_17 = (*(r9_3 + 0x88))(rdi_2, data_143e243e8, r8_5, r9_3, var_21d8_1)
                
                if (rax_17 == 0)
                    rax_17 = sub_140e13010()
                
                *(rax_16 + 0x1b0) = rax_17
                void*** rax_18 = j_sub_140a82f30(0x5c8)
                
                if (rax_18 != 0)
                    rax_18[1].d = 1
                    *(rax_18 + 0xc) = 1
                    *rax_18 = &data_142d8c580
                    
                    if (rax_18 != -0x10)
                        sub_140ee2d30(&rax_18[2])
                
                int64_t* var_2068 = &rax_18[2]
                sub_14065fa30(&var_2068, &rax_18[2])
                int64_t var_21d8_2 = 0x5b8
                void var_21c7
                void* var_2058_1 = &var_21c7
                sub_140e23ed0(&rax_18[2], "SButton")
                void var_1d58
                int64_t* rax_19
                int128_t zmm1_3
                rax_19, zmm1_3 = sub_140b58170(&var_1d58, "launcher-minimizeWindowButton", 1)
                void*** var_1b90
                void* rax_22
                int128_t zmm1_4
                rax_22, zmm1_4 = sub_1406936e0(
                    sub_140e59280(rax_16, sub_140ec08e0(&var_1b90, *rax_19)), &var_2108, zmm1_3)
                int64_t* var_1d08
                int64_t** rax_23 = sub_140696120(&var_2068, &var_1d08, rax_22, zmm1_4)
                int64_t* rbx_4 = rax_23[1]
                
                if (rbx_4 != 0)
                    rbx_4[1].d += 1
                
                void var_1b80
                
                if (arg1 + 0x420 == &var_1b80)
                label_140e6f744:
                    
                    if (rbx_4 != 0)
                        rbx_4[1].d -= 1
                        
                        if (rbx_4[1].d == 1)
                            (**rbx_4)(rbx_4)
                            int32_t temp12_1 = *(rbx_4 + 0xc)
                            *(rbx_4 + 0xc) -= 1
                            
                            if (temp12_1 == 1)
                                (*(*rbx_4 + 8))(rbx_4, 1)
                else
                    *(arg1 + 0x420) = *rax_23
                    int64_t* rdi_4 = *(arg1 + 0x428)
                    
                    if (rbx_4 == rdi_4)
                        goto label_140e6f744
                    
                    *(arg1 + 0x428) = rbx_4
                    
                    if (rdi_4 != 0)
                        rdi_4[1].d -= 1
                        
                        if (rdi_4[1].d == 1)
                            (**rdi_4)(rdi_4)
                            int32_t temp17_1 = *(rdi_4 + 0xc)
                            *(rdi_4 + 0xc) -= 1
                            
                            if (temp17_1 == 1)
                                (*(*rdi_4 + 8))(rdi_4, 1)
                
                int64_t* var_1d00
                
                if (var_1d00 != 0)
                    var_1d00[1].d -= 1
                    
                    if (var_1d00[1].d == 1)
                        (**var_1d00)(var_1d00)
                        int32_t temp16_1 = *(var_1d00 + 0xc)
                        *(var_1d00 + 0xc) -= 1
                        
                        if (temp16_1 == 1)
                            (*(*var_1d00 + 8))(var_1d00, 1)
                
                if (rax_18 != 0)
                    rax_18[1].d -= 1
                    
                    if (rax_18[1].d == 1)
                        (**rax_18)(rax_18)
                        int32_t temp19_1 = *(rax_18 + 0xc)
                        *(rax_18 + 0xc) -= 1
                        
                        if (temp19_1 == 1)
                            (*rax_18)[1](rax_18, 1)
                
                sub_1406905f0(&var_b08)
                int64_t* var_1cf0
                
                if (var_1cf0 != 0)
                    var_1cf0[1].d -= 1
                    
                    if (var_1cf0[1].d == 1)
                        (**var_1cf0)(var_1cf0)
                        int32_t temp21_1 = *(var_1cf0 + 0xc)
                        *(var_1cf0 + 0xc) -= 1
                        
                        if (temp21_1 == 1)
                            (*(*var_1cf0 + 8))(var_1cf0, 1)
                
                if (rax_10 != 0)
                    rax_10[1].d -= 1
                    
                    if (rax_10[1].d == 1)
                        (**rax_10)(rax_10)
                        int32_t temp24_1 = *(rax_10 + 0xc)
                        *(rax_10 + 0xc) -= 1
                        
                        if (temp24_1 == 1)
                            (*rax_10)[1](rax_10, 1)
                
                void var_18f8
                sub_140745b20(&var_18f8)
                void var_1910
                sub_140745b20(&var_1910)
                int64_t* var_1920
                
                if (var_1920 != 0)
                    var_1920[1].d -= 1
                    
                    if (var_1920[1].d == 1)
                        (**var_1920)(var_1920)
                        int32_t temp27_1 = *(var_1920 + 0xc)
                        *(var_1920 + 0xc) -= 1
                        
                        if (temp27_1 == 1)
                            (*(*var_1920 + 8))(var_1920, 1)
                
                void var_1950
                sub_140745b20(&var_1950)
                sub_140ddea30(&var_1b00)
                sub_140745b20(&var_2048)
                sub_140745b20(&var_1e20)
                sub_140745b20(&var_1b50)
                sub_140745b20(&var_20b8)
                
                if (rcx_5 != 0)
                    rcx_5[1].d -= 1
                    
                    if (rcx_5[1].d == 1)
                        (**rcx_5)(rcx_5)
                        int32_t rax_40 = *(rcx_5 + 0xc)
                        *(rcx_5 + 0xc) -= 1
                        
                        if (rax_40 == 1)
                            (*(*rcx_5 + 8))(rcx_5, 1)
                
                int64_t* var_1be0
                
                if (var_1be0 != 0)
                    var_1be0[1].d -= 1
                    
                    if (var_1be0[1].d == 1)
                        (**var_1be0)(var_1be0)
                        int32_t rdi_5 = *(var_1be0 + 0xc)
                        *(var_1be0 + 0xc) -= 1
                        
                        if (rdi_5 == 1)
                            (*(*var_1be0 + 8))(var_1be0, zx.q(rdi_5))
                
                void var_1c00
                int64_t* rax_45 = _vfprintf_p_l(&var_1c00, u"Maximize", u"WindowTitleBar")
                int64_t var_1f18 = *rax_45
                void* rcx_67 = rax_45[1]
                void* var_1f10_1 = rcx_67
                
                if (rcx_67 != 0)
                    *(rcx_67 + 8) += 1
                
                int32_t var_1f08_1 = rax_45[2].d
                char var_1f00_1 = 1
                float (* (* var_21b8_2)(void* arg1, float (* arg2)[0x4], double arg3 @ zmm0))[
                    0x4] = sub_140e69b00
                int64_t var_1ef8 = 0
                int64_t (* var_2138_2)(void* arg1, int512_t arg2 @ zmm1) = sub_140e676b0
                int32_t var_1ef0_1 = 0
                int32_t var_21b0_2 = 0
                int32_t var_2130_2 = 0
                int64_t var_2088
                int128_t zmm6_2 = sub_140b58170(&var_2088, "NoBorder", 1)
                int32_t var_1b40 = 1
                char* (* var_1f28_1)(void* arg1, char* arg2) = sub_140e72450
                char var_1b3c_1 = 1
                char var_1b38_1 = 1
                int64_t var_1b30 = 0
                int32_t var_1b28_1 = 0
                int32_t var_1f20_1 = 0
                int128_t var_1e10_1 = zmm6_2
                char var_1e00_1 = 1
                int64_t var_1df8 = 0
                int32_t var_1df0_1 = 0
                uint8_t rax_47 = sub_140e19820(r15_1)
                int128_t var_1cd8 = var_21b8_2.o
                int128_t var_1ce8 = var_2138_2.o
                uint8_t var_2008_1 = rax_47
                char var_2007_1 = 1
                int64_t var_2000 = 0
                int32_t var_1ff8_1 = 0
                void var_11d8
                void* rax_50 = sub_140e45660(
                    sub_140e48870(sub_140e4fb70(&var_11d8), arg1, &var_1ce8), arg1, &var_1cd8)
                sub_14065da90(rax_50 + 0x160, &var_1f18)
                *(rax_50 + 0x178) = var_1f00_1
                sub_140692f90(rax_50 + 0x180, &var_1ef8)
                void*** rax_51 = sub_140e48c50()
                void* var_2020 = &rax_51[2]
                sub_140918950(&var_2020, &rax_51[2])
                int64_t var_21d8_3 = 0x3a8
                void var_21c6
                void* var_2010_1 = &var_21c6
                void* var_1ca8
                void** rax_52 =
                    sub_140e56930(&var_2020, &var_1ca8, rax_50, sub_140e23ed0(&rax_51[2], "SImage"))
                float (* (* var_20f8)(void* arg1, float (* arg2)[0x4], double arg3 @ zmm0))[0x4] =
                    *rax_52
                void* rcx_80 = rax_52[1]
                void* var_20f0_1 = rcx_80
                
                if (rcx_80 != 0)
                    *(rcx_80 + 8) += 1
                
                int64_t* rdi_7 = data_143e243c8
                void var_778
                int64_t* rax_53
                int128_t zmm6_3
                rax_53, zmm6_3 = sub_14068cc20(&var_778)
                rax_53[0x68].b = 0
                rax_53[0xc].b = rax_47
                *(rax_53 + 0x61) = 1
                sub_140692f90(&rax_53[0xd], &var_2000)
                rax_53[0x3b].b = 1
                *(rax_53 + 0x1c8) = zmm6_3
                sub_140692f90(&rax_53[0x3c], &var_1df8)
                int128_t var_1cc8 = var_1f28_1.o
                int64_t* var_21a8
                sub_140692f90(&rax_53[0x44], sub_140e45ef0(&var_21a8, arg1, &var_1cc8))
                int32_t var_21a0
                int64_t* rax_56
                
                if (var_21a0 == 0)
                    rax_56 = var_21a8
                label_140e6fc04:
                    
                    if (rax_56 != 0)
                        sub_140a74f90(rax_56)
                else
                    int64_t* rcx_86 = var_21a8
                    
                    if (rcx_86 != 0)
                        (*(*rcx_86 + 0x38))(rcx_86, 0)
                        rax_56 = var_21a8
                        
                        if (rax_56 != 0)
                            rax_56 = sub_140a84c80(rax_56, 0, 0)
                            var_21a8 = rax_56
                        
                        int32_t var_21a0_1 = 0
                        goto label_140e6fc04
                void* rax_57 = sub_140e5df00(rax_53, &var_1b40)
                int64_t r8_13 = var_2088
                int64_t r9_7 = *rdi_7
                int64_t var_1f28_2 = r8_13
                int64_t rax_58 = (*(r9_7 + 0x88))(rdi_7, data_143e243e8, r8_13, r9_7, var_21d8_3)
                
                if (rax_58 == 0)
                    rax_58 = sub_140e13010()
                
                *(rax_57 + 0x1b0) = rax_58
                void*** rax_59 = j_sub_140a82f30(0x5c8)
                void*** rdi_8 = rax_59
                
                if (rax_59 == 0)
                    rdi_8 = nullptr
                else
                    rax_59[1].d = 1
                    *(rax_59 + 0xc) = 1
                    *rdi_8 = &data_142d8c580
                    
                    if (rdi_8 != -0x10)
                        sub_140ee2d30(&rdi_8[2])
                
                int64_t* var_2038 = &rdi_8[2]
                sub_14065fa30(&var_2038, &rdi_8[2])
                int64_t var_21d8_4 = 0x5b8
                void var_21c5
                void* var_2028_1 = &var_21c5
                sub_140e23ed0(&rdi_8[2], "SButton")
                void var_1d40
                int64_t* rax_60
                int128_t zmm1_7
                rax_60, zmm1_7 = sub_140b58170(&var_1d40, "launcher-maximizeRestoreWindowButton", 1)
                void*** var_1b70
                void* rax_63
                int128_t zmm1_8
                rax_63, zmm1_8 = sub_1406936e0(
                    sub_140e59280(rax_57, sub_140ec08e0(&var_1b70, *rax_60)), &var_20f8, zmm1_7)
                int64_t* var_1cb8
                int64_t** rax_64 = sub_140696120(&var_2038, &var_1cb8, rax_63, zmm1_8)
                int64_t* rbx_15 = rax_64[1]
                int64_t* rdx_35 = *rax_64
                int64_t* var_2168 = rdx_35
                int64_t* var_2160 = rbx_15
                
                if (rbx_15 != 0)
                    rbx_15[1].d += 1
                
                if (arg1 + 0x430 != &var_2168)
                    *(arg1 + 0x430) = rdx_35
                    var_2168 = nullptr
                    sub_14066a200(arg1 + 0x438, &var_2160)
                    rbx_15 = var_2160
                
                if (rbx_15 != 0)
                    rbx_15[1].d -= 1
                    
                    if (rbx_15[1].d == 1)
                        (**rbx_15)(rbx_15)
                        int32_t temp42_1 = *(rbx_15 + 0xc)
                        *(rbx_15 + 0xc) -= 1
                        
                        if (temp42_1 == 1)
                            (*(*rbx_15 + 8))(rbx_15, 1)
                
                int64_t* var_1cb0
                
                if (var_1cb0 != 0)
                    var_1cb0[1].d -= 1
                    
                    if (var_1cb0[1].d == 1)
                        (**var_1cb0)(var_1cb0)
                        int32_t temp45_1 = *(var_1cb0 + 0xc)
                        *(var_1cb0 + 0xc) -= 1
                        
                        if (temp45_1 == 1)
                            (*(*var_1cb0 + 8))(var_1cb0, 1)
                
                if (rdi_8 != 0)
                    rdi_8[1].d -= 1
                    
                    if (rdi_8[1].d == 1)
                        (**rdi_8)(rdi_8)
                        int32_t temp47_1 = *(rdi_8 + 0xc)
                        *(rdi_8 + 0xc) -= 1
                        
                        if (temp47_1 == 1)
                            (*rdi_8)[1](rdi_8, 1)
                
                sub_1406905f0(&var_778)
                int64_t* var_1ca0
                
                if (var_1ca0 != 0)
                    var_1ca0[1].d -= 1
                    
                    if (var_1ca0[1].d == 1)
                        (**var_1ca0)(var_1ca0)
                        int32_t temp49_1 = *(var_1ca0 + 0xc)
                        *(var_1ca0 + 0xc) -= 1
                        
                        if (temp49_1 == 1)
                            (*(*var_1ca0 + 8))(var_1ca0, 1)
                
                if (rax_51 != 0)
                    rax_51[1].d -= 1
                    
                    if (rax_51[1].d == 1)
                        (**rax_51)(rax_51)
                        int32_t temp50_1 = *(rax_51 + 0xc)
                        *(rax_51 + 0xc) -= 1
                        
                        if (temp50_1 == 1)
                            (*rax_51)[1](rax_51, 1)
                
                sub_140e536f0(&var_11d8)
                sub_140745b20(&var_2000)
                sub_140745b20(&var_1df8)
                sub_140745b20(&var_1b30)
                sub_140745b20(&var_1ef8)
                sub_1405970a0(&var_1f18)
                sub_1405970a0(&var_1c00)
                void var_1bd0
                int64_t* rax_75 = _vfprintf_p_l(&var_1bd0, u"Close", u"WindowTitleBar")
                int64_t var_1ee8 = *rax_75
                void* rcx_121 = rax_75[1]
                void* var_1ee0_1 = rcx_121
                
                if (rcx_121 != 0)
                    *(rcx_121 + 8) += 1
                
                int32_t var_1ed8_1 = rax_75[2].d
                char var_1ed0_1 = 1
                var_20f8 = sub_140e69b00
                int64_t var_1ec8 = 0
                var_2108 = sub_140e65880
                int32_t var_1ec0_1 = 0
                var_20f0_1.d = 0
                var_2100_1.d = 0
                int64_t var_2080
                int128_t zmm6_4 = sub_140b58170(&var_2080, "NoBorder", 1)
                int32_t var_1b20 = 1
                char* (* var_21b8_3)(void* arg1, char* arg2) = sub_140e5ae30
                char var_1b1c_1 = 1
                char var_1b18_1 = 1
                int64_t var_1b10 = 0
                int32_t var_1b08_1 = 0
                int32_t var_21b0_3 = 0
                int128_t var_1de8_1 = zmm6_4
                char var_1dd8_1 = 1
                int64_t var_1dd0 = 0
                int32_t var_1dc8_1 = 0
                uint8_t rax_77 = sub_140e196c0(r15_1)
                int128_t zmm1_9 = var_2108.o
                int128_t var_1c88 = var_20f8.o
                int128_t var_1c78 = var_21b8_3.o
                uint8_t var_1fc0_1 = rax_77
                char var_1fbf_1 = 1
                int64_t var_1fb8 = 0
                int32_t var_1fb0_1 = 0
                int128_t var_1c98 = zmm1_9
                void var_fc0
                void* rax_80 = sub_140e45660(
                    sub_140e48870(sub_140e4fb70(&var_fc0), arg1, &var_1c98), arg1, &var_1c88)
                sub_14065da90(rax_80 + 0x160, &var_1ee8)
                *(rax_80 + 0x178) = var_1ed0_1
                sub_140692f90(rax_80 + 0x180, &var_1ec8)
                void*** rax_81 = sub_140e48c50()
                void*** var_1fd0_1 = rax_81
                void* var_1fd8 = &rax_81[2]
                sub_140918950(&var_1fd8, &rax_81[2])
                int64_t var_21d8_5 = 0x3a8
                void var_21c4
                void* var_1fc8_1 = &var_21c4
                void* var_1d50
                float (* (** rax_82)(void* arg1, float (* arg2)[0x4], double arg3 @ zmm0))[0x4] =
                    sub_140e56930(&var_1fd8, &var_1d50, rax_80, sub_140e23ed0(&rax_81[2], "SImage"))
                var_20e8 = *rax_82
                void* rcx_134 = rax_82[1]
                int32_t var_20e0
                var_20e0.q = rcx_134
                
                if (rcx_134 != 0)
                    *(rcx_134 + 8) += 1
                
                int64_t* rdi_10 = data_143e243c8
                void var_3e8
                int64_t* rax_83
                int128_t zmm6_5
                rax_83, zmm6_5 = sub_14068cc20(&var_3e8)
                rax_83[0x68].b = 0
                rax_83[0xc].b = rax_77
                *(rax_83 + 0x61) = 1
                sub_140692f90(&rax_83[0xd], &var_1fb8)
                rax_83[0x3b].b = 1
                *(rax_83 + 0x1c8) = zmm6_5
                sub_140692f90(&rax_83[0x3c], &var_1dd0)
                void* rax_85 = sub_140e5df00(sub_140e49330(rax_83, arg1, &var_1c78), &var_1b20)
                int64_t rbx_22 = *rdi_10
                void var_1d38
                int64_t* rax_86 = sub_140e1ad30(&var_1d38, var_2080, nullptr)
                int64_t rax_87 = (*(rbx_22 + 0x88))(rdi_10, data_143e243e8, *rax_86)
                
                if (rax_87 == 0)
                    rax_87 = sub_140e13010()
                
                *(rax_85 + 0x1b0) = rax_87
                void*** rax_88 = sub_140688970()
                void*** var_1fe8_1 = rax_88
                int64_t* var_1ff0 = &rax_88[2]
                sub_14065fa30(&var_1ff0, &rax_88[2])
                int64_t var_21d8_6 = 0x5b8
                void var_21c3
                void* var_1fe0_1 = &var_21c3
                sub_140e23ed0(&rax_88[2], "SButton")
                void var_1d30
                int64_t* rax_89
                int128_t zmm1_11
                rax_89, zmm1_11 = sub_140b58170(&var_1d30, "launcher-closeWindowButton", 1)
                void*** var_1ba0
                void* rax_92
                int128_t zmm1_12
                rax_92, zmm1_12 = sub_1406936e0(
                    sub_140e59280(rax_85, sub_140ec08e0(&var_1ba0, *rax_89)), &var_20e8, zmm1_11)
                int64_t* var_1c68
                int64_t** rax_93 = sub_140696120(&var_1ff0, &var_1c68, rax_92, zmm1_12)
                int64_t* rbx_24 = rax_93[1]
                int64_t* rdx_54 = *rax_93
                int64_t* var_2158 = rdx_54
                int64_t* var_2150 = rbx_24
                
                if (rbx_24 != 0)
                    rbx_24[1].d += 1
                
                if (arg1 + 0x440 != &var_2158)
                    *(arg1 + 0x440) = rdx_54
                    var_2158 = nullptr
                    sub_14066a200(arg1 + 0x448, &var_2150)
                    rbx_24 = var_2150
                
                if (rbx_24 != 0)
                    rbx_24[1].d -= 1
                    
                    if (rbx_24[1].d == 1)
                        (**rbx_24)(rbx_24)
                        int32_t temp53_1 = *(rbx_24 + 0xc)
                        *(rbx_24 + 0xc) -= 1
                        
                        if (temp53_1 == 1)
                            (*(*rbx_24 + 8))(rbx_24, 1)
                
                int64_t* var_1c60
                
                if (var_1c60 != 0)
                    var_1c60[1].d -= 1
                    
                    if (var_1c60[1].d == 1)
                        (**var_1c60)(var_1c60)
                        int32_t temp55_1 = *(var_1c60 + 0xc)
                        *(var_1c60 + 0xc) -= 1
                        
                        if (temp55_1 == 1)
                            (*(*var_1c60 + 8))(var_1c60, 1)
                
                sub_140669d70(&var_1ff0)
                sub_1406905f0(&var_3e8)
                int64_t* var_1d48
                
                if (var_1d48 != 0)
                    var_1d48[1].d -= 1
                    
                    if (var_1d48[1].d == 1)
                        (**var_1d48)(var_1d48)
                        int32_t temp56_1 = *(var_1d48 + 0xc)
                        *(var_1d48 + 0xc) -= 1
                        
                        if (temp56_1 == 1)
                            (*(*var_1d48 + 8))(var_1d48, 1)
                
                sub_140597060(&var_1fd8)
                sub_140e536f0(&var_fc0)
                sub_140745b20(&var_1fb8)
                sub_140745b20(&var_1dd0)
                sub_140745b20(&var_1b10)
                sub_1406601b0(&var_1ee8)
                sub_1405970a0(&var_1bd0)
                r14 = arg3
                r15_1.b = 1
            else
                if (sub_140e19830(r15_1) != 0)
                    goto label_140e6f334
                
                if (sub_140e19820(r15_1) != 0)
                    goto label_140e6f334
                
                r15_1.b = 0
            
            if (*(arg1 + 0x450) == 0 || r15_1.b == 0)
                void*** rax_109 = sub_140e48fc0()
                void*** var_1f88_1 = rax_109
                void* var_1f90 = &rax_109[2]
                sub_140918950(&var_1f90, &rax_109[2])
                int64_t var_21d8_8 = 0x2c8
                void var_21c1
                void* var_1f80_1 = &var_21c1
                sub_140e23ed0(&rax_109[2], "SSpacer")
                void var_1738
                int64_t* rax_110
                int128_t zmm1_14
                rax_110, zmm1_14 = sub_140e50180(&var_1738)
                void* var_1d98
                void** rax_111 = sub_140e57660(&var_1f90, &var_1d98, rax_110, zmm1_14)
                int64_t* rbx_31 = rax_111[1]
                void* rcx_190 = *rax_111
                void* const var_2148 = rcx_190
                int64_t* var_2140 = rbx_31
                
                if (rbx_31 != 0)
                    rbx_31[1].d += 1
                
                if (arg2 != &var_2148)
                    *arg2 = rcx_190
                    var_2148 = nullptr
                    sub_14066a200(&arg2[1], &var_2140)
                    rbx_31 = var_2140
                
                if (rbx_31 != 0)
                    rbx_31[1].d -= 1
                    
                    if (rbx_31[1].d == 1)
                        (**rbx_31)(rbx_31)
                        int32_t temp5_1 = *(rbx_31 + 0xc)
                        *(rbx_31 + 0xc) -= 1
                        
                        if (temp5_1 == 1)
                            (*(*rbx_31 + 8))(rbx_31, 1)
                
                int64_t* var_1d90
                
                if (var_1d90 != 0)
                    var_1d90[1].d -= 1
                    
                    if (var_1d90[1].d == 1)
                        (**var_1d90)(var_1d90)
                        int32_t temp8_1 = *(var_1d90 + 0xc)
                        *(var_1d90 + 0xc) -= 1
                        
                        if (temp8_1 == 1)
                            (*(*var_1d90 + 8))(var_1d90, 1)
                
                sub_140597060(&var_1f90)
                void var_1588
                sub_140745b20(&var_1588)
                sub_140ddea30(&var_1738)
            else
                var_20e8 = sub_140e69b00
                int32_t var_20e0_1 = 0
                void var_13b8
                int64_t* rax_100 = sub_140e4f910(&var_13b8)
                int128_t var_1c48 = var_20e8.o
                void var_1c38
                int64_t* rax_101 = sub_140e45dd0(&var_1c38, arg1, &var_1c48)
                char var_1e50_1 = 1
                int128_t var_1e78
                __builtin_memcpy(&var_1e78, 
                    "\x00\x00\x80\x3f\x00\x00\x00\x00\x00\x00\x80\x3f\x00\x00\x80\x3f\x00", 0x11)
                int64_t var_1e48 = 0
                int128_t var_1e60_1 = zx.o(0)
                int32_t var_1e40_1 = 0
                sub_140692f90(&var_1e48, rax_101)
                sub_140693390(&rax_100[0x34], &var_1e78)
                rax_100[0x39].b = var_1e50_1
                sub_1407473e0(&rax_100[0x3a], &var_1e48)
                sub_140745b20(&var_1e48)
                sub_140ddfb70(&var_1e78)
                sub_140745b20(&var_1c38)
                void*** rax_103 = sub_140e48bd0()
                void*** var_1fa0_1 = rax_103
                void* var_1fa8 = &rax_103[2]
                sub_140918950(&var_1fa8, &rax_103[2])
                int64_t var_21d8_7 = 0x390
                void var_21c2
                void* var_1f98_1 = &var_21c2
                void* var_1c28
                void** rax_104 = sub_140e565f0(&var_1fa8, &var_1c28, rax_100, 
                    sub_140e23ed0(&rax_103[2], "SAppIconWidget"))
                int64_t* rbx_28 = rax_104[1]
                void* rcx_177 = *rax_104
                void* const var_2178 = rcx_177
                int64_t* var_2170 = rbx_28
                
                if (rbx_28 != 0)
                    rbx_28[1].d += 1
                
                if (arg2 != &var_2178)
                    *arg2 = rcx_177
                    var_2178 = nullptr
                    sub_14066a200(&arg2[1], &var_2170)
                    rbx_28 = var_2170
                
                if (rbx_28 != 0)
                    rbx_28[1].d -= 1
                    
                    if (rbx_28[1].d == 1)
                        (**rbx_28)(rbx_28)
                        int32_t temp10_1 = *(rbx_28 + 0xc)
                        *(rbx_28 + 0xc) -= 1
                        
                        if (temp10_1 == 1)
                            (*(*rbx_28 + 8))(rbx_28, 1)
                
                int64_t* var_1c20
                
                if (var_1c20 != 0)
                    var_1c20[1].d -= 1
                    
                    if (var_1c20[1].d == 1)
                        (**var_1c20)(var_1c20)
                        int32_t temp14_1 = *(var_1c20 + 0xc)
                        *(var_1c20 + 0xc) -= 1
                        
                        if (temp14_1 == 1)
                            (*(*var_1c20 + 8))(var_1c20, 1)
                
                sub_140597060(&var_1fa8)
                void var_1218
                sub_14068fab0(&var_1218)
                sub_140ddea30(&var_13b8)
            
            if (r15_1.b == 0)
                void*** rax_151 = sub_140e48fc0()
                void*** var_1f40_1 = rax_151
                void* var_1f48 = &rax_151[2]
                sub_140918950(&var_1f48, &rax_151[2])
                int64_t var_21d8_11 = 0x2c8
                void var_21be
                void* var_1f38_1 = &var_21be
                sub_140e23ed0(&rax_151[2], "SSpacer")
                void var_1578
                int64_t* rax_152
                int128_t zmm1_18
                rax_152, zmm1_18 = sub_140e50180(&var_1578)
                void* var_1d68
                void** rax_153 = sub_140e57660(&var_1f48, &var_1d68, rax_152, zmm1_18)
                int64_t* rbx_39 = rax_153[1]
                void* rcx_246 = *rax_153
                void* const var_2128 = rcx_246
                int64_t* var_2120 = rbx_39
                
                if (rbx_39 != 0)
                    rbx_39[1].d += 1
                
                if (r14 != &var_2128)
                    *r14 = rcx_246
                    var_2128 = nullptr
                    sub_14066a200(&r14[1], &var_2120)
                    rbx_39 = var_2120
                
                if (rbx_39 != 0)
                    rbx_39[1].d -= 1
                    
                    if (rbx_39[1].d == 1)
                        (**rbx_39)(rbx_39)
                        int32_t temp26_1 = *(rbx_39 + 0xc)
                        *(rbx_39 + 0xc) -= 1
                        
                        if (temp26_1 == 1)
                            (*(*rbx_39 + 8))(rbx_39, 1)
                
                int64_t* var_1d60
                
                if (var_1d60 != 0)
                    var_1d60[1].d -= 1
                    
                    if (var_1d60[1].d == 1)
                        (**var_1d60)(var_1d60)
                        int32_t temp28_1 = *(var_1d60 + 0xc)
                        *(var_1d60 + 0xc) -= 1
                        
                        if (temp28_1 == 1)
                            (*(*var_1d60 + 8))(var_1d60, 1)
                
                sub_140597060(&var_1f48)
                void var_13c8
                sub_140745b20(&var_13c8)
                result = sub_140ddea30(&var_1578)
            else
                char rbx_33 = data_1439ae520
                int64_t* r15_2 = *(arg1 + 0x448)
                int64_t var_1f58 = 0
                int32_t var_1f50_1 = 0
                int64_t var_1da8 = 0
                int32_t var_1da0_1 = 0
                int64_t var_1f70 = 0
                int32_t var_1f68_1 = 0
                int64_t rax_116 = *(arg1 + 0x440)
                char var_1f60_1 = rbx_33
                char var_1f5f_1 = 1
                char var_1f78_1 = rbx_33
                char var_1f77_1 = 1
                int128_t var_1dc0
                __builtin_memcpy(&var_1dc0, 
                    "\x00\x00\x00\x40\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x01", 0x11)
                
                if (r15_2 != 0)
                    r15_2[1].d += 1
                
                int64_t var_1ea8 = rax_116
                int64_t* var_1ea0_1 = r15_2
                
                if (r15_2 != 0)
                    r15_2[1].d += 1
                
                int64_t* r12_1 = *(arg1 + 0x438)
                
                if (r12_1 != 0)
                    r12_1[1].d += 1
                
                int64_t var_1eb8 = *(arg1 + 0x430)
                int64_t* var_1eb0_1 = r12_1
                
                if (r12_1 != 0)
                    r12_1[1].d += 1
                
                int64_t* r13_1 = *(arg1 + 0x428)
                
                if (r13_1 != 0)
                    r13_1[1].d += 1
                
                int64_t var_1e88 = *(arg1 + 0x420)
                int64_t* var_1e80_1 = r13_1
                
                if (r13_1 != 0)
                    r13_1[1].d += 1
                
                void var_18e8
                int64_t* rax_119 = sub_14068d420(&var_18e8)
                rax_119[0xf].b = rbx_33
                *(rax_119 + 0x79) = 1
                sub_1407473e0(&rax_119[0x10], &var_1f58)
                void* rax_122 = sub_140693860(sub_140698b50(sub_1406a4fe0()), &var_1ea8)
                void* rax_125 = sub_140693860(sub_140698b50(sub_1406a4fe0()), &var_1eb8)
                void* rax_131 = sub_1406938c0(
                    sub_1406938c0(
                        sub_1406938c0(rax_119, 
                            sub_140693860(sub_140698b50(sub_1406a4fe0()), &var_1e88)), 
                        rax_125), 
                    rax_122)
                void var_21c0
                void var_1c18
                int64_t* rax_132
                int128_t zmm1_15
                int128_t zmm6_6
                rax_132, zmm1_15, zmm6_6 = sub_140688620(&var_1c18, "SHorizontalBox", 
                    "Runtime\Slate\Public\Framework/Application/SWindowTitleBar.h", 0x113, 
                    &var_21c0)
                void* var_1d78
                void** rax_133 = sub_140696920(rax_132, &var_1d78, rax_131, zmm1_15)
                void* var_1e98 = *rax_133
                void* rcx_213 = rax_133[1]
                void* var_1e90_1 = rcx_213
                
                if (rcx_213 != 0)
                    *(rcx_213 + 8) += 1
                
                void var_da8
                int64_t* rax_134
                int128_t zmm1_16
                rax_134, zmm1_16 = sub_14068c940(&var_da8)
                rax_134[0xf].b = rbx_33
                *(rax_134 + 0x79) = 1
                sub_1407473e0(&rax_134[0x10], &var_1f70)
                rax_134[0x37].b = 1
                *(rax_134 + 0x1a8) = zmm6_6
                sub_140692f90(&rax_134[0x38], &var_1da8)
                void* rax_135 = sub_1406937a0(rax_134, &var_1e98, zmm1_16)
                void var_21bf
                void var_1bb8
                int64_t* rax_136
                int128_t zmm1_17
                rax_136, zmm1_17 = sub_1406883e0(&var_1bb8, "SBox", 
                    "Runtime\Slate\Public\Framework/Application/SWindowTitleBar.h", 0x10e, 
                    &var_21bf)
                void* var_1d88
                void** rax_137 = sub_140695d20(rax_136, &var_1d88, rax_135, zmm1_17)
                int64_t* rbx_35 = rax_137[1]
                void* rcx_220 = *rax_137
                void* const var_2118 = rcx_220
                int64_t* var_2110 = rbx_35
                
                if (rbx_35 != 0)
                    rbx_35[1].d += 1
                
                if (arg3 != &var_2118)
                    *arg3 = rcx_220
                    var_2118 = nullptr
                    sub_14066a200(&arg3[1], &var_2110)
                    rbx_35 = var_2110
                
                if (rbx_35 != 0)
                    rbx_35[1].d -= 1
                    
                    if (rbx_35[1].d == 1)
                        (**rbx_35)(rbx_35)
                        int32_t temp31_1 = *(rbx_35 + 0xc)
                        *(rbx_35 + 0xc) -= 1
                        
                        if (temp31_1 == 1)
                            (*(*rbx_35 + 8))(rbx_35, 1)
                
                int64_t* var_1d80
                
                if (var_1d80 != 0)
                    var_1d80[1].d -= 1
                    
                    if (var_1d80[1].d == 1)
                        (**var_1d80)(var_1d80)
                        int32_t temp33_1 = *(var_1d80 + 0xc)
                        *(var_1d80 + 0xc) -= 1
                        
                        if (temp33_1 == 1)
                            (*(*var_1d80 + 8))(var_1d80, 1)
                
                sub_140669d70(&var_1bb8)
                sub_140690290(&var_da8)
                int64_t* var_1d70
                
                if (var_1d70 != 0)
                    var_1d70[1].d -= 1
                    
                    if (var_1d70[1].d == 1)
                        (**var_1d70)(var_1d70)
                        int32_t temp34_1 = *(var_1d70 + 0xc)
                        *(var_1d70 + 0xc) -= 1
                        
                        if (temp34_1 == 1)
                            (*(*var_1d70 + 8))(var_1d70, 1)
                
                sub_140669d70(&var_1c18)
                int64_t var_1748
                
                if (var_1748 != 0)
                    sub_140a74f90(var_1748)
                
                sub_140660250(&var_18e8)
                
                if (r13_1 != 0)
                    r13_1[1].d -= 1
                    
                    if (r13_1[1].d == 1)
                        (**r13_1)(r13_1)
                        int32_t temp37_1 = *(r13_1 + 0xc)
                        *(r13_1 + 0xc) -= 1
                        
                        if (temp37_1 == 1)
                            (*(*r13_1 + 8))(r13_1, 1)
                
                if (r12_1 != 0)
                    r12_1[1].d -= 1
                    
                    if (r12_1[1].d == 1)
                        (**r12_1)(r12_1)
                        int32_t temp40_1 = *(r12_1 + 0xc)
                        *(r12_1 + 0xc) -= 1
                        
                        if (temp40_1 == 1)
                            (*(*r12_1 + 8))(r12_1, 1)
                
                if (r15_2 != 0)
                    r15_2[1].d -= 1
                    
                    if (r15_2[1].d == 1)
                        (**r15_2)(r15_2)
                        int32_t temp43_1 = *(r15_2 + 0xc)
                        *(r15_2 + 0xc) -= 1
                        
                        if (temp43_1 == 1)
                            (*(*r15_2 + 8))(r15_2, 1)
                
                sub_140745b20(&var_1f70)
                sub_140745b20(&var_1da8)
                result = sub_140745b20(&var_1f58)
                rsi = var_2180

if (rsi != 0)
    rsi[1].d -= 1
    
    if (rsi[1].d == 1)
        result = (**rsi)(rsi)
        int32_t temp2_1 = *(rsi + 0xc)
        *(rsi + 0xc) -= 1
        
        if (temp2_1 == 1)
            result = (*(*rsi + 8))(rsi, 1)

__security_check_cookie(result_1 ^ &var_21f8)
return result
