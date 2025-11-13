// 函数: sub_1426884e0
// 地址: 0x1426884e0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_1b8
int64_t rax_1 = __security_cookie ^ &var_1b8
char r8 = 0
int32_t var_178 = 0
uint64_t result = arg1[0x95]

if (result == 0 || *(result + 8) == 0 || arg3.d f<= 0f)
    int64_t* rbx_4 = arg5[1]
    
    if (rbx_4 != 0)
        rbx_4[1].d -= 1
        
        if (rbx_4[1].d == 1)
            (**rbx_4)(rbx_4)
            int32_t rdi_4 = *(rbx_4 + 0xc)
            *(rbx_4 + 0xc) -= 1
            
            if (rdi_4 == 1)
                (*(*rbx_4 + 8))(rbx_4, zx.q(rdi_4))
    
    result.b = 0
else
    int64_t* rsi_1 = arg5[1]
    void* r13_1 = *arg5
    
    if (rsi_1 != 0)
        rsi_1[1].d += 1
    
    int64_t* var_168
    int64_t* rcx
    
    if (r13_1 != 0)
        rcx = var_168
    else
        r8 = (r13_1 + 1).b
        r13_1 = arg1[0x67]
        rcx = arg1[0x68]
        var_168 = rcx
        
        if (rcx != 0)
            rcx[1].d += 1
            rcx = var_168
    
    if ((r8 & 1) != 0 && rcx != 0)
        rcx[1].d -= 1
        
        if (rcx[1].d == 1)
            (**var_168)(var_168)
            int32_t rax_5 = *(var_168 + 0xc)
            *(var_168 + 0xc) -= 1
            
            if (rax_5 == 1)
                (*(*var_168 + 8))(var_168, 1)
    
    if (rsi_1 != 0)
        rsi_1[1].d -= 1
        
        if (rsi_1[1].d == 1)
            (**rsi_1)(rsi_1)
            int32_t rdi_1 = *(rsi_1 + 0xc)
            *(rsi_1 + 0xc) -= 1
            
            if (rdi_1 == 1)
                (*(*rsi_1 + 8))(rsi_1, zx.q(rdi_1))
    
    void* rax_11 = (*(*arg1 + 0x150))(arg1)
    void* const rbx_2
    
    if (rax_11 == 0)
        rbx_2 = nullptr
    else
        rbx_2 = *(rax_11 + 0x120)
        void* rax_12
        int64_t rax_13
        void* rdx_1
        
        if (rbx_2 != 0)
            rax_12 = sub_14269bba0()
            rdx_1 = *(rbx_2 + 0x10)
            rax_13 = sx.q(*(rax_12 + 0x38))
        
        if (rbx_2 == 0 || rax_13.d s> *(rdx_1 + 0x38)
                || *(*(rdx_1 + 0x30) + (rax_13 << 3)) != rax_12 + 0x30)
            rbx_2 = nullptr
    
    void** const var_118 = &data_143459760
    void* const var_110_1 = rbx_2
    void var_108
    sub_140d3a3a0(&var_108, arg6)
    int64_t var_100_1 = 0
    void var_f8
    sub_1426022c0(&var_f8)
    uint32_t rax_15
    
    if (data_143de5480 != 0)
        rax_15.b = GetCurrentThreadId() == data_143de5470
    
    void* rdx_3
    void* rbx_3
    
    if (data_143de5480 == 0 || rax_15.b != 0)
        rdx_3 = arg1[0x95]
        rbx_3 = rdx_3 + 0x60
    else
        rdx_3 = arg1[0x95]
        rbx_3 = &var_f8
    
    int128_t zmm6
    int128_t var_48_1 = zmm6
    sub_142611af0(rbx_3, *(rdx_3 + 8), *(r13_1 + 0x20), &var_118)
    void* rdi_2 = *(r13_1 + 0x10)
    
    if (rdi_2 == 0 || rdi_2 == -8)
        goto label_1426888b1
    
    uint32_t zmm0_1[0x4] = __andps_xmmxud_memxud(*(arg1 + 0x26c), data_142d3f770)
    uint32_t zmm1_1[0x4] = __andps_xmmxud_memxud(arg1[0x4e].d, data_142d3f770)
    uint32_t var_130 = zmm0_1[0]
    int32_t var_12c_1 = 0x7f7fc99e
    uint32_t var_128_1 = zmm1_1[0]
    zmm1_1 = (*arg2)[1]
    uint32_t var_158 = (*arg2 ^ 0x80000000)[0]
    uint32_t var_154_1 = (*arg2)[2][0]
    uint32_t var_150_1 = (zmm1_1 ^ 0x80000000)[0]
    var_178.q = 0
    float zmm7_1[0x4] =
        sub_14260acd0(rbx_3, &var_158, &var_130, rdi_2 + 8, &var_178, nullptr, nullptr)
    int64_t rcx_11 = var_178.q
    
    if (rcx_11 == 0)
        goto label_142688888
    
    int64_t var_120
    float var_78
    int32_t rax_16
    rax_16, zmm6 =
        sub_14260cc60(rbx_3, rcx_11, &var_158, zmm7_1, rdi_2 + 8, sub_142681500, &var_120, &var_78)
    uint128_t zmm0_2
    
    if (((rax_16 u>> 0x1e).b & 1) == 0)
        rcx_11 = var_178.q
    label_142688888:
        var_168.d = (*arg2)[2]
        zmm0_2.q = *arg2
        *arg4 = zmm0_2
        arg4[1].q = rcx_11
    label_1426888b1:
        sub_142602500(&var_f8)
        var_118 = &data_143459748
        sub_1405970a0(arg5)
        result.b = 0
    else
        int32_t var_74
        var_168.d = var_74.d
        int64_t rax_19 = var_120
        int128_t* rax_20 = arg4
        int32_t var_70
        zmm0_2.q = (_mm_unpacklo_ps(var_78 ^ zmm6, (var_70 ^ zmm6).q)).q
        *rax_20 = zmm0_2
        rax_20[1].q = rax_19
        sub_142602500(&var_f8)
        var_118 = &data_143459748
        sub_1405970a0(arg5)
        result.b = 1

__security_check_cookie(rax_1 ^ &var_1b8)
return result
