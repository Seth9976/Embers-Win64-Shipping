// 函数: sub_1417d7eb0
// 地址: 0x1417d7eb0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* rbx = data_143ef8a58
void* r8 = data_143ef8a50

if (rbx != 0)
    *(rbx + 0xc) += 1

int32_t rax_1

if (r8 != 0 && rbx != 0)
    rax_1 = 0
    
    if (0 == rbx[1].d)
        rbx[1].d = 0
    else
        rax_1 = rbx[1].d

if (r8 == 0 || rbx == 0 || rax_1 s<= 0)
    *arg1 = 0
    
    if (arg2[1].d != 0)
        int64_t* rcx_6 = *arg2
        void var_28
        
        if (rcx_6 != 0)
            *arg1 = *(*(*rcx_6 + 0x30))(rcx_6, &var_28)
    
    if (rbx != 0)
    label_1417d7fd3:
        int32_t rdi_1 = *(rbx + 0xc)
        *(rbx + 0xc) -= 1
        
        if (rdi_1 == 1)
            (*(*rbx + 8))(rbx, zx.q(rdi_1))
    
    return arg1

void* r9_1 = nullptr
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
label_1417d7f24:
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
            r9_1 = r8
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
            goto label_1417d7f24

int64_t* rcx_1 = *(r9_1 + 0x50)

if (rcx_1 == 0)
    *arg1 = 0
    
    if (arg2[1].d != 0)
        int64_t* rcx_2 = *arg2
        void arg_20
        
        if (rcx_2 != 0)
            *arg1 = *(*(*rcx_2 + 0x30))(rcx_2, &arg_20)
else
    (*(*rcx_1 + 0x110))(rcx_1, arg1, arg2)

if (r14_1 != 0)
    r14_1[1].d -= 1
    
    if (r14_1[1].d == 1)
        (**r14_1)(r14_1)
        int32_t rax_9 = *(r14_1 + 0xc)
        *(r14_1 + 0xc) -= 1
        
        if (rax_9 == 1)
            (*(*r14_1 + 8))(r14_1, 1)

goto label_1417d7fd3
