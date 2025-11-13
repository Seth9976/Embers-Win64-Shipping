// 函数: sub_1406923e0
// 地址: 0x1406923e0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* rdi = arg1[0x97]

if (rdi != 0)
    rdi[1].d -= 1
    
    if (rdi[1].d == 1)
        (**rdi)(rdi)
        int32_t temp1_1 = *(rdi + 0xc)
        *(rdi + 0xc) -= 1
        
        if (temp1_1 == 1)
            (*(*rdi + 8))(rdi, 1)

if (arg1[0x8e] != 0)
    void* rax_3 = arg1[0x90]
    void* rcx_2 = &arg1[0x92]
    
    if (rax_3 != 0)
        rcx_2 = rax_3
    
    (*(*rcx_2 + 0x10))(rcx_2)

if (arg1[0x82].d != 0)
    int64_t* rcx_3 = arg1[0x81]
    
    if (rcx_3 != 0)
        (*(*rcx_3 + 0x38))(rcx_3, 0)
        int64_t rcx_4 = arg1[0x81]
        
        if (rcx_4 != 0)
            arg1[0x81] = sub_140a84c80(rcx_4, 0, 0)
        
        arg1[0x82].d = 0

int64_t rcx_5 = arg1[0x81]

if (rcx_5 != 0)
    sub_140a74f90(rcx_5)

int64_t rcx_6 = arg1[0x7a]

if (rcx_6 != 0)
    sub_140a74f90(rcx_6)

if (arg1[0x78].b != 0)
    arg1[0x78].b = 0

int64_t* rdi_1 = arg1[0x76]

if (rdi_1 != 0)
    rdi_1[1].d -= 1
    
    if (rdi_1[1].d == 1)
        (**rdi_1)(rdi_1)
        int32_t temp4_1 = *(rdi_1 + 0xc)
        *(rdi_1 + 0xc) -= 1
        
        if (temp4_1 == 1)
            (*(*rdi_1 + 8))(rdi_1, 1)

int64_t* rdi_2 = arg1[0x74]

if (rdi_2 != 0)
    rdi_2[1].d -= 1
    
    if (rdi_2[1].d == 1)
        (**rdi_2)(rdi_2)
        int32_t temp5_1 = *(rdi_2 + 0xc)
        *(rdi_2 + 0xc) -= 1
        
        if (temp5_1 == 1)
            (*(*rdi_2 + 8))(rdi_2, 1)

return sub_1406922a0(arg1) __tailcall
