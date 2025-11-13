// 函数: sub_141bb5690
// 地址: 0x141bb5690
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (data_143f5b298 == 0 || arg3 - 2 u> 1)
    int32_t rax
    rax.b = 0
    return rax

int64_t var_18 = 0
int64_t var_10 = 0
sub_1405947f0(&var_18, 0x12)
int32_t rdi = var_10:4.d
int32_t rbx = var_10.d + 0x12
var_10.d = rbx

if (rbx s> rdi)
    sub_140594770(&var_18)
    rdi = var_10:4.d
    rbx = var_10.d

int64_t r14 = var_18
UnDecorator::getReferenceType(r14, u"TOGGLE_FULLSCREEN", 0x24)
void* rsi = data_143f5b298
int64_t rbp = sx.q(*(rsi + 0x798))
int32_t rax_1 = (rbp + 1).d
*(rsi + 0x798) = rax_1

if (rax_1 s> *(rsi + 0x79c))
    sub_1405a4f90(rsi + 0x790)

int64_t* rax_4 = (rbp << 4) + *(rsi + 0x790)
*rax_4 = r14
rax_4[1].d = rbx
*(rax_4 + 0xc) = rdi
rax_4.b = 1
return rax_4
