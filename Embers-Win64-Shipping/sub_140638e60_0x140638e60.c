// 函数: sub_140638e60
// 地址: 0x140638e60
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t i_1 = arg1[1].d
int64_t* rbx = *arg1

if (i_1 != 0)
    int32_t i
    
    do
        int64_t rcx = *rbx
        
        if (rcx != 0)
            sub_140a74f90(rcx)
        
        rbx = &rbx[2]
        i = i_1
        i_1 -= 1
    while (i != 1)

arg1[1].d = 0

if (*(arg1 + 0xc) != 0)
    sub_14061cd70(arg1, 0)

int16_t* var_88 = nullptr
int32_t var_80 = 0
sub_1405947f0(&var_88, 0xa)
int32_t rbx_1 = var_80 + 0xa

if (rbx_1 s> 0)
    sub_140594770(&var_88)

int16_t* rdi = var_88
sub_1405a7220(rdi, 0xa, "SaveGames", 0xa, 0x3f)
int16_t* var_78
sub_140b11c80(&var_78, sub_140b257f0())
int32_t var_70
int16_t* r14

if (var_70 s> 1)
    int32_t rbx_2
    
    if (rbx_1 == 0)
        rbx_2 = 0
    else
        rbx_2 = rbx_1 - 1
    
    int32_t rdx_2
    
    if (var_70 == 0)
        rdx_2 = var_70 + 1
    
    if (var_70 != 0 || rbx_2 == 0)
        rdx_2 = 0
    
    var_88 = var_78
    int32_t rdx_4 = rdx_2 + var_70 + rbx_2
    var_78 = nullptr
    var_80 = var_70
    var_70.q = 0
    int32_t var_6c
    
    if (rdx_4 s> var_6c)
        sub_1405947f0(&var_88, rdx_4)
    
    sub_140a20ba0(&var_88, rdi, rbx_2)
    r14 = var_88
    rbx_1 = var_6c
else
    r14 = rdi
    rdi = nullptr

int16_t* rcx_9 = var_78

if (rcx_9 != 0)
    sub_140a74f90(rcx_9)

if (rdi != 0)
    sub_140a74f90(rdi)

int16_t* const rdi_1 = &data_142d40450
var_88 = nullptr
int64_t var_80_1 = 0
char arg_8 = 0
int64_t var_68
int64_t var_58
sub_140a35790(sub_140a300d0(&var_88, &var_58, &data_142d404c4, &data_142d40450, 1), &var_68)
int64_t rcx_13 = var_58

if (rcx_13 != 0)
    sub_140a74f90(rcx_13)

var_78 = nullptr
void** const var_48 = &data_142d6bbd8
int64_t* var_40 = &var_68
int64_t* var_38 = &var_78
char* var_30 = &arg_8
var_70.q = 0
int64_t* var_28 = arg1

if (arg_8 == 0)
    int64_t* rax_5 = __crt_deferred_errno_cache::get(&data_143db7b00)
    
    if (rbx_1 != 0)
        rdi_1 = r14
    
    int64_t r9_1 = *rax_5
    (*(r9_1 + 0x100))(rax_5, rdi_1, &var_48, r9_1)
else
    int64_t* rax_4 = __crt_deferred_errno_cache::get(&data_143db7b00)
    
    if (rbx_1 != 0)
        rdi_1 = r14
    
    int64_t r9 = *rax_4
    (*(r9 + 0x148))(rax_4, rdi_1, &var_48, r9)

int16_t* rcx_16 = var_78
void** const result = &data_142d6ad38
var_48 = &data_142d6ad38

if (rcx_16 != 0)
    result = sub_140a74f90(rcx_16)

int64_t rcx_17 = var_68

if (rcx_17 != 0)
    result = sub_140a74f90(rcx_17)

int16_t* rcx_18 = var_88

if (rcx_18 != 0)
    result = sub_140a74f90(rcx_18)

if (r14 == 0)
    return result

return sub_140a74f90(r14)
