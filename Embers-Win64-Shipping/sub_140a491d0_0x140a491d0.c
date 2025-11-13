// 函数: sub_140a491d0
// 地址: 0x140a491d0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void*** rbx

if (arg1 == 0)
    void*** rax_3 = sub_14059e7c0(sub_140a463a0())
    rbx = rax_3
    
    if (rax_3 == 0)
        rbx = sub_140b662c0(0)
else
    void*** rax_1 = sub_14059e7c0(sub_140a46310())
    rbx = rax_1
    
    if (rax_1 == 0)
        rbx = sub_140b662c0(1)

void*** result = j_sub_140a82f30(0x18)

if (result == 0)
    return result

*result = &data_142e5bfb0
result[1].d = 0
*(result + 0xc) = 0
result[2] = rbx
*result = &data_142e5e778
return result
