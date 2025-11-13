// 函数: sub_140edadd0
// 地址: 0x140edadd0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (*(arg1 + 0x910) == 0)
    return 

void* r8_1 = arg2[1]
int64_t rdx = *arg2

if (r8_1 != 0)
    *(r8_1 + 8) += 1

int32_t rcx = arg2[2].d
int64_t var_18 = 0
int32_t var_10_1 = 0
int64_t rax_1 = *(arg1 + 0x738)
*(arg1 + 0x738) = rdx
int64_t var_38_2 = rax_1
int64_t* rax_2 = *(arg1 + 0x740)
*(arg1 + 0x740) = r8_1
*(arg1 + 0x748) = rcx
int32_t var_28_1 = rcx
char var_20_1 = 1
*(arg1 + 0x750) = 1
sub_1407473e0(arg1 + 0x758, &var_18)
sub_140745b20(&var_18)

if (rax_2 != 0)
    rax_2[1].d -= 1
    
    if (rax_2[1].d == 1)
        (**rax_2)(rax_2)
        int32_t rdi_1 = *(rax_2 + 0xc)
        *(rax_2 + 0xc) -= 1
        
        if (rdi_1 == 1)
            (*(*rax_2 + 8))(rax_2, zx.q(rdi_1))

int64_t* rbx_2 = *(arg1 + 0x910)
int64_t* rax_6 = sub_140ac6680(arg2)
int16_t* const rdx_3

if (rax_6[1].d == 0)
    rdx_3 = &data_142d40450
else
    rdx_3 = *rax_6

(*(*rbx_2 + 0xd8))(rbx_2, rdx_3)
