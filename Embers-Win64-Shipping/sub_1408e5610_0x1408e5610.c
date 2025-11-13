// 函数: sub_1408e5610
// 地址: 0x1408e5610
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_18
void* var_28 = &var_18
int32_t arg_8
int32_t* var_30 = &arg_8
void var_14
void* var_38 = &var_14
(*(*arg1 + 0x28))(arg1)
char rax_2 = (*(*arg1 + 0x18))(arg1, zx.q(arg1[4].d), zx.q(*(arg1 + 0x24)))
int32_t rcx_2 = *(arg1 + 0x24)
bool rdx_1 = rcx_2 == arg_8

if (arg1[4].d == 0xffffffff || rcx_2 == 0xffffffff)
    rcx_2.b = 1
else
    rcx_2.b = 0

if ((rax_2 == 0 || rcx_2.b != 0 || *(data_143cec028 + 4) == 0) && (rdx_1 != 0 || rcx_2.b != 0))
    float zmm1 = arg1[5].d
    
    if ((int.d(zmm1 + zmm1 + 0.5f) & 0xfffffffe) != 0)
        void* result = arg1[3]
        
        if (*(result + 8) s> 0)
            return result

return arg1[2]
