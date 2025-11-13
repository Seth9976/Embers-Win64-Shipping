// 函数: sub_141d1c930
// 地址: 0x141d1c930
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t var_38
sub_1407453e0(&var_38, arg1)
void* var_28
int32_t i_1

for (int32_t i = i_1; i s< *(var_28 + 0x18); i = i_1)
    void* rdx_3 = sx.q(i) * 0x30 + *var_38
    int64_t* rcx_1 = *(rdx_3 + 0x20)
    
    if (rcx_1 != 0 && *(rdx_3 + 0x1d) == 0)
        (*(*rcx_1 + 0x28))(rcx_1, 1)
    
    int32_t var_2c
    int32_t var_20 = var_20 & not.d(var_2c)
    void var_30
    sub_14059bdd0(&var_30)

arg1[1].d = 0

if (*(arg1 + 0xc) != arg2)
    sub_1405a5220(arg1, arg2)

arg1[6].d = 0xffffffff
*(arg1 + 0x34) = 0
return sub_14059a8e0(&arg1[2], arg2) __tailcall
