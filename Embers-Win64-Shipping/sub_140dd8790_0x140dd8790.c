// 函数: sub_140dd8790
// 地址: 0x140dd8790
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* rdi = arg2[1]
int64_t rax = *arg2

if (rdi != 0)
    rdi[1].d += 1

arg1[1] = 0
arg1[2] = 0
*arg1 = &data_142ec8888
arg1[3] = rax
arg1[4] = rdi

if (rdi != 0)
    rdi[1].d += 1

arg1[5] = *arg3
void* rax_2 = arg3[1]
arg1[6] = rax_2

if (rax_2 != 0)
    *(rax_2 + 8) += 1

if (rdi != 0)
    rdi[1].d -= 1
    
    if (rdi[1].d == 1)
        (**rdi)(rdi)
        int32_t temp1_1 = *(rdi + 0xc)
        *(rdi + 0xc) -= 1
        
        if (temp1_1 == 1)
            (*(*rdi + 8))(rdi, 1)

*arg1 = &data_142ec9440
arg1[7] = *arg2
void* rax_6 = arg2[1]
arg1[8] = rax_6

if (rax_6 != 0)
    *(rax_6 + 8) += 1

arg1[9] = *arg4
void* rax_8 = arg4[1]
arg1[0xa] = rax_8

if (rax_8 != 0)
    *(rax_8 + 8) += 1

sub_140de1aa0(sub_140de7320(arg1[9], 0xffffffff), arg3)
int64_t* rdi_1 = arg4[1]

if (rdi_1 != 0)
    rdi_1[1].d -= 1
    
    if (rdi_1[1].d == 1)
        (**rdi_1)(rdi_1)
        int32_t temp3_1 = *(rdi_1 + 0xc)
        *(rdi_1 + 0xc) -= 1
        
        if (temp3_1 == 1)
            (*(*rdi_1 + 8))(rdi_1, 1)

return arg1
