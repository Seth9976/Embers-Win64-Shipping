// 函数: sub_140e23c20
// 地址: 0x140e23c20
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int128_t zmm0 = *arg2
char var_38 = 0
char var_20 = 1
int64_t var_18 = 0
int32_t var_10 = 0
int128_t var_48 = zmm0
int128_t var_30 = zx.o(0)
sub_140dd5630(arg1, &arg1[0x6a], &var_48, 2)
uint64_t result = sub_140745b20(&var_18)
int64_t* rbx = var_30:8.q

if (rbx != 0)
    rbx[1].d -= 1
    
    if (rbx[1].d == 1)
        result = (**rbx)(rbx)
        int32_t temp1_1 = *(rbx + 0xc)
        *(rbx + 0xc) -= 1
        
        if (temp1_1 == 1)
            jump(*(*rbx + 8))

return result
