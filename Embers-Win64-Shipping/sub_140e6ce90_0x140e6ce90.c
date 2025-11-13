// 函数: sub_140e6ce90
// 地址: 0x140e6ce90
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

char rbx = 0
int32_t arg_20 = 0
char rax = sub_140e1acc0(*arg4)
int64_t var_58
int64_t* var_50
char rax_1
char rax_5

if (rax != 0)
    rax_1 = sub_140de64f0(*arg4)
    
    if (rax_1 == 0)
        var_58 = *arg4
        int64_t* rax_3 = arg4[1]
        var_50 = rax_3
        
        if (rax_3 != 0)
            rax_3[1].d += 1
        
        rbx = 1
        rax_5 = (*(*arg1 + 0x108))(arg1, &var_58)

int64_t rbp

if (rax == 0 || (rax_1 == 0 && rax_5 == 0))
    rbp.b = 0
else
    rbp.b = 1

if ((rbx & 1) != 0 && var_50 != 0)
    var_50[1].d -= 1
    
    if (var_50[1].d == 1)
        (**var_50)(var_50)
        int32_t temp1_1 = *(var_50 + 0xc)
        *(var_50 + 0xc) -= 1
        
        if (temp1_1 == 1)
            (*(*var_50 + 8))(var_50, 1)

if (rbp.b != 0)
    char rax_8
    char r9
    int128_t zmm6_1
    int64_t zmm7_1
    rax_8, r9, zmm6_1, zmm7_1 = sub_140e1aae0(*arg4, arg3)
    
    if (rax_8 != 0)
        int512_t zmm3
        zmm3.o = arg1[0x56].d
        int32_t var_60 = arg6
        sub_140da3370(sub_140e14f20(*arg4), &var_58, zmm7_1, r9, arg5)
        int64_t var_48 = var_58
        int32_t var_40 = var_50.d
        int32_t var_3c = var_50:4.d
        int64_t var_50_1 = 0
        var_58 = 0
        sub_140d943d0(arg2, &var_48)
        sub_140d94ad0(&var_58)
        int512_t zmm6_2
        zmm6_2.o = zmm6_1
        return arg2

sub_140d947e0(arg2)
return arg2
