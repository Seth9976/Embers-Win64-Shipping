// 函数: sub_1419953b0
// 地址: 0x1419953b0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void*** rbx_2 = (*(arg2 + 0x30) + 7) & 0xfffffffffffffff8
int64_t r15 = *(arg1[1] + 0x10)
int64_t* r14 = *(*arg1 + 0x10)
void* rax_2 = &rbx_2[0xa]

if (rax_2 u> *(arg2 + 0x38))
    sub_140b0e3d0(arg2 + 0x30, 0x58)
    rbx_2 = (*(arg2 + 0x30) + 7) & 0xfffffffffffffff8
    rax_2 = &rbx_2[0xa]

*(arg2 + 0x30) = rax_2
*(arg2 + 0x14) += 1
**(arg2 + 8) = rbx_2
*(arg2 + 8) = &rbx_2[1]
rbx_2[1] = 0
*rbx_2 = &data_142d56628
rbx_2[2].d = arg1[2].d
*(rbx_2 + 0x14) = *(arg1 + 0x14)
rbx_2[3].d = arg1[3].d
*(rbx_2 + 0x1c) = *(arg1 + 0x1c)
rbx_2[4].d = arg1[4].d
*(rbx_2 + 0x24) = *(arg1 + 0x24)
rbx_2[5].d = arg1[5].d
*(rbx_2 + 0x2c) = *(arg1 + 0x2c)
rbx_2[6].d = arg1[6].d
*(rbx_2 + 0x34) = *(arg1 + 0x34)
rbx_2[7].d = arg1[7].d
*(rbx_2 + 0x3c) = *(arg1 + 0x3c)
rbx_2[8] = r14
rbx_2[9] = r15

if ((*(*r14 + 8))(r14) == 0)
    int64_t* rcx_2 = rbx_2[8]
    
    if ((*(*rcx_2 + 0x18))(rcx_2) == 0)
        int64_t* rcx_3 = rbx_2[8]
        
        if ((*(*rcx_3 + 0x20))(rcx_3) == 0)
            int64_t* rcx_4 = rbx_2[8]
            (*(*rcx_4 + 0x10))(rcx_4)

int64_t* rcx_5 = rbx_2[9]
int64_t result = (*(*rcx_5 + 8))(rcx_5)

if (result == 0)
    int64_t* rcx_6 = rbx_2[9]
    result = (*(*rcx_6 + 0x18))(rcx_6)
    
    if (result == 0)
        int64_t* rcx_7 = rbx_2[9]
        result = (*(*rcx_7 + 0x20))(rcx_7)
        
        if (result == 0)
            int64_t* rcx_8 = rbx_2[9]
            return (*(*rcx_8 + 0x10))(rcx_8)

return result
