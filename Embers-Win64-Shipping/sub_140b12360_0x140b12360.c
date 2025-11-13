// 函数: sub_140b12360
// 地址: 0x140b12360
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t var_48 = arg2
*arg1 = 0
arg1[1] = 0
int64_t i

do
    GUID pguid
    __builtin_memset(&pguid, 0, 0x10)
    CoCreateGuid(&pguid)
    int32_t rax_1
    rax_1.b = pguid.Data4[4]
    rax_1:1.b = pguid.Data4[5]
    rax_1:2.b = pguid.Data4[6]
    rax_1:3.b = pguid.Data4[7]
    int32_t var_90_1 = rax_1
    int32_t rax_2
    rax_2.b = pguid.Data4[0]
    rax_2:1.b = pguid.Data4[1]
    rax_2:2.b = pguid.Data4[2]
    rax_2:3.b = pguid.Data4[3]
    int32_t var_98_1 = rax_2
    int64_t var_58
    sub_140a2e390(&var_58, u"%08X%08X%08X%08X", zx.q(pguid.Data1))
    var_98_1.q = arg4
    int16_t* var_68
    sub_140a2e390(&var_68, u"%s%s%s", arg3)
    int16_t* const rdi_1 = &data_142d40450
    int64_t var_88 = 0
    int32_t rdx = 0
    int32_t var_60
    
    if (var_60 != 0)
        rdi_1 = var_68
    
    int64_t j = 0
    int16_t* const var_40_1 = rdi_1
    int64_t var_80_1 = 0
    
    do
        int64_t rax_3 = -1
        
        do
            rax_3 += 1
        while (*((&var_48)[j] + (rax_3 << 1)) != 0)
        
        j += 1
        rdx = rdx + 1 + rax_3.d
    while (j s< 2)
    
    if (rdx != 0)
        sub_1405947f0(&var_88, rdx)
    
    int64_t r8_2 = -1
    
    do
        r8_2 += 1
    while (*(arg2 + (r8_2 << 1)) != 0)
    
    sub_140a20ba0(&var_88, arg2, r8_2.d)
    int64_t r8_3 = -1
    
    do
        r8_3 += 1
    while (rdi_1[r8_3] != 0)
    
    sub_140a2cf70(&var_88, rdi_1, r8_3.d)
    
    if (arg1 == &var_88)
        int64_t rcx_8 = var_88
        
        if (rcx_8 != 0)
            sub_140a74f90(rcx_8)
    else
        int64_t rcx_7 = *arg1
        
        if (rcx_7 != 0)
            sub_140a74f90(rcx_7)
        
        *arg1 = var_88
        arg1[1].d = var_80_1.d
        *(arg1 + 0xc) = var_80_1:4.d
        int64_t var_80_2 = 0
        var_88 = 0
    
    int16_t* rcx_9 = var_68
    
    if (rcx_9 != 0)
        sub_140a74f90(rcx_9)
    
    int64_t rcx_10 = var_58
    
    if (rcx_10 != 0)
        sub_140a74f90(rcx_10)
    
    sub_140a464c0()
    int16_t* const rdx_4
    
    if (arg1[1].d == 0)
        rdx_4 = &data_142d40450
    else
        rdx_4 = *arg1
    
    char const (* r8_4)[0x4] = data_14399ea08
    i = (*(r8_4 + 0x108))(&data_14399ea08, rdx_4, r8_4)
while (i s>= 0)
return arg1
