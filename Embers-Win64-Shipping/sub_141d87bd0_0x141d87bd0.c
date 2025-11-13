// 函数: sub_141d87bd0
// 地址: 0x141d87bd0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_148
int64_t rax_1 = __security_cookie ^ &var_148
int64_t* rcx = data_143f0f180
char result

if (rcx != 0)
    result = (*(*rcx + 0x410))(rcx)

if (rcx == 0 || result == 0)
    int64_t var_f0
    sub_140e12930(arg1[1], &var_f0, arg2)
    sub_140e8c780(data_143e29f28, 0)
    int512_t zmm6_1
    zmm6_1.o = zx.o(0)
    uint128_t zmm0 = zx.o(var_f0)
    int64_t* rcx_3 = arg1[1]
    char var_3c
    char var_3c_1 = var_3c & 0xfe
    int128_t var_54_1 = data_142d8c9b0
    int64_t var_44_1 = 0
    uint64_t var_70 = zmm0.q
    int64_t var_64_1 = 0
    float var_68_1 = 1f
    int64_t var_5c_1 = 0
    sub_140e25880(rcx_3, 0x3f800000, zmm0)
    int64_t var_fc_1 = 0
    float var_100_1 = var_70.d * var_68_1
    float var_f4_1 = var_70:4.d * var_68_1
    int32_t var_108 = var_64_1.d
    int32_t var_104_1 = var_64_1:4.d
    void var_b0
    int32_t zmm6_2 = sub_140dbe170(&var_108, &var_b0)
    void* rcx_5 = arg1[1]
    int32_t* rax_3 = rcx_5 + 0x7a8
    
    if (not(zmm6_2 f!= *rax_3))
        rax_3 = rcx_5 + 0x7a0
    
    int64_t* rbx_1 = arg1[3]
    int64_t var_e8 = *rax_3
    sub_140dbd970(rbx_1, sub_140e15940(rcx_5, &var_108), &var_e8, &data_143dbb1f0)
    sub_140d9b4f0(arg1[3])
    int64_t* rcx_8 = arg1[5]
    void* rax_6 = (*(*rcx_8 + 8))(rcx_8)
    var_108.q = arg1[1]
    void* rcx_10 = arg1[2]
    var_100_1.q = rcx_10
    
    if (rcx_10 != 0)
        *(rcx_10 + 8) += 1
    
    int64_t* rax_7 = sub_140de79b0(rax_6, &var_108)
    sub_1409786b0(rax_7, *arg1)
    int64_t* rcx_13 = data_143e29f28
    int64_t rbx_2 = arg1[3]
    uint128_t zmm0_3
    zmm0_3.q = rcx_13[0x6b] f- rcx_13[0x6c]
    int64_t rdx_7 = *rcx_13
    float temp0_1 = _mm_cvtpd_ps(zmm0_3)
    (*(rdx_7 + 0x50))(rcx_13, rdx_7)
    void var_a0
    sub_140dd8910(&var_a0, 0, rbx_2, data_143dbb1f0, zmm0_3.q, temp0_1)
    char* rbx_4 = arg1[1] + 0x190
    
    if (*(rbx_4 + 0x10) != 0)
        int64_t* rcx_15 = *(rbx_4 + 8)
        
        if (rcx_15 != 0 && (*(*rcx_15 + 0x28))(rcx_15) != 0)
            int64_t* rcx_16
            
            if (*(rbx_4 + 0x10) == 0)
                rcx_16 = nullptr
            else
                rcx_16 = *(rbx_4 + 8)
            
            *rbx_4 = (*(*rcx_16 + 0x48))(rcx_16)
    
    char rax_12 = *rbx_4
    float zmm3_2 = data_14399f5c0.d
    int64_t* rcx_17 = arg1[1]
    int32_t zmm4_1 = data_14399f5c0:4.d
    float zmm5_1 = data_14399f5c0:8.d
    float zmm6_3 = data_14399f5c0:0xc.d
    float var_e0
    int128_t* var_118_1 = &var_e0
    int128_t var_d0_1 = data_14399f5c0
    int32_t var_120_2 = 0
    float var_c0_1 = 0.600000024f * zmm3_2
    int128_t zmm0_4
    zmm0_4.d = 0.600000024f f* zmm4_1
    float var_b8_1 = 0.600000024f * zmm5_1
    var_e0 = zmm3_2
    int32_t var_dc_1 = zmm4_1
    float var_d8_1 = zmm5_1
    float var_d4_1 = zmm6_3
    int32_t var_bc_1 = zmm0_4.d
    float var_b4_1 = 0.600000024f * zmm6_3
    sub_140e1f680(rcx_17, &var_a0, &var_70, &var_b0, rax_7, var_120_2, var_118_1, rax_12)
    int64_t* rcx_18 = arg1[5]
    result = (*(*rcx_18 + 0x48))(rcx_18, rax_6)
    *(rax_6 + 0x38) = data_143dbb1f0

__security_check_cookie(rax_1 ^ &var_148)
return result
