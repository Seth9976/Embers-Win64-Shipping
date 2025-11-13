// 函数: sub_141b6a870
// 地址: 0x141b6a870
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_c8
int64_t rax_1 = __security_cookie ^ &var_c8
int32_t rsi = arg3[1].d

if (rsi s> 0)
    int32_t rax_2 = *(arg1 + 0x20)
    int32_t rsi_1 = rsi << 4
    
    if (rsi_1 s> rax_2)
        int32_t rbp_1 = *(arg1 + 0x24)
        
        if (rsi_1 s>= rbp_1)
            rbp_1 = rsi_1
        
        if (rbp_1 != 0 && rbp_1 != rax_2)
            sub_1405d16e0(arg1 + 0x18, nullptr)
            int128_t zmm1_1 = data_143dbb1e0
            int32_t var_a0
            int128_t var_88
            var_a0.q = &var_88
            int32_t var_78_1 = 1
            int64_t* rcx_2 = data_143f0f180
            int512_t zmm0_1
            zmm0_1.o = zx.o(0)
            int32_t var_64_1 = (1 << (data_1439c7a34).b) - 1
            var_88 = zx.o(0)
            int128_t var_74_1 = zmm1_1
            char var_60_1 = 0
            int64_t var_58_1 = 0
            int32_t var_50_1 = 0
            void var_98
            (*(*rcx_2 + 0x498))(zmm0_1, &var_98, &data_143f02b98, zx.q(rbp_1), 2, var_a0)
            sub_1405d1600(arg1 + 0x18, &var_98)
            sub_1405d1550(&var_98)
            *(arg1 + 0x20) = rbp_1
    
    *(arg1 + 0x28) = rsi_1

int64_t rsi_2 = *arg3
int64_t r15_1 = *(arg1 + 0x18)
*arg3 = 0
int32_t rbp_2 = arg3[1].d
int32_t r12 = *(arg3 + 0xc)
arg3[1] = 0

if (*(arg2 + 0x10) == 0)
    void*** rcx_11 = (*(arg2 + 0x30) + 7) & 0xfffffffffffffff8
    void* rax_9 = &rcx_11[5]
    
    if (rax_9 u> *(arg2 + 0x38))
        sub_140b0e3d0(arg2 + 0x30, 0x30)
        rcx_11 = (*(arg2 + 0x30) + 7) & 0xfffffffffffffff8
        rax_9 = &rcx_11[5]
    
    *(arg2 + 0x30) = rax_9
    int64_t* rax_10 = *(arg2 + 8)
    *(arg2 + 0x14) += 1
    *rax_10 = rcx_11
    *(arg2 + 8) = &rcx_11[1]
    rcx_11[1] = 0
    *rcx_11 = &data_14306d050
    rcx_11[2] = r15_1
    rcx_11[3] = rsi_2
    rcx_11[4].d = rbp_2
    *(rcx_11 + 0x24) = r12
else
    int64_t* rcx_5 = data_143f0f180
    int32_t count = rbp_2 << 4
    memcpy((*(*rcx_5 + 0x130))(rcx_5, arg2, r15_1, 0, count, 1), rsi_2, count)
    int64_t* rcx_7 = data_143f0f180
    (*(*rcx_7 + 0x138))(rcx_7, arg2, r15_1)
    
    if (rsi_2 != 0)
        sub_140a74f90(rsi_2)

arg3.b = 1
int64_t* var_90
int32_t result = sub_141980430(arg2, &var_90, arg3.b)
int64_t* rcx_16 = var_90

if (rcx_16 != 0)
    result = rcx_16[9].d
    rcx_16[9].d -= 1
    
    if (result == 1)
        result = sub_140a2f6e0(rcx_16)

__security_check_cookie(rax_1 ^ &var_c8)
return result
