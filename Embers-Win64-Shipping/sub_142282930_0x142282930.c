// 函数: sub_142282930
// 地址: 0x142282930
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_108
int64_t rax_1 = __security_cookie ^ &var_108
int32_t rbx = data_143f0f1a0
int128_t* var_d8
int32_t var_d0
int32_t var_c8
int128_t* var_c0

if (sub_14076f990(rbx) != 0)
    int128_t zmm1 = data_143dbb1e0
    int128_t var_68
    int128_t* var_d8_1 = &var_68
    int32_t var_58_1 = 1
    int64_t* rcx_2 = data_143f0f180
    char var_40_1 = 0
    int512_t zmm0
    zmm0.o = zx.o(0)
    int32_t var_44_1 = (1 << (data_1439c7a34).b) - 1
    var_68 = zx.o(0)
    int128_t var_54_1 = zmm1
    int64_t var_38_1 = 0
    int32_t var_30_1 = 0
    void var_a0
    (*(*rcx_2 + 0x4a0))(zmm0, &var_a0, &data_143f02b98, 0x10, 0x230, 0x201, var_d8_1)
    sub_1405d1600(arg1 + 0x340, &var_a0)
    sub_14081c9d0(&var_a0)
    int64_t* rcx_5 = data_143f0f180
    void var_98
    (*(*rcx_5 + 0x5b0))(rcx_5, &var_98, &data_143f02b98, *(arg1 + 0x340))
    sub_1405d1600(arg1 + 0x348, &var_98)
    sub_1405ec8a0(&var_98)
    int64_t* rcx_8 = data_143f0f180
    var_c0 = &var_68
    var_c8 = 0x10008
    var_d0 = 1
    var_d8_1.d = 1
    int32_t var_e0_1
    var_e0_1.b = 1
    int64_t var_b8
    (*(*rcx_8 + 0x560))(rcx_8, &var_b8, &data_143f02b98, 0x23, 1, var_e0_1, var_d8_1, var_d0, 
        var_c8, var_c0)
    
    if (arg1 + 0x350 != &var_b8)
        int64_t* rbx_1 = *(arg1 + 0x350)
        *(arg1 + 0x350) = var_b8
        var_b8 = 0
        
        if (rbx_1 != 0)
            rbx_1[1].d -= 1
            
            if (rbx_1[1].d == 1)
                char rax_10
                
                if (rbx_1[2].b == 0 && data_143f0f1d0 == 0)
                    rax_10 = sub_1405949a0()
                
                if (rbx_1[2].b != 0 || (data_143f0f1d0 == 0 && rax_10 != 0))
                    (**rbx_1)(rbx_1, 1)
                else
                    bool z_1
                    
                    if (0 == *(rbx_1 + 0xc))
                        *(rbx_1 + 0xc) = 1
                        z_1 = true
                    else
                        *(rbx_1 + 0xc)
                        z_1 = false
                    
                    if (z_1)
                        int32_t rax_12 = sub_140a20af0()
                        uint64_t rdx_6 = zx.q(rax_12)
                        void* const rax_13
                        
                        if (rax_12 != 0)
                            rax_13 = *(&data_143cf0bf8 + (rdx_6 u>> 0xe << 3))
                                + (zx.q(rdx_6.d) & 0x3fff) * 0x18
                        else
                            rax_13 = nullptr
                        
                        *(rax_13 + 8) = rbx_1
                        sub_1405a42f0(&data_143f02390, rdx_6.d)
    
    sub_1405d1550(&var_b8)
    int64_t* rcx_14 = data_143f0f180
    int16_t var_af_1 = 0x100
    int64_t var_ac_1 = 0
    char var_b0 = *(*(arg1 + 0x350) + 0x3c)
    int32_t var_a4_1 = 0
    int32_t var_e8_2
    var_e8_2.q = &var_b0
    void var_90
    (*(*rcx_14 + 0x5d0))(rcx_14, &var_90, &data_143f02b98)
    sub_1405d1600(arg1 + 0x358, &var_90)
    sub_1405ec8a0(&var_90)
    int64_t* rcx_17 = data_143f0f180
    var_d8 = &var_68
    void var_88
    (*(*rcx_17 + 0x4a0))(rcx_17, &var_88, &data_143f02b98, 0x10, 0xf0, 0x201, var_d8)
    sub_1405d1600(arg1 + 0x360, &var_88)
    sub_14081c9d0(&var_88)
    int64_t* rcx_20 = data_143f0f180
    void var_80
    (*(*rcx_20 + 0x5b0))(rcx_20, &var_80, &data_143f02b98, *(arg1 + 0x360))
    sub_1405d1600(arg1 + 0x368, &var_80)
    sub_1405ec8a0(&var_80)
    rbx = data_143f0f1a0

char result = sub_14076f990(rbx)

if (result != 0)
    if (*(arg1 + 0x10) s< 0x31)
        rbx = *(arg1 + 0x10)
    
    char rax_22 = sub_1419a2670(rbx)
    int64_t* rcx_25 = data_143f0f180
    int64_t rax_23 = *rcx_25
    int128_t zmm0_1
    
    if (rax_22 != 0)
        var_d0.b = 1
        var_d8.b = 0
        int32_t var_e0
        void var_74
        var_e0.q = &var_74
        int128_t* rax_26 = (*(rax_23 + 0x510))(rcx_25, &data_143f02b98, *(arg1 + 0x350), 0, 1, 
            var_e0, var_d8, var_d0, var_c8, var_c0)
        void* rcx_28 = arg1 + 0x20
        int64_t i_3 = 4
        int64_t i
        
        do
            rax_26 = &rax_26[8]
            zmm0_1 = *rcx_28
            rcx_28 += 0x80
            rax_26[-8] = zmm0_1
            rax_26[-7] = *(rcx_28 - 0x70)
            rax_26[-6] = *(rcx_28 - 0x60)
            rax_26[-5] = *(rcx_28 - 0x50)
            rax_26[-4] = *(rcx_28 - 0x40)
            rax_26[-3] = *(rcx_28 - 0x30)
            rax_26[-2] = *(rcx_28 - 0x20)
            rax_26[-1] = *(rcx_28 - 0x10)
            i = i_3
            i_3 -= 1
        while (i != 1)
        var_e0.b = 1
        int32_t var_e8_5
        var_e8_5.b = i_3.b
        *rax_26 = *rcx_28
        rax_26[1] = *(rcx_28 + 0x10)
        rax_26[2] = *(rcx_28 + 0x20)
        int64_t* rcx_29 = data_143f0f180
        (*(*rcx_29 + 0x518))(rcx_29, &data_143f02b98, *(arg1 + 0x350), 0, var_e8_5, var_e0)
    else
        int128_t* rax_24 = (*(rax_23 + 0x158))(rcx_25, &data_143f02b98, *(arg1 + 0x340), 0, 0x230, 
            1, var_d8, var_d0, var_c8, var_c0)
        void* rcx_26 = arg1 + 0x20
        int64_t i_2 = 4
        int64_t i_1
        
        do
            rax_24 = &rax_24[8]
            zmm0_1 = *rcx_26
            rcx_26 += 0x80
            rax_24[-8] = zmm0_1
            rax_24[-7] = *(rcx_26 - 0x70)
            rax_24[-6] = *(rcx_26 - 0x60)
            rax_24[-5] = *(rcx_26 - 0x50)
            rax_24[-4] = *(rcx_26 - 0x40)
            rax_24[-3] = *(rcx_26 - 0x30)
            rax_24[-2] = *(rcx_26 - 0x20)
            rax_24[-1] = *(rcx_26 - 0x10)
            i_1 = i_2
            i_2 -= 1
        while (i_1 != 1)
        *rax_24 = *rcx_26
        rax_24[1] = *(rcx_26 + 0x10)
        rax_24[2] = *(rcx_26 + 0x20)
        int64_t* rcx_27 = data_143f0f180
        (*(*rcx_27 + 0x160))(rcx_27, &data_143f02b98, *(arg1 + 0x340))
    int64_t* rcx_30 = data_143f0f180
    int128_t* rax_29 = (*(*rcx_30 + 0x158))(rcx_30, &data_143f02b98, *(arg1 + 0x360), 0, 0xf0, 1, 
        var_d8, var_d0, var_c8, var_c0)
    *rax_29 = *(arg1 + 0x250)
    rax_29[1] = *(arg1 + 0x260)
    rax_29[2] = *(arg1 + 0x270)
    rax_29[3] = *(arg1 + 0x280)
    rax_29[4] = *(arg1 + 0x290)
    rax_29[5] = *(arg1 + 0x2a0)
    rax_29[6] = *(arg1 + 0x2b0)
    rax_29[7] = *(arg1 + 0x2c0)
    *(rax_29 + 0x80) = *(arg1 + 0x2d0)
    rax_29[9] = *(arg1 + 0x2e0)
    rax_29[0xa] = *(arg1 + 0x2f0)
    rax_29[0xb] = *(arg1 + 0x300)
    rax_29[0xc] = *(arg1 + 0x310)
    rax_29[0xd] = *(arg1 + 0x320)
    rax_29[0xe] = *(arg1 + 0x330)
    int64_t* rcx_33 = data_143f0f180
    result = (*(*rcx_33 + 0x160))(rcx_33, &data_143f02b98, *(arg1 + 0x360))

__security_check_cookie(rax_1 ^ &var_108)
return result
