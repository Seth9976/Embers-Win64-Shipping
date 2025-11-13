// 函数: sub_1422e4da0
// 地址: 0x1422e4da0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t result = data_143f56a98

if (result != 0)
    return result

void* rcx_1 = data_143ddb400
uint64_t var_18 = 0
int32_t var_10_1 = 0
sub_140af5b90(rcx_1, u"PlatformInterface", u"InGameAdManagerClassName", &var_18, &data_143de5780)
int16_t* const rbx_1 = &data_142d40450

if (var_10_1 != 0)
    rbx_1 = var_18

void* rax_1 = sub_140d2f240(sub_1424c7ff0(), 0, rbx_1, 0, 0, 0)
void* rsi_1 = rax_1

if (rax_1 == 0)
    rsi_1 = sub_1424c7ff0()

int64_t arg_8 = 0
void* rax_3 = sub_140cde0b0()

if ((1 & sub_140b5b8a0(0, 0)) != 0)
    sub_140d19010(rax_3, 
        NewObject with empty name can't be used to create default subobjects (inside of UObject derived "
    "class constructor) as it produces incon")

void* rax_5 = sub_140d2dfc0(rsi_1, rax_3, 0, 0, 0, 0, 0, 0, 0)
data_143f56a98 = rax_5
(*(*rax_5 + 0x270))(rax_5)
uint64_t rcx_7 = var_18

if (rcx_7 != 0)
    sub_140a74f90(rcx_7)

return data_143f56a98
