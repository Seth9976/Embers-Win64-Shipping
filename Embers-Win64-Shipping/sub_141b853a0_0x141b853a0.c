// 函数: sub_141b853a0
// 地址: 0x141b853a0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* rdi = arg1[0x89]

if (rdi != 0)
    rdi[1].d -= 1
    
    if (rdi[1].d == 1)
        (**rdi)(rdi)
        int32_t temp2_1 = *(rdi + 0xc)
        *(rdi + 0xc) -= 1
        
        if (temp2_1 == 1)
            (*(*rdi + 8))(rdi, 1)

int64_t rcx_2 = arg1[0x86]

if (rcx_2 != 0)
    sub_140a74f90(rcx_2)

int64_t rcx_3 = arg1[0x84]

if (rcx_3 != 0)
    sub_140a74f90(rcx_3)

int64_t* rdi_1 = arg1[0x80]

if (rdi_1 != 0)
    rdi_1[1].d -= 1
    
    if (rdi_1[1].d == 1)
        (**rdi_1)(rdi_1)
        int32_t temp5_1 = *(rdi_1 + 0xc)
        *(rdi_1 + 0xc) -= 1
        
        if (temp5_1 == 1)
            (*(*rdi_1 + 8))(rdi_1, 1)

int64_t* rdi_2 = arg1[0x79]

if (rdi_2 != 0)
    rdi_2[1].d -= 1
    
    if (rdi_2[1].d == 1)
        (**rdi_2)(rdi_2)
        int32_t temp6_1 = *(rdi_2 + 0xc)
        *(rdi_2 + 0xc) -= 1
        
        if (temp6_1 == 1)
            (*(*rdi_2 + 8))(rdi_2, 1)

sub_140ddf510(&arg1[0x2b])
int64_t* rdi_3 = arg1[0x27]

if (rdi_3 != 0)
    rdi_3[1].d -= 1
    
    if (rdi_3[1].d == 1)
        (**rdi_3)(rdi_3)
        int32_t rax_9 = *(rdi_3 + 0xc)
        *(rdi_3 + 0xc) -= 1
        
        if (rax_9 == 1)
            (*(*rdi_3 + 8))(rdi_3, 1)

int64_t* rdi_4 = arg1[0x22]

if (rdi_4 != 0)
    rdi_4[1].d -= 1
    
    if (rdi_4[1].d == 1)
        (**rdi_4)(rdi_4)
        int32_t rsi_1 = *(rdi_4 + 0xc)
        *(rdi_4 + 0xc) -= 1
        
        if (rsi_1 == 1)
            (*(*rdi_4 + 8))(rdi_4, zx.q(rsi_1))

return sub_140660b20(arg1) __tailcall
