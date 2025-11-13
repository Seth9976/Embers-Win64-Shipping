// 函数: sub_140b85780
// 地址: 0x140b85780
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t var_108 = 0
int32_t var_100 = 0
sub_1405947f0(&var_108, 5)
int32_t rax = var_100 + 5
var_100 = rax

if (rax s> 0)
    sub_140594770(&var_108)

UnDecorator::getReferenceType(var_108, u"Name", 0xa)
char rax_1 = sub_140b76580(arg2, &var_108, arg1)
int64_t rcx_4 = var_108
int64_t r14
r14.b = rax_1 == 0

if (rcx_4 != 0)
    sub_140a74f90(rcx_4)

int32_t result
int64_t* rax_2
int64_t* rdi_1

if (r14.b == 0)
    int64_t var_f8 = 0
    int32_t var_f0_1 = 0
    sub_1405947f0(&var_f8, 8)
    int32_t rax_3 = var_f0_1 + 8
    var_f0_1 = rax_3
    
    if (rax_3 s> 0)
        sub_140594770(&var_f8)
    
    UnDecorator::getReferenceType(var_f8, u"Enabled", 0x10)
    char rax_4 = sub_140b75d30(arg2, &var_f8, arg1 + 0x10)
    int64_t rcx_12 = var_f8
    r14.b = rax_4 == 0
    
    if (rcx_12 != 0)
        sub_140a74f90(rcx_12)
    
    if (r14.b != 0)
        void var_30
        rax_2 = _vfprintf_p_l(&var_30, Plugin references must have an 'Enabled' field", 
            PluginDescriptor")
        int64_t rdx_6 = *arg3
        *arg3 = *rax_2
        *rax_2 = rdx_6
        int64_t rdx_7 = arg3[1]
        arg3[1] = rax_2[1]
        rax_2[1] = rdx_7
        int64_t* var_28
        rdi_1 = var_28
        goto label_140b8591a
    
    int64_t var_e8 = 0
    int32_t var_e0_1 = 0
    sub_1405947f0(&var_e8, 9)
    int32_t rax_8 = var_e0_1 + 9
    var_e0_1 = rax_8
    
    if (rax_8 s> 0)
        sub_140594770(&var_e8)
    
    UnDecorator::getReferenceType(var_e8, u"Optional", 0x12)
    sub_140b75d30(arg2, &var_e8, arg1 + 0x11)
    int64_t rcx_22 = var_e8
    
    if (rcx_22 != 0)
        sub_140a74f90(rcx_22)
    
    int64_t var_d8 = 0
    int32_t var_d0_1 = 0
    sub_1405947f0(&var_d8, 0xc)
    int32_t rax_9 = var_d0_1 + 0xc
    var_d0_1 = rax_9
    
    if (rax_9 s> 0)
        sub_140594770(&var_d8)
    
    UnDecorator::getReferenceType(var_d8, u"Description", 0x18)
    sub_140b76580(arg2, &var_d8, arg1 + 0x18)
    int64_t rcx_27 = var_d8
    
    if (rcx_27 != 0)
        sub_140a74f90(rcx_27)
    
    int64_t var_c8 = 0
    int32_t var_c0_1 = 0
    sub_1405947f0(&var_c8, 0xf)
    int32_t rax_10 = var_c0_1 + 0xf
    var_c0_1 = rax_10
    
    if (rax_10 s> 0)
        sub_140594770(&var_c8)
    
    UnDecorator::getReferenceType(var_c8, u"MarketplaceURL", 0x1e)
    sub_140b76580(arg2, &var_c8, arg1 + 0x28)
    int64_t rcx_32 = var_c8
    
    if (rcx_32 != 0)
        sub_140a74f90(rcx_32)
    
    int64_t var_b8 = 0
    int32_t var_b0_1 = 0
    sub_1405947f0(&var_b8, 0x13)
    int32_t rax_11 = var_b0_1 + 0x13
    var_b0_1 = rax_11
    
    if (rax_11 s> 0)
        sub_140594770(&var_b8)
    
    UnDecorator::getReferenceType(var_b8, u"WhitelistPlatforms", 0x26)
    sub_140b76400(arg2, &var_b8, arg1 + 0x38)
    int64_t rcx_37 = var_b8
    
    if (rcx_37 != 0)
        sub_140a74f90(rcx_37)
    
    int64_t var_a8 = 0
    int32_t var_a0_1 = 0
    sub_1405947f0(&var_a8, 0x13)
    int32_t rax_12 = var_a0_1 + 0x13
    var_a0_1 = rax_12
    
    if (rax_12 s> 0)
        sub_140594770(&var_a8)
    
    UnDecorator::getReferenceType(var_a8, u"BlacklistPlatforms", 0x26)
    sub_140b76400(arg2, &var_a8, arg1 + 0x48)
    int64_t rcx_42 = var_a8
    
    if (rcx_42 != 0)
        sub_140a74f90(rcx_42)
    
    int64_t var_98 = 0
    int32_t var_90_1 = 0
    sub_1405947f0(&var_98, 0x1e)
    int32_t rax_13 = var_90_1 + 0x1e
    var_90_1 = rax_13
    
    if (rax_13 s> 0)
        sub_140594770(&var_98)
    
    UnDecorator::getReferenceType(var_98, u"WhitelistTargetConfigurations", 0x3c)
    sub_140b76e80(arg2, &var_98, arg1 + 0x58)
    int64_t rcx_47 = var_98
    
    if (rcx_47 != 0)
        sub_140a74f90(rcx_47)
    
    int64_t var_88 = 0
    int32_t var_80_1 = 0
    sub_1405947f0(&var_88, 0x1e)
    int32_t rax_14 = var_80_1 + 0x1e
    var_80_1 = rax_14
    
    if (rax_14 s> 0)
        sub_140594770(&var_88)
    
    UnDecorator::getReferenceType(var_88, u"BlacklistTargetConfigurations", 0x3c)
    sub_140b76e80(arg2, &var_88, arg1 + 0x68)
    int64_t rcx_52 = var_88
    
    if (rcx_52 != 0)
        sub_140a74f90(rcx_52)
    
    int64_t var_78 = 0
    int32_t var_70_1 = 0
    sub_1405947f0(&var_78, 0x11)
    int32_t rax_15 = var_70_1 + 0x11
    var_70_1 = rax_15
    
    if (rax_15 s> 0)
        sub_140594770(&var_78)
    
    UnDecorator::getReferenceType(var_78, u"WhitelistTargets", 0x22)
    sub_140b76f90(arg2, &var_78, arg1 + 0x78)
    int64_t rcx_57 = var_78
    
    if (rcx_57 != 0)
        sub_140a74f90(rcx_57)
    
    int64_t var_68 = 0
    int32_t var_60_1 = 0
    sub_1405947f0(&var_68, 0x11)
    int32_t rax_16 = var_60_1 + 0x11
    var_60_1 = rax_16
    
    if (rax_16 s> 0)
        sub_140594770(&var_68)
    
    UnDecorator::getReferenceType(var_68, u"BlacklistTargets", 0x22)
    sub_140b76f90(arg2, &var_68, arg1 + 0x88)
    int64_t rcx_62 = var_68
    
    if (rcx_62 != 0)
        sub_140a74f90(rcx_62)
    
    int64_t var_58 = 0
    int32_t var_50_1 = 0
    sub_1405947f0(&var_58, 0x19)
    int32_t rax_17 = var_50_1 + 0x19
    var_50_1 = rax_17
    
    if (rax_17 s> 0)
        sub_140594770(&var_58)
    
    UnDecorator::getReferenceType(var_58, u"SupportedTargetPlatforms", 0x32)
    sub_140b76400(arg2, &var_58, arg1 + 0x98)
    int64_t rcx_67 = var_58
    
    if (rcx_67 != 0)
        sub_140a74f90(rcx_67)
    
    result.b = 1
else
    void var_48
    rax_2 = _vfprintf_p_l(&var_48, Plugin references must have a 'Name' field", PluginDescriptor")
    int64_t rdx_2 = *arg3
    *arg3 = *rax_2
    *rax_2 = rdx_2
    int64_t rdx_3 = arg3[1]
    arg3[1] = rax_2[1]
    rax_2[1] = rdx_3
    int64_t* var_40
    rdi_1 = var_40
label_140b8591a:
    arg3[2].d = rax_2[2].d
    
    if (rdi_1 != 0)
        rdi_1[1].d -= 1
        
        if (rdi_1[1].d == 1)
            (**rdi_1)(rdi_1)
            int32_t rbx_1 = *(rdi_1 + 0xc)
            *(rdi_1 + 0xc) -= 1
            
            if (rbx_1 == 1)
                (*(*rdi_1 + 8))(rdi_1, zx.q(rbx_1))
    
    result.b = 0
return result
