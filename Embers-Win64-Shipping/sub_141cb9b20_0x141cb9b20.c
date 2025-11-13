// 函数: sub_141cb9b20
// 地址: 0x141cb9b20
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* arg_20 = nullptr

if (*(arg2 + 0x20) == 0)
    int64_t* r8_1 = *(arg2 + 0x80)
    *(arg2 + 0x80) = r8_1[4]
    sub_140d30490(arg2, &arg_20, r8_1)
else
    sub_140d30460(arg2, *(arg2 + 0x18), &arg_20)

int32_t arg_10 = 0

if (*(arg2 + 0x20) == 0)
    int64_t* r8_4 = *(arg2 + 0x80)
    *(arg2 + 0x80) = r8_4[4]
    sub_140d30490(arg2, &arg_10, r8_4)
else
    sub_140d30460(arg2, *(arg2 + 0x18), &arg_10)

bool cond:0 = arg_10 != 0
int64_t rax_3 = *(arg2 + 0x20)
int64_t* rdx_4 = arg_20
int64_t rdi
rdi.b = rax_3 != 0
*(arg2 + 0x20) = rdi + rax_3
void var_58
int64_t* result = sub_141cb8f30(arg3, sub_141c9a230(&var_58, rdx_4, cond:0))
int64_t var_20

if (var_20 != 0)
    result = sub_140a74f90(var_20)

int64_t* var_28

if (var_28 != 0)
    var_28[1].d -= 1
    
    if (var_28[1].d == 1)
        result = (**var_28)(var_28)
        int32_t temp1_1 = *(var_28 + 0xc)
        *(var_28 + 0xc) -= 1
        
        if (temp1_1 == 1)
            return (*(*var_28 + 8))(var_28, 1)

return result
