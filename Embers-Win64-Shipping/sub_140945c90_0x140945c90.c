// 函数: sub_140945c90
// 地址: 0x140945c90
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void*** rax = j_sub_140a82f30(0x118)
void*** rdi

if (rax == 0)
    rdi = nullptr
else
    rdi = sub_140948ac0(rax)

void*** rax_2 = sub_140a84c80(0, 0x30, 0)

if (rax_2 != 0)
    rax_2[1] = rdi
    *rax_2 = &data_142d3fe58
    rax_2[2] = sub_14094eaf0
    rax_2[4] = sub_140a387b0()
    *rax_2 = &data_142d3feb0

if (rax_2 != 0)
    sub_140599630(&data_143989390, 1)
    void arg_8
    (*rax_2)[6](rax_2, &arg_8)
    int64_t rbp_1 = sx.q(data_143989398)
    int32_t rax_5 = (rbp_1 + 1).d
    bool cond:0_1 = rax_5 s<= data_14398939c
    data_143989398 = rax_5
    
    if (not(cond:0_1))
        sub_1405a4f90(&data_143989390)
    
    void** rax_8 = (rbp_1 << 4) + data_143989390
    *rax_8 = rax_2
    rax_8[1].d = 3

int64_t result = sub_140957410(rdi)
int64_t* rcx_3 = *(arg1 + 8)
*(arg1 + 8) = rdi

if (rcx_3 == 0)
    return result

jump(**rcx_3)
