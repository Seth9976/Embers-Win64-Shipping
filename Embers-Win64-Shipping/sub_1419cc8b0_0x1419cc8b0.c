// 函数: sub_1419cc8b0
// 地址: 0x1419cc8b0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_238
int64_t rax_1 = __security_cookie ^ &var_238
int64_t r13 = sx.q(arg3)
int32_t var_4c = 4
int32_t var_210 = 5
*arg2 = 0
int64_t rdx = *(arg1 + 0x88)
int64_t r12 = r13 * 0x18
void* var_58 = nullptr
int32_t i_2 = 0
int64_t* rcx = *(arg1 + 0x50)
int64_t* var_1f0
void var_78
(*(*rcx + 8))(rcx, &var_1f0, &var_78, *(arg1 + 0x48) + *(rdx + r12), zx.q(*(rdx + r12 + 8)), 
    var_210)
int32_t i_1 = i_2

if (i_1 s> 0)
    int64_t* rax_5 = sub_140a242a0()
    int64_t r9_2 = *rax_5
    (*(r9_2 + 0x48))(rax_5, &var_78, 0xff, r9_2)
    i_1 = i_2

void* rcx_3 = var_58
void* rbx = &var_78

if (rcx_3 != 0)
    rbx = rcx_3

if (i_1 != 0)
    int32_t i
    
    do
        int64_t* rcx_2 = *rbx
        
        if (rcx_2 != 0)
            rcx_2[9].d -= 1
            
            if (rcx_2[9].d == 1)
                sub_140a2f6e0(rcx_2)
        
        rbx += 8
        i = i_1
        i_1 -= 1
    while (i != 1)
    rcx_3 = var_58

if (rcx_3 != 0)
    sub_140a74f90(rcx_3)

if (var_1f0 != 0)
    char var_1f8 = 0
    char* var_168_1 = &var_1f8
    void*** (* var_170)() = j_sub_140597fc0
    void* rax_7 = sub_140a756e0(&var_170, &data_143958018)
    void* r15_2 = *(arg1 + 0x88) + r12
    int64_t* var_1e0 = rax_7 + 0x10
    int64_t rax_8 = *(rax_7 + 0x10)
    int64_t rax_9 = *(rax_7 + 0x20)
    char var_1c8_1 = 0
    int64_t rax_10 = *(rax_7 + 0x28)
    *(rax_7 + 0x28) = &var_1e0
    int64_t* rax_11 = var_1e0
    rax_11[4].d += 1
    uint64_t rdx_3 = zx.q(*(r15_2 + 0xc))
    int32_t var_208
    int32_t var_200
    int128_t* rbx_3
    
    if (rdx_3.d == *(r15_2 + 8))
        int64_t var_1b8 = 0
        int64_t* rcx_7 = var_1f0
        int128_t* rax_15 = (**rcx_7)(rcx_7, &var_1b8, 0, rdx_3)
        uint64_t rcx_8 = zx.q(*(r15_2 + 0xc))
        rbx_3 = rax_15
        
        if (var_1b8 != rcx_8)
            int64_t r12_2 = sx.q(rcx_8.d)
            rbx_3 = (*(rax_7 + 0x10) + 0xf) & 0xfffffffffffffff0
            void* rax_16 = r12_2 + rbx_3
            
            if (rax_16 u> *(rax_7 + 0x18))
                sub_140b0e3d0(rax_7 + 0x10, (rcx_8 + 0x10).d)
                rbx_3 = (*(rax_7 + 0x10) + 0xf) & 0xfffffffffffffff0
                rax_16 = r12_2 + rbx_3
            
            *(rax_7 + 0x10) = rax_16
            int64_t* rcx_10 = var_1f0
            (*(*rcx_10 + 0x10))(rcx_10, rbx_3, 0, zx.q(*(r15_2 + 0xc)))
    else
        int64_t r12_1 = sx.q(rdx_3.d)
        rbx_3 = (*(rax_7 + 0x10) + 0xf) & 0xfffffffffffffff0
        void* rax_12 = rbx_3 + r12_1
        
        if (rax_12 u> *(rax_7 + 0x18))
            sub_140b0e3d0(rax_7 + 0x10, rdx_3.d + 0x10)
            rbx_3 = (*(rax_7 + 0x10) + 0xf) & 0xfffffffffffffff0
            rax_12 = rbx_3 + r12_1
        
        *(rax_7 + 0x10) = rax_12
        var_200 = 0
        var_208 = 0
        var_210 = *(r15_2 + 8)
        sub_140b025b0(data_143f1ee18.q, rbx_3, *(r15_2 + 0xc), var_1f0, 0, var_210, var_208, 
            var_200)
    
    uint64_t r8_2 = zx.q(*(r15_2 + 0x10))
    int32_t rdx_9 = *(r15_2 + 0xc)
    int128_t* rsi_1 = *(arg1 + 0x68) + r13 * 0x14
    
    if (r8_2.d u<= 9)
        switch (r8_2)
            case 0
                int64_t* rcx_15 = data_143f0f180
                int32_t var_150_1 = rdx_9
                int64_t rax_20 = *rcx_15
                int128_t var_e8 = rbx_3.o
                void* var_1b0
                (*(rax_20 + 0x4e0))(rcx_15, &var_1b0, &data_143f02b98, &var_e8, rsi_1, var_210, 
                    var_208, var_200)
                sub_1405d16e0(arg2, var_1b0)
                sub_141962470(&var_1b0)
            case 1
                int64_t* rcx_24 = data_143f0f180
                int32_t var_120_1 = rdx_9
                int64_t rax_23 = *rcx_24
                int128_t var_b8 = rbx_3.o
                void* var_198
                (*(rax_23 + 0x500))(rcx_24, &var_198, &data_143f02b98, &var_b8, rsi_1, var_210, 
                    var_208, var_200)
                sub_1405d16e0(arg2, var_198)
                sub_141962470(&var_198)
            case 2
                int64_t* rcx_27 = data_143f0f180
                int32_t var_110_1 = rdx_9
                int64_t rax_24 = *rcx_27
                int128_t var_a8 = rbx_3.o
                void* var_190
                (*(rax_24 + 0x508))(rcx_27, &var_190, &data_143f02b98, &var_a8, rsi_1, var_210, 
                    var_208, var_200)
                sub_1405d16e0(arg2, var_190)
                sub_141962470(&var_190)
            case 3
                int64_t* rcx_18 = data_143f0f180
                int32_t var_140_1 = rdx_9
                int64_t rax_21 = *rcx_18
                int128_t var_d8 = rbx_3.o
                void* var_1a8
                (*(rax_21 + 0x4e8))(rcx_18, &var_1a8, &data_143f02b98, &var_d8, rsi_1, var_210, 
                    var_208, var_200)
                sub_1405d16e0(arg2, var_1a8)
                sub_141962470(&var_1a8)
            case 4
                int64_t* rcx_21 = data_143f0f180
                int32_t var_130_1 = rdx_9
                int64_t rax_22 = *rcx_21
                int128_t var_c8 = rbx_3.o
                void* var_1a0
                (*(rax_22 + 0x4f0))(rcx_21, &var_1a0, &data_143f02b98, &var_c8, rsi_1, var_210, 
                    var_208, var_200)
                sub_1405d16e0(arg2, var_1a0)
                sub_141962470(&var_1a0)
            case 5
                int64_t* rcx_30 = data_143f0f180
                int32_t var_100_1 = rdx_9
                int64_t rax_25 = *rcx_30
                int128_t var_98 = rbx_3.o
                void* var_188
                (*(rax_25 + 0x4f8))(rcx_30, &var_188, &data_143f02b98, &var_98, rsi_1, var_210, 
                    var_208, var_200)
                sub_1405d16e0(arg2, var_188)
                sub_1405d1550(&var_188)
            case 6, 7, 8, 9
                if (data_143f0f21f != 0)
                    int32_t var_f0_1 = rdx_9
                    uint64_t var_218
                    var_218.b = r8_2.b
                    int128_t zmm0_1 = rbx_3.o
                    int64_t rax_26 = *data_143f0f180
                    int128_t var_88 = zmm0_1
                    void* var_180
                    (*(rax_26 + 0x700))(zmm0_1, &var_180, &var_88, rsi_1, var_218, var_210, 
                        var_208, var_200)
                    sub_1405d16e0(arg2, var_180)
                    sub_1405d1550(&var_180)
    
    void* rcx_36 = *arg2
    
    if (rcx_36 != 0)
        *(rcx_36 + 0x18) = *rsi_1
        *(rcx_36 + 0x28) = rsi_1[1].d
    
    if (var_1c8_1 == 0)
        int64_t* rax_28 = var_1e0
        char var_1c8_2 = 1
        rax_28[4].d -= 1
        int64_t* rcx_37 = var_1e0
        
        if (rax_9 != rcx_37[2])
            sub_140b16b40(rcx_37, rax_9)
            rcx_37 = var_1e0
        
        *rcx_37 = rax_8
        var_1e0[3] = rax_10
    
    int64_t* rcx_39 = var_1f0
    
    if (rcx_39 != 0)
        int32_t r14_1 = rcx_39[1].d
        rcx_39[1].d -= 1
        
        if (r14_1 == 1 && rcx_39 != 0)
            int64_t r8_4 = *rcx_39
            (*(r8_4 + 0x18))(rcx_39, zx.q(r14_1), r8_4)

__security_check_cookie(rax_1 ^ &var_238)
return arg2
