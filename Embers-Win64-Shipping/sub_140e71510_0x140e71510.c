// 函数: sub_140e71510
// 地址: 0x140e71510
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_158
int64_t rax_1 = __security_cookie ^ &var_158
void** rdi = arg3

if (*(arg1 + 0x172) == 0)
    void* rcx_7 = *arg3
    int128_t var_e8 = zx.o(0)
    void* var_a0
    sub_140e158f0(rcx_7, &var_a0)
    void* rcx_8 = var_a0
    
    if (rcx_8 != 0)
        void var_78
        int64_t* rax_14 = sub_140e152a0(rcx_8, &var_78)
        
        if (&var_e8 != rax_14)
            var_e8.q = *rax_14
            *rax_14 = 0
            int64_t rcx_10 = rax_14[1]
            int64_t* rbx_4 = var_e8:8.q
            
            if (rcx_10 != rbx_4)
                rax_14[1] = 0
                var_e8:8.q = rcx_10
                
                if (rbx_4 != 0)
                    rbx_4[1].d -= 1
                    
                    if (rbx_4[1].d == 1)
                        (**rbx_4)(rbx_4)
                        int32_t temp4_1 = *(rbx_4 + 0xc)
                        *(rbx_4 + 0xc) -= 1
                        
                        if (temp4_1 == 1)
                            (*(*rbx_4 + 8))(rbx_4, 1)
        
        int64_t* var_70
        
        if (var_70 != 0)
            var_70[1].d -= 1
            
            if (var_70[1].d == 1)
                (**var_70)(var_70)
                int32_t temp2_1 = *(var_70 + 0xc)
                *(var_70 + 0xc) -= 1
                
                if (temp2_1 == 1)
                    (*(*var_70 + 8))(var_70, 1)
    
    int32_t* rax_19 = j_sub_140a82f30(0x78)
    int32_t* rbx_6 = rax_19
    
    if (rax_19 == 0)
        rbx_6 = nullptr
    else
        memset(rax_19, 0, 0x78)
        *(rbx_6 + 0x40) = 0
        rbx_6[0x15].b = 0
        rbx_6[0x17].b = 0
        rbx_6[0x19].b = 0
        rbx_6[0x1b].b = 0
        rbx_6[0x1c].b = 0
    
    void*** rax_20 = j_sub_140a82f30(0x18)
    
    if (rax_20 != 0)
        rax_20[1].d = 1
        *rax_20 = &data_142ed9ea8
        *(rax_20 + 0xc) = 1
        rax_20[2] = rbx_6
    
    int32_t* var_128 = rbx_6
    *var_128 = *(*rdi + 0x734)
    int32_t var_110
    sub_140e14fd0(*rdi, &var_110)
    var_128[3] = var_110
    int32_t var_10c
    var_128[4] = var_10c
    int32_t var_118
    sub_140e14fc0(*rdi, &var_118)
    var_128[1] = var_118
    int32_t var_114
    var_128[2] = var_114
    var_128[6].b = *(*rdi + 0x779) & 1
    var_128[5] = sub_140e179a0(*rdi)
    *(var_128 + 0x19) = sub_140de7d60(*rdi)
    *(var_128 + 0x1a) = sub_140e1ab90(*rdi)
    *(var_128 + 0x1b) = sub_140de64f0(*rdi)
    var_128[7] = sub_140de6510(*rdi)
    var_128[8].b = *(*rdi + 0x778) u>> 7
    *(var_128 + 0x21) = sub_140e196c0(*rdi)
    *(var_128 + 0x22) = sub_140e19830(*rdi)
    *(var_128 + 0x23) = sub_140e19820(*rdi)
    var_128[9].b = *(*rdi + 0x779) u>> 6 & 1
    *(var_128 + 0x25) = sub_140de7d60(*rdi)
    *(var_128 + 0x26) = sub_140e19a90(*rdi)
    *(var_128 + 0x27) = *(*rdi + 0x778) u>> 3 & 1
    var_128[0xa].b = *(*rdi + 0x77a) & 1
    var_128[0xb] = *(*rdi + 0xa24)
    var_128[0xc] = *(*rdi + 0xa28)
    int64_t* rax_51 = sub_140d44910(*rdi + 0x738)
    int64_t var_c8 = *rax_51
    int64_t* rcx_39 = rax_51[1]
    
    if (rcx_39 != 0)
        rcx_39[1].d += 1
    
    int32_t var_b8_1 = rax_51[2].d
    sub_140597df0(&var_128[0xe], sub_140ac6680(&var_c8))
    
    if (rcx_39 != 0)
        rcx_39[1].d -= 1
        
        if (rcx_39[1].d == 1)
            (**rcx_39)(rcx_39)
            int32_t r15_1 = *(rcx_39 + 0xc)
            *(rcx_39 + 0xc) -= 1
            
            if (r15_1 == 1)
                (*(*rcx_39 + 8))(rcx_39, zx.q(r15_1))
    
    var_128[0x12] = sub_140e15660(*rdi).d
    var_128[0x13] = sub_140e12b00(*rdi)
    int32_t* rbx_21 = var_128
    void var_58
    int32_t* rax_58 = sub_140e173c0(*rdi, &var_58)
    
    if (rax_58 != &rbx_21[0x14])
        if (rbx_21[0x15].b != 0)
            rbx_21[0x15].b = 0
        
        if (rax_58[1].b != 0)
            rbx_21[0x14] = *rax_58
            rbx_21[0x15].b = 1
    
    if (&rax_58[2] != &rbx_21[0x16])
        if (rbx_21[0x17].b != 0)
            rbx_21[0x17].b = 0
        
        if (rax_58[3].b != 0)
            rbx_21[0x16] = rax_58[2]
            rbx_21[0x17].b = 1
    
    if (&rax_58[4] != &rbx_21[0x18])
        if (rbx_21[0x19].b != 0)
            rbx_21[0x19].b = 0
        
        if (rax_58[5].b != 0)
            rbx_21[0x18] = rax_58[4]
            rbx_21[0x19].b = 1
    
    if (&rax_58[6] != &rbx_21[0x1a])
        if (rbx_21[0x1b].b != 0)
            rbx_21[0x1b].b = 0
        
        if (rax_58[7].b != 0)
            rbx_21[0x1a] = rax_58[6]
            rbx_21[0x1b].b = 1
    
    var_128[0x1c].b = *(*rdi + 0x77a) u>> 2 & 1
    int64_t* rcx_50 = data_143e20d18
    uint128_t var_f8
    (*(*rcx_50 + 0x38))(rcx_50, &var_f8)
    TEB* gsbase
    
    if (data_143cd80cc
            s> *(0x14 + *(gsbase->ThreadLocalStoragePointer + (zx.q(data_14401b1a0) << 3))))
        _Init_thread_header(&data_143cd80cc)
        
        if (data_143cd80cc == 0xffffffff)
            sub_140af2b60()
            data_143cd80c8 = sub_140b21a10(&data_143dbb3f0, u"nullrhi")
            _Init_thread_footer(&data_143cd80cc)
    
    if ((data_143de5426 == 0 || data_143de5427 != 0) && data_143cd80c8 == 0)
        uint128_t zmm0_3 = var_f8
        uint128_t var_68 = zmm0_3
        void* rax_70 = _mm_bsrli_si128(zmm0_3, 8).q
        
        if (rax_70 != 0)
            *(rax_70 + 8) += 1
        
        sub_140e24aa0(*rdi, &var_68)
        sub_140e238f0(*rdi, var_118.q)
        sub_140e239f0(*rdi, var_110.q)
        int64_t* rcx_56 = data_143e20d18
        (*(*rcx_56 + 0x40))(rcx_56, &var_f8, &var_128, &var_e8, arg4)
        int64_t* rcx_57 = data_143e20d18
        int64_t* rax_73 = (*(*rcx_57 + 0xe8))(rcx_57)
        
        if (rax_73 != 0)
            int64_t r8_5 = *rax_73
            (*(r8_5 + 8))(rax_73, &var_f8, r8_5)
    else
        void*** rax_74 = j_sub_140a82f30(0x18)
        void*** rbx_24
        
        if (rax_74 == 0)
            rbx_24 = nullptr
        else
            rbx_24 = std::exception::exception(rax_74)
        
        void*** rax_76 = j_sub_140a82f30(0x18)
        
        if (rax_76 != 0)
            rax_76[1].d = 1
            *rax_76 = &data_142d42ea8
            *(rax_76 + 0xc) = 1
            rax_76[2] = rbx_24
        
        void*** var_d8 = rbx_24
        void*** var_d0_1 = rax_76
        sub_140e24aa0(*rdi, &var_d8, rbx_24)
    
    *arg2 = var_f8.q
    void* rax_78 = var_f8:8.q
    arg2[1] = rax_78
    
    if (rax_78 != 0)
        *(rax_78 + 8) += 1
        int64_t* rbx_25 = var_f8:8.q
        
        if (rbx_25 != 0)
            rbx_25[1].d -= 1
            
            if (rbx_25[1].d == 1)
                (**rbx_25)(rbx_25)
                int32_t temp13_1 = *(rbx_25 + 0xc)
                *(rbx_25 + 0xc) -= 1
                
                if (temp13_1 == 1)
                    (*(*rbx_25 + 8))(rbx_25, 1)
    
    if (rax_20 != 0)
        rax_20[1].d -= 1
        
        if (rax_20[1].d == 1)
            (**rax_20)(rax_20)
            int32_t temp12_1 = *(rax_20 + 0xc)
            *(rax_20 + 0xc) -= 1
            
            if (temp12_1 == 1)
                (*rax_20)[1](rax_20, 1)
    
    int64_t* var_98
    
    if (var_98 != 0)
        var_98[1].d -= 1
        
        if (var_98[1].d == 1)
            (**var_98)(var_98)
            int32_t temp15_1 = *(var_98 + 0xc)
            *(var_98 + 0xc) -= 1
            
            if (temp15_1 == 1)
                (*(*var_98 + 8))(var_98, 1)
    
    int64_t* rbx_28 = var_e8:8.q
    
    if (rbx_28 != 0)
        rbx_28[1].d -= 1
        
        if (rbx_28[1].d == 1)
            (**rbx_28)(rbx_28)
            int32_t temp17_1 = *(rbx_28 + 0xc)
            *(rbx_28 + 0xc) -= 1
            
            if (temp17_1 == 1)
                (*(*rbx_28 + 8))(rbx_28, 1)
    
    int64_t* rbx_29 = rdi[1]
    
    if (rbx_29 != 0)
        rbx_29[1].d -= 1
        
        if (rbx_29[1].d == 1)
            (**rbx_29)(rbx_29)
            int32_t temp18_1 = *(rbx_29 + 0xc)
            *(rbx_29 + 0xc) -= 1
            
            if (temp18_1 == 1)
                (*(*rbx_29 + 8))(rbx_29, 1)
else
    void*** rax_2 = j_sub_140a82f30(0x18)
    void*** rbx_1
    
    if (rax_2 == 0)
        rbx_1 = nullptr
    else
        rbx_1 = std::exception::exception(rax_2)
    
    void*** rax_4 = j_sub_140a82f30(0x18)
    
    if (rax_4 != 0)
        rax_4[1].d = 1
        *rax_4 = &data_142d42ea8
        *(rax_4 + 0xc) = 1
        rax_4[2] = rbx_1
    
    uint128_t zmm0 = rbx_1.o
    uint128_t var_88 = zmm0
    void* rax_5 = _mm_bsrli_si128(zmm0, 8).q
    
    if (rax_5 != 0)
        *(rax_5 + 8) += 1
    
    sub_140e24aa0(*rdi, &var_88, rbx_1)
    int64_t* rcx_2 = *(data_143e20d08 + 0x20)
    void* var_b0 = *rdi
    void* rax_8 = rdi[1]
    void* var_a8_1 = rax_8
    
    if (rax_8 != 0)
        *(rax_8 + 8) += 1
    
    (*(*rcx_2 + 0x20))(rcx_2, &var_b0)
    *arg2 = rbx_1
    arg2[1] = rax_4
    
    if (rax_4 != 0)
        rax_4[1].d += 1
        
        if (rax_4 != 0)
            rax_4[1].d -= 1
            
            if (rax_4[1].d == 1)
                (**rax_4)(rax_4)
                int32_t temp8_1 = *(rax_4 + 0xc)
                *(rax_4 + 0xc) -= 1
                
                if (temp8_1 == 1)
                    (*rax_4)[1](rax_4, 1)
    
    int64_t* rbx_3 = rdi[1]
    
    if (rbx_3 != 0)
        rbx_3[1].d -= 1
        
        if (rbx_3[1].d == 1)
            int64_t r8_1 = *rbx_3
            (*r8_1)(rbx_3, arg5, r8_1)
            int32_t temp7_1 = *(rbx_3 + 0xc)
            *(rbx_3 + 0xc) -= 1
            
            if (temp7_1 == 1)
                int64_t r8_2 = *rbx_3
                (*(r8_2 + 8))(rbx_3, 1, r8_2)

__security_check_cookie(rax_1 ^ &var_158)
return arg2
