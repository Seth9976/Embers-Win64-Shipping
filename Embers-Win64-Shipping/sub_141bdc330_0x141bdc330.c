// 函数: sub_141bdc330
// 地址: 0x141bdc330
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (data_143f5b298 == 0)
    return 

int64_t var_18 = 0
int64_t var_10_1 = 0
sub_1405947f0(&var_18, 0x12)
int32_t rdi_1 = var_10_1:4.d
int32_t rbx_1 = var_10_1.d + 0x12
var_10_1.d = rbx_1

if (rbx_1 s> rdi_1)
    sub_140594770(&var_18)
    rdi_1 = var_10_1:4.d
    rbx_1 = var_10_1.d

int64_t r14_1 = var_18
UnDecorator::getReferenceType(r14_1, u"TOGGLE_FULLSCREEN", 0x24)
void* rsi_1 = data_143f5b298
int64_t rbp_1 = sx.q(*(rsi_1 + 0x798))
int32_t rax_1 = (rbp_1 + 1).d
*(rsi_1 + 0x798) = rax_1

if (rax_1 s> *(rsi_1 + 0x79c))
    sub_1405a4f90(rsi_1 + 0x790)

int64_t* rax = (rbp_1 << 4) + *(rsi_1 + 0x790)
*rax = r14_1
rax[1].d = rbx_1
*(rax + 0xc) = rdi_1
