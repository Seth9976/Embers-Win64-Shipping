// 函数: sub_140953110
// 地址: 0x140953110
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* rax = sub_140d3c6e0(arg1 + 0x50)

if (rax == 0)
    int64_t arg_8 = 0
    sub_140d23f50(A player controller must be provided in order to show the external login UI.", 3)
    int64_t var_a8 = 0
    return sub_1405a9f90(arg1 + 0x40, &var_a8)

int64_t* rdx_2 = *(arg1 + 0x58)
int64_t rcx_2 = data_143f5b298
int64_t arg_10 = 0
int64_t var_a0 = 0
sub_1423de540(rcx_2, rdx_2, 0)
int64_t* rax_3 = sub_14093f850(&var_a0)
int64_t* var_48 = rax_3

if (rax_3 == 0)
    int64_t arg_18 = 0
    int16_t* var_78
    sub_140a2e390(&var_78, u"%s - Invalid or uninitialized OnlineSubsystem", u"ShowLoginUI")
    int16_t* const rcx_6 = &data_142d40450
    int32_t var_70
    
    if (var_70 != 0)
        rcx_6 = var_78
    
    sub_140d23f50(rcx_6, 3)
    int16_t* rcx_7 = var_78
    
    if (rcx_7 != 0)
        sub_140a74f90(rcx_7)
    
    void* var_98 = rax
    return sub_1405a9f90(arg1 + 0x40, &var_98)

int64_t* var_68
(*(*rax_3 + 0x70))(rax_3, &var_68)
void*** result
void* rdx_6

if (var_68 != 0)
    void* r15_1 = *(rax + 0x298)
    void* rax_6
    int64_t rax_7
    
    if (r15_1 != 0)
        rax_6 = sub_142531230()
        rdx_6 = *(r15_1 + 0x10)
        rax_7 = sx.q(*(rax_6 + 0x38))
    
    if (r15_1 == 0 || rax_7.d s> *(rdx_6 + 0x38)
            || *(*(rdx_6 + 0x30) + (rax_7 << 3)) != rax_6 + 0x30)
        int64_t var_b0_1 = 0
        rdx_6.b = 3
        sub_140d23f50(u"Can only show login UI for local players", rdx_6.b)
        void* var_80 = rax
        result = sub_1405a9f90(arg1 + 0x40, &var_80)
    else
        int64_t* r12_1 = var_68
        void*** result_1 = nullptr
        void*** result_2 = sub_140a84c80(0, 0x30, 0)
        result_1 = result_2
        int32_t var_c0_1 = 3
        
        if (result_2 != 0)
            *result_2 = &data_142e34378
            sub_140d3a3a0(&result_2[1], arg1)
            result_2[2] = sub_14096ea80
            result_2[4] = sub_140a387b0()
            *result_2 = &data_142e343d0
        
        result = (*(*r12_1 + 8))(r12_1, zx.q(*(r15_1 + 0xb8)), 0, 0, &result_1)
        char r14_2 = result.b
        
        if (var_c0_1 == 0)
            result = result_1
        label_14095334c:
            
            if (result != 0)
                result = sub_140a74f90(result)
        else
            void*** result_3 = result_1
            
            if (result_3 != 0)
                void** r8_5 = *result_3
                r8_5[7](result_3, 0, r8_5)
                result = result_1
                
                if (result != 0)
                    result = sub_140a84c80(result, 0, 0)
                    result_1 = result
                
                int32_t var_c0_2 = 0
                goto label_14095334c
        
        if (r14_2 == 0)
            int64_t var_b8_1 = 0
            sub_140d23f50(u"The online subsystem couldn't show its login UI", 5)
            void* var_88 = rax
            result = sub_1405a9f90(arg1 + 0x40, &var_88)
else
    int64_t arg_20 = 0
    rdx_6.b = 3
    sub_140d23f50(u"External UI not supported by the current online subsystem", rdx_6.b)
    void* var_90 = rax
    result = sub_1405a9f90(arg1 + 0x40, &var_90)
int64_t* var_60

if (var_60 != 0)
    result = zx.q(var_60[1].d)
    var_60[1].d -= 1
    
    if (result.d == 1)
        result = (**var_60)(var_60)
        int32_t rdi_1 = *(var_60 + 0xc)
        *(var_60 + 0xc) -= 1
        
        if (rdi_1 == 1)
            return (*(*var_60 + 8))(var_60, zx.q(rdi_1))

return result
