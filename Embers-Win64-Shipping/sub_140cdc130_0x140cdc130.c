// 函数: sub_140cdc130
// 地址: 0x140cdc130
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* rcx = *(arg1 + 0x28)
int64_t var_68 = 0
int32_t var_5c = 0
int64_t var_48
int64_t arg_8
int64_t rsi_1
int32_t rdi_1

if (rcx == 0)
    int32_t var_60_1 = 0
    sub_1405947f0(&var_68, 5)
    rdi_1 = var_60_1 + 5
    
    if (rdi_1 s> var_5c)
        sub_140594770(&var_68)
    
    rsi_1 = var_68
    __builtin_wcscpy(rsi_1, u"None")
else
    int64_t* rax_1 = sub_140d21e10(rcx, &var_48, 0)
    int16_t* const rbx_1 = &data_142d40450
    
    if (rax_1[1].d != 0)
        *rax_1
    
    arg_8 = *(*(*(arg1 + 0x28) + 0x10) + 0x18)
    int16_t* var_58
    sub_140b63b70(&arg_8, &var_58)
    int32_t var_50
    
    if (var_50 != 0)
        rbx_1 = var_58
    
    sub_140a2e390(&var_68, u"%s'%s'", rbx_1)
    int16_t* rcx_4 = var_58
    rsi_1 = var_68
    int32_t var_60
    rdi_1 = var_60
    var_68 = 0
    var_60.q = 0
    
    if (rcx_4 != 0)
        sub_140a74f90(rcx_4)
    
    int64_t rcx_5 = var_48
    
    if (rcx_5 != 0)
        sub_140a74f90(rcx_5)

int64_t* rax_4 = sub_140b58170(&arg_8, "DestinationObject", 1)
uint64_t var_40 = 0
int64_t rbx_2 = *rax_4
var_48 = rbx_2
uint64_t r12
int32_t r13

if (rdi_1 != 0)
    sub_1405a4c70(&var_40, rdi_1, 0)
    r12 = var_40
    memcpy(r12, rsi_1, rdi_1 * 2)
    int32_t var_34
    r13 = var_34
    rbx_2 = var_48
else
    r13 = 0
    r12 = 0

int64_t r15 = sx.q(arg2[1].d)
int32_t rax_5 = (r15 + 1).d
arg2[1].d = rax_5

if (rax_5 s> *(arg2 + 0xc))
    sub_1405c4e40(arg2)

int64_t* result = (r15 << 5) + *arg2
*result = rbx_2
result[1] = r12
result[2].d = rdi_1
*(result + 0x14) = r13
result[3] = 1

if (rsi_1 == 0)
    return result

return sub_140a74f90(rsi_1)
