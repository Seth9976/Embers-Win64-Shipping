// 函数: sub_141807e90
// 地址: 0x141807e90
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (*(arg1 + 0xbc) == 1)
    int64_t rax
    rax.b = 0
    return rax

sub_140a464c0()
int16_t* const rdx

if (arg2[1].d == 0)
    rdx = &data_142d40450
else
    rdx = *arg2

void*** rax_2 = (*(data_14399ea08 + 0x18))(&data_14399ea08, rdx, 0)
void*** rbp = rax_2
int64_t* rcx_1

if (rax_2 == 0)
    rcx_1 = *(arg1 + 0xb0)
    
    if (rcx_1 != 0)
        *(arg1 + 0xb0) = 0
        (**rcx_1)(rcx_1, 1)
else
    void*** rax_3 = j_sub_140a82f30(0x18)
    void*** rsi_1 = nullptr
    void*** rdi_1 = rax_3
    
    if (rax_3 == 0)
        rdi_1 = nullptr
    else
        rax_3[1].d = 1
        *(rax_3 + 0xc) = 1
        *rdi_1 = &data_142d42ea8
        rdi_1[2] = rbp
    
    rax_2 = j_sub_140a82f30(0x18)
    
    if (rax_2 != 0)
        void*** var_18 = rbp
        void*** var_10_1 = rdi_1
        rsi_1 = sub_1417fe890(rax_2, &var_18)
    
    rcx_1 = *(arg1 + 0xb0)
    *(arg1 + 0xb0) = rsi_1
    
    if (rcx_1 != 0)
        (**rcx_1)(rcx_1, 1)
rax_2.b = *(arg1 + 0xb0) != 0
*(arg1 + 0xb8) = 0
return rax_2
