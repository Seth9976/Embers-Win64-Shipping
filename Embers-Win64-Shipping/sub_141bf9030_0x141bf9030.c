// 函数: sub_141bf9030
// 地址: 0x141bf9030
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t rax = *(arg2 + 0x20)
int64_t r9
r9.b = rax != 0
*(arg2 + 0x20) = r9 + rax
void var_38
int128_t* result = sub_140693390(arg3, sub_141bb0660(arg1, &var_38))
int64_t* var_18

if (var_18 != 0)
    var_18[1].d -= 1
    
    if (var_18[1].d == 1)
        result = (**var_18)(var_18)
        int32_t temp1_1 = *(var_18 + 0xc)
        *(var_18 + 0xc) -= 1
        
        if (temp1_1 == 1)
            return (*(*var_18 + 8))(var_18, 1)

return result
