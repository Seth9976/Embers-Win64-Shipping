// 函数: sub_140b1af50
// 地址: 0x140b1af50
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t rbp = 0
int32_t rax = 0
int32_t rsi = 0
int32_t r14_2 = data_143de5dd0 << 0x10 | data_1439a04f4
int64_t var_28 = 0
int64_t var_20 = 0

if ((*u"Embers")[0] != 0)
    int64_t rbx_1 = -1
    
    do
        rbx_1 += 1
    while ((*u"Embers")[rbx_1] != 0)
    
    if (rbx_1.d + 1 s> 0)
        sub_1405947f0(&var_28, rbx_1.d + 1)
        rax = var_20:4.d
        rsi = var_20.d
        rbp = var_28
    
    rsi += rbx_1.d + 1
    var_20.d = rsi
    
    if (rsi s> rax)
        sub_140594770(&var_28)
        rsi = var_20.d
        rbp = var_28
    
    UnDecorator::getReferenceType(rbp, u"Embers", (rbx_1.d + 1) * 2)

int32_t rbx_4 = *(sub_140b17d00() + 0x28) & 0x7fffffff
*arg1 = 0
arg1[1].d = rsi

if (rsi != 0)
    sub_1405a4c70(arg1, rsi, 0)
    memcpy(*arg1, rbp, rsi * 2)
else
    *(arg1 + 0xc) = rsi

arg1[2].d = r14_2
*(arg1 + 0x14) = rbx_4

if (rbp != 0)
    sub_140a74f90(rbp)

return arg1
