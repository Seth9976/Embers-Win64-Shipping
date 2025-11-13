// 函数: sub_141bc8c50
// 地址: 0x141bc8c50
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

sub_140ce3290(arg1)
int64_t* i = arg1[0x21]
int128_t var_28

for (void* rbp_2 = &i[sx.q(arg1[0x22].d) * 2]; i != rbp_2; i = &i[2])
    int64_t* rax_1 = j_sub_140a82f30(0x10)
    int64_t* rdi_1
    
    if (rax_1 == 0)
        rdi_1 = nullptr
    else
        rdi_1 = sub_140596d10(rax_1, i)
    
    void*** rax_3 = j_sub_140a82f30(0x18)
    
    if (rax_3 == 0)
        rax_3 = nullptr
    else
        rax_3[1].d = 1
        *(rax_3 + 0xc) = 1
        *rax_3 = &data_142ee2130
        rax_3[2] = rdi_1
    
    var_28.q = rdi_1
    var_28:8.q = rax_3
    int64_t rdi_2 = sx.q(arg1[0x1b6].d)
    int32_t rax_4 = (rdi_2 + 1).d
    arg1[0x1b6].d = rax_4
    
    if (rax_4 s> *(arg1 + 0xdb4))
        sub_1405a4f90(&arg1[0x1b5])
    
    int64_t* rcx_4 = (rdi_2 << 4) + arg1[0x1b5]
    *rcx_4 = var_28.q
    rcx_4[1] = var_28:8.q
    void* rcx_5 = arg1[0x1b7]
    var_28:8.q = 0
    var_28.q = 0
    
    if (rcx_5 != 0)
        int64_t* rcx_6 = *(rcx_5 + 0x450)
        (*(*rcx_6 + 0x240))(rcx_6)

var_28 = data_1439a93f8
int32_t result = sub_140cdd5d0(arg1, &var_28)

if (result s< 7)
    *(arg1 + 0xcf5) = 0

return result
