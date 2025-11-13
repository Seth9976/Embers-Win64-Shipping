// 函数: sub_141bbcf70
// 地址: 0x141bbcf70
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_1a8
int64_t rax_1 = __security_cookie ^ &var_1a8
void* rax_2 = *(arg1 + 0x3a0)

if (rax_2 == 0)
label_141bbd23f:
    *arg2 = 0
    *(arg2 + 8) = 0
    *(arg2 + 0x10) = 0
    arg2[0x20] = 0
    __builtin_memset(&arg2[0x28], 0, 0x88)
    *(arg2 + 0xb4) &= 0xffffff00
    *(arg2 + 0xb0) = 0x20702
else
    int32_t rax_3 = *(rax_2 + 0xc)
    void* const rax_10
    
    if (rax_3 s>= data_143e1d9b4)
        rax_10 = nullptr
    else
        int16_t temp0_1
        int32_t temp1_1
        temp0_1:temp1_1 = sx.q(rax_3)
        uint32_t rdx_1 = zx.d(temp0_1)
        int32_t rax_5 = temp1_1 + rdx_1
        rax_10 =
            *(data_143e1d9a0 + (sx.q(rax_5 s>> 0x10) << 3)) + sx.q(zx.d(rax_5.w) - rdx_1) * 0x18
    
    if (((*(rax_10 + 8) u>> 0x1c).b & 1) != 0)
        goto label_141bbd23f
    
    char var_168 = 0
    char* var_150_1 = &var_168
    void*** (* var_158)() = sub_140884c50
    
    if (*(sub_140a756e0(&var_158, &data_14397f5f0) + 0x20) != 0)
        goto label_141bbd23f
    
    int64_t* rcx_5 = *(arg1 + 0x3a0)
    void* var_160 = nullptr
    (*(*rcx_5 + 0x3f8))(rcx_5, arg3, arg4, &var_160)
    
    if (var_160 == 0)
        goto label_141bbd23f
    
    int64_t zmm1_1 = *(arg3 + 0xc)
    int64_t* rcx_6 = *(arg1 + 0x3a0)
    var_158 = *(arg4 + 0x18)
    int64_t var_148 = zmm1_1
    int128_t zmm0_2 = sub_141bb2040(rcx_6, zmm1_1.d)
    int64_t* rbx_1 = *(arg1 + 0x10)
    int64_t r14_1 = 0
    
    if (rbx_1 != 0)
        int32_t rax_15 = rbx_1[1].d
        
        if (rax_15 != 0)
            rbx_1[1].d = rax_15 + 1
            rax_15.b = 1
        
        if (rax_15.b == 0)
            rbx_1 = nullptr
        
        if (rbx_1 != 0)
            int32_t rax_16 = rbx_1[1].d
            r14_1 = *(arg1 + 8)
            rbx_1[1].d = rax_16
            
            if (rax_16 == 0)
                (**rbx_1)(rbx_1)
                int32_t temp4_1 = *(rbx_1 + 0xc)
                *(rbx_1 + 0xc) -= 1
                
                if (temp4_1 == 1)
                    (*(*rbx_1 + 8))(rbx_1, 1)
    
    int64_t var_140 = r14_1
    int64_t* var_138_1 = rbx_1
    
    if (rbx_1 != 0)
        rbx_1[1].d += 1
    
    void*** var_130
    sub_141bbb630(&var_130, var_160, *(arg4 + 0x50), &var_158, zmm0_2, &var_148, zmm0_2.d, &var_140)
    
    if (rbx_1 != 0)
        rbx_1[1].d -= 1
        
        if (rbx_1[1].d == 1)
            (**rbx_1)(rbx_1)
            int32_t temp3_1 = *(rbx_1 + 0xc)
            *(rbx_1 + 0xc) -= 1
            
            if (temp3_1 == 1)
                (*(*rbx_1 + 8))(rbx_1, 1)
    
    int64_t* var_128
    
    if (var_128 != 0)
        var_128[1].d += 1
    
    int32_t var_64
    int32_t var_64_1 = var_64 & 0xffffff00
    char var_118 = 1
    int512_t zmm1_2
    zmm1_2.o = zx.o(0)
    int64_t var_110_1 = 0
    int64_t var_108_1 = 0
    char var_f8_1 = 0
    int64_t var_f0
    __builtin_memset(&var_f0, 0, 0x78)
    int64_t var_70_1 = 0
    int32_t var_68_1 = 0x20702
    
    if (var_128 != 0)
        var_128[1].d += 1
    
    void*** var_78_1 = var_130
    
    if (var_128 != 0)
        var_128[1].d -= 1
        int64_t* var_70_2 = var_128
        
        if (var_128[1].d == 1)
            (**var_128)(var_128)
            int32_t temp7_1 = *(var_128 + 0xc)
            *(var_128 + 0xc) -= 1
            
            if (temp7_1 == 1)
                (*(*var_128 + 8))(var_128, 1)
    
    sub_140596b00(arg2, &var_118)
    sub_140597700(&var_118)
    
    if (var_128 != 0)
        var_128[1].d -= 1
        
        if (var_128[1].d == 1)
            int64_t r8_2 = *var_128
            (*r8_2)(var_128, zmm1_2, r8_2)
            int32_t temp8_1 = *(var_128 + 0xc)
            *(var_128 + 0xc) -= 1
            
            if (temp8_1 == 1)
                int64_t r8_3 = *var_128
                (*(r8_3 + 8))(var_128, 1, r8_3)

__security_check_cookie(rax_1 ^ &var_1a8)
return arg2
