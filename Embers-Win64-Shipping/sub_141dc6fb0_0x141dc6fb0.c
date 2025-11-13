// 函数: sub_141dc6fb0
// 地址: 0x141dc6fb0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

char arg_18 = arg3
*(arg2 + 0xc) = data_143dbb1f8.q
int32_t rax = data_143dbb200
*(arg2 + 0x14) = rax
*arg2 = *(arg2 + 0xc)
arg2[1].d = rax
char* var_28 = &arg_18
arg2[3].b = 0
int64_t* var_20 = arg2
void* rax_1 = sub_142577430()
void* rbp

if (rax_1 == 0)
    rbp = nullptr
else
    void* rax_2 = sub_142459c10()
    
    if (rax_2 == 0)
        rbp = nullptr
    else
        int64_t rax_3 = sx.q(*(rax_2 + 0x38))
        
        if (rax_3.d s> *(rax_1 + 0x38) || *(*(rax_1 + 0x30) + (rax_3 << 3)) != rax_2 + 0x30)
            rbp = nullptr
        else
            rbp = rax_1

int64_t rax_5 = sub_142459c10()
char** r8 = &var_28
var_28.o = var_28.o

if (rbp != rax_5)
    if (arg4 == 0)
        sub_141db5390(arg1, rax_1, r8)
    else
        sub_141db4980(arg1, rax_1, r8)
else if (arg4 == 0)
    sub_141db41c0(arg1, rax_1, r8)
else
    sub_141db38d0(arg1, rax_1, r8)

return arg2
