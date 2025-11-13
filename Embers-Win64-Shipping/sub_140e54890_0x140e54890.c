// 函数: sub_140e54890
// 地址: 0x140e54890
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

sub_140745b20(&arg1[0x8f])
int64_t* rdi = arg1[0x8c]

if (rdi != 0)
    rdi[1].d -= 1
    
    if (rdi[1].d == 1)
        (**rdi)(rdi)
        int32_t rsi_1 = *(rdi + 0xc)
        *(rdi + 0xc) -= 1
        
        if (rsi_1 == 1)
            (*(*rdi + 8))(rdi, zx.q(rsi_1))

int64_t* rdi_1 = arg1[0x89]

if (rdi_1 != 0)
    rdi_1[1].d -= 1
    
    if (rdi_1[1].d == 1)
        (**rdi_1)(rdi_1)
        int32_t temp3_1 = *(rdi_1 + 0xc)
        *(rdi_1 + 0xc) -= 1
        
        if (temp3_1 == 1)
            (*(*rdi_1 + 8))(rdi_1, 1)

int64_t* rdi_2 = arg1[0x87]

if (rdi_2 != 0)
    rdi_2[1].d -= 1
    
    if (rdi_2[1].d == 1)
        (**rdi_2)(rdi_2)
        int32_t temp5_1 = *(rdi_2 + 0xc)
        *(rdi_2 + 0xc) -= 1
        
        if (temp5_1 == 1)
            (*(*rdi_2 + 8))(rdi_2, 1)

int64_t* rdi_3 = arg1[0x85]

if (rdi_3 != 0)
    rdi_3[1].d -= 1
    
    if (rdi_3[1].d == 1)
        (**rdi_3)(rdi_3)
        int32_t temp7_1 = *(rdi_3 + 0xc)
        *(rdi_3 + 0xc) -= 1
        
        if (temp7_1 == 1)
            (*(*rdi_3 + 8))(rdi_3, 1)

sub_140d952d0(&arg1[0x78])
int64_t* rdi_4 = arg1[0x77]

if (rdi_4 != 0)
    rdi_4[1].d -= 1
    
    if (rdi_4[1].d == 1)
        (**rdi_4)(rdi_4)
        int32_t temp9_1 = *(rdi_4 + 0xc)
        *(rdi_4 + 0xc) -= 1
        
        if (temp9_1 == 1)
            (*(*rdi_4 + 8))(rdi_4, 1)

int64_t* rcx_12 = arg1[0x74]

if (rcx_12 != 0)
    int32_t temp8_1 = *(rcx_12 + 0xc)
    *(rcx_12 + 0xc) -= 1
    
    if (temp8_1 == 1)
        (*(*rcx_12 + 8))(rcx_12, 1)

return sub_1406922a0(arg1) __tailcall
