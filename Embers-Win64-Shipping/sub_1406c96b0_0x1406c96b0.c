// 函数: sub_1406c96b0
// 地址: 0x1406c96b0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* arg_8 = arg1
int32_t var_28 = 0
*arg1 = 0
arg1[1] = 0
int32_t var_28_1 = 1
int64_t rbp
rbp.b = 1
void* i = *arg2

for (void* r14_2 = (sx.q(arg2[1].d) << 4) + i; i != r14_2; i += 0x10)
    if (rbp.b == 0)
        int64_t r8 = -1
        
        do
            r8 += 1
        while (*(arg3 + (r8 << 1)) != 0)
        
        sub_140a20ba0(arg1, arg3, r8.d)
    else
        rbp.b = 0
    
    int32_t rax_1 = *(i + 8)
    int32_t r8_1 = rax_1 - 1
    
    if (rax_1 == 0)
        r8_1 = 0
    
    sub_140a20ba0(arg1, *i, r8_1)

return arg1
