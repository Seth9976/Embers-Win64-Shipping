// 函数: sub_140952740
// 地址: 0x140952740
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* rdx = *(arg1 + 0x128)
int64_t arg_10 = 0
int64_t var_80 = 0
int64_t rcx = data_143f5b298
int128_t var_50 = zx.o(0)
sub_1423de540(rcx, rdx, 0)
int64_t* rax = sub_14093f850(&var_80)
wchar16 const* const var_38 = u"JoinSession"

if (rax == 0)
    int64_t arg_18 = 0
    int16_t* var_60
    sub_140a2e390(&var_60, u"%s - Invalid or uninitialized OnlineSubsystem", u"JoinSession")
    int16_t* const rcx_3 = &data_142d40450
    int32_t var_58
    
    if (var_58 != 0)
        rcx_3 = var_60
    
    sub_140d23f50(rcx_3, 3)
    int16_t* rcx_4 = var_60
    
    if (rcx_4 != 0)
        sub_140a74f90(rcx_4)

sub_140971be0(&var_50, sub_140d3c6e0(arg1 + 0x50))
int64_t rdi = var_50.q
int32_t result

if (rdi == 0 || rax == 0)
    result = sub_1405a9f90(arg1 + 0x40, 0)
else
    int64_t* var_70
    (*(*rax + 0x20))(rax, &var_70)
    int64_t* rcx_8 = var_70
    int64_t* var_68
    
    if (rcx_8 == 0)
        int64_t var_88_1 = 0
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
        void var_78
        int64_t* rax_4 = (*(*rcx_8 + 0x210))(rcx_8, &var_78, arg1 + 0x110)
        int64_t* rbx_1 = var_70
        *(arg1 + 0x120) = *rax_4
        int32_t arg_24 = 0
        void arg_8
        result = (*(*rbx_1 + 0x200))(rbx_1, rdi, (*sub_140b5e500(&arg_8, 0x11f)).q, arg1 + 0x58)
        
        if (var_68 != 0)
            result = var_68[1].d
            var_68[1].d -= 1
            
            if (result == 1)
                result = (**var_68)(var_68)
                int32_t rbx_2 = *(var_68 + 0xc)
                *(var_68 + 0xc) -= 1
                
                if (rbx_2 == 1)
                    result = (*(*var_68 + 8))(var_68, zx.q(rbx_2))

int64_t* rbx_4 = var_50:8.q

if (rbx_4 != 0)
    rbx_4[1].d -= 1
    
    if (rbx_4[1].d == 1)
        result = (**rbx_4)(rbx_4)
        int32_t temp2_1 = *(rbx_4 + 0xc)
        *(rbx_4 + 0xc) -= 1
        
        if (temp2_1 == 1)
            return (*(*rbx_4 + 8))(rbx_4, 1)

return result
