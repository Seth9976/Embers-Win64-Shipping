// 函数: sub_140e14a10
// 地址: 0x140e14a10
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void arg_8
sub_140b58260(&arg_8, u"Regular", 1)
int128_t zmm0 = data_14399f5e0
int32_t var_28 = 0
int128_t var_18 = zmm0
int16_t var_24 = 0
int64_t var_20 = 0
int64_t var_38
int64_t* rax_1 = sub_140da4b20(sub_140da2a70(), &var_38)
int64_t var_48 = *rax_1
void* rcx_3 = rax_1[1]
void* var_40 = rcx_3

if (rcx_3 != 0)
    *(rcx_3 + 8) += 1

sub_140d93ac0(arg1, &var_48, zx.d(arg2), &arg_8, &var_28)
int64_t* var_30

if (var_30 != 0)
    var_30[1].d -= 1
    
    if (var_30[1].d == 1)
        (**var_30)(var_30)
        int32_t temp1_1 = *(var_30 + 0xc)
        *(var_30 + 0xc) -= 1
        
        if (temp1_1 == 1)
            (*(*var_30 + 8))(var_30, 1)

return arg1
