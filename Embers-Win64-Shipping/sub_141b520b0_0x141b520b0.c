// 函数: sub_141b520b0
// 地址: 0x141b520b0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

__chkstk(0x15f8)
void var_1618
int64_t rax_1 = __security_cookie ^ &var_1618
int64_t* result

if (data_143f5b298 != 0)
    int64_t rax_2 = *arg2
    void* const var_15d8 = nullptr
    void var_15a8
    int64_t* rax_3 = (*(rax_2 + 0x18))(arg2, &var_15a8)
    int128_t zmm2 = data_14399f5c0
    void* rax_4 = *rax_3
    int32_t var_1020_1 = 0x3f800000
    uint64_t var_11e8 = data_143dbb1f8.q
    int32_t var_10d8_1 = 0x42c80000
    uint128_t var_11d8_1 = data_14399f6e0
    int32_t var_101c_1 = 0xbf800000
    uint128_t var_11b8_1 = data_14399f700
    int128_t var_11c8_1 = data_14399f6f0
    uint128_t var_1198_1 = *arg3
    uint128_t zmm0 = arg3[2]
    int128_t var_11a8_1 = data_14399f710
    int128_t zmm1 = arg3[1]
    void* var_15d0 = rax_4
    int64_t var_15b8 = 0
    int32_t rcx_1 = var_15d0:4.d
    uint128_t var_1178_1 = zmm0
    void* var_15b0_1 = rax_4
    int128_t var_1188_1 = zmm1
    zmm1 = arg3[3]
    int32_t var_1150_1 = rax_4.d
    int32_t var_114c_1 = rcx_1
    int32_t var_1140_1 = rax_4.d
    int32_t rax_5 = data_143dbb200
    int32_t var_113c_1 = rcx_1
    uint128_t var_1110_1 = data_14399f5e0
    int64_t var_1130_1 = 0
    int64_t var_1128_1 = 0
    int32_t var_1120_1 = 0xffffffff
    int64_t var_1118_1 = 0
    int128_t var_10f0_1 = zmm2
    int64_t var_10e0_1 = 0
    int64_t var_10d0
    __builtin_memset(&var_10d0, 0, 0x2c)
    int32_t var_10a4_1 = 0x80
    int32_t var_10a0_1 = 0xffffffff
    int32_t var_109c_1 = 0
    int64_t var_1090_1 = 0
    int32_t var_1088_1 = 0
    char var_1030_1 = 0
    int64_t var_1028_1 = -1
    int64_t var_1018_1 = 0
    int32_t var_1010_1 = 0
    int16_t var_100c_1 = 0x100
    int32_t var_1008_1 = 0x42b40000
    int32_t var_1004_1 = 0x42b40000
    int64_t* var_1138_1 = arg1
    int64_t var_1158_1 = 0
    int64_t var_1148_1 = 0
    int32_t var_11e0_1 = rax_5
    int128_t var_1168_1 = zmm1
    int128_t var_1100_1 = zmm2
    int64_t* rax_6 = j_sub_140a82f30(0x15a0)
    int64_t* result_1
    
    if (rax_6 == 0)
        result_1 = nullptr
    else
        result_1 = sub_1422d8af0(rax_6, &var_11e8)
    
    int64_t rdi_1 = sx.q(arg1[1].d)
    int32_t rax_8 = (rdi_1 + 1).d
    arg1[1].d = rax_8
    
    if (rax_8 s> *(arg1 + 0xc))
        sub_1405a4d70(arg1)
    
    *(*arg1 + (rdi_1 << 3)) = result_1
    int32_t var_15c0
    (*(*arg2 + 0x18))(arg2, &var_15c0)
    void var_ff8
    sub_1422db070(&var_ff8)
    int64_t var_48_1 = *(data_143f11008 + 0x20)
    void var_1598
    sub_1422f3670(result_1, &var_ff8, &var_15c0, 1, &var_15b8, &result_1[0x50], 
        sub_1413c2d70(&var_1598))
    int64_t var_ba8_1 = *(result_1 + 0x60c)
    int32_t var_ba0_1 = *(result_1 + 0x614)
    int32_t var_438_1 = 0
    sub_1414314c0(&var_ff8)
    int64_t* rcx_11 = data_143f0f180
    float (* var_15f0_1)[0x4]
    var_15f0_1.d = 1
    int32_t* var_15f8_1
    var_15f8_1.d = 1
    (*(*rcx_11 + 0xf8))(rcx_11, &var_15d0, &var_ff8, &data_143f55750, var_15f8_1, var_15f0_1)
    void* const rbx_1 = var_15d0
    var_15d8 = rbx_1
    
    if (rbx_1 != 0)
        *(rbx_1 + 8) += 1
        rbx_1 = var_15d8
    
    sub_1405d1550(&var_15d0)
    
    if (&result_1[2] != &var_15d8)
        int64_t* rdi_2 = result_1[2]
        result_1[2] = rbx_1
        var_15d8 = nullptr
        
        if (rdi_2 != 0)
            rdi_2[1].d -= 1
            
            if (rdi_2[1].d == 1)
                char rax_17
                
                if (rdi_2[2].b == 0 && data_143f0f1d0 == 0)
                    rax_17 = sub_1405949a0()
                
                if (rdi_2[2].b != 0 || (data_143f0f1d0 == 0 && rax_17 != 0))
                    (**rdi_2)(rdi_2, 1)
                else
                    bool z_1
                    
                    if (0 == *(rdi_2 + 0xc))
                        *(rdi_2 + 0xc) = 1
                        z_1 = true
                    else
                        *(rdi_2 + 0xc)
                        z_1 = false
                    
                    if (z_1)
                        int32_t rax_19 = sub_140a20af0()
                        uint64_t rdx_6 = zx.q(rax_19)
                        void* const rax_20
                        
                        if (rax_19 != 0)
                            rax_20 = *(&data_143cf0bf8 + (rdx_6 u>> 0xe << 3))
                                + (zx.q(rdx_6.d) & 0x3fff) * 0x18
                        else
                            rax_20 = nullptr
                        
                        *(rax_20 + 8) = rdi_2
                        sub_1405a42f0(&data_143f02390, rdx_6.d)
    
    sub_1405d1550(&var_15d8)
    void var_1080
    sub_1413c3330(&var_1080)
    int32_t var_1088_2 = 0
    
    if (var_1090_1 != 0)
        sub_140a74f90(var_1090_1)
    
    int64_t var_10c8
    var_10c8.d = 0
    int32_t var_10a0_2 = 0xffffffff
    int32_t var_109c_2 = 0
    int64_t var_10c0
    sub_14059a8e0(&var_10c0, 0)
    int64_t var_10b0
    
    if (var_10b0 != 0)
        sub_140a74f90(var_10b0)
    
    int64_t rcx_23 = var_10d0
    
    if (rcx_23 != 0)
        sub_140a74f90(rcx_23)
    
    result = result_1
else
    result = nullptr

__security_check_cookie(rax_1 ^ &var_1618)
return result
