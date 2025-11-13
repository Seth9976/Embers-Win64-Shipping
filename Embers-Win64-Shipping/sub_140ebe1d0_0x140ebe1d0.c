// 函数: sub_140ebe1d0
// 地址: 0x140ebe1d0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* var_28
sub_140ebeb20(*(arg1 + 0x3f0), &var_28)
void* rcx_1 = var_28
int128_t* rax
int128_t var_18

if (rcx_1 == 0)
    rax = &var_18
    var_18 = data_142d3f6c0
else
    rax = sub_140f00af0(rcx_1, &var_18)
*arg2 = *rax
int64_t* var_20

if (var_20 != 0)
    var_20[1].d -= 1
    
    if (var_20[1].d == 1)
        (**var_20)(var_20)
        int32_t temp1_1 = *(var_20 + 0xc)
        *(var_20 + 0xc) -= 1
        
        if (temp1_1 == 1)
            (*(*var_20 + 8))(var_20, 1)

return arg2
