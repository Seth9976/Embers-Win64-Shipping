// 函数: sub_141d3da50
// 地址: 0x141d3da50
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

uint64_t rbx

if (sub_140b011d0() != 0)
    void** rax_1 = *(arg1 + 0x10)
    void** rcx = &data_143a21c00
    
    if (rax_1 != 0)
        rcx = rax_1
    
    rbx = zx.q((*(*rcx + 8))(rcx))
else
    rbx.b = 2

int64_t* rcx_1 = *(arg1 + 0x30)

if (rcx_1 != 0)
    int64_t rdx_1 = *rcx_1
    
    if (rbx.b != (*(rdx_1 + 0x20))(rcx_1, rdx_1))
        sub_141d36130(rbx.b)

j_sub_140b3db50()
void arg_8
void* rax_6 = sub_140b3dbe0(*sub_140b58170(&arg_8, "ChaosSolvers", 1))
char result = sub_141d3b9a0(rax_6)
int64_t* rbx_1 = *(rax_6 + 0x40)
char result_1 = result
int64_t rdi_1 = 0
uint64_t r14_1 = sx.q(*(rax_6 + 0x48)) << 3 u>> 3

if (rbx_1 u> &rbx_1[sx.q(*(rax_6 + 0x48))])
    r14_1 = 0

if (r14_1 != 0)
    do
        int64_t* rcx_8 = *(rax_6 + 0x30)
        char* rdx_2 = *rbx_1
        
        if (rcx_8 == 0)
            *rdx_2 = result_1
        else
            int64_t var_58_1 = 0
            char result_2 = result_1
            void** const var_48_1 = &data_142e6d808
            int64_t (* var_68)(char* arg1, int64_t* arg2) = sub_141d35a00
            result = (*(*rcx_8 + 8))(rcx_8, rdx_2, &var_68)
        
        rbx_1 = &rbx_1[1]
        rdi_1 += 1
    while (rdi_1 != r14_1)

return result
