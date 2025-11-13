// 函数: sub_14151f4e0
// 地址: 0x14151f4e0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t rbx = (data_143de5788.q).d
int64_t rsi = data_143de5780
uint64_t var_38 = 0
int32_t var_30 = rbx

if (rbx != 0)
    sub_1405a4c70(&var_38, rbx, 0)
    memcpy(var_38, rsi, rbx * 2)
else
    int32_t var_2c_1 = 0

int64_t var_28 = 0
int32_t var_20 = 0
sub_1405947f0(&var_28, 0xa)
int32_t rax = var_20 + 0xa
var_20 = rax

if (rax s> 0)
    sub_140594770(&var_28)

__builtin_memcpy(var_28, u"Analytics", 0x14)
void arg_18
int64_t rbx_1 = *sub_140b58170(&arg_18, "Analytics", 1)
j_sub_140b3db50()
int64_t* rax_2 = j_sub_140b407e0(&data_143de7d78, rbx_1)
void*** var_58 = nullptr
void*** rax_3 = sub_140a84c80(0, 0x30, 0)
var_58 = rax_3
int32_t var_50 = 3

if (rax_3 != 0)
    *rax_3 = &data_142fbc2f8
    rax_3[1] = &var_38
    rax_3[2] = sub_14151f6f0
    rax_3[4] = sub_140a387b0()

void* rcx_6 = data_143ddb400
uint64_t var_48 = 0
int32_t var_40 = 0
sub_140af5b90(rcx_6, u"Analytics", u"ProviderModuleName", &var_48, &data_143de5780)
int16_t* const rdx_4 = &data_142d40450

if (var_40 != 0)
    rdx_4 = var_48

void arg_10
sub_140b58260(&arg_10, rdx_4, 1)
uint64_t rcx_8 = var_48

if (rcx_8 != 0)
    sub_140a74f90(rcx_8)

(*(*rax_2 + 0x40))(rax_2, arg2, &arg_10, &var_58)
void*** rax_7

if (var_50 == 0)
    rax_7 = var_58
label_14151f6a3:
    
    if (rax_7 != 0)
        sub_140a74f90(rax_7)
else
    void*** rcx_10 = var_58
    
    if (rcx_10 != 0)
        (*rcx_10)[7](rcx_10, 0)
        rax_7 = var_58
        
        if (rax_7 != 0)
            rax_7 = sub_140a84c80(rax_7, 0, 0)
            var_58 = rax_7
        
        int32_t var_50_1 = 0
        goto label_14151f6a3
int64_t rcx_13 = var_28

if (rcx_13 != 0)
    sub_140a74f90(rcx_13)

uint64_t rcx_14 = var_38

if (rcx_14 != 0)
    sub_140a74f90(rcx_14)

return arg2
