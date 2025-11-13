// 函数: sub_141d7fce0
// 地址: 0x141d7fce0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (*(arg1 + 0x7c) != 0)
    return 

*(arg1 + 0x7c) = 1
void* rbp_1 = *(data_143e29f28 + 0x20)
void** rax = sub_140a84c80(0, 0x30, 0)
void** rdi_1 = rax

if (rax != 0)
    rdi_1[1] = arg1
    *rdi_1 = &data_142d3fe58
    rdi_1[2] = sub_141d7c790
    rdi_1[4] = sub_140a387b0()
    *rdi_1 = &data_142d3feb0

int64_t rbx_1 = 0

if (rdi_1 != 0)
    sub_140599630(rbp_1 + 0x78, 1)
    void arg_8
    int64_t* rax_4 = (*(*rdi_1 + 0x30))(rdi_1, &arg_8)
    int64_t r14_1 = sx.q(*(rbp_1 + 0x80))
    rbx_1 = *rax_4
    int32_t rax_5 = (r14_1 + 1).d
    *(rbp_1 + 0x80) = rax_5
    
    if (rax_5 s> *(rbp_1 + 0x84))
        sub_1405a4f90(rbp_1 + 0x78)
    
    rax = (r14_1 << 4) + *(rbp_1 + 0x78)
    *rax = rdi_1
    rax[1].d = 3

*(arg1 + 8) = rbx_1
