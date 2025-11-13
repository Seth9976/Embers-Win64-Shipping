// 函数: sub_141cb9f00
// 地址: 0x141cb9f00
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t arg_10 = 0

if (*(arg2 + 0x20) == 0)
    int64_t* r8_1 = *(arg2 + 0x80)
    *(arg2 + 0x80) = r8_1[4]
    sub_140d30490(arg2, &arg_10, r8_1)
else
    sub_140d30460(arg2, *(arg2 + 0x18), &arg_10)

int32_t arg_8 = 0

if (*(arg2 + 0x20) == 0)
    int64_t* r8_3 = *(arg2 + 0x80)
    *(arg2 + 0x80) = r8_3[4]
    sub_140d30490(arg2, &arg_8, r8_3)
else
    sub_140d30460(arg2, *(arg2 + 0x18), &arg_8)

int64_t rax_3 = *(arg2 + 0x20)
int64_t r8_4 = arg_10
int64_t r9
r9.b = arg_8 != 0
int64_t rdi
rdi.b = rax_3 != 0
*(arg2 + 0x20) = rdi + rax_3
void var_68
int64_t* result = sub_141cb8f30(arg3, (*(*arg1 + 0x50))(arg1, &var_68, r8_4, r9))
int64_t var_30

if (var_30 != 0)
    result = sub_140a74f90(var_30)

int64_t* var_38

if (var_38 != 0)
    var_38[1].d -= 1
    
    if (var_38[1].d == 1)
        result = (**var_38)(var_38)
        int32_t temp1_1 = *(var_38 + 0xc)
        *(var_38 + 0xc) -= 1
        
        if (temp1_1 == 1)
            return (*(*var_38 + 8))(var_38, 1)

return result
