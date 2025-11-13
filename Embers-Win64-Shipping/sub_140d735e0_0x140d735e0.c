// 函数: sub_140d735e0
// 地址: 0x140d735e0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* rcx = *arg1

if (*(rcx + 8) == 0)
    return 

int64_t* rcx_1 = *(rcx + 0x10)

if ((*(*rcx_1 + 0x10))(rcx_1).b == 0)
    return 

void*** rax_2 = j_sub_140a82f30(0x38)
void*** rax_3

if (rax_2 == 0)
    rax_3 = nullptr
else
    void* rdx_1 = *arg1
    int64_t var_18 = *(rdx_1 + 0x10)
    void* rcx_3 = *(rdx_1 + 0x18)
    void* var_10_1 = rcx_3
    
    if (rcx_3 != 0)
        *(rcx_3 + 8) += 1
        rdx_1 = *arg1
    
    rax_3 = sub_140d72170(rax_2, *(rdx_1 + 8), &var_18, *(rdx_1 + 0x30))

void* rdx_3 = &rax_3[5]

if (rax_3 == 0)
    rdx_3 = nullptr

**arg1[2] = rdx_3
*arg1[1] = 0
