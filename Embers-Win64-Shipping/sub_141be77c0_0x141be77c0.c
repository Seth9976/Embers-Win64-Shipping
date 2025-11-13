// 函数: sub_141be77c0
// 地址: 0x141be77c0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

*(arg1 + 0x49) = arg2.b

if (*(arg1 + 0x50) == 0)
    return 

int64_t* rbx_1 = *(arg1 + 0x58)

if (rbx_1 == 0)
    return 

int32_t rax = rbx_1[1].d

if (rax s<= 0)
    return 

int64_t* r8_1 = nullptr

if (rbx_1 != 0)
    if (rax != 0)
        rbx_1[1].d = rax + 1
        rax.b = 1
    
    if (rax.b == 0)
        rbx_1 = nullptr
    
    if (rbx_1 != 0)
        r8_1 = *(arg1 + 0x50)

sub_140f61770(r8_1, arg2)

if (rbx_1 == 0)
    return 

rbx_1[1].d -= 1

if (rbx_1[1].d != 1)
    return 

(**rbx_1)(rbx_1)
int32_t temp1_1 = *(rbx_1 + 0xc)
*(rbx_1 + 0xc) -= 1

if (temp1_1 == 1)
    jump(*(*rbx_1 + 8))
