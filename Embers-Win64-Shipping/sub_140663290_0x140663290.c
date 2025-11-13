// 函数: sub_140663290
// 地址: 0x140663290
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

uint32_t rax

if (data_143de5480 != 0)
    rax.b = GetCurrentThreadId() == data_143de5470
    
    if (rax.b == 0)
        int64_t arg_20 = 0
        sub_140d23f50(u"You can cancel a background thread task only from the Game Thread.", 2)
        *arg2 = 0
        return 

int64_t* rbx = arg1[1]

if (rbx == 0)
    *arg2 = 0
    return 

rax = 0
bool z_1

if (0 == rbx[1].d)
    rbx[1].d = 0
    z_1 = true
else
    rax = rbx[1].d
    z_1 = false

if (z_1)
    *arg2 = 0
    return 

int64_t* rcx_1

while (true)
    bool z_2
    
    if (rax == rbx[1].d)
        rbx[1].d = rax + 1
        z_2 = true
    else
        rbx[1].d
        z_2 = false
    
    if (z_2)
        rcx_1 = *arg1
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
        *arg2 = 0
        return 

if (rcx_1 == 0)
label_1406633a2:
    rbx[1].d -= 1
    
    if (rbx[1].d == 1)
        (**rbx)(rbx)
        int32_t rdi_2 = *(rbx + 0xc)
        *(rbx + 0xc) -= 1
        
        if (rdi_2 == 1)
            (*(*rbx + 8))(rbx, zx.q(rdi_2))
    
    *arg2 = 0
    return 

void* rdx_1 = rcx_1[4]

if (rdx_1 == 0)
    goto label_1406633a2

bool z_4

if (0 == *(rdx_1 + 0x78))
    *(rdx_1 + 0x78) = 0
    z_4 = true
else
    int64_t rax_3
    rax_3.b = *(rdx_1 + 0x78)
    z_4 = false

if (not(z_4))
    goto label_1406633a2

(*(*rcx_1 + 8))(rcx_1, 0)
*arg2 = 1
rbx[1].d -= 1

if (rbx[1].d != 1)
    return 

(**rbx)(rbx)
int32_t rdi_1 = *(rbx + 0xc)
*(rbx + 0xc) -= 1

if (rdi_1 == 1)
    jump(*(*rbx + 8))
