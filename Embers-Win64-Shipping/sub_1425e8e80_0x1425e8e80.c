// 函数: sub_1425e8e80
// 地址: 0x1425e8e80
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t var_48 = 0
int32_t rbx
int64_t* pv

if (sub_1425ec4c0(&var_48) != 0)
    int64_t* pv_1
    pv = pv_1
    rbx = var_48
else
    pv = *arg3
    rbx = 7
    var_48 = 7
    int64_t* pv_2 = pv

int64_t rax_1 = *arg1
int128_t var_28 = var_48.o
int64_t var_38
int64_t var_18 = var_38
int32_t result = (*(rax_1 + 0x18))(arg1, arg2, &var_28)

if (rbx == 0xa || rbx == 0xb)
    CoTaskMemFree(pv)
else
    if (rbx != 0xc || pv == 0)
        return result
    
    (*(*pv + 8))(pv)

return result
