// 函数: sub_141d56590
// 地址: 0x141d56590
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

char rbp = 1
void* const* rax_1

if (*(arg1 + 0xd8) == 0)
    void arg_8
    int64_t rbx_1 = *sub_140b58170(&arg_8, "Media", 1)
    j_sub_140b3db50()
    rax_1 = sub_140b407e0(&data_143de7d78, rbx_1)
    
    if (rax_1 != 0)
        void*** rax_2 = j_sub_140a82f30(0x20)
        void*** rbx_2 = rax_2
        
        if (rax_2 == 0)
            rbx_2 = nullptr
        else
            rax_2[1].d = 1
            *(rax_2 + 0xc) = 1
            *rbx_2 = &data_1432288c8
            rbx_2[2] = &data_143228540
            sub_140d3a3a0(&rbx_2[3], arg1)
        
        uint128_t zmm0_1 = (&rbx_2[2]).o
        uint128_t var_58 = zmm0_1
        void*** rbx_3 = _mm_bsrli_si128(zmm0_1, 8).q
        
        if (rbx_3 != 0)
            rbx_3[1].d += 1
            rbx_3 = rbx_2
        
        if (arg1 + 0xd8 != &var_58)
            *(arg1 + 0xd8) = var_58.q
            var_58.q = 0
            sub_1405aeff0(arg1 + 0xe0, &var_58:8)
            rbx_3 = rbx_2
        
        void* rcx_3 = var_58:8.q
        
        if (rcx_3 != 0)
            int32_t rax_4 = *(rcx_3 + 8)
            *(rcx_3 + 8) -= 1
            
            if (rax_4 == 1)
                int64_t* rbx_4 = var_58:8.q
                (**rbx_4)(rbx_4)
                int32_t rax_6 = *(rbx_4 + 0xc)
                *(rbx_4 + 0xc) -= 1
                
                if (rax_6 == 1)
                    int64_t* rcx_5 = var_58:8.q
                    (*(*rcx_5 + 8))(rcx_5, 1)
            
            rbx_3 = rbx_2
        
        if (rbx_3 != 0)
            rbx_3[1].d -= 1
            
            if (rbx_3[1].d == 1)
                (**rbx_3)(rbx_3)
                int32_t rax_10 = *(rbx_3 + 0xc)
                *(rbx_3 + 0xc) -= 1
                
                if (rax_10 == 1)
                    (*rbx_3)[1](rbx_3, 1)
        
        int64_t* rbx_5 = *(arg1 + 0xe0)
        
        if (rbx_5 != 0)
            rbx_5[1].d += 1
        
        int64_t var_38 = *(arg1 + 0xd8)
        
        if (rbx_5 != 0)
            rbx_5[1].d += 1
        
        int64_t* rax_14 = (*(*rax_1 + 0x78))(rax_1)
        int64_t r8_1 = *rax_14
        (*(r8_1 + 0x10))(rax_14, &var_38, r8_1)
        
        if (rbx_5 != 0)
            rbx_5[1].d -= 1
            
            if (rbx_5[1].d == 1)
                (**rbx_5)(rbx_5)
                int32_t rax_17 = *(rbx_5 + 0xc)
                *(rbx_5 + 0xc) -= 1
                
                if (rax_17 == 1)
                    (*(*rbx_5 + 8))(rbx_5, 1)
        
        if (rbx_5 != 0)
            rbx_5[1].d -= 1
            
            if (rbx_5[1].d == 1)
                (**rbx_5)(rbx_5)
                int32_t rax_21 = *(rbx_5 + 0xc)
                *(rbx_5 + 0xc) -= 1
                
                if (rax_21 == 1)
                    (*(*rbx_5 + 8))(rbx_5, 1)

if (*(arg1 + 0xcc) != 0)
    rax_1.b = 2

if (*(arg1 + 0xcc) == 0 || *(arg1 + 0xcd) u<= 1)
    rax_1 = 1

*(arg1 + 0x5d) = rax_1.b
void*** rax_23 = j_sub_140a82f30(0xd8)
void*** r8_2 = rax_23

if (rax_23 == 0)
    r8_2 = nullptr
else
    char rdx_6 = *(arg1 + 0xcc)
    int128_t* rcx_18 = 0xe8
    int128_t zmm0_2 = *(arg1 + 0xbc)
    
    if ((*(arg1 + 0xf4) | *(arg1 + 0xf0) | *(arg1 + 0xec) | *(arg1 + 0xe8)) == 0)
        rcx_18 = 0x110
    
    int128_t zmm1 = *(rcx_18 + arg1)
    char rcx_19 = *(arg1 + 0xcd)
    r8_2[1] = 0
    
    if (rdx_6 != 0)
        rbp = rcx_19
    
    r8_2[3].d = 0xffffffff
    *(r8_2 + 0x1c) = 4
    __builtin_memset(&r8_2[4], 0, 0x18)
    r8_2[7] = -0x3810000020000000
    __builtin_memset(&r8_2[8], 0, 0x17)
    *r8_2 = &data_1432284a0
    r8_2[2] = &data_1432284e0
    *(r8_2 + 0x59) = 0
    *(r8_2 + 0x5c) = zmm0_2
    *(r8_2 + 0x6c) = zmm1
    r8_2[0x10] = 0
    r8_2[0x11] = 0
    r8_2[0x13] = arg1 + 0x120
    r8_2[0x14] = arg1 + 0x150
    r8_2[0x12] = arg1
    r8_2[0x15].b = rdx_6
    *(r8_2 + 0xa9) = rbp
    *(r8_2 + 0xac) = 5
    __builtin_memset(&r8_2[0x16], 0, 0x28)
    r8_2[0xb].b = data_143f0f1c2

if (r8_2 == 0)
    return nullptr

return &r8_2[2]
