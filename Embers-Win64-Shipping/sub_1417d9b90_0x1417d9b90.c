// 函数: sub_1417d9b90
// 地址: 0x1417d9b90
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* rbx = data_143ef8a58
void* rdx = data_143ef8a50

if (rbx != 0)
    *(rbx + 0xc) += 1

int32_t rax_1

if (rdx != 0 && rbx != 0)
    rax_1 = 0
    
    if (0 == rbx[1].d)
        rbx[1].d = 0
    else
        rax_1 = rbx[1].d

if (rdx == 0 || rbx == 0 || rax_1 s<= 0)
    int64_t var_18 = 0
    int64_t var_10_1 = 0
    sub_140596d10(arg1, &var_18)
    int64_t rcx_6 = var_18
    arg1[2].b = 0
    
    if (rcx_6 != 0)
        sub_140a74f90(rcx_6)
    
    if (rbx != 0)
    label_1417d9cbd:
        int32_t rdi_1 = *(rbx + 0xc)
        *(rbx + 0xc) -= 1
        
        if (rdi_1 == 1)
            (*(*rbx + 8))(rbx, zx.q(rdi_1))
    
    return arg1

void* r8_1 = nullptr
int64_t* r14_1 = rbx
int32_t rax_2 = 0
bool z_1

if (0 == rbx[1].d)
    rbx[1].d = 0
    z_1 = true
else
    rax_2 = rbx[1].d
    z_1 = false

if (z_1)
label_1417d9c07:
    r14_1 = nullptr
else
    while (true)
        bool z_2
        
        if (rax_2 == rbx[1].d)
            rbx[1].d = rax_2 + 1
            z_2 = true
        else
            rbx[1].d
            z_2 = false
        
        if (z_2)
            r8_1 = rdx
            break
        
        rax_2 = 0
        bool z_3
        
        if (0 == rbx[1].d)
            rbx[1].d = 0
            z_3 = true
        else
            rax_2 = rbx[1].d
            z_3 = false
        
        if (z_3)
            goto label_1417d9c07

int64_t* rcx_1 = *(r8_1 + 0x50)

if (rcx_1 == 0)
    int64_t var_28 = 0
    int64_t var_20_1 = 0
    sub_140596d10(arg1, &var_28)
    int64_t rcx_3 = var_28
    arg1[2].b = 2
    
    if (rcx_3 != 0)
        sub_140a74f90(rcx_3)
else
    (*(*rcx_1 + 0x38))(rcx_1, arg1)

if (r14_1 != 0)
    r14_1[1].d -= 1
    
    if (r14_1[1].d == 1)
        (**r14_1)(r14_1)
        int32_t rax_7 = *(r14_1 + 0xc)
        *(r14_1 + 0xc) -= 1
        
        if (rax_7 == 1)
            (*(*r14_1 + 8))(r14_1, 1)

goto label_1417d9cbd
