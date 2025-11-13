// 函数: sub_140597700
// 地址: 0x140597700
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* rdi = *(arg1 + 0xa8)

if (rdi != 0)
    rdi[1].d -= 1
    
    if (rdi[1].d == 1)
        (**rdi)(rdi)
        int32_t temp2_1 = *(rdi + 0xc)
        *(rdi + 0xc) -= 1
        
        if (temp2_1 == 1)
            (*(*rdi + 8))(rdi, 1)

int64_t* rdi_1 = *(arg1 + 0x98)

if (rdi_1 != 0)
    rdi_1[1].d -= 1
    
    if (rdi_1[1].d == 1)
        (**rdi_1)(rdi_1)
        int32_t temp4_1 = *(rdi_1 + 0xc)
        *(rdi_1 + 0xc) -= 1
        
        if (temp4_1 == 1)
            (*(*rdi_1 + 8))(rdi_1, 1)

int64_t* rcx_4 = *(arg1 + 0x80)

if (rcx_4 != 0)
    int32_t temp3_1 = *(rcx_4 + 0xc)
    *(rcx_4 + 0xc) -= 1
    
    if (temp3_1 == 1)
        (*(*rcx_4 + 8))(rcx_4, 1)

int64_t* rcx_5 = *(arg1 + 0x70)

if (rcx_5 != 0)
    int32_t temp5_1 = *(rcx_5 + 0xc)
    *(rcx_5 + 0xc) -= 1
    
    if (temp5_1 == 1)
        (*(*rcx_5 + 8))(rcx_5, 1)

int64_t* rcx_6 = *(arg1 + 0x60)

if (rcx_6 != 0)
    int32_t temp6_1 = *(rcx_6 + 0xc)
    *(rcx_6 + 0xc) -= 1
    
    if (temp6_1 == 1)
        (*(*rcx_6 + 8))(rcx_6, 1)

int64_t* rcx_7 = *(arg1 + 0x50)

if (rcx_7 != 0)
    int32_t temp7_1 = *(rcx_7 + 0xc)
    *(rcx_7 + 0xc) -= 1
    
    if (temp7_1 == 1)
        (*(*rcx_7 + 8))(rcx_7, 1)

int64_t* rcx_8 = *(arg1 + 0x40)

if (rcx_8 != 0)
    int32_t temp8_1 = *(rcx_8 + 0xc)
    *(rcx_8 + 0xc) -= 1
    
    if (temp8_1 == 1)
        (*(*rcx_8 + 8))(rcx_8, 1)

int64_t* rcx_9 = *(arg1 + 0x30)

if (rcx_9 != 0)
    int32_t temp9_1 = *(rcx_9 + 0xc)
    *(rcx_9 + 0xc) -= 1
    
    if (temp9_1 == 1)
        (*(*rcx_9 + 8))(rcx_9, 1)

if (*(arg1 + 0x20) != 0)
    *(arg1 + 0x20) = 0

int64_t* rbx_1 = *(arg1 + 0x10)

if (rbx_1 == 0)
    return 

rbx_1[1].d -= 1

if (rbx_1[1].d != 1)
    return 

(**rbx_1)(rbx_1)
int32_t temp11_1 = *(rbx_1 + 0xc)
*(rbx_1 + 0xc) -= 1

if (temp11_1 == 1)
    (*(*rbx_1 + 8))(rbx_1, 1)
