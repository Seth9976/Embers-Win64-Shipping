// 函数: sub_1422ad840
// 地址: 0x1422ad840
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t rdx = arg1[1].d

if (*(arg1 + 0xc) != rdx)
    sub_140a05f70(arg1, rdx)

int32_t rbx_1 = arg2 & 0xfffffff0
uint8_t result

do
    int64_t rcx = arg1[(zx.q(rbx_1) & 7) + 3]
    
    if (rcx != 0)
        sub_1422ad840(rcx)
    
    if ((rbx_1.b & 7) u>= 7)
        rbx_1 |= 8
    else
        rbx_1 ^= ((rbx_1 + 1) ^ rbx_1) & 7
    
    result = (rbx_1 u>> 3).b
while ((result & 1) == 0)

return result
