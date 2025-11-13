// 函数: sub_1406ad7c0
// 地址: 0x1406ad7c0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* rdx = *(arg1 + 0xc8)

if (rdx == 0)
    return 

int32_t rax = *(rdx + 8)

if (rax == 0)
    return 

while (true)
    bool z_1
    
    if (rax == *(rdx + 8))
        *(rdx + 8) = rax + 1
        z_1 = true
    else
        rax = *(rdx + 8)
        z_1 = false
    
    if (z_1)
        break
    
    if (rax == 0)
        return 

int64_t* rcx_1 = *(arg1 + 0xc0)
int64_t* rbx_1 = *(arg1 + 0xc8)

if (rcx_1 != 0)
    (*(*rcx_1 + 8))(rcx_1, 0, 0, 0, &rcx_1[2])

if (rbx_1 == 0)
    return 

rbx_1[1].d -= 1

if (rbx_1[1].d != 1)
    return 

(**rbx_1)(rbx_1)
int32_t rdi_1 = *(rbx_1 + 0xc)
*(rbx_1 + 0xc) -= 1

if (rdi_1 == 1)
    (*(*rbx_1 + 8))(rbx_1)
