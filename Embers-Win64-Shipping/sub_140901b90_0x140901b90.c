// 函数: sub_140901b90
// 地址: 0x140901b90
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* rbx = arg1[5]

if (rbx == 0)
    goto label_140901bee

int32_t rax = 0
bool z_1

if (0 == rbx[1].d)
    rbx[1].d = 0
    z_1 = true
else
    rax = rbx[1].d
    z_1 = false

if (z_1)
label_140901be8:
    rbx = nullptr
label_140901bee:
    
    if (arg2 != 0)
        sub_1408ffda0(arg2)
        j_sub_140a74f90(arg2)
    
    if (arg1 != 0)
        (*(*arg1 + 0x10))(arg1, 1)
else
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
            goto label_140901be8
    
    if (rbx == 0)
        goto label_140901bee
    
    void* r14_1 = arg1[4]
    
    if (r14_1 == 0)
        goto label_140901bee
    
    int64_t* rax_4 = j_sub_140a82f30(0x18)
    
    if (rax_4 == 0)
        rax_4 = nullptr
    else
        rax_4[1].d = 1
        *rax_4 = &data_142e1b250
        *(rax_4 + 0xc) = 1
        rax_4[2] = arg2
    
    int64_t var_28 = arg2
    sub_140904af0(r14_1, arg1, arg1[1].d, &var_28)
    
    if (rax_4 != 0)
        rax_4[1].d -= 1
        
        if (rax_4[1].d == 1)
            (**rax_4)(rax_4)
            rax = *(rax_4 + 0xc)
            *(rax_4 + 0xc) -= 1
            
            if (rax == 1)
                (*(*rax_4 + 8))(rax_4, 1)

if (rbx == 0)
    return 

rbx[1].d -= 1

if (rbx[1].d != 1)
    return 

(**rbx)(rbx)
int32_t rsi_1 = *(rbx + 0xc)
*(rbx + 0xc) -= 1

if (rsi_1 == 1)
    (*(*rbx + 8))(rbx, zx.q(rsi_1))
