// 函数: sub_140f08790
// 地址: 0x140f08790
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_f8
int64_t rax_1 = __security_cookie ^ &var_f8
int64_t* var_c8
sub_140efd250(*arg2, &var_c8, arg3, arg5)
int32_t var_48
sub_140da8c00(var_c8, &var_48, *arg4, *(arg4 + 4), 1)
int64_t* var_c0
char var_44

if (var_44 == 0)
    int16_t var_ac_1 = arg3[3].w
    int64_t var_a8_1 = *(arg3 + 0x10)
    int64_t var_a0_1 = *(arg3 + 0x18)
    int32_t var_b0_1 = arg3[2].d
    int64_t var_78_1 = *(arg3 + 0x40)
    int64_t* rax_6 = *(arg3 + 0x48)
    uint128_t var_98_1 = *(arg3 + 0x20)
    uint128_t var_88_1 = *(arg3 + 0x30)
    
    if (rax_6 != 0)
        rax_6[1].d += 1
    
    int64_t* rcx_2 = *arg2
    int64_t var_68_1 = *(arg3 + 0x50)
    int32_t var_60_1 = arg3[0x16]
    char var_5c_1 = arg3[0x17].b
    int64_t var_b8 = *arg4
    void var_58
    int64_t* rax_11 = sub_140efd250(rcx_2, &var_58, &var_b8, arg5)
    int64_t* rcx_3 = var_c8
    int64_t** rdx_3 = rax_11
    var_c8 = *rax_11
    *rdx_3 = rcx_3
    int64_t* rcx_4 = var_c0
    var_c0 = rdx_3[1]
    rdx_3[1] = rcx_4
    int64_t* var_50
    
    if (var_50 != 0)
        var_50[1].d -= 1
        
        if (var_50[1].d == 1)
            (**var_50)(var_50)
            int32_t temp4_1 = *(var_50 + 0xc)
            *(var_50 + 0xc) -= 1
            
            if (temp4_1 == 1)
                (*(*var_50 + 8))(var_50, 1)
    
    var_48 = sub_140a478a0(var_c8)
    char var_44_1 = 1
    
    if (rax_6 != 0)
        rax_6[1].d -= 1
        
        if (rax_6[1].d == 1)
            (**rax_6)(rax_6)
            int32_t temp5_1 = *(rax_6 + 0xc)
            *(rax_6 + 0xc) -= 1
            
            if (temp5_1 == 1)
                (*(*rax_6 + 8))(rax_6, 1)

int64_t* rax_19 = var_c8
uint128_t zmm0_1 = _mm_cvtepi32_ps(zx.o(var_48))
char var_44_2 = 0
uint128_t zmm1_1 = zx.o(*(rax_19 + 0x12))
*arg1 = zmm0_1.d
zmm1_1 = _mm_cvtepi32_ps(zmm1_1)
arg1[1] = zmm1_1.d

if (var_c0 != 0)
    var_c0[1].d -= 1
    
    if (var_c0[1].d == 1)
        int64_t r8_2 = *var_c0
        (*r8_2)(var_c0, zmm1_1, r8_2)
        int32_t temp1_1 = *(var_c0 + 0xc)
        *(var_c0 + 0xc) -= 1
        
        if (temp1_1 == 1)
            int64_t r8_3 = *var_c0
            (*(r8_3 + 8))(var_c0, 1, r8_3)

__security_check_cookie(rax_1 ^ &var_f8)
return arg1
