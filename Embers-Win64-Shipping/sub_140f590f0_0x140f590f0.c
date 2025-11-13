// 函数: sub_140f590f0
// 地址: 0x140f590f0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

char rdi = 0
int32_t arg_8 = 0
int64_t* var_38
char rax_4

if (*(arg1 + 0x390) != 0 && *(arg1 + 0x429) == 0)
    int64_t var_48 = *(arg4 + 0x18)
    int64_t var_40_1 = *(arg4 + 0x20)
    int64_t* rax_3 = *(arg4 + 0x28)
    var_38 = rax_3
    
    if (rax_3 != 0)
        rax_3[1].d += 1
    
    rdi = 1
    rax_4 = sub_140d6de70(&var_48)

int64_t rsi

if (*(arg1 + 0x390) == 0 || (*(arg1 + 0x429) == 0 && rax_4 != 0))
    rsi.b = 0
else
    rsi.b = 1

if ((rdi & 1) != 0 && var_38 != 0)
    var_38[1].d -= 1
    
    if (var_38[1].d == 1)
        (**var_38)(var_38)
        int32_t temp1_1 = *(var_38 + 0xc)
        *(var_38 + 0xc) -= 1
        
        if (temp1_1 == 1)
            (*(*var_38 + 8))(var_38, 1)

if (rsi.b == 0)
    sub_140a0e2a0(arg1, arg2)
else
    *arg2 = 1
    *(arg2 + 8) = 0
    *(arg2 + 0x10) = 0
    arg2[0x20] = 0
    __builtin_memset(&arg2[0x28], 0, 0x88)
    *(arg2 + 0xb4) &= 0xffffff00
    *(arg2 + 0xb0) = 0x20702

return arg2
