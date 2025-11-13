// 函数: sub_140951490
// 地址: 0x140951490
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* rdx = *(arg1 + 0x70)
int64_t arg_10 = 0
int64_t var_90 = 0
int64_t rcx = data_143f5b298
int64_t var_50 = 0
int64_t* var_48 = nullptr
sub_1423de540(rcx, rdx, 0)
int64_t* rax = sub_14093f850(&var_90)
wchar16 const* const var_38 = u"DestroySession"

if (rax == 0)
    int64_t arg_18 = 0
    int16_t* var_60
    sub_140a2e390(&var_60, u"%s - Invalid or uninitialized OnlineSubsystem", u"DestroySession")
    int16_t* const rcx_3 = &data_142d40450
    int32_t var_58
    
    if (var_58 != 0)
        rcx_3 = var_60
    
    sub_140d23f50(rcx_3, 3)
    int16_t* rcx_4 = var_60
    
    if (rcx_4 != 0)
        sub_140a74f90(rcx_4)

sub_140971be0(&var_50, sub_140d3c6e0(arg1 + 0x50))
int64_t result

if (var_50 == 0 || rax == 0)
    result = sub_1405a9f90(arg1 + 0x40, 0)
else
    int64_t* var_70
    (*(*rax + 0x20))(rax, &var_70)
    int64_t* rcx_8 = var_70
    int64_t* var_68
    
    if (rcx_8 == 0)
        int64_t var_98_1 = 0
        sub_140d23f50(u"Sessions not supported by Online Subsystem", 3)
        
        if (var_68 != 0)
            var_68[1].d -= 1
            
            if (var_68[1].d == 1)
                (**var_68)(var_68)
                int32_t rbx_3 = *(var_68 + 0xc)
                *(var_68 + 0xc) -= 1
                
                if (rbx_3 == 1)
                    (*(*var_68 + 8))(var_68, zx.q(rbx_3))
        
        result = sub_1405a9f90(arg1 + 0x40, 0)
    else
        void var_88
        int64_t* rax_4 = (*(*rcx_8 + 0xf0))(rcx_8, &var_88, arg1 + 0x58)
        int64_t* rbx_1 = var_70
        int64_t result_1 = 0
        int32_t var_78_1 = 0
        *(arg1 + 0x68) = *rax_4
        int32_t arg_24 = 0
        void arg_8
        result = (*(*rbx_1 + 0xe8))(rbx_1, (*sub_140b5e500(&arg_8, 0x11f)).q, &result_1)
        
        if (var_78_1 == 0)
            result = result_1
        label_1409515ef:
            
            if (result != 0)
                result = sub_140a74f90(result)
        else
            int64_t result_2 = result_1
            
            if (result_2 != 0)
                (*(*result_2 + 0x38))(result_2, 0)
                result = result_1
                
                if (result != 0)
                    result = sub_140a84c80(result, 0, 0)
                    result_1 = result
                
                int32_t var_78_2 = 0
                goto label_1409515ef
        
        if (var_68 != 0)
            result = zx.q(var_68[1].d)
            var_68[1].d -= 1
            
            if (result.d == 1)
                result = (**var_68)(var_68)
                int32_t rbx_2 = *(var_68 + 0xc)
                *(var_68 + 0xc) -= 1
                
                if (rbx_2 == 1)
                    result = (*(*var_68 + 8))(var_68, zx.q(rbx_2))

if (var_48 != 0)
    var_48[1].d -= 1
    
    if (var_48[1].d == 1)
        result = (**var_48)(var_48)
        int32_t temp2_1 = *(var_48 + 0xc)
        *(var_48 + 0xc) -= 1
        
        if (temp2_1 == 1)
            return (*(*var_48 + 8))(var_48, 1)

return result
