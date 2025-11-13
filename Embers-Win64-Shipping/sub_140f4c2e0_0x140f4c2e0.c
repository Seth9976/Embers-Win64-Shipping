// 函数: sub_140f4c2e0
// 地址: 0x140f4c2e0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_1c8
int64_t rax_1 = __security_cookie ^ &var_1c8
int32_t zmm1 = data_14399f65c
void* r9_1 = **(arg1 + 0x388)
char rcx = data_143e20cf4
int64_t* r15 = nullptr
uint64_t var_118 = 0
int32_t var_110 = 0
int32_t var_128 = data_14399f658
int32_t var_124 = zmm1
char var_120 = 1
int128_t zmm6
uint128_t zmm7
int128_t zmm8
zmm6, zmm7, zmm8 = sub_140f1aa80(rcx, arg2, arg3, r9_1, &var_128)
int32_t result = sub_140745b20(&var_118)
int64_t* rsi = *(arg1 + 0x2b8)
int64_t rcx_2 = 0

if (rsi != 0)
    result = rsi[1].d
    
    if (result == 0)
        rsi = nullptr
    else
        result += 1
        rsi[1].d = result
        rcx_2 = *(arg1 + 0x2b0)

if (*(arg1 + 0x340) != 0 && *(arg1 + 0x358) == 1 && rcx_2 != 0)
    uint128_t var_58_1 = zmm7
    int128_t var_68_1 = zmm8
    void* rbx_1 = *(*(*(arg1 + 0x388) + 8) + 0x20)
    int32_t* rax_3 = sub_140ebd5a0(arg1 + 0x320)
    uint64_t var_188
    int32_t var_150
    sub_140f20380(&var_150, arg2, sub_140e13cf0(rbx_1, &var_188), *rax_3)
    zmm7 = *(arg1 + 0x364)
    zmm8 = *(arg1 + 0x368)
    void* rdi_2 = *(*(arg1 + 0x388) + 8)
    int32_t var_170 = 0x3f800000
    int32_t var_16c_1 = zmm7.d
    int32_t var_168_1 = zmm8.d
    int128_t* rcx_8 = *(rdi_2 + 0x20) + 0x1c8
    uint128_t var_f0
    uint128_t zmm0_1
    uint128_t zmm1_1
    
    if (data_143e20cf4 != 0)
        uint128_t* rax_7 = sub_140e111c0(rcx_8)
        char rcx_9 = 0
        
        if (*(rax_7 + 0x18) == 0)
            zmm1_1 = var_128.o
        else
            zmm0_1 = zx.o(rax_7[1].q)
            rcx_9 = 1
            zmm1_1 = *rax_7
            var_118 = zmm0_1.q
            var_118.d = (zmm0_1 ^ data_142d3f780).d
        
        if (rcx_9 == 0)
            goto label_140f4c58c
        
        uint64_t var_e0_2 = var_118
        var_f0 = zmm1_1
        goto label_140f4c4ca
    
    int128_t* rax_6 = sub_140e111c0(rcx_8)
    
    if (*(rax_6 + 0x18) == 0)
    label_140f4c58c:
        var_128 = var_150.d
        int128_t var_48_1 = zmm6
        zmm6 = *(arg2 + 8)
        var_170.o = data_142d8c9b0
        int32_t var_14c
        int32_t var_124_1 = var_14c.d
        int32_t var_160_1 = zmm7.d
        int32_t var_15c_1 = zmm8.d
        int32_t var_10c
        uint128_t zmm7_1
        int128_t zmm8_1
        zmm7_1, zmm8_1 = sub_1408b8950(&var_10c, &var_170, arg2 + 0x1c)
        zmm1_1.d = zmm7_1.d f* zmm6.d
        int128_t zmm0_2
        zmm0_2.d = zmm8_1.d f* zmm6.d
        char var_f4
        char var_f4_1 = var_f4 ^ ((*(arg2 + 0x34) ^ var_f4) & 1)
        zmm1_1.d = zmm1_1.d f+ *(arg2 + 0xc)
        var_120.d = zmm6.d
        zmm0_2.d = zmm0_2.d f+ arg2[1].d
        var_118:4.d = zmm7_1.d
        int32_t var_11c_1 = zmm1_1.d
        int32_t var_110_1 = zmm8_1.d
        var_118.d = zmm0_2.d
    else
        zmm1_1 = zx.o(rax_6[1].q)
        var_f0 = *rax_6
        uint64_t var_e0_1 = zmm1_1.q
    label_140f4c4ca:
        int64_t* rbx_3 = *(rdi_2 + 0x20) + 0x1f8
        char var_d8_1 = 1
        
        if (rbx_3[3].d != 0)
            int64_t* rcx_10 = rbx_3[2]
            
            if (rcx_10 != 0 && (*(*rcx_10 + 0x28))(rcx_10) != 0)
                if (rbx_3[3].d != 0)
                    r15 = rbx_3[2]
                
                int64_t var_158
                (*(*r15 + 0x48))(r15, &var_158)
                *rbx_3 = var_158
        
        zmm0_1 = zx.o(*rbx_3)
        int32_t var_180 = (*(arg2 + 8)).d
        zmm1_1 = arg2[1].d
        int128_t* var_1a0_1 = &var_180
        var_188 = zmm0_1.q
        int32_t var_17c_1 = (*(arg2 + 0xc)).d
        int32_t var_178_1 = zmm1_1.d
        sub_140dd8200(&var_128, &var_150, &var_170, &var_f0, &var_188, var_1a0_1, arg2 + 0x1c)
    
    int64_t* rbx_4 = *(rdi_2 + 0x28)
    
    if (rbx_4 != 0)
        rbx_4[1].d += 1
    
    int64_t var_90_1 = *(rdi_2 + 0x20)
    zmm1_1 = var_118.o
    int128_t var_c8 = var_128.o
    uint128_t var_b8_1 = zmm1_1
    int64_t var_f8
    uint64_t var_98_1 = var_f8
    int128_t var_108
    int128_t var_a8_1 = var_108
    
    if (rbx_4 != 0)
        rbx_4[1].d += 1
        
        if (rbx_4 != 0)
            rbx_4[1].d -= 1
            
            if (rbx_4[1].d == 1)
                (**rbx_4)(rbx_4)
                int32_t temp5_1 = *(rbx_4 + 0xc)
                *(rbx_4 + 0xc) -= 1
                
                if (temp5_1 == 1)
                    (*(*rbx_4 + 8))(rbx_4, 1)
    
    result = sub_140d99900(arg3, &var_c8)
    
    if (rbx_4 != 0)
        rbx_4[1].d -= 1
        
        if (rbx_4[1].d == 1)
            result = (**rbx_4)(rbx_4)
            int32_t temp4_1 = *(rbx_4 + 0xc)
            *(rbx_4 + 0xc) -= 1
            
            if (temp4_1 == 1)
                result = (*(*rbx_4 + 8))(rbx_4, 1)

if (rsi != 0)
    rsi[1].d -= 1
    
    if (rsi[1].d == 1)
        result = (**rsi)(rsi)
        int32_t temp1_1 = *(rsi + 0xc)
        *(rsi + 0xc) -= 1
        
        if (temp1_1 == 1)
            result = (*(*rsi + 8))(rsi, 1)

__security_check_cookie(rax_1 ^ &var_1c8)
return result
