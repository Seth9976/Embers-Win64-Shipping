// 函数: sub_141da6730
// 地址: 0x141da6730
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void*** rax = j_sub_140a82f30(0x38)
void*** rdi = rax

if (rax == 0)
    rdi = nullptr
else
    int64_t* rbx_1 = arg3[1]
    int64_t rax_1 = *arg3
    
    if (rbx_1 != 0)
        rbx_1[1].d += 1
    
    rdi[1].d = arg2
    *rdi = &data_143239db0
    rdi[2] = rax_1
    rdi[3] = rbx_1
    
    if (rbx_1 != 0)
        rbx_1[1].d += 1
    
    rdi[5].d = arg5
    rdi[4].d = 0
    *(rdi + 0x24) = arg4
    rdi[6] = 0
    
    if (rbx_1 != 0)
        rbx_1[1].d -= 1
        
        if (rbx_1[1].d == 1)
            (**rbx_1)(rbx_1)
            int32_t temp2_1 = *(rbx_1 + 0xc)
            *(rbx_1 + 0xc) -= 1
            
            if (temp2_1 == 1)
                (*(*rbx_1 + 8))(rbx_1, 1)

void*** result_1 = j_sub_140a82f30(0x18)

if (result_1 != 0)
    result_1[1].d = 1
    *result_1 = &data_142d42ea8
    *(result_1 + 0xc) = 1
    result_1[2] = rdi

int64_t rdi_1 = sx.q(*(arg1 + 0x2f0))
int32_t rax_4 = (rdi_1 + 1).d
*(arg1 + 0x2f0) = rax_4

if (rax_4 s> *(arg1 + 0x2f4))
    sub_1405a4f90(arg1 + 0x2e8)

int64_t* rcx_5 = (rdi_1 << 4) + *(arg1 + 0x2e8)
*rcx_5 = rdi
void*** result = result_1
rcx_5[1] = result
int64_t* rbx_2 = arg3[1]

if (rbx_2 != 0)
    rbx_2[1].d -= 1
    
    if (rbx_2[1].d == 1)
        result = (**rbx_2)(rbx_2)
        int32_t temp3_1 = *(rbx_2 + 0xc)
        *(rbx_2 + 0xc) -= 1
        
        if (temp3_1 == 1)
            return (*(*rbx_2 + 8))(rbx_2, 1)

return result
