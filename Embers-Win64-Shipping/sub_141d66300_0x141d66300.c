// 函数: sub_141d66300
// 地址: 0x141d66300
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* rcx = arg1[0x42]

if (rcx != 0)
    int32_t temp1_1 = *(rcx + 0xc)
    *(rcx + 0xc) -= 1
    
    if (temp1_1 == 1)
        (*(*rcx + 8))(rcx, 1)

int64_t rcx_1 = arg1[0x3a]

if (rcx_1 != 0)
    sub_140a74f90(rcx_1)

int64_t rcx_2 = arg1[0x33]

if (rcx_2 != 0)
    sub_140a74f90(rcx_2)

int64_t rcx_3 = arg1[0x31]

if (rcx_3 != 0)
    sub_140a74f90(rcx_3)

int64_t rcx_4 = arg1[0x2f]

if (rcx_4 != 0)
    sub_140a74f90(rcx_4)

int64_t* rdi = arg1[0x2a]

if (rdi != 0)
    rdi[1].d -= 1
    
    if (rdi[1].d == 1)
        (**rdi)(rdi)
        int32_t temp3_1 = *(rdi + 0xc)
        *(rdi + 0xc) -= 1
        
        if (temp3_1 == 1)
            (*(*rdi + 8))(rdi, 1)

arg1[0x21] = &data_14306f198
int64_t rcx_7 = arg1[0x1f]

if (rcx_7 != 0)
    sub_140a74f90(rcx_7)

int64_t* rcx_8 = arg1[0x1e]

if (rcx_8 != 0)
    int32_t temp4_1 = *(rcx_8 + 0xc)
    *(rcx_8 + 0xc) -= 1
    
    if (temp4_1 == 1)
        (*(*rcx_8 + 8))(rcx_8, 1)

int64_t* rcx_9 = arg1[0x1c]

if (rcx_9 != 0)
    int32_t temp5_1 = *(rcx_9 + 0xc)
    *(rcx_9 + 0xc) -= 1
    
    if (temp5_1 == 1)
        (*(*rcx_9 + 8))(rcx_9, 1)

int64_t* rdi_1 = arg1[9]

if (rdi_1 != 0)
    rdi_1[1].d -= 1
    
    if (rdi_1[1].d == 1)
        (**rdi_1)(rdi_1)
        int32_t rsi_1 = *(rdi_1 + 0xc)
        *(rdi_1 + 0xc) -= 1
        
        if (rsi_1 == 1)
            (*(*rdi_1 + 8))(rdi_1, zx.q(rsi_1))

return sub_140d163b0(arg1) __tailcall
