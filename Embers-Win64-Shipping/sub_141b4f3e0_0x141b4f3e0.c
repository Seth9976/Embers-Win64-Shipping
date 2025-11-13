// 函数: sub_141b4f3e0
// 地址: 0x141b4f3e0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_148
int64_t rax_1 = __security_cookie ^ &var_148
int32_t result
int128_t zmm1
result, zmm1 = sub_140e1c270(arg3)

if (arg3[1].d s> 0)
    uint64_t rcx_1 = zx.q(arg3[7].d)
    
    if (rcx_1.d s> 0)
        uint64_t r13_1 = zx.q(arg3[9].d)
        
        if (r13_1.d s> 0)
            bool cond:0_1 = *(data_143f2d528 + 4) != 0
            int32_t rax_3 = *(arg1 + 0x38)
            uint32_t r15_2 = (rcx_1 * 5).d << 3
            int128_t* var_120
            
            if (r15_2 s> rax_3)
                uint32_t r12_1 = *(arg1 + 0x3c)
                
                if (r15_2 s>= r12_1)
                    r12_1 = r15_2
                
                if (r12_1 != 0 && r12_1 != rax_3)
                    sub_1405d16e0(arg1 + 0x30, nullptr)
                    int128_t zmm1_1 = data_143dbb1e0
                    int128_t var_c8
                    var_120 = &var_c8
                    int32_t var_b8_1 = 1
                    int64_t* rcx_4 = data_143f0f180
                    int32_t var_a4_1 = (1 << (data_1439c7a34).b) - 1
                    int512_t zmm0_2
                    zmm0_2.o = zx.o(0)
                    var_c8 = zx.o(0)
                    int64_t var_98_1 = 0
                    int32_t var_90_1 = 0
                    int128_t var_b4_1 = zmm1_1
                    char var_a0_1 = 0
                    void var_100
                    (*(*rcx_4 + 0x498))(zmm0_2, &var_100, &data_143f02b98, zx.q(r12_1), 2, var_120)
                    sub_1405d1600(arg1 + 0x30, &var_100)
                    zmm1 = sub_1405d1550(&var_100)
                    *(arg1 + 0x38) = r12_1
            
            *(arg1 + 0x40) = r15_2
            uint32_t r12_2 = (r13_1 << 2).d
            int32_t rax_7 = *(arg1 + 0x60)
            
            if (r12_2 s> rax_7)
                uint32_t r15_3 = *(arg1 + 0x64)
                
                if (r12_2 s>= r15_3)
                    r15_3 = r12_2
                
                if (r15_3 != 0 && r15_3 != rax_7)
                    sub_14081d930(arg1 + 0x58, nullptr)
                    int128_t zmm1_2 = data_143dbb1e0
                    int128_t var_88
                    int128_t* var_118_1 = &var_88
                    char var_60_1 = 0
                    int32_t var_78_1 = 1
                    int512_t zmm0_3
                    zmm0_3.o = zx.o(0)
                    int64_t* rcx_9 = data_143f0f180
                    int32_t rax_9 = (1 << (data_1439c7a34).b) - 1
                    var_88 = zx.o(0)
                    int128_t var_74_1 = zmm1_2
                    int32_t var_64_1 = rax_9
                    int64_t var_58_1 = 0
                    int32_t var_50_1 = 0
                    var_120.d = 2
                    void var_f8
                    (*(*rcx_9 + 0x4d8))(zmm0_3, &var_f8, &data_143f02b98, 4, r15_3, var_120, 
                        var_118_1)
                    sub_1405d1600(arg1 + 0x58, &var_f8)
                    zmm1 = sub_14081c9d0(&var_f8)
                    *(arg1 + 0x60) = r15_3
            
            *(arg1 + 0x68) = r12_2
            bool cond:1_1 = *(arg2 + 0x10) == 0
            int64_t var_e8 = *(arg1 + 0x30)
            int64_t var_e0_1 = *(arg1 + 0x58)
            bool var_d0_1 = cond:0_1
            
            if (cond:1_1)
                void*** rcx_15 = (*(arg2 + 0x30) + 7) & 0xfffffffffffffff8
                void* rax_14 = &rcx_15[6]
                
                if (rax_14 u> *(arg2 + 0x38))
                    sub_140b0e3d0(arg2 + 0x30, 0x38)
                    rcx_15 = (*(arg2 + 0x30) + 7) & 0xfffffffffffffff8
                    rax_14 = &rcx_15[6]
                
                *(arg2 + 0x30) = rax_14
                int64_t* rax_15 = *(arg2 + 8)
                *(arg2 + 0x14) += 1
                int128_t zmm0_1 = var_e8.o
                *rax_15 = rcx_15
                *(arg2 + 8) = &rcx_15[1]
                rcx_15[1] = 0
                *(rcx_15 + 0x10) = zmm0_1
                *rcx_15 = &data_14306d008
                *(rcx_15 + 0x20) = arg3.o
            else
                sub_141b4b2f0(&var_e8, arg2, zmm1)
            
            int64_t* var_f0
            result = sub_141980430(arg2, &var_f0, 1)
            int64_t* rcx_20 = var_f0
            
            if (rcx_20 != 0)
                result = rcx_20[9].d
                rcx_20[9].d -= 1
                
                if (result == 1)
                    result = sub_140a2f6e0(rcx_20)

__security_check_cookie(rax_1 ^ &var_148)
return result
