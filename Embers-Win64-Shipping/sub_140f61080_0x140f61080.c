// 函数: sub_140f61080
// 地址: 0x140f61080
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

char var_38 = arg2[1].b
int64_t var_30 = *(arg2 + 0x18)
int64_t* rax_2 = arg2[2].q
int128_t var_48 = *arg2

if (rax_2 != 0)
    rax_2[1].d += 1

char var_20 = 1
int64_t var_18 = 0
int32_t var_10 = 0
sub_140dd5630(arg1, &arg1[0x65], &var_48, 2)
uint64_t result = sub_140745b20(&var_18)

if (rax_2 != 0)
    rax_2[1].d -= 1
    
    if (rax_2[1].d == 1)
        result = (**rax_2)(rax_2)
        int32_t temp2_1 = *(rax_2 + 0xc)
        *(rax_2 + 0xc) -= 1
        
        if (temp2_1 == 1)
            result = (*(*rax_2 + 8))(rax_2, 1)

int64_t* rbx_1 = arg2[2].q

if (rbx_1 != 0)
    rbx_1[1].d -= 1
    
    if (rbx_1[1].d == 1)
        result = (**rbx_1)(rbx_1)
        int32_t temp3_1 = *(rbx_1 + 0xc)
        *(rbx_1 + 0xc) -= 1
        
        if (temp3_1 == 1)
            return (*(*rbx_1 + 8))(rbx_1, 1)

return result
