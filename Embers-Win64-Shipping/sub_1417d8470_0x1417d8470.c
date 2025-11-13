// 函数: sub_1417d8470
// 地址: 0x1417d8470
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* rbx = data_143ef8a58
void* r8 = data_143ef8a50

if (rbx != 0)
    *(rbx + 0xc) += 1

if (r8 == 0)
label_1417d859e:
    
    if (rbx != 0)
        int32_t rdi_3 = *(rbx + 0xc)
        *(rbx + 0xc) -= 1
        
        if (rdi_3 == 1)
            (*(*rbx + 8))(rbx, zx.q(rdi_3))
else if (rbx != 0)
    void* rdi_1 = nullptr
    int32_t rax_1 = 0
    
    if (0 == rbx[1].d)
        rbx[1].d = 0
    else
        rax_1 = rbx[1].d
    
    if (rax_1 s<= 0)
        goto label_1417d859e
    
    int32_t rax_2 = 0
    int64_t* rsi_1 = rbx
    bool z_1
    
    if (0 == rbx[1].d)
        rbx[1].d = 0
        z_1 = true
    else
        rax_2 = rbx[1].d
        z_1 = false
    
    if (z_1)
    label_1417d8507:
        rsi_1 = nullptr
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
                rdi_1 = r8
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
                goto label_1417d8507
    
    void var_40
    void* result = sub_1417d82a0(rdi_1, arg1, arg2, sub_140596d10(&var_40, arg3), arg4, arg4.d)
    
    if (rsi_1 != 0)
        rsi_1[1].d -= 1
        
        if (rsi_1[1].d == 1)
            int64_t rdx_3 = *rsi_1
            (*rdx_3)(rsi_1, rdx_3)
            int32_t rax_5 = *(rsi_1 + 0xc)
            *(rsi_1 + 0xc) -= 1
            
            if (rax_5 == 1)
                (*(*rsi_1 + 8))(rsi_1, 1)
    
    int32_t rdi_2 = *(rbx + 0xc)
    *(rbx + 0xc) -= 1
    
    if (rdi_2 == 1)
        (*(*rbx + 8))(rbx, zx.q(rdi_2))
    
    int64_t rcx_6 = *arg3
    
    if (rcx_6 != 0)
        sub_140a74f90(rcx_6)
    
    return result

int64_t rcx_8 = *arg3

if (rcx_8 != 0)
    sub_140a74f90(rcx_8)

return nullptr
