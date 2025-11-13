// 函数: sub_141895020
// 地址: 0x141895020
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* i_2 = nullptr
int32_t i_4 = 0
char rax_1 = (*(*arg1 + 8))(arg1, &i_2)
uint64_t rsi = zx.q(rax_1)

if (rax_1 != 0)
    int64_t* i = i_2
    int64_t rdi
    rdi.b = 1
    int64_t var_18 = 0
    int64_t var_10_1 = 0
    
    for (; i != &i[sx.q(i_4) * 2]; i = &i[2])
        if (rdi.b == 0)
            sub_140a20ba0(&var_18, &data_142d6acb4, 2)
        else
            rdi.b = 0
        
        int32_t rax_2 = i[1].d
        int32_t r8_1 = rax_2 - 1
        
        if (rax_2 == 0)
            r8_1 = 0
        
        sub_140a20ba0(&var_18, *i, r8_1)
    
    int16_t* const rbx_1
    
    if (arg1[4].d == 0)
        rbx_1 = &data_142d40450
    else
        rbx_1 = arg1[3]
    
    sub_140a464c0()
    char rax_3 = sub_140b27210(&var_18, rbx_1, 0, &data_14399ea08, 0)
    int64_t rcx_3 = var_18
    rsi.b = rax_3 != 0
    
    if (rcx_3 != 0)
        sub_140a74f90(rcx_3)

int32_t i_3 = i_4
int64_t* i_5 = i_2

if (i_3 != 0)
    int32_t i_1
    
    do
        int64_t rcx_4 = *i_5
        
        if (rcx_4 != 0)
            sub_140a74f90(rcx_4)
        
        i_5 = &i_5[2]
        i_1 = i_3
        i_3 -= 1
    while (i_1 != 1)
    i_5 = i_2

if (i_5 != 0)
    sub_140a74f90(i_5)

return zx.q(rsi.b)
