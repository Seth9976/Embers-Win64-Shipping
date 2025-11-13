// 函数: sub_142ae5a80
// 地址: 0x142ae5a80
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

char* _String = arg2
void var_48
(*(*arg3 + 0x50))(arg3, &var_48, arg4)
int32_t rsi = 0
int32_t arg_18 = 0
char i

for (i = sub_142ac2da0(&var_48, 0, &_String, arg3); i != 0; 
        i = sub_142ac2da0(&var_48, rsi, &_String, arg3))
    int32_t rax_1 = atoi(_String)
    
    if (rax_1 + 2 s< *(arg1 + 0x10))
        int64_t rcx_4 = *(arg1 + 8)
        int64_t rbx_2 = sx.q(rax_1 + 2) * 2
        
        if (*(rcx_4 + (rbx_2 << 3) + 8) == 0)
            *(rcx_4 + (rbx_2 << 3)) = rax_1
            *(*(arg1 + 8) + (rbx_2 << 3) + 8) = (*(*arg3 + 0x18))(arg3, &arg_18, arg4)
            *(*(arg1 + 8) + (rbx_2 << 3) + 4) = arg_18
    
    rsi += 1

return i
