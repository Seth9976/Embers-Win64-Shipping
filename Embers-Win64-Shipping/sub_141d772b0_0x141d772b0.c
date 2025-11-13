// 函数: sub_141d772b0
// 地址: 0x141d772b0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_b8
int64_t rax_1 = __security_cookie ^ &var_b8
int64_t rax_2 = *arg1
wchar16 const (* r9)[0x5] = data_143a2adf8
int64_t var_80 = 0
int64_t var_98 = 0
int64_t var_88 = 0
int16_t* var_78
(*(rax_2 + 0x2d0))(arg1, &var_78, &var_88, r9, var_98)
int32_t var_70
int32_t result

if (arg1[0xf].d != 0)
    void* rdx_1 = *(arg1[0xe] + (sx.q(arg1[0xf].d) << 3) - 8)
    int16_t* const rcx_1 = &data_142d40450
    int16_t* rdx_2
    
    if (*(rdx_1 + 0x20) == 0)
        rdx_2 = &data_142d40450
    else
        rdx_2 = *(rdx_1 + 0x18)
    
    if (var_70 != 0)
        rcx_1 = var_78
    
    result = sub_140a54510(rcx_1, rdx_2)

if (arg1[0xf].d == 0 || result != 0)
    int32_t zmm6_1 = sub_141d782c0(arg1, &var_78)
    int64_t* rax_4 = sub_140b2b230(&var_88)
    int32_t rdx_4 = rax_4[1].d
    int32_t rdx_5 = neg.d(rdx_4)
    int16_t* var_68 = *rax_4
    *rax_4 = 0
    int32_t rcx_5 = rax_4[1].d
    int32_t rcx_6 = *(rax_4 + 0xc)
    rax_4[1] = 0
    int32_t rdx_8 = sbb.d(rdx_5, rdx_5, rdx_4 != 0) + 0xd + rcx_5
    
    if (rdx_8 s> rcx_6)
        sub_1405947f0(&var_68, rdx_8)
    
    sub_140a2cf70(&var_68, u"Capture.avi", 0xb)
    int64_t rcx_9 = var_88
    
    if (rcx_9 != 0)
        sub_140a74f90(rcx_9)
    
    int16_t* rcx_10 = var_68
    int32_t var_58_1 = 0x1e
    int32_t var_54_1 = 1
    char var_4c_1 = 0
    int64_t var_48
    __builtin_memset(&var_48, 0, 0x11)
    int64_t var_34_1 = 0
    
    if (rcx_10 != 0)
        sub_140a74f90(rcx_10)
    
    int64_t* rcx_11 = arg1[9]
    var_68 = var_78
    int32_t var_60_2 = var_70
    int32_t var_6c
    int32_t var_5c_2 = var_6c
    var_70.q = 0
    var_78 = nullptr
    int32_t var_58_2 = *(*(*rcx_11 + 0x10))(rcx_11, &var_88)
    int64_t* rcx_13 = arg1[9]
    int32_t var_54_2 = *((*(*rcx_13 + 0x10))(rcx_13, &var_88) + 4)
    int64_t* rcx_15 = arg1[9]
    int64_t* rax_13 = (*(*rcx_15 + 0x18))(rcx_15)
    int64_t rdx_11 = *rax_13
    char var_38_1 = (*(rdx_11 + 0x18))(rax_13, rdx_11)
    var_34_1.d = arg1[7].d
    var_34_1:4.d = *(arg1 + 0x3c)
    
    if (arg1[0xd].b != 0)
        float zmm0_1 = *(arg1 + 0x6c) * 0.00999999978f
        char var_4c_2 = 1
        var_88.d = 0x42c80000
        double zmm0_2
        
        if (sub_140b2abf0(&data_143dbb3f0, u"-MovieQuality=", &var_88, sub_140af2b60()) == 0)
            zmm0_2 = zmm0_1
        else
            zmm0_2 = var_88.d
            
            if (zmm0_2.d f>= 1f)
                zmm0_2.d = __minss_xmmss_memss(zmm0_2.d, 0x42c80000).q.d f* 0.00999999978f
            else
                zmm0_2.d = 1f * 0.00999999978f
        
        if (not(zmm0_2.d f< zmm6_1))
            zmm6_1 = _mm_min_ss(zmm0_2.d, 0x3f800000)
        
        int32_t var_50_2 = zmm6_1
        char var_4c_3 = 1
    
    int64_t rdi_1 = sx.q(arg1[0xf].d)
    int32_t rcx_17 = (rdi_1 + 1).d
    arg1[0xf].d = rcx_17
    
    if (rcx_17 s> *(arg1 + 0x7c))
        sub_1405a4d70(&arg1[0xe])
    
    *(arg1[0xe] + (rdi_1 << 3)) = 0
    int64_t* rcx_20 = *(arg1[0xe] + (sx.q(arg1[0xf].d) << 3) - 8)
    result = (*(*rcx_20 + 8))(rcx_20)
    int64_t rcx_21 = var_48
    
    if (rcx_21 != 0)
        result = sub_140a74f90(rcx_21)
    
    int16_t* rcx_22 = var_68
    char var_4c_4 = 0
    
    if (rcx_22 != 0)
        result = sub_140a74f90(rcx_22)

int16_t* rcx_23 = var_78

if (rcx_23 != 0)
    result = sub_140a74f90(rcx_23)

__security_check_cookie(rax_1 ^ &var_b8)
return result
