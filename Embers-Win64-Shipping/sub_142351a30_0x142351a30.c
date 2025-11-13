// 函数: sub_142351a30
// 地址: 0x142351a30
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* rbx = *arg1

if ((rbx.b & 1) != 0)
    rbx = (rbx s>> 1) + arg1

int32_t i_1 = arg1[1].d

if (i_1 != 0)
    void* rbx_2 = rbx + 8
    int32_t i
    
    do
        *(rbx_2 - 8) = &data_142da8048
        sub_140a1d5c0(rbx_2 + 0x10)
        sub_140a1d5c0(rbx_2)
        rbx_2 += 0x40
        i = i_1
        i_1 -= 1
    while (i != 1)

return sub_140a1d5c0(arg1) __tailcall
