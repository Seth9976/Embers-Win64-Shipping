// 函数: sub_140f5d9d0
// 地址: 0x140f5d9d0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

char var_28 = 1
int128_t var_38 = zx.o(0)
void* rbx = **(arg1 + 0x388)
int64_t var_20 = 0
int32_t var_18 = 0
*(rbx + 0x48) = 1
*(rbx + 0x38) = zx.o(0)
sub_1407473e0(rbx + 0x50, &var_20)
sub_140745b20(&var_20)
void* result = sub_140de1b90(rbx + 0x10, arg2)
int64_t* rbx_1 = arg2[1]

if (rbx_1 != 0)
    rbx_1[1].d -= 1
    
    if (rbx_1[1].d == 1)
        result = (**rbx_1)(rbx_1)
        int32_t temp1_1 = *(rbx_1 + 0xc)
        *(rbx_1 + 0xc) -= 1
        
        if (temp1_1 == 1)
            return (*(*rbx_1 + 8))(rbx_1, 1)

return result
