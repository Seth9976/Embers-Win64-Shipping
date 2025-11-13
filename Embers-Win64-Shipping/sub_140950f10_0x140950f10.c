// 函数: sub_140950f10
// 地址: 0x140950f10
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* rdx = *(arg1 + 0x70)
int64_t rcx = data_143f5b298
int64_t arg_10 = 0
int64_t var_68 = 0
int64_t var_50 = 0
int64_t* var_48 = nullptr
sub_1423de540(rcx, rdx, 0)
int64_t* rax = sub_14093f850(&var_68)
wchar16 const* const var_38 = u"ConnectToService"

if (rax == 0)
    int64_t arg_18 = 0
    int16_t* var_60
    sub_140a2e390(&var_60, u"%s - Invalid or uninitialized OnlineSubsystem", u"ConnectToService")
    int16_t* const rcx_3 = &data_142d40450
    int32_t var_58
    
    if (var_58 != 0)
        rcx_3 = var_60
    
    sub_140d23f50(rcx_3, 3)
    int16_t* rcx_4 = var_60
    
    if (rcx_4 != 0)
        sub_140a74f90(rcx_4)

sub_140971be0(&var_50, sub_140d3c6e0(arg1 + 0x50))
int32_t result
int32_t arg_8

if (var_50 == 0 || rax == 0)
    arg_8 = 0
    result = sub_1405a9f90(arg1 + 0x40, &arg_8)
else
    int64_t* var_a8
    (*(*rax + 0x80))(rax, &var_a8)
    int64_t* var_a0
    
    if (var_a8 == 0)
        int64_t arg_20 = 0
        sub_140d23f50(u"Connection control not supported by online subsystem", 3)
        
        if (var_a0 != 0)
            var_a0[1].d -= 1
            
            if (var_a0[1].d == 1)
                (**var_a0)(var_a0)
                int32_t rbx_3 = *(var_a0 + 0xc)
                *(var_a0 + 0xc) -= 1
                
                if (rbx_3 == 1)
                    (*(*var_a0 + 8))(var_a0, zx.q(rbx_3))
        
        arg_8 = 0
        result = sub_1405a9f90(arg1 + 0x40, &arg_8)
    else
        int64_t rbx_1 = sx.q(*(*(sub_140d3c6e0(arg1 + 0x50) + 0x298) + 0xb8))
        result = sub_140967a50(&var_a8[rbx_1 * 3 + 0x13], arg1)
        
        if (result.b == 0)
            int64_t* rcx_13 = var_a8
            void var_30
            int64_t* rax_6 = (*(*rcx_13 + 0x70))(rcx_13, &var_30, zx.q(rbx_1.d), arg1 + 0x58)
            int64_t var_98
            __builtin_memset(&var_98, 0, 0x30)
            *(arg1 + 0x68) = *rax_6
            int64_t* rcx_15 = var_a8
            result = (*(*rcx_15 + 0x68))(rcx_15, zx.q(rbx_1.d), &var_98)
            int64_t var_78
            
            if (var_78 != 0)
                result = sub_140a74f90(var_78)
            
            int64_t var_88
            
            if (var_88 != 0)
                result = sub_140a74f90(var_88)
            
            int64_t rcx_18 = var_98
            
            if (rcx_18 != 0)
                result = sub_140a74f90(rcx_18)
        
        if (var_a0 != 0)
            result = var_a0[1].d
            var_a0[1].d -= 1
            
            if (result == 1)
                result = (**var_a0)(var_a0)
                int32_t rbx_2 = *(var_a0 + 0xc)
                *(var_a0 + 0xc) -= 1
                
                if (rbx_2 == 1)
                    result = (*(*var_a0 + 8))(var_a0, zx.q(rbx_2))

if (var_48 != 0)
    var_48[1].d -= 1
    
    if (var_48[1].d == 1)
        result = (**var_48)(var_48)
        int32_t temp2_1 = *(var_48 + 0xc)
        *(var_48 + 0xc) -= 1
        
        if (temp2_1 == 1)
            return (*(*var_48 + 8))(var_48, 1)

return result
