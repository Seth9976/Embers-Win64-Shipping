// 函数: sub_140926010
// 地址: 0x140926010
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* rbx = *(arg1 + 0x50)

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

void* rcx_1 = *(arg1 + 0x48)

if (rcx_1 != 0)
    int64_t var_18 = *(arg1 + 0x38)
    void* rax_2 = *(arg1 + 0x40)
    void* var_10_1 = rax_2
    
    if (rax_2 != 0)
        *(rax_2 + 8) += 1
    
    sub_1409216c0(rcx_1, arg1 + 8, &var_18)

rbx[1].d -= 1

if (rbx[1].d != 1)
    return 

(**rbx)(rbx)
int32_t rdi_1 = *(rbx + 0xc)
*(rbx + 0xc) -= 1

if (rdi_1 == 1)
    (*(*rbx + 8))(rbx, zx.q(rdi_1))
