// 函数: sub_141bea360
// 地址: 0x141bea360
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

sub_141beee70(arg1)
int64_t* rcx = arg1[0x83]
int128_t zmm0 = *(arg1 + 0x3a0)
char var_38 = 1
int64_t var_30 = 0
int32_t var_28 = 0
int128_t var_48 = zmm0
sub_140e92500(rcx, &rcx[0x65], &var_48, 2)
sub_140745b20(&var_30)
int64_t* rcx_2 = arg1[0x83]
char var_38_1 = 0
var_48 = *(arg1 + 0x3b0)
char var_20 = 1
var_30.o = zx.o(0)
int64_t var_18 = 0
int32_t var_10 = 0
sub_140f5d360(rcx_2, &var_48)
uint64_t result = sub_140745b20(&var_18)
int64_t* rbx_1 = var_28.q

if (rbx_1 != 0)
    rbx_1[1].d -= 1
    
    if (rbx_1[1].d == 1)
        result = (**rbx_1)(rbx_1)
        int32_t temp1_1 = *(rbx_1 + 0xc)
        *(rbx_1 + 0xc) -= 1
        
        if (temp1_1 == 1)
            return (*(*rbx_1 + 8))(rbx_1, 1)

return result
