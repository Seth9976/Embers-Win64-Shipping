// 函数: sub_1409516d0
// 地址: 0x1409516d0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* rdx = *(arg1 + 0x58)
int64_t rcx = data_143f5b298
int64_t arg_8 = 0
int64_t arg_20 = 0
int64_t var_78 = 0
int64_t* var_70 = nullptr
sub_1423de540(rcx, rdx, 0)
int64_t* rax = sub_14093f850(&arg_20)
wchar16 const* const var_60 = u"EndMatch"

if (rax == 0)
    int64_t arg_10 = 0
    int16_t* var_a8
    sub_140a2e390(&var_a8, u"%s - Invalid or uninitialized OnlineSubsystem", u"EndMatch")
    int16_t* const rcx_3 = &data_142d40450
    int32_t var_a0
    
    if (var_a0 != 0)
        rcx_3 = var_a8
    
    sub_140d23f50(rcx_3, 3)
    int16_t* rcx_4 = var_a8
    
    if (rcx_4 != 0)
        sub_140a74f90(rcx_4)

sub_140971be0(&var_78, sub_140d3c6e0(arg1 + 0x50))
int64_t result

if (var_78 == 0 || rax == 0)
    result = sub_1405a9f90(arg1 + 0x40, 0)
else
    int64_t* var_88
    (*(*rax + 0xf8))(rax, &var_88)
    int64_t* r14_1 = var_88
    int64_t* var_80
    
    if (r14_1 == 0)
        int64_t arg_18 = 0
        sub_140d23f50(u"Turn based games not supported by online subsystem", 3)
    label_140951a14:
        
        if (var_80 == 0)
            result = sub_1405a9f90(arg1 + 0x40, 0)
        else
            var_80[1].d -= 1
            
            if (var_80[1].d == 1)
                (**var_80)(var_80)
                int32_t rdi_2 = *(var_80 + 0xc)
                *(var_80 + 0xc) -= 1
                
                if (rdi_2 == 1)
                    (*(*var_80 + 8))(var_80, zx.q(rdi_2))
            
            result = sub_1405a9f90(arg1 + 0x40, 0)
    else
        int64_t* var_b8
        void var_48
        (*(*r14_1 + 0x38))(r14_1, &var_b8, sub_140596d10(&var_48, arg1 + 0x68))
        int64_t* var_b0
        
        if (var_b8 == 0)
            if (var_b0 != 0)
                var_b0[1].d -= 1
                
                if (var_b0[1].d == 1)
                    (**var_b0)(var_b0)
                    int32_t rax_18 = *(var_b0 + 0xc)
                    *(var_b0 + 0xc) -= 1
                    
                    if (rax_18 == 1)
                        (*(*var_b0 + 8))(var_b0, 1)
            
            goto label_140951a14
        
        int64_t result_1 = 0
        int32_t var_c0_1 = 0
        int64_t* rax_4 = sub_140a84c80(0, 0x30, 0)
        int64_t* var_58_1 = rax_4
        int64_t result_3
        
        if (rax_4 != 0)
            *rax_4 = &data_142e344d8
            sub_140d3a3a0(&rax_4[1], arg1)
            rax_4[2] = sub_14095d7c0
            rax_4[4] = sub_140a387b0()
            *rax_4 = &data_142e34530
            sub_140956e00(rax_4, &result_1)
            result_3 = result_1
        else if (var_c0_1 == 0)
            result_3 = result_1
        else
            result_3 = result_1
            
            if (result_3 != 0)
                (*(*result_3 + 0x38))(result_3, 0)
                result_3 = result_1
                
                if (result_3 != 0)
                    int64_t result_2 = sub_140a84c80(result_3, 0, 0)
                    result_3 = result_2
                    result_1 = result_2
        
        if (rax_4 != 0)
            (*(*rax_4 + 0x38))(rax_4, 0)
            int64_t rax_7 = sub_140a84c80(rax_4, 0, 0)
            int64_t var_58_2 = rax_7
            
            if (rax_7 != 0)
                sub_140a74f90(rax_7)
            
            result_3 = result_1
        
        int64_t* rbx_3 = var_b8
        int64_t var_98 = 0
        int32_t var_90_1 = 0
        
        if (var_c0_1 != 0 && result_3 != 0)
            (*(*result_3 + 0x40))(result_3, &var_98)
        
        result = (*(*rbx_3 + 0x68))(rbx_3, &var_98, zx.q(*(arg1 + 0x78)), zx.q(*(arg1 + 0x7c)))
        
        if (var_c0_1 == 0)
            result = result_1
        label_14095193b:
            
            if (result != 0)
                result = sub_140a74f90(result)
        else
            int64_t result_4 = result_1
            
            if (result_4 != 0)
                (*(*result_4 + 0x38))(result_4, 0)
                result = result_1
                
                if (result != 0)
                    result = sub_140a84c80(result, 0, 0)
                    result_1 = result
                
                int32_t var_c0_2 = 0
                goto label_14095193b
        
        if (var_b0 != 0)
            result = zx.q(var_b0[1].d)
            var_b0[1].d -= 1
            
            if (result.d == 1)
                (**var_b0)(var_b0)
                result = zx.q(*(var_b0 + 0xc))
                *(var_b0 + 0xc) -= 1
                
                if (result.d == 1)
                    result = (*(*var_b0 + 8))(var_b0, 1)
        
        if (var_80 != 0)
            result = zx.q(var_80[1].d)
            var_80[1].d -= 1
            
            if (result.d == 1)
                result = (**var_80)(var_80)
                int32_t rdi_1 = *(var_80 + 0xc)
                *(var_80 + 0xc) -= 1
                
                if (rdi_1 == 1)
                    result = (*(*var_80 + 8))(var_80, zx.q(rdi_1))

if (var_70 != 0)
    var_70[1].d -= 1
    
    if (var_70[1].d == 1)
        result = (**var_70)(var_70)
        int32_t temp2_1 = *(var_70 + 0xc)
        *(var_70 + 0xc) -= 1
        
        if (temp2_1 == 1)
            return (*(*var_70 + 8))(var_70, 1)

return result
