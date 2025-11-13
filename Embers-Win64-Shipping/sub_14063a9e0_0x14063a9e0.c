// 函数: sub_14063a9e0
// 地址: 0x14063a9e0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_48
sub_140a95a00(&var_48)
int512_t zmm1
zmm1.o = zx.o(0)
uint32_t var_40 = zx.d(arg4)
int128_t var_58 = zx.o(0)
int32_t var_3c = 0x2710
zmm1.o = arg1
int32_t var_38 = arg3
int32_t var_34 = arg3
void var_30
int32_t result = sub_140597df0(arg2, sub_140ac6680(sub_140aa1120(&var_30, arg2, &var_48, &var_58)))
int64_t* var_28

if (var_28 != 0)
    result = var_28[1].d
    var_28[1].d -= 1
    
    if (result == 1)
        (**var_28)(var_28)
        result = *(var_28 + 0xc)
        *(var_28 + 0xc) -= 1
        
        if (result == 1)
            result = (*(*var_28 + 8))(var_28, 1)

int64_t* rbx_2 = var_58:8.q

if (rbx_2 != 0)
    result = rbx_2[1].d
    rbx_2[1].d -= 1
    
    if (result == 1)
        result = (**rbx_2)(rbx_2)
        int32_t rdi_1 = *(rbx_2 + 0xc)
        *(rbx_2 + 0xc) -= 1
        
        if (rdi_1 == 1)
            return (*(*rbx_2 + 8))(rbx_2, zx.q(rdi_1))

return result
