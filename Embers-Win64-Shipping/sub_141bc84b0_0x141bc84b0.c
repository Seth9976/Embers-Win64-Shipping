// 函数: sub_141bc84b0
// 地址: 0x141bc84b0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void*** result = sub_140d266d0(arg1)
int64_t* i = *(arg1 + 0x108)

for (void* rbp_2 = &i[sx.q(*(arg1 + 0x110)) * 2]; i != rbp_2; i = &i[2])
    int64_t* rax = j_sub_140a82f30(0x10)
    int64_t* rdi_1
    
    if (rax == 0)
        rdi_1 = nullptr
    else
        rdi_1 = sub_140596d10(rax, i)
    
    void*** result_1 = j_sub_140a82f30(0x18)
    
    if (result_1 == 0)
        result_1 = nullptr
    else
        result_1[1].d = 1
        *(result_1 + 0xc) = 1
        *result_1 = &data_142ee2130
        result_1[2] = rdi_1
    
    int64_t rdi_2 = sx.q(*(arg1 + 0xdb0))
    int32_t rax_2 = (rdi_2 + 1).d
    *(arg1 + 0xdb0) = rax_2
    
    if (rax_2 s> *(arg1 + 0xdb4))
        sub_1405a4f90(arg1 + 0xda8)
    
    int64_t** rcx_4 = (rdi_2 << 4) + *(arg1 + 0xda8)
    *rcx_4 = rdi_1
    result = result_1
    rcx_4[1] = result
    void* rcx_5 = *(arg1 + 0xdb8)
    int64_t var_20_2 = 0
    int64_t var_28_2 = 0
    
    if (rcx_5 != 0)
        int64_t* rcx_6 = *(rcx_5 + 0x450)
        result = (*(*rcx_6 + 0x240))(rcx_6)

return result
