// 函数: sub_140de90b0
// 地址: 0x140de90b0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (*(arg1 - 0x50) == 0)
    return 

int64_t* rbx_1 = *(arg1 - 0x48)

if (rbx_1 == 0)
    return 

int32_t rax = rbx_1[1].d

if (rax s<= 0)
    return 

void* rdx_1 = nullptr

if (rbx_1 == 0)
    goto label_140de90f2

if (rax == 0)
    rbx_1 = nullptr
else
    rax += 1
    rbx_1[1].d = rax
label_140de90f2:
    
    if (rbx_1 != 0)
        rdx_1 = *(arg1 - 0x50)
    
    if (rbx_1 != 0)
        rbx_1[1].d = rax + 1

sub_140e21770(rdx_1)

if (rbx_1 == 0)
    return 

rbx_1[1].d -= 1

if (rbx_1[1].d == 1)
    (**rbx_1)(rbx_1)
    int32_t temp2_1 = *(rbx_1 + 0xc)
    *(rbx_1 + 0xc) -= 1
    
    if (temp2_1 == 1)
        (*(*rbx_1 + 8))(rbx_1, 1)

rbx_1[1].d -= 1

if (rbx_1[1].d != 1)
    return 

(**rbx_1)(rbx_1)
int32_t temp3_1 = *(rbx_1 + 0xc)
*(rbx_1 + 0xc) -= 1

if (temp3_1 == 1)
    jump(*(*rbx_1 + 8))
