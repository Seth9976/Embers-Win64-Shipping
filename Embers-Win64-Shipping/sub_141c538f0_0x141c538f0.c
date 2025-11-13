// 函数: sub_141c538f0
// 地址: 0x141c538f0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* rbx = arg1[2]

if (rbx == 0)
    return 

int32_t rax = 0
bool z_1

if (0 == rbx[1].d)
    rbx[1].d = 0
    z_1 = true
else
    rax = rbx[1].d
    z_1 = false

if (z_1)
    return 

while (true)
    bool z_2
    
    if (rax == rbx[1].d)
        rbx[1].d = rax + 1
        z_2 = true
    else
        rbx[1].d
        z_2 = false
    
    if (z_2)
        break
    
    rax = 0
    bool z_3
    
    if (0 == rbx[1].d)
        rbx[1].d = 0
        z_3 = true
    else
        rax = rbx[1].d
        z_3 = false
    
    if (z_3)
        return 

if (rbx == 0)
    return 

void* rax_1 = arg1[1]

if (rax_1 != 0)
    int64_t* rcx_2 = *arg1 + 0x28
    int32_t arg_8 = *(rax_1 + 0x10)
    int64_t* rax_3 = sub_141c4c7a0(rcx_2, &arg_8, &arg1[1])
    void* rcx_3 = *arg1
    
    if (*(rcx_3 + 0x130) != 0)
        sub_141c6fa70(rcx_3, rax_3)

rbx[1].d -= 1

if (rbx[1].d != 1)
    return 

(**rbx)(rbx)
int32_t rdi_1 = *(rbx + 0xc)
*(rbx + 0xc) -= 1

if (rdi_1 == 1)
    (*(*rbx + 8))(rbx, zx.q(rdi_1))
