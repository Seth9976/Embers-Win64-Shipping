// 函数: sub_1422a7370
// 地址: 0x1422a7370
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int16_t* const rsi = &data_142d40450
void** var_1d8
sub_1422877f0(&var_1d8, &data_142d40450)
void* rbx = data_143f52f10
int64_t arg_8
void** var_f8
int64_t var_28

if (rbx == 0)
    int16_t* rdx_4
    
    if (arg1[1].d == 0)
        rdx_4 = &data_142d40450
    else
        rdx_4 = *arg1
    
    sub_14228a4a0(&var_1d8, sub_1422877f0(&var_f8, rdx_4))
    var_f8 = &data_1433155a8
    
    if (var_28 != 0)
        sub_140a74f90(var_28)
else
    int16_t* rdx
    
    if (arg1[1].d == 0)
        rdx = &data_142d40450
    else
        rdx = *arg1
    
    sub_1422877f0(&var_f8, rdx)
    var_f8 = &data_1433155a8
    uint128_t zmm6_1 = sub_142293540(&var_f8, rbx)
    sub_14228a4a0(&var_1d8, &var_f8)
    
    if (var_28 != 0)
        sub_140a74f90(var_28)
    
    if (arg2 != 0)
        sub_141ec98d0(data_143f52f10, sub_140b21590(&arg_8), zmm6_1)
sub_140b19e60()
sub_140b58260(&arg_8, u"LogHealthSnapshot", 1)
int16_t* var_108
int32_t var_100

if (var_100 != 0)
    rsi = var_108

int16_t* const var_1e8 = rsi
sub_140b0eee0(&data_1439a8bd0, &arg_8, 5, u"======= Snapshot: %s =======")
var_1d8[3](&var_1d8, &data_1439a8bd0, arg_8)
wchar16* result = sub_140b0eee0(&data_1439a8bd0, &arg_8, 5, 
    =========================================================")
var_1d8 = &data_1433155a8

if (var_108 != 0)
    result = sub_140a74f90(var_108)

int64_t rcx_13 = *arg1

if (rcx_13 == 0)
    return result

return sub_140a74f90(rcx_13)
