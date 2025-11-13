// 函数: sub_140e9a260
// 地址: 0x140e9a260
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* r14 = nullptr
void* rdx = *(arg1 + 0x88)
int64_t* rcx = nullptr
int64_t* r8 = rdx + 0x4c0
int64_t* rbx = r8[1]

if (rbx != 0)
    int32_t rax_1 = rbx[1].d
    
    if (rax_1 != 0)
        rbx[1].d = rax_1 + 1
        rax_1.b = 1
        rdx = *(arg1 + 0x88)
    
    if (rax_1.b == 0)
        rbx = nullptr
    
    if (rbx != 0)
        rcx = *r8

int64_t* rax_3 = (*(*rcx + 0x48))(rcx, rdx)

if (rax_3 == 0)
    *(arg2 + 4) = 0
else
    int64_t* rdi_1 = rax_3[1]
    
    if (rdi_1 != 0)
        rdi_1[1].d += 1
    
    void* rax_4 = *(arg1 + 0x88)
    
    if (*(rax_4 + 0x4f8) != 0)
        r14 = *(rax_4 + 0x4f0)
    
    int64_t var_18 = *rax_3
    int64_t* var_10_1 = rdi_1
    
    if (rdi_1 != 0)
        rdi_1[1].d += 1
    
    int64_t* var_28_1 = &var_18
    (*(*r14 + 0x48))(r14, arg2, &arg1[2])
    
    if (rdi_1 != 0)
        rdi_1[1].d -= 1
        
        if (rdi_1[1].d == 1)
            (**rdi_1)(rdi_1)
            int32_t temp3_1 = *(rdi_1 + 0xc)
            *(rdi_1 + 0xc) -= 1
            
            if (temp3_1 == 1)
                (*(*rdi_1 + 8))(rdi_1, 1)

if (rbx != 0)
    rbx[1].d -= 1
    
    if (rbx[1].d == 1)
        (**rbx)(rbx)
        int32_t temp1_1 = *(rbx + 0xc)
        *(rbx + 0xc) -= 1
        
        if (temp1_1 == 1)
            (*(*rbx + 8))(rbx, 1)

return arg2
