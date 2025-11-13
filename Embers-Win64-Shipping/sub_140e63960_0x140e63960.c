// 函数: sub_140e63960
// 地址: 0x140e63960
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* rdi = arg3[1]

if (rdi != 0)
    rdi[1].d += 1

int64_t var_18 = *arg3
int64_t* var_10 = rdi

if (rdi != 0)
    rdi[1].d += 1

int64_t* rax_1 = sub_140e485b0(arg1 + 0x50, &var_18, arg4)

if (rdi != 0)
    rdi[1].d -= 1
    
    if (rdi[1].d == 1)
        int64_t rdx_1 = *rdi
        (*rdx_1)(rdi, rdx_1)
        int32_t temp1_1 = *(rdi + 0xc)
        *(rdi + 0xc) -= 1
        
        if (temp1_1 == 1)
            (*(*rdi + 8))(rdi, 1)

if (rax_1 == 0)
    *arg2 = 0
    arg2[1] = 0
else
    *arg2 = *rax_1
    void* rax_4 = rax_1[1]
    arg2[1] = rax_4
    
    if (rax_4 != 0)
        *(rax_4 + 8) += 1

int64_t* rdi_1 = arg3[1]

if (rdi_1 != 0)
    rdi_1[1].d -= 1
    
    if (rdi_1[1].d == 1)
        (**rdi_1)(rdi_1)
        int32_t temp3_1 = *(rdi_1 + 0xc)
        *(rdi_1 + 0xc) -= 1
        
        if (temp3_1 == 1)
            (*(*rdi_1 + 8))(rdi_1, 1)

return arg2
