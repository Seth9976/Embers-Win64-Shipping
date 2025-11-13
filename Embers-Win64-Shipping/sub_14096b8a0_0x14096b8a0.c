// 函数: sub_14096b8a0
// 地址: 0x14096b8a0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* rdx = *(arg1 + 0x128)
int64_t var_88 = 0
int64_t var_58 = 0
int64_t var_40 = 0
int64_t* var_38 = nullptr
sub_1423de540(data_143f5b298, rdx, 0)
int64_t* rax = sub_14093f850(&var_58)
wchar16 const* const var_28 = u"JoinSessionCallback"

if (rax == 0)
    int64_t var_80_1 = 0
    int16_t* var_50
    sub_140a2e390(&var_50, u"%s - Invalid or uninitialized OnlineSubsystem", u"JoinSessionCallback")
    int16_t* const rcx_3 = &data_142d40450
    int32_t var_48
    
    if (var_48 != 0)
        rcx_3 = var_50
    
    sub_140d23f50(rcx_3, 3)
    int16_t* rcx_4 = var_50
    
    if (rcx_4 != 0)
        sub_140a74f90(rcx_4)

sub_140971be0(&var_40, sub_140d3c6e0(arg1 + 0x50))
int32_t result

if (var_40 == 0 || rax == 0)
    result = sub_1405a9f90(arg1 + 0x40, 0)
else
    int64_t* var_68
    (*(*rax + 0x20))(rax, &var_68)
    int64_t* rcx_8 = var_68
    int64_t* var_60
    
    if (rcx_8 == 0)
    label_14096baa8:
        
        if (var_60 == 0)
            result = sub_1405a9f90(arg1 + 0x40, 0)
        else
            var_60[1].d -= 1
            
            if (var_60[1].d == 1)
                (**var_60)(var_60)
                int32_t rbx_3 = *(var_60 + 0xc)
                *(var_60 + 0xc) -= 1
                
                if (rbx_3 == 1)
                    (*(*var_60 + 8))(var_60, zx.q(rbx_3))
            
            result = sub_1405a9f90(arg1 + 0x40, 0)
    else
        (*(*rcx_8 + 0x218))(rcx_8, arg1 + 0x120)
        
        if (arg3 != 0)
            goto label_14096baa8
        
        int64_t* rbx_1 = var_68
        int64_t var_a8 = 0
        int64_t var_a0_1 = 0
        int32_t var_74_1 = 0
        void arg_8
        int32_t rdx_5 = *sub_140b5e500(&arg_8, 0x121)
        int32_t var_6c_1 = 0
        void arg_20
        char rax_7 =
            (*(*rbx_1 + 0x2d0))(rbx_1, (*sub_140b5e500(&arg_20, 0x11f)).q, &var_a8, rdx_5.q)
        char rax_8
        
        if (rax_7 != 0)
            rax_8 = sub_140d3e110(arg1 + 0x50)
        
        if (rax_7 == 0 || rax_8 == 0)
            int64_t rcx_19 = var_a8
            
            if (rcx_19 != 0)
                sub_140a74f90(rcx_19)
            
            goto label_14096baa8
        
        int64_t var_98 = 0
        int64_t var_90_1 = 0
        var_98.o = var_98.o
        sub_142264250(sub_140d3c6e0(arg1 + 0x50), &var_a8, nullptr, 0, &var_98)
        result = sub_1405a9f90(arg1 + 0x30, 0)
        int64_t rcx_16 = var_a8
        
        if (rcx_16 != 0)
            result = sub_140a74f90(rcx_16)
        
        if (var_60 != 0)
            result = var_60[1].d
            var_60[1].d -= 1
            
            if (result == 1)
                result = (**var_60)(var_60)
                int32_t rbx_2 = *(var_60 + 0xc)
                *(var_60 + 0xc) -= 1
                
                if (rbx_2 == 1)
                    result = (*(*var_60 + 8))(var_60, zx.q(rbx_2))

if (var_38 != 0)
    var_38[1].d -= 1
    
    if (var_38[1].d == 1)
        result = (**var_38)(var_38)
        int32_t temp2_1 = *(var_38 + 0xc)
        *(var_38 + 0xc) -= 1
        
        if (temp2_1 == 1)
            return (*(*var_38 + 8))(var_38, 1)

return result
