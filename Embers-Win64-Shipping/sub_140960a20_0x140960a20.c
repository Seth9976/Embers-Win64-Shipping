// 函数: sub_140960a20
// 地址: 0x140960a20
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t arg_18 = arg3
int32_t* r15 = arg5
*arg4 = 0
arg5 = nullptr
int64_t var_a0 = 0
*r15 = 0
int64_t rcx = data_143f5b298
int128_t var_70 = zx.o(0)
sub_1423de540(rcx, arg1, 0)
int64_t* rax = sub_14093f850(&var_a0)
wchar16 const* const var_58 = u"GetCachedAchievementProgress"

if (rax == 0)
    int64_t arg_20 = 0
    int16_t* var_98
    sub_140a2e390(&var_98, %s - Invalid or uninitialized OnlineSubsystem", 
        GetCachedAchievementProgress")
    int16_t* const rcx_3 = &data_142d40450
    int32_t var_90
    
    if (var_90 != 0)
        rcx_3 = var_98
    
    sub_140d23f50(rcx_3, 3)
    int16_t* rcx_4 = var_98
    
    if (rcx_4 != 0)
        sub_140a74f90(rcx_4)

int32_t result = sub_140971be0(&var_70, arg2)

if (var_70.q != 0 && rax != 0)
    int64_t* var_50
    (*(*rax + 0xb0))(rax, &var_50)
    int64_t* rdi_1 = var_50
    
    if (rdi_1 == 0)
        int64_t var_a8_1 = 0
        result = sub_140d23f50(u"Achievements not supported by Online Subsystem", 3)
    else
        int64_t var_88 = 0
        int64_t var_80_1 = 0
        int64_t rbx_2 = *rdi_1 + 0x20
        int64_t var_40
        int64_t* rax_2 = sub_140b63b70(&arg_18, &var_40)
        result = (*rbx_2)(rdi_1, var_70.q, rax_2, &var_88)
        int64_t rcx_9 = var_40
        rbx_2.b = result == 0
        
        if (rcx_9 != 0)
            result = sub_140a74f90(rcx_9)
        
        if (rbx_2.b != 0)
            int64_t var_78
            uint128_t zmm0_1 = _mm_cvtpd_ps(zx.o(var_78))
            *arg4 = 1
            *r15 = zmm0_1.d
        
        int64_t rcx_10 = var_88
        
        if (rcx_10 != 0)
            result = sub_140a74f90(rcx_10)
    
    int64_t* var_48
    
    if (var_48 != 0)
        result = var_48[1].d
        var_48[1].d -= 1
        
        if (result == 1)
            result = (**var_48)(var_48)
            int32_t rdi_2 = *(var_48 + 0xc)
            *(var_48 + 0xc) -= 1
            
            if (rdi_2 == 1)
                result = (*(*var_48 + 8))(var_48, zx.q(rdi_2))

int64_t* rbx_4 = var_70:8.q

if (rbx_4 != 0)
    rbx_4[1].d -= 1
    
    if (rbx_4[1].d == 1)
        result = (**rbx_4)(rbx_4)
        int32_t temp2_1 = *(rbx_4 + 0xc)
        *(rbx_4 + 0xc) -= 1
        
        if (temp2_1 == 1)
            return (*(*rbx_4 + 8))(rbx_4, 1)

return result
