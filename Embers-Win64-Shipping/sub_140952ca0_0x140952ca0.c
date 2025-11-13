// 函数: sub_140952ca0
// 地址: 0x140952ca0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* rdx = *(arg1 + 0x58)
int64_t rcx = data_143f5b298
int64_t var_d8 = 0
int64_t arg_8 = 0
int64_t var_90 = 0
int64_t* var_88 = nullptr
sub_1423de540(rcx, rdx, 0)
int64_t* rax = sub_14093f850(&var_d8)
wchar16 const* const var_78 = u"QuitMatch"
int16_t* const r15 = &data_142d40450

if (rax == 0)
    int64_t arg_10 = 0
    int16_t* var_d0
    sub_140a2e390(&var_d0, u"%s - Invalid or uninitialized OnlineSubsystem", u"QuitMatch")
    int16_t* const rcx_3 = &data_142d40450
    int32_t var_c8
    
    if (var_c8 != 0)
        rcx_3 = var_d0
    
    sub_140d23f50(rcx_3, 3)
    int16_t* rcx_4 = var_d0
    
    if (rcx_4 != 0)
        sub_140a74f90(rcx_4)

sub_140971be0(&var_90, sub_140d3c6e0(arg1 + 0x50))
int64_t result

if (var_90 == 0 || rax == 0)
    result = sub_1405a9f90(arg1 + 0x40, 0)
else
    int64_t* var_a0
    (*(*rax + 0xf8))(rax, &var_a0)
    int64_t* r12_1 = var_a0
    int64_t* var_98
    
    if (r12_1 == 0)
        int64_t arg_20 = 0
        sub_140d23f50(u"Turn Based Matches not supported by Online Subsystem", 3)
    label_140953063:
        
        if (var_98 == 0)
            result = sub_1405a9f90(arg1 + 0x40, 0)
        else
            var_98[1].d -= 1
            
            if (var_98[1].d == 1)
                (**var_98)(var_98)
                int32_t rdi_2 = *(var_98 + 0xc)
                *(var_98 + 0xc) -= 1
                
                if (rdi_2 == 1)
                    (*(*var_98 + 8))(var_98, zx.q(rdi_2))
            
            result = sub_1405a9f90(arg1 + 0x40, 0)
    else
        int64_t* var_e8
        void var_60
        (*(*r12_1 + 0x38))(r12_1, &var_e8, sub_140596d10(&var_60, arg1 + 0x60))
        int64_t* var_e0
        
        if (var_e8 == 0)
            int16_t* const r8_4
            
            if (*(arg1 + 0x68) == 0)
                r8_4 = &data_142d40450
            else
                r8_4 = *(arg1 + 0x60)
            
            int16_t* var_b0
            sub_140a2e390(&var_b0, u"Match ID %s not found", r8_4)
            int64_t arg_18 = 0
            int32_t var_a8
            
            if (var_a8 != 0)
                r15 = var_b0
            
            sub_140d23f50(r15, 3)
            int16_t* rcx_24 = var_b0
            
            if (rcx_24 != 0)
                sub_140a74f90(rcx_24)
            
            if (var_e0 != 0)
                var_e0[1].d -= 1
                
                if (var_e0[1].d == 1)
                    (**var_e0)(var_e0)
                    int32_t rax_18 = *(var_e0 + 0xc)
                    *(var_e0 + 0xc) -= 1
                    
                    if (rax_18 == 1)
                        (*(*var_e0 + 8))(var_e0, 1)
            
            goto label_140953063
        
        int64_t* result_1 = nullptr
        int32_t var_f0_1 = 0
        void*** rax_4 = sub_140a84c80(0, 0x30, 0)
        void*** var_70_1 = rax_4
        int64_t* result_3
        
        if (rax_4 != 0)
            *rax_4 = &data_142e344d8
            sub_140d3a3a0(&rax_4[1], arg1)
            rax_4[2] = sub_14095d7c0
            rax_4[4] = sub_140a387b0()
            *rax_4 = &data_142e34530
            sub_140956e00(rax_4, &result_1)
            result_3 = result_1
        else if (var_f0_1 == 0)
            result_3 = result_1
        else
            result_3 = result_1
            
            if (result_3 != 0)
                (*(*result_3 + 0x38))(result_3, 0)
                result_3 = result_1
                
                if (result_3 != 0)
                    int64_t* result_2 = sub_140a84c80(result_3, 0, 0)
                    result_3 = result_2
                    result_1 = result_2
        
        if (rax_4 != 0)
            (*rax_4)[7](rax_4, 0)
            int64_t rax_7 = sub_140a84c80(rax_4, 0, 0)
            int64_t var_70_2 = rax_7
            
            if (rax_7 != 0)
                sub_140a74f90(rax_7)
            
            result_3 = result_1
        
        int64_t* rbx_3 = var_e8
        int64_t var_c0 = 0
        int32_t var_b8_1 = 0
        
        if (var_f0_1 != 0 && result_3 != 0)
            (*(*result_3 + 0x40))(result_3, &var_c0)
        
        result = (*(*rbx_3 + 0x60))(rbx_3, zx.q(*(arg1 + 0x70)), zx.q(*(arg1 + 0x74)), &var_c0)
        
        if (var_f0_1 == 0)
            result = result_1
        label_140952f3d:
            
            if (result != 0)
                result = sub_140a74f90(result)
        else
            int64_t* result_4 = result_1
            
            if (result_4 != 0)
                (*(*result_4 + 0x38))(result_4, 0)
                result = result_1
                
                if (result != 0)
                    result = sub_140a84c80(result, 0, 0)
                    result_1 = result
                
                int32_t var_f0_2 = 0
                goto label_140952f3d
        
        if (var_e0 != 0)
            result = zx.q(var_e0[1].d)
            var_e0[1].d -= 1
            
            if (result.d == 1)
                (**var_e0)(var_e0)
                result = zx.q(*(var_e0 + 0xc))
                *(var_e0 + 0xc) -= 1
                
                if (result.d == 1)
                    result = (*(*var_e0 + 8))(var_e0, 1)
        
        if (var_98 != 0)
            result = zx.q(var_98[1].d)
            var_98[1].d -= 1
            
            if (result.d == 1)
                result = (**var_98)(var_98)
                int32_t rdi_1 = *(var_98 + 0xc)
                *(var_98 + 0xc) -= 1
                
                if (rdi_1 == 1)
                    result = (*(*var_98 + 8))(var_98, zx.q(rdi_1))

if (var_88 != 0)
    var_88[1].d -= 1
    
    if (var_88[1].d == 1)
        result = (**var_88)(var_88)
        int32_t temp2_1 = *(var_88 + 0xc)
        *(var_88 + 0xc) -= 1
        
        if (temp2_1 == 1)
            return (*(*var_88 + 8))(var_88, 1)

return result
