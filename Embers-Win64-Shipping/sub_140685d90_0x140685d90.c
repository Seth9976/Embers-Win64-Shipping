// 函数: sub_140685d90
// 地址: 0x140685d90
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t var_38 = 0
int32_t var_30 = 0
sub_1405947f0(&var_38, 0xa)
int32_t rax = var_30 + 0xa
var_30 = rax

if (rax s> 0)
    sub_140594770(&var_38)

sub_1405a7220(var_38, 0xa, "LyricYaml", 0xa, 0x3f)
sub_140b7c510()
int64_t r9 = data_143e19eb0
void var_28
int64_t* rcx_3 = *(*(r9 + 0x38))(&data_143e19eb0, &var_28, &var_38, r9)
int64_t var_18
int64_t result = (*(*rcx_3 + 0x18))(rcx_3, &var_18)
int64_t* var_20

if (var_20 != 0)
    var_20[1].d -= 1
    
    if (var_20[1].d == 1)
        result = (**var_20)(var_20)
        int32_t temp1_1 = *(var_20 + 0xc)
        *(var_20 + 0xc) -= 1
        
        if (temp1_1 == 1)
            result = (*(*var_20 + 8))(var_20, 1)

int64_t rcx_6 = var_38

if (rcx_6 != 0)
    result = sub_140a74f90(rcx_6)

int64_t rcx_7 = var_18

if (rcx_7 == 0)
    return result

return sub_140a74f90(rcx_7)
