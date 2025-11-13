// 函数: sub_1427097f0
// 地址: 0x1427097f0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* arg_10 = arg2
(*(*arg1 + 0x288))()
int32_t var_18
int32_t var_18_1 = var_18 & 0xfffffffc
bool cond:0 = arg1[0x1b] == 0
int32_t var_1c = 0
int128_t var_38
__builtin_memset(&var_38, 0, 0x18)
int32_t var_20 = 0xffffffff

if (not(cond:0))
    sub_1426f51e0(arg1, arg_10, &var_38)

int64_t** var_48 = &arg_10
int128_t* var_40 = &var_38
void arg_8
int32_t* result = sub_1426f0560(&arg1[0xf], &arg_8, &var_48, nullptr)
int64_t* rbx_1 = var_38:8.q

if (rbx_1 != 0)
    rbx_1[1].d -= 1
    
    if (rbx_1[1].d == 1)
        result = (**rbx_1)(rbx_1)
        int32_t temp1_1 = *(rbx_1 + 0xc)
        *(rbx_1 + 0xc) -= 1
        
        if (temp1_1 == 1)
            return (*(*rbx_1 + 8))(rbx_1, 1)

return result
