// 函数: sub_141a665c0
// 地址: 0x141a665c0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t var_28

if ((*(arg2 + 0x28) & 1) != 0)
    int64_t result = sub_140ce8e10(arg1, arg2)
    *(arg1 + 0x68) = 0
    
    if (*(arg1 + 0x6c) != 0)
        result = sub_1405a5410(arg1 + 0x60, 0)
    
    int64_t* rsi = *(arg1 + 0x50)
    void* r14_2 = &rsi[sx.q(*(arg1 + 0x58)) * 2]
    
    while (rsi != r14_2)
        var_28 = 0
        int64_t var_20_1 = 0
        sub_140b21e10(rsi, &var_28)
        int64_t rbp_1 = sx.q(*(arg1 + 0x68))
        int32_t rax_1 = (rbp_1 + 1).d
        *(arg1 + 0x68) = rax_1
        
        if (rax_1 s> *(arg1 + 0x6c))
            sub_1405a4f90(arg1 + 0x60)
        
        result = *(arg1 + 0x60)
        rsi = &rsi[2]
        *(result + rbp_1 * 0x10) = var_28.o
    
    return result

int32_t i_2 = *(arg1 + 0x58)
int64_t* rdi_1 = *(arg1 + 0x50)

if (i_2 != 0)
    int32_t i
    
    do
        int64_t rcx_5 = *rdi_1
        
        if (rcx_5 != 0)
            sub_140a74f90(rcx_5)
        
        rdi_1 = &rdi_1[2]
        i = i_2
        i_2 -= 1
    while (i != 1)

*(arg1 + 0x58) = 0

if (*(arg1 + 0x5c) != 0)
    sub_14061cd70(arg1 + 0x50, 0)

int32_t* i_1 = *(arg1 + 0x60)

for (void* r14_5 = &i_1[sx.q(*(arg1 + 0x68)) * 4]; i_1 != r14_5; i_1 = &i_1[4])
    sub_140b291e0(i_1, &var_28, 0)
    int64_t rbp_2 = sx.q(*(arg1 + 0x58))
    int32_t rax_2 = (rbp_2 + 1).d
    *(arg1 + 0x58) = rax_2
    
    if (rax_2 s> *(arg1 + 0x5c))
        sub_1405a4f90(arg1 + 0x50)
    
    int64_t* rcx_11 = (rbp_2 << 4) + *(arg1 + 0x50)
    *rcx_11 = 0
    *rcx_11 = var_28
    var_28 = 0
    int64_t var_20
    rcx_11[1].d = var_20.d
    *(rcx_11 + 0xc) = var_20:4.d
    int64_t rcx_12 = var_28
    var_20 = 0
    
    if (rcx_12 != 0)
        sub_140a74f90(rcx_12)

return sub_140ce8e10(arg1, arg2)
