// 函数: sub_1428deba0
// 地址: 0x1428deba0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

__chkstk(0x28)
int32_t* rax = data_143fecc90

if (rax != 0)
    return rax

int32_t* rax_1 = sub_142891600((&rax[0x10]).d, (rax + 0x41).d)
int32_t* rbx_1 = rax_1

if (rax_1 == 0)
    sub_1428915d0(rbx_1)
    rbx_1 = nullptr
else
    sub_1428916a0(rax_1, 0x14)
    sub_142891690(rbx_1, 0x40)
    sub_142891650(rbx_1, 0x68)
    sub_142891670(rbx_1, 0)
    sub_142891680(rbx_1, sub_142893830)
    sub_1428916b0(rbx_1, sub_142893850)
    sub_142891660(rbx_1, sub_142893890)

data_143fecc90 = rbx_1
return rbx_1
