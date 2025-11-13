// 函数: sub_140d74cf0
// 地址: 0x140d74cf0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* rcx = *arg1

if (*(rcx + 8) == 0)
    return 

int64_t* rcx_1 = *(rcx + 0x10)

if ((*(*rcx_1 + 0x10))(rcx_1).b == 0)
    return 

void*** rax_2 = j_sub_140a82f30(0x38)
void*** rax_8

if (rax_2 == 0)
    rax_8 = nullptr
else
    int64_t* rcx_3 = *(*arg1 + 0x10)
    int64_t rdx_1 = *rcx_3
    int64_t* rax_3 = (*(rdx_1 + 0xb0))(rcx_3, rdx_1)
    int64_t rdx_2 = *rax_3
    void* rax_4 = (*rdx_2)(rax_3, rdx_2)
    void* rdx_3 = *arg1
    int32_t rcx_5 = *(rax_4 + 8)
    int32_t rax_5 = rcx_5 - 1
    
    if (rcx_5 == 0)
        rax_5 = 0
    
    int32_t arg_c = rax_5
    int64_t var_18 = *(rdx_3 + 0x10)
    void* rax_7 = *(rdx_3 + 0x18)
    void* var_10_1 = rax_7
    
    if (rax_7 != 0)
        *(rax_7 + 8) += 1
        rdx_3 = *arg1
    
    rax_8 = sub_140d72170(rax_2, *(rdx_3 + 8), &var_18, 0.q)

void* rdx_5 = &rax_8[5]

if (rax_8 == 0)
    rdx_5 = nullptr

**arg1[2] = rdx_5
*arg1[1] = 0
