// 函数: sub_141d61fe0
// 地址: 0x141d61fe0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

bool cond:0 = *(arg2 + 0x20) == 0
char arg_10 = 0

if (cond:0)
    int64_t* r8_1 = *(arg2 + 0x80)
    *(arg2 + 0x80) = r8_1[4]
    sub_140d30490(arg2, &arg_10, r8_1)
else
    sub_140d30460(arg2, *(arg2 + 0x18), &arg_10)

int32_t arg_18 = 0

if (*(arg2 + 0x20) == 0)
    int64_t* r8_3 = *(arg2 + 0x80)
    *(arg2 + 0x80) = r8_3[4]
    sub_140d30490(arg2, &arg_18, r8_3)
else
    sub_140d30460(arg2, *(arg2 + 0x18), &arg_18)

int64_t rax_3 = *(arg2 + 0x20)
int32_t r9 = arg_18
char r8_4 = arg_10
int64_t rdi
rdi.b = rax_3 != 0
*(arg2 + 0x20) = rdi + rax_3
void var_38
int64_t* rax_4 = sub_141d58ad0(arg1, &var_38, r8_4, r9)
int64_t rdx_5 = *arg3
*arg3 = *rax_4
*rax_4 = rdx_5
int64_t rdx_6 = arg3[1]
arg3[1] = rax_4[1]
rax_4[1] = rdx_6
int32_t result = rax_4[2].d
arg3[2].d = result
int64_t* var_30

if (var_30 != 0)
    result = var_30[1].d
    var_30[1].d -= 1
    
    if (result == 1)
        result = (**var_30)(var_30)
        int32_t rdi_2 = *(var_30 + 0xc)
        *(var_30 + 0xc) -= 1
        
        if (rdi_2 == 1)
            return (*(*var_30 + 8))(var_30, zx.q(rdi_2))

return result
