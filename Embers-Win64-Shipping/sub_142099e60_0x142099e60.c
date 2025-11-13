// 函数: sub_142099e60
// 地址: 0x142099e60
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t var_58 = 0
int64_t var_50 = 0
sub_1405947f0(&var_58, 0x14)
int32_t rax = var_50.d + 0x14
var_50.d = rax

if (rax s> 0)
    sub_140594770(&var_58)

int64_t rbx = var_58
sub_1405a7220(rbx, 0x14, "MANUAL_VERTEX_FETCH", 0x14, 0x3f)
void arg_8
int32_t rdi = *sub_14062d6e0(arg2 + 0x2a8, &arg_8, &var_58)

if (rbx != 0)
    sub_140a74f90(rbx)

if (rdi == 0xffffffff && sub_1419d5c70(*arg1) != 0)
    sub_1410b3e70(arg2, u"MANUAL_VERTEX_FETCH", &(*U"RGBXYZF10|")[7])

sub_1410b3e70(arg2, u"USE_INSTANCING", &(*U"RGBXYZF10|")[7])
int16_t* var_48
int64_t* rcx_9 = &var_48
int64_t rcx_28
int64_t var_68
int32_t var_40
int64_t* var_38

if (sub_1405fba70(*arg1, 3) == 0)
    sub_140a2e390(rcx_9, u"%u", zx.q((*(arg1 + 0x30) u>> 0x21).d) & 1)
    int16_t* rdi_2 = &data_142d40450
    int32_t rdx_7 = 0
    var_68 = 0
    
    if (var_40 != 0)
        rdi_2 = var_48
    
    int32_t rcx_19 = 0
    int32_t var_60_2 = 0
    int32_t var_5c_1 = 0
    
    if (rdi_2 != 0 && *rdi_2 != 0)
        int64_t rbx_3 = -1
        
        do
            rbx_3 += 1
        while (rdi_2[rbx_3] != 0)
        
        if (rbx_3.d + 1 s> 0)
            sub_1405947f0(&var_68, rbx_3.d + 1)
            rcx_19 = var_5c_1
            rdx_7 = var_60_2
        
        int32_t rax_6 = rbx_3.d + 1 + rdx_7
        int32_t var_60_3 = rax_6
        
        if (rax_6 s> rcx_19)
            sub_140594770(&var_68)
        
        UnDecorator::getReferenceType(var_68, rdi_2, (rbx_3.d + 1) * 2)
    
    var_58 = 0
    int32_t var_50_1 = 0
    sub_1405947f0(&var_58, 0x2a)
    int32_t rax_7 = var_50_1 + 0x2a
    var_50_1 = rax_7
    
    if (rax_7 s> 0)
        sub_140594770(&var_58)
    
    UnDecorator::getReferenceType(var_58, u"USE_DITHERED_LOD_TRANSITION_FOR_INSTANCED", 0x54)
    var_38 = &var_58
    int64_t* var_30_1 = &var_68
    sub_140caa010(arg2 + 0x2a8, &arg_8, &var_38, nullptr)
    int64_t rcx_27 = var_58
    
    if (rcx_27 != 0)
        sub_140a74f90(rcx_27)
    
    rcx_28 = var_68
else
    sub_140a2e390(rcx_9, u"%d", 1)
    int16_t* const rdi_1 = &data_142d40450
    int32_t rdx_2 = 0
    var_58 = 0
    
    if (var_40 != 0)
        rdi_1 = var_48
    
    int32_t rcx_10 = 0
    var_50.d = 0
    var_50:4.d = 0
    
    if (rdi_1 != 0 && *rdi_1 != 0)
        int64_t rbx_1 = -1
        
        do
            rbx_1 += 1
        while (rdi_1[rbx_1] != 0)
        
        if (rbx_1.d + 1 s> 0)
            sub_1405947f0(&var_58, rbx_1.d + 1)
            rcx_10 = var_50:4.d
            rdx_2 = var_50.d
        
        int32_t rax_4 = rdx_2 + rbx_1.d + 1
        var_50.d = rax_4
        
        if (rax_4 s> rcx_10)
            sub_140594770(&var_58)
        
        UnDecorator::getReferenceType(var_58, rdi_1, (rbx_1.d + 1) * 2)
    
    var_68 = 0
    int32_t var_60
    var_60.q = 0
    sub_1405947f0(&var_68, 0x2a)
    int32_t var_60_1 = var_60 + 0x2a
    int32_t var_5c
    
    if (var_60 + 0x2a s> var_5c)
        sub_140594770(&var_68)
    
    UnDecorator::getReferenceType(var_68, u"USE_DITHERED_LOD_TRANSITION_FOR_INSTANCED", 0x54)
    var_38 = &var_68
    int64_t* var_30 = &var_58
    sub_140caa010(arg2 + 0x2a8, &arg_8, &var_38, nullptr)
    int64_t rcx_18 = var_68
    
    if (rcx_18 != 0)
        sub_140a74f90(rcx_18)
    
    rcx_28 = var_58

if (rcx_28 != 0)
    sub_140a74f90(rcx_28)

int16_t* rcx_29 = var_48

if (rcx_29 != 0)
    sub_140a74f90(rcx_29)

return sub_1420ff270(arg1, arg2) __tailcall
