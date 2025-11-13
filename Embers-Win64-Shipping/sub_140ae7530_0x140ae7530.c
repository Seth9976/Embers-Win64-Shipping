// 函数: sub_140ae7530
// 地址: 0x140ae7530
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* rdi = *(arg1 + 0x68)
int32_t rax

if (rdi != 0)
    rdi[1].d -= 1
    
    if (rdi[1].d == 1)
        (**rdi)(rdi)
        rax = *(rdi + 0xc)
        *(rdi + 0xc) -= 1
        
        if (rax == 1)
            (*(*rdi + 8))(rdi, 1)

int64_t* rdi_1 = *(arg1 + 0x50)

if (rdi_1 != 0)
    rdi_1[1].d -= 1
    
    if (rdi_1[1].d == 1)
        (**rdi_1)(rdi_1)
        rax = *(rdi_1 + 0xc)
        *(rdi_1 + 0xc) -= 1
        
        if (rax == 1)
            (*(*rdi_1 + 8))(rdi_1, 1)

int64_t* rdi_2 = *(arg1 + 0x38)

if (rdi_2 != 0)
    rdi_2[1].d -= 1
    
    if (rdi_2[1].d == 1)
        (**rdi_2)(rdi_2)
        rax = *(rdi_2 + 0xc)
        *(rdi_2 + 0xc) -= 1
        
        if (rax == 1)
            (*(*rdi_2 + 8))(rdi_2, 1)

int64_t* rdi_3 = *(arg1 + 0x20)

if (rdi_3 != 0)
    rdi_3[1].d -= 1
    
    if (rdi_3[1].d == 1)
        (**rdi_3)(rdi_3)
        rax = *(rdi_3 + 0xc)
        *(rdi_3 + 0xc) -= 1
        
        if (rax == 1)
            (*(*rdi_3 + 8))(rdi_3, 1)

int64_t* rdi_4 = *(arg1 + 8)

if (rdi_4 == 0)
    return 

rdi_4[1].d -= 1

if (rdi_4[1].d != 1)
    return 

(**rdi_4)(rdi_4)
int32_t rbx_1 = *(rdi_4 + 0xc)
*(rdi_4 + 0xc) -= 1

if (rbx_1 == 1)
    (*(*rdi_4 + 8))(rdi_4, zx.q(rbx_1))
