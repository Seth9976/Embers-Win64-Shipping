// 函数: sub_140950bd0
// 地址: 0x140950bd0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* rdx = *(arg1 + 0x78)
int64_t arg_8 = 0
int64_t arg_20 = 0
int64_t rcx = data_143f5b298
int128_t var_58 = zx.o(0)
sub_1423de540(rcx, rdx, 0)
int64_t* rax = sub_14093f850(&arg_20)
wchar16 const* const var_40 = u"WriteAchievementObject"

if (rax == 0)
    int64_t arg_10 = 0
    int16_t* var_88
    sub_140a2e390(&var_88, %s - Invalid or uninitialized OnlineSubsystem", WriteAchievementObject")
    int16_t* const rcx_3 = &data_142d40450
    int32_t var_80
    
    if (var_80 != 0)
        rcx_3 = var_88
    
    sub_140d23f50(rcx_3, 3)
    int16_t* rcx_4 = var_88
    
    if (rcx_4 != 0)
        sub_140a74f90(rcx_4)

sub_140971be0(&var_58, sub_140d3c6e0(arg1 + 0x50))
int64_t r14 = var_58.q
void*** result

if (r14 == 0 || rax == 0)
label_140950e51:
    int32_t zmm0_1 = *(arg1 + 0x70)
    int64_t var_68 = *(arg1 + 0x68)
    int32_t var_5c_1 = *(arg1 + 0x74)
    int32_t var_60_1 = zmm0_1
    sub_1405a9f90(arg1 + 0x40, &var_68)
    int64_t* var_a0 = nullptr
    void** var_a8
    result = &var_a8
    
    if (arg1 + 0x58 != &var_a8)
        *(arg1 + 0x58) = 0
        var_a8 = nullptr
        result = sub_1405aeff0(arg1 + 0x60, &var_a0)
        int64_t* rcx_21 = var_a0
        
        if (rcx_21 != 0)
            result = zx.q(rcx_21[1].d)
            rcx_21[1].d -= 1
            
            if (result.d == 1)
                int64_t* rbx_5 = var_a0
                result = (**rbx_5)(rbx_5)
                int32_t rdi_2 = *(rbx_5 + 0xc)
                *(rbx_5 + 0xc) -= 1
                
                if (rdi_2 == 1)
                    int64_t* rcx_15 = var_a0
                    result = (*(*rcx_15 + 8))(rcx_15, 1)
else
    int64_t* var_98
    (*(*rax + 0xb0))(rax, &var_98)
    int64_t* var_90
    
    if (var_98 == 0)
        int64_t arg_18 = 0
        sub_140d23f50(u"WriteAchievementObject - Achievements not supported by Online Subsystem", 3)
        
        if (var_90 != 0)
            var_90[1].d -= 1
            
            if (var_90[1].d == 1)
                (**var_90)(var_90)
                int32_t rax_14 = *(var_90 + 0xc)
                *(var_90 + 0xc) -= 1
                
                if (rax_14 == 1)
                    (*(*var_90 + 8))(var_90, 1)
        
        goto label_140950e51
    
    int64_t var_78 = *(arg1 + 0x58)
    int64_t* rax_4 = *(arg1 + 0x60)
    
    if (rax_4 != 0)
        rax_4[1].d += 1
        r14 = var_58.q
    
    void*** result_1 = nullptr
    void*** result_2 = sub_140a84c80(0, 0x30, 0)
    result_1 = result_2
    int32_t var_b0_1 = 3
    
    if (result_2 != 0)
        *result_2 = &data_142e334f8
        sub_140d3a3a0(&result_2[1], arg1)
        result_2[2] = sub_14096aa60
        result_2[4] = sub_140a387b0()
        *result_2 = &data_142e33550
    
    int64_t* rcx_9 = var_98
    result = (*(*rcx_9 + 8))(rcx_9, r14, &var_78, &result_1)
    
    if (var_b0_1 == 0)
        result = result_1
    label_140950d7b:
        
        if (result != 0)
            result = sub_140a74f90(result)
    else
        void*** result_3 = result_1
        
        if (result_3 != 0)
            (*result_3)[7](result_3, 0)
            result = result_1
            
            if (result != 0)
                result = sub_140a84c80(result, 0, 0)
                result_1 = result
            
            int32_t var_b0_2 = 0
            goto label_140950d7b
    
    if (rax_4 != 0)
        result = zx.q(rax_4[1].d)
        rax_4[1].d -= 1
        
        if (result.d == 1)
            (**rax_4)(rax_4)
            result = zx.q(*(rax_4 + 0xc))
            *(rax_4 + 0xc) -= 1
            
            if (result.d == 1)
                result = (*(*rax_4 + 8))(rax_4, 1)
    
    if (var_90 != 0)
        result = zx.q(var_90[1].d)
        var_90[1].d -= 1
        
        if (result.d == 1)
            result = (**var_90)(var_90)
            int32_t rdi_1 = *(var_90 + 0xc)
            *(var_90 + 0xc) -= 1
            
            if (rdi_1 == 1)
                result = (*(*var_90 + 8))(var_90, 1)

int64_t* rbx_6 = var_58:8.q

if (rbx_6 != 0)
    rbx_6[1].d -= 1
    
    if (rbx_6[1].d == 1)
        result = (**rbx_6)(rbx_6)
        int32_t temp2_1 = *(rbx_6 + 0xc)
        *(rbx_6 + 0xc) -= 1
        
        if (temp2_1 == 1)
            return (*(*rbx_6 + 8))(rbx_6, 1)

return result
