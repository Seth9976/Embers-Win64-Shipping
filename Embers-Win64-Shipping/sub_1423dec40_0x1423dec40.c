// 函数: sub_1423dec40
// 地址: 0x1423dec40
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int16_t* var_78
sub_1423fb9e0(&var_78, nullptr, arg2, 0)
int16_t* var_68
int32_t var_54
int16_t* var_50
int64_t* var_30
int32_t i_2
int16_t* var_20

if (var_54 == 0)
    sub_140b1f640(arg3, u"BAD URL")
else
    int16_t* const r14_1 = &data_142d40450
    int16_t* const r8_1 = &data_142d40450
    int32_t var_70
    
    if (var_70 != 0)
        r8_1 = var_78
    
    sub_140b1f700(arg3, u"     Protocol: %s", r8_1)
    int16_t* const r8_2 = &data_142d40450
    int32_t var_60
    
    if (var_60 != 0)
        r8_2 = var_68
    
    sub_140b1f700(arg3, u"         Host: %s", r8_2)
    int32_t var_58
    sub_140b1f700(arg3, u"         Port: %i", zx.q(var_58))
    int16_t* const r8_4 = &data_142d40450
    int32_t var_48
    
    if (var_48 != 0)
        r8_4 = var_50
    
    sub_140b1f700(arg3, u"          Map: %s", r8_4)
    sub_140b1f700(arg3, u"   NumOptions: %i", zx.q(i_2))
    int32_t rbx_1 = 0
    
    if (i_2 s> 0)
        int64_t* rdi_1 = nullptr
        
        do
            if (*(rdi_1 + var_30 + 8) != 0)
                *(rdi_1 + var_30)
            
            sub_140b1f700(arg3, u"     Option %i: %s", zx.q(rbx_1))
            rbx_1 += 1
            rdi_1 = &rdi_1[2]
        while (rbx_1 s< i_2)
    
    int16_t* const r8_7 = &data_142d40450
    int32_t var_18
    
    if (var_18 != 0)
        r8_7 = var_20
    
    sub_140b1f700(arg3, u"       Portal: %s", r8_7)
    int64_t var_88
    int64_t* rax_2 = sub_142423a30(&var_78, &var_88, 0)
    
    if (rax_2[1].d != 0)
        r14_1 = *rax_2
    
    sub_140b1f700(arg3, u"       String: '%s'", r14_1)
    int64_t rcx_10 = var_88
    
    if (rcx_10 != 0)
        sub_140a74f90(rcx_10)

if (var_20 != 0)
    sub_140a74f90(var_20)

int32_t i_1 = i_2
int64_t* rbx_2 = var_30

if (i_1 != 0)
    int32_t i
    
    do
        int64_t rcx_12 = *rbx_2
        
        if (rcx_12 != 0)
            sub_140a74f90(rcx_12)
        
        rbx_2 = &rbx_2[2]
        i = i_1
        i_1 -= 1
    while (i != 1)
    rbx_2 = var_30

if (rbx_2 != 0)
    sub_140a74f90(rbx_2)

int64_t var_40

if (var_40 != 0)
    sub_140a74f90(var_40)

if (var_50 != 0)
    sub_140a74f90(var_50)

if (var_68 != 0)
    sub_140a74f90(var_68)

int16_t* rcx_17 = var_78

if (rcx_17 != 0)
    sub_140a74f90(rcx_17)

wchar16 (* result)[0x200]
result.b = 1
return result
