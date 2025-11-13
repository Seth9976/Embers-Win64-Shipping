// 函数: sub_140ebf4f0
// 地址: 0x140ebf4f0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* rdx = *arg1
int64_t* rbx = *(rdx + 0xc0)
int64_t* rax = rbx

if (rbx != 0)
    int32_t rax_1 = rbx[1].d
    
    if (rax_1 == 0)
        rbx = nullptr
        rax = nullptr
    else
        rbx[1].d = rax_1 + 1
        rax = rbx

int64_t rax_3

if (rax != 0)
    rax_3 = *(rdx + 0xb8)

if (rax == 0 || rax_3 == 0)
    sub_140ebd660()
    void* rdx_2 = data_143e2a070
    *arg2 = 0
    void* rcx_3 = *(rdx_2 + 0x1c0)
    arg2[1] = rcx_3
    
    if (rcx_3 != 0)
        int32_t rax_9 = *(rcx_3 + 8)
        int64_t rcx_4
        
        if (rax_9 == 0)
            arg2[1] = 0
            rcx_4 = 0
        else
            *(rcx_3 + 8) = rax_9 + 1
            rcx_4 = arg2[1]
        
        if (rcx_4 != 0)
            *arg2 = *(rdx_2 + 0x1b8)
else
    int64_t* rcx = data_143e29f28
    
    if (rbx != 0)
        rbx[1].d += 1
    
    int64_t var_18 = rax_3
    int64_t* var_10_1 = rbx
    
    if (rbx != 0)
        rbx[1].d += 1
    
    int64_t var_28
    (*(*rcx + 0x28))(rcx, &var_28, &var_18)
    
    if (rbx != 0)
        rbx[1].d -= 1
        
        if (rbx[1].d == 1)
            (**rbx)(rbx)
            int32_t temp3_1 = *(rbx + 0xc)
            *(rbx + 0xc) -= 1
            
            if (temp3_1 == 1)
                (*(*rbx + 8))(rbx, 1)
    
    *arg2 = var_28
    int64_t var_20
    arg2[1] = var_20
    int64_t var_20_1 = 0
    var_28 = 0

if (rbx != 0)
    rbx[1].d -= 1
    
    if (rbx[1].d == 1)
        (**rbx)(rbx)
        int32_t temp1_1 = *(rbx + 0xc)
        *(rbx + 0xc) -= 1
        
        if (temp1_1 == 1)
            (*(*rbx + 8))(rbx, 1)

return arg2
