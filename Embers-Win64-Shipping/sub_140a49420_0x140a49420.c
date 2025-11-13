// 函数: sub_140a49420
// 地址: 0x140a49420
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t var_18 = 0
int64_t var_10 = 0
sub_1405947f0(&var_18, 0x10)
int32_t rsi = var_10:4.d
int32_t rbx = var_10.d + 0x10
var_10.d = rbx

if (rbx s> rsi)
    sub_140594770(&var_18)
    rsi = var_10:4.d
    rbx = var_10.d

int64_t r14 = var_18
sub_1405a7220(r14, 0x10, "WindowsNoEditor", 0x10, 0x3f)
int64_t rbp = sx.q(arg1[1].d)
int32_t rax = (rbp + 1).d
arg1[1].d = rax

if (rax s> *(arg1 + 0xc))
    sub_1405a4f90(arg1)

int64_t* result = (rbp << 4) + *arg1
*result = r14
result[1].d = rbx
*(result + 0xc) = rsi
return result
