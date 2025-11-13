// 函数: sub_140952940
// 地址: 0x140952940
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (sub_140d3e110(arg1 + 0x50) == 0)
    int64_t arg_8 = 0
    sub_140d23f50(A player controller must be provided in order to show the external login UI.", 3)
    int64_t var_a0 = sub_140d3c6e0(arg1 + 0x50)
    return sub_1405a9f90(arg1 + 0x40, &var_a0)

int64_t* rdx_2 = *(arg1 + 0x60)
int64_t rcx_3 = data_143f5b298
int64_t arg_10 = 0
int128_t var_68 = zx.o(0)
int64_t var_98 = 0
sub_1423de540(rcx_3, rdx_2, 0)
int64_t* rax_4 = sub_14093f850(&var_98)
wchar16 const* const var_50 = u"Logout"

if (rax_4 == 0)
    int64_t arg_18 = 0
    int16_t* var_78
    sub_140a2e390(&var_78, u"%s - Invalid or uninitialized OnlineSubsystem", u"Logout")
    int16_t* const rcx_6 = &data_142d40450
    int32_t var_70
    
    if (var_70 != 0)
        rcx_6 = var_78
    
    sub_140d23f50(rcx_6, 3)
    int16_t* rcx_7 = var_78
    
    if (rcx_7 != 0)
        sub_140a74f90(rcx_7)

sub_140971be0(&var_68, sub_140d3c6e0(arg1 + 0x50))
int32_t result

if (rax_4 != 0)
    int64_t* var_b0
    (*(*rax_4 + 0x80))(rax_4, &var_b0)
    
    if (var_b0 != 0)
        void* rax_9
        void* rdx_9
        rax_9, rdx_9 = sub_140d3c6e0(arg1 + 0x50)
        void* r14_1 = *(rax_9 + 0x298)
        void* rax_10
        int64_t rax_11
        
        if (r14_1 != 0)
            rax_10 = sub_142531230()
            rdx_9 = *(r14_1 + 0x10)
            rax_11 = sx.q(*(rax_10 + 0x38))
        
        if (r14_1 == 0 || rax_11.d s> *(rdx_9 + 0x38)
                || *(*(rdx_9 + 0x30) + (rax_11 << 3)) != rax_10 + 0x30)
            int64_t var_b8_1 = 0
            rdx_9.b = 3
            sub_140d23f50(u"Only local players can log out", rdx_9.b)
            int64_t var_80 = sub_140d3c6e0(arg1 + 0x50)
            result = sub_1405a9f90(arg1 + 0x40, &var_80)
        else
            int64_t r14_2 = sx.q(*(r14_1 + 0xb8))
            result = sub_140967a50(&var_b0[r14_2 * 3 + 0x1f], arg1)
            
            if (result.b == 0)
                int64_t* r15_1 = var_b0
                void*** var_c8 = nullptr
                void*** rax_14 = sub_140a84c80(0, 0x30, 0)
                var_c8 = rax_14
                int32_t var_c0_1 = 3
                
                if (rax_14 != 0)
                    *rax_14 = &data_142e33df8
                    sub_140d3a3a0(&rax_14[1], arg1)
                    rax_14[2] = sub_14096dd80
                    rax_14[4] = sub_140a387b0()
                    *rax_14 = &data_142e33e50
                
                void var_48
                *(arg1 + 0x58) = *(*(*r15_1 + 0x98))(r15_1, &var_48, zx.q(r14_2.d), &var_c8)
                void*** rax_19
                
                if (var_c0_1 == 0)
                    rax_19 = var_c8
                label_140952bda:
                    
                    if (rax_19 != 0)
                        sub_140a74f90(rax_19)
                else
                    void*** rcx_23 = var_c8
                    
                    if (rcx_23 != 0)
                        (*rcx_23)[7](rcx_23, 0)
                        rax_19 = var_c8
                        
                        if (rax_19 != 0)
                            rax_19 = sub_140a84c80(rax_19, 0, 0)
                            var_c8 = rax_19
                        
                        int32_t var_c0_2 = 0
                        goto label_140952bda
                int64_t* rcx_26 = var_b0
                result = (*(*rcx_26 + 0x90))(rcx_26, zx.q(r14_2.d))
    else
        int64_t arg_20 = 0
        sub_140d23f50(
            Logout: identity functionality not supported by the current online subsystem", 3)
        int64_t var_88 = sub_140d3c6e0(arg1 + 0x50)
        result = sub_1405a9f90(arg1 + 0x40, &var_88)
    
    int64_t* var_a8
    
    if (var_a8 != 0)
        result = var_a8[1].d
        var_a8[1].d -= 1
        
        if (result == 1)
            result = (**var_a8)(var_a8)
            int32_t rdi_2 = *(var_a8 + 0xc)
            *(var_a8 + 0xc) -= 1
            
            if (rdi_2 == 1)
                result = (*(*var_a8 + 8))(var_a8, zx.q(rdi_2))
else
    int64_t var_90 = sub_140d3c6e0(arg1 + 0x50)
    result = sub_1405a9f90(arg1 + 0x40, &var_90)

int64_t* rbx_2 = var_68:8.q

if (rbx_2 != 0)
    rbx_2[1].d -= 1
    
    if (rbx_2[1].d == 1)
        result = (**rbx_2)(rbx_2)
        int32_t temp2_1 = *(rbx_2 + 0xc)
        *(rbx_2 + 0xc) -= 1
        
        if (temp2_1 == 1)
            return (*(*rbx_2 + 8))(rbx_2, 1)

return result
