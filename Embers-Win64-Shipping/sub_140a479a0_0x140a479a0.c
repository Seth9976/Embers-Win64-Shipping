// 函数: sub_140a479a0
// 地址: 0x140a479a0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t rbx = 0
int32_t rax_3 = data_143db48b4 | data_143db48b0 | data_143db48ac | data_143db48a8
int32_t arg_8 = 0
int64_t var_58 = 0
int64_t var_50 = 0
PWSTR var_48
int64_t var_38
PWSTR var_28
char rax_7
char rax_8

if (rax_3 == 0)
    var_28 = nullptr
    int32_t var_20_1 = 0
    sub_1405947f0(&var_28, rax_3 + 0xa)
    int32_t rax_4 = var_20_1 + 0xa
    var_20_1 = rax_4
    
    if (rax_4 s> 0)
        sub_140594770(&var_28)
    
    __builtin_memcpy(var_28, u"MachineId", 0x14)
    var_38 = 0
    int32_t var_30_1 = 0
    sub_1405947f0(&var_38, 0x1a)
    int32_t rax_5 = var_30_1 + 0x1a
    var_30_1 = rax_5
    
    if (rax_5 s> 0)
        sub_140594770(&var_38)
    
    __builtin_memcpy(var_38, u"Unreal Engine/Identifiers", 0x34)
    var_48 = nullptr
    int32_t var_40_1 = 0
    sub_1405947f0(&var_48, 0xb)
    int32_t rax_6 = var_40_1 + 0xb
    var_40_1 = rax_6
    
    if (rax_6 s> 0)
        sub_140594770(&var_48)
    
    __builtin_wcscpy(var_48, u"Epic Games")
    rax_7 = sub_140b6c580(&var_48, &var_38, &var_28, &var_58)
    rbx = 7
    
    if (rax_7 != 0)
        rax_8 = sub_140b21e10(&var_58, &data_143db48a8)

int64_t rdi

if (rax_3 != 0 || (rax_7 != 0 && rax_8 != 0))
    rdi.b = 0
else
    rdi.b = 1

if ((rbx.b & 4) != 0)
    PWSTR rcx_11 = var_48
    rbx &= 0xfffffffb
    
    if (rcx_11 != 0)
        sub_140a74f90(rcx_11)

if ((rbx.b & 2) != 0)
    int64_t rcx_12 = var_38
    rbx &= 0xfffffffd
    
    if (rcx_12 != 0)
        sub_140a74f90(rcx_12)

if ((rbx.b & 1) != 0)
    PWSTR rcx_13 = var_28
    
    if (rcx_13 != 0)
        sub_140a74f90(rcx_13)

if (rdi.b != 0)
    data_143db48a8.o = *sub_140b214c0(&var_28)
    int64_t* rax_10 = sub_140b291e0(&data_143db48a8, &var_28, 0)
    
    if (&var_58 != rax_10)
        int64_t rcx_15 = var_58
        
        if (rcx_15 != 0)
            sub_140a74f90(rcx_15)
        
        var_58 = *rax_10
        *rax_10 = 0
        var_50.d = rax_10[1].d
        var_50:4.d = *(rax_10 + 0xc)
        rax_10[1] = 0
    
    PWSTR rcx_17 = var_28
    
    if (rcx_17 != 0)
        sub_140a74f90(rcx_17)
    
    var_48 = nullptr
    int32_t var_40_2 = 0
    sub_1405947f0(&var_48, 0xa)
    int32_t rax_13 = var_40_2 + 0xa
    var_40_2 = rax_13
    
    if (rax_13 s> 0)
        sub_140594770(&var_48)
    
    __builtin_memcpy(var_48, u"MachineId", 0x14)
    var_38 = 0
    int32_t var_30_2 = 0
    sub_1405947f0(&var_38, 0x1a)
    int32_t rax_14 = var_30_2 + 0x1a
    var_30_2 = rax_14
    
    if (rax_14 s> 0)
        sub_140594770(&var_38)
    
    __builtin_memcpy(var_38, u"Unreal Engine/Identifiers", 0x34)
    var_28 = nullptr
    int32_t var_20_2 = 0
    sub_1405947f0(&var_28, 0xb)
    int32_t rax_15 = var_20_2 + 0xb
    var_20_2 = rax_15
    
    if (rax_15 s> 0)
        sub_140594770(&var_28)
    
    __builtin_wcscpy(var_28, u"Epic Games")
    char rax_16 = sub_140b729b0(&var_28, &var_38, &var_48, &var_58)
    PWSTR rcx_28 = var_28
    int64_t* rbx_1
    rbx_1.b = rax_16 == 0
    
    if (rcx_28 != 0)
        sub_140a74f90(rcx_28)
    
    int64_t rcx_29 = var_38
    
    if (rcx_29 != 0)
        sub_140a74f90(rcx_29)
    
    PWSTR rcx_30 = var_48
    
    if (rcx_30 != 0)
        sub_140a74f90(rcx_30)
    
    if (rbx_1.b != 0)
        var_28 = nullptr
        int64_t var_20_3 = 0
        data_143db48a8.o = var_28.o

int64_t rcx_31 = var_58
*arg1 = data_143db48a8.o

if (rcx_31 != 0)
    sub_140a74f90(rcx_31)

return arg1
