// 函数: sub_1428de950
// 地址: 0x1428de950
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

__chkstk(0x28)
int32_t* rax = data_143fecc70

if (rax != 0)
    return rax

int32_t* rax_1 = sub_142926f50(5, (rax + 1).d, 5)
int32_t* rbx_1 = rax_1

if (rax_1 == 0)
    sub_142926f30(rbx_1)
    rbx_1 = nullptr
else
    sub_142891670(rax_1, 0)
    sub_142926fa0(rbx_1, 8)
    sub_1428916b0(rbx_1, sub_1428deb00)
    sub_142891660(rbx_1, sub_1428deab0)
    sub_142926fb0(rbx_1, 0x418)

data_143fecc70 = rbx_1
return rbx_1
