// 函数: sub_140951190
// 地址: 0x140951190
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_138
int64_t rax_1 = __security_cookie ^ &var_138
int64_t* rdx = *(arg1 + 0x90)
int64_t rcx = data_143f5b298
int64_t var_118 = 0
int64_t var_e0 = 0
int128_t var_c8 = zx.o(0)
sub_1423de540(rcx, rdx, 0)
int64_t* rax_2 = sub_14093f850(&var_e0)
wchar16 const* const var_b0 = u"CreateSession"
int64_t var_110

if (rax_2 == 0)
    var_110 = 0
    int16_t* var_d8
    sub_140a2e390(&var_d8, u"%s - Invalid or uninitialized OnlineSubsystem", u"CreateSession")
    int16_t* const rcx_3 = &data_142d40450
    int32_t var_d0
    
    if (var_d0 != 0)
        rcx_3 = var_d8
    
    sub_140d23f50(rcx_3, 3)
    int16_t* rcx_4 = var_d8
    
    if (rcx_4 != 0)
        sub_140a74f90(rcx_4)

sub_140971be0(&var_c8, sub_140d3c6e0(arg1 + 0x50))
int32_t result

if (var_c8.q == 0 || rax_2 == 0)
    result = sub_1405a9f90(arg1 + 0x40, 0)
else
    int64_t* var_f8
    (*(*rax_2 + 0x20))(rax_2, &var_f8)
    int64_t* rcx_8 = var_f8
    int64_t* var_f0
    
    if (rcx_8 == 0)
        int64_t var_100_1 = 0
        sub_140d23f50(u"Sessions not supported by Online Subsystem", 3)
        
        if (var_f0 != 0)
            var_f0[1].d -= 1
            
            if (var_f0[1].d == 1)
                (**var_f0)(var_f0)
                int32_t rdi_2 = *(var_f0 + 0xc)
                *(var_f0 + 0xc) -= 1
                
                if (rdi_2 == 1)
                    (*(*var_f0 + 8))(var_f0, zx.q(rdi_2))
        
        result = sub_1405a9f90(arg1 + 0x40, 0)
    else
        void var_a8
        int64_t* rax_6 = (*(*rcx_8 + 0x50))(rcx_8, &var_a8, arg1 + 0x58)
        int64_t* rbx_1 = var_f8
        int32_t var_90_1 = *(arg1 + 0x88)
        char rax_8 = *(arg1 + 0x8c)
        *(arg1 + 0x78) = *rax_6
        char var_86_1 = rax_8
        void** const var_98 = &data_142e20cf0
        int32_t var_8c_1 = 0
        int32_t var_85_1 = 0x1000000
        int16_t var_80_1 = 0
        int32_t var_7c
        __builtin_memset(&var_7c, 0, 0x30)
        int32_t var_4c_1 = 0x80
        int32_t var_48_1 = 0xffffffff
        int32_t var_44_1 = 0
        int64_t var_38_1 = 0
        int32_t var_30_1 = 0
        int16_t var_88_1 = 0x101
        char var_81_1 = 1
        int32_t var_104_1 = 0
        void var_e8
        int32_t rdx_6 = *sub_140b5e500(&var_e8, 0x11f)
        (*(*rbx_1 + 0x40))(rbx_1, var_c8.q, rdx_6.q, &var_98, var_118, var_110, rdx_6)
        var_98 = &data_142e20cf0
        int32_t var_30_2 = 0
        
        if (var_38_1 != 0)
            sub_140a74f90(var_38_1)
        
        int64_t var_78
        result = sub_140925830(&var_78, 0)
        int64_t var_58
        
        if (var_58 != 0)
            result = sub_140a74f90(var_58)
        
        int64_t rcx_15 = var_78
        
        if (rcx_15 != 0)
            result = sub_140a74f90(rcx_15)
        
        if (var_f0 != 0)
            result = var_f0[1].d
            var_f0[1].d -= 1
            
            if (result == 1)
                result = (**var_f0)(var_f0)
                int32_t rdi_1 = *(var_f0 + 0xc)
                *(var_f0 + 0xc) -= 1
                
                if (rdi_1 == 1)
                    result = (*(*var_f0 + 8))(var_f0, zx.q(rdi_1))

int64_t* rbx_4 = var_c8:8.q

if (rbx_4 != 0)
    rbx_4[1].d -= 1
    
    if (rbx_4[1].d == 1)
        result = (**rbx_4)(rbx_4)
        int32_t temp2_1 = *(rbx_4 + 0xc)
        *(rbx_4 + 0xc) -= 1
        
        if (temp2_1 == 1)
            result = (*(*rbx_4 + 8))(rbx_4, 1)

__security_check_cookie(rax_1 ^ &var_138)
return result
