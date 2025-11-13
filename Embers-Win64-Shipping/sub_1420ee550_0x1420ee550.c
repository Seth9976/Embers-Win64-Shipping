// 函数: sub_1420ee550
// 地址: 0x1420ee550
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t arg_10 = arg2
int16_t* var_58
sub_140b63b70(&arg_10, &var_58)
int64_t var_48
int64_t var_38
sub_142441630(&var_38, sub_140baa460(&var_48, &var_58))
int64_t rcx_3 = var_48

if (rcx_3 != 0)
    sub_140a74f90(rcx_3)

int32_t var_98 = 0xffffffff
int16_t* const r8 = &data_142d40450
uint64_t var_80 = 0
int64_t var_78 = 0
int32_t var_50

if (var_50 != 0)
    r8 = var_58

int64_t var_94 = 0
int64_t arg_8 = 0
int64_t var_88 = 0
sub_140a2e390(&var_48, u"%s.%s", r8)
int64_t var_70
__builtin_memset(&var_70, 0, 0x18)
void var_18
int128_t var_28 = *sub_140a1dfc0(&var_48, &var_18)
sub_140d2c760(&var_70, &var_28)
var_88 = var_70
var_94.d = 0
int64_t var_68
sub_140597df0(&var_80, &var_68)
int64_t rcx_8 = var_68
var_94:4.d = 0

if (rcx_8 != 0)
    sub_140a74f90(rcx_8)

int64_t rcx_9 = var_48

if (rcx_9 != 0)
    sub_140a74f90(rcx_9)

char result = sub_140d16af0(&arg1[7], &var_88)

if (result == 0)
    arg1[5] = 0xffffffff.q
    arg1[6].d = 0
    arg1[7] = var_88
    sub_140597df0(&arg1[8], &var_80)
    *(arg1 + 0xba) &= 0xf9
    
    if (arg1[0x17].b == 2)
        arg1[0x17].b = 1
    
    result = sub_140d23dc0(arg1, 0x30)
    
    if (result == 0)
        void* rcx_13 = arg1[4]
        
        if (rcx_13 != 0)
            result = sub_14244a940(rcx_13, arg1)

uint64_t rcx_14 = var_80

if (rcx_14 != 0)
    result = sub_140a74f90(rcx_14)

int64_t rcx_15 = var_38

if (rcx_15 != 0)
    result = sub_140a74f90(rcx_15)

int16_t* rcx_16 = var_58

if (rcx_16 == 0)
    return result

return sub_140a74f90(rcx_16)
