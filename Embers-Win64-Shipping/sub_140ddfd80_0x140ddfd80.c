// 函数: sub_140ddfd80
// 地址: 0x140ddfd80
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

sub_1405a46b0(*arg1 + 0x180, arg1)
void* rcx_2 = arg1[2]

if (*arg1 != rcx_2)
    sub_1405a46b0(rcx_2 + 0x180, arg1)

int64_t result = sub_140596eb0(&arg1[8])
int64_t* rdi = arg1[7]

if (rdi != 0)
    rdi[1].d -= 1
    
    if (rdi[1].d == 1)
        result = (**rdi)(rdi)
        int32_t temp2_1 = *(rdi + 0xc)
        *(rdi + 0xc) -= 1
        
        if (temp2_1 == 1)
            result = (*(*rdi + 8))(rdi, 1)

int64_t* rdi_1 = arg1[5]

if (rdi_1 != 0)
    rdi_1[1].d -= 1
    
    if (rdi_1[1].d == 1)
        result = (**rdi_1)(rdi_1)
        int32_t temp4_1 = *(rdi_1 + 0xc)
        *(rdi_1 + 0xc) -= 1
        
        if (temp4_1 == 1)
            result = (*(*rdi_1 + 8))(rdi_1, 1)

int64_t* rdi_2 = arg1[3]

if (rdi_2 != 0)
    rdi_2[1].d -= 1
    
    if (rdi_2[1].d == 1)
        result = (**rdi_2)(rdi_2)
        int32_t temp6_1 = *(rdi_2 + 0xc)
        *(rdi_2 + 0xc) -= 1
        
        if (temp6_1 == 1)
            result = (*(*rdi_2 + 8))(rdi_2, 1)

int64_t* rbx_1 = arg1[1]

if (rbx_1 != 0)
    rbx_1[1].d -= 1
    
    if (rbx_1[1].d == 1)
        result = (**rbx_1)(rbx_1)
        int32_t temp7_1 = *(rbx_1 + 0xc)
        *(rbx_1 + 0xc) -= 1
        
        if (temp7_1 == 1)
            return (*(*rbx_1 + 8))(rbx_1, 1)

return result
