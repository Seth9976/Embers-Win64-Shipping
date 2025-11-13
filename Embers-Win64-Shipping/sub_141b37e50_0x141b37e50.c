// 函数: sub_141b37e50
// 地址: 0x141b37e50
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t i_5 = 3
void* rdi_1 = arg2 - arg1
int32_t* rbx = arg1 + 0x2c
int64_t i_3 = 3
int64_t i

do
    rbx[-9].b = *(rdi_1 + rbx - 0x24)
    *(rbx - 0x23) = *(rdi_1 + rbx - 0x23)
    sub_14086c240(&rbx[-7], rdi_1 - 0x1c + rbx)
    int64_t* rax_4 = rdi_1 - 0xc + rbx
    
    if (&rbx[-3] != rax_4)
        int32_t rsi_1 = *(rbx + rdi_1 - 4)
        int64_t r15_1 = *rax_4
        int32_t r8_1 = *rbx
        rbx[-1] = rsi_1
        
        if (rsi_1 != 0 || r8_1 != 0)
            sub_1405c4b20(&rbx[-3], rsi_1, r8_1)
            memcpy(*(rbx - 0xc), r15_1, rsi_1 * 0x1c)
        else
            *rbx = rsi_1
    
    rbx[1] = *(rdi_1 + rbx + 4)
    rbx[2].b = *(rdi_1 + rbx + 8)
    sub_141f98dc0(&rbx[3])
    *(rbx + 0x6c) = *(rdi_1 + rbx + 0x6c)
    rbx = &rbx[0x28]
    i = i_3
    i_3 -= 1
while (i != 1)
int32_t* rbx_1 = arg1 + 0x20c
int64_t i_4 = 3
int64_t i_1

do
    rbx_1[-9].b = *(rdi_1 + rbx_1 - 0x24)
    *(rbx_1 - 0x23) = *(rdi_1 + rbx_1 - 0x23)
    sub_14086c240(&rbx_1[-7], rdi_1 - 0x1c + rbx_1)
    int64_t* rax_11 = rdi_1 - 0xc + rbx_1
    
    if (&rbx_1[-3] != rax_11)
        int32_t rsi_2 = *(rdi_1 + rbx_1 - 4)
        int64_t r15_2 = *rax_11
        int32_t r8_3 = *rbx_1
        rbx_1[-1] = rsi_2
        
        if (rsi_2 != 0 || r8_3 != 0)
            sub_1405c4b20(&rbx_1[-3], rsi_2, r8_3)
            memcpy(*(rbx_1 - 0xc), r15_2, rsi_2 * 0x1c)
        else
            *rbx_1 = rsi_2
    
    rbx_1[1] = *(rdi_1 + rbx_1 + 4)
    rbx_1[2].b = *(rdi_1 + rbx_1 + 8)
    sub_141f98dc0(&rbx_1[3])
    *(rbx_1 + 0x6c) = *(rdi_1 + rbx_1 + 0x6c)
    rbx_1 = &rbx_1[0x28]
    i_1 = i_4
    i_4 -= 1
while (i_1 != 1)
int32_t* rbx_2 = arg1 + 0x3ec
int64_t i_2

do
    rbx_2[-9].b = *(rbx_2 + rdi_1 - 0x24)
    *(rbx_2 - 0x23) = *(rbx_2 + rdi_1 - 0x23)
    sub_14086c240(&rbx_2[-7], rdi_1 - 0x1c + rbx_2)
    void* rax_18 = rdi_1 - 0xc + rbx_2
    
    if (&rbx_2[-3] != rax_18)
        int32_t rsi_3 = *(rbx_2 + rdi_1 - 4)
        int64_t rbp = *rax_18
        int32_t r8_5 = *rbx_2
        rbx_2[-1] = rsi_3
        
        if (rsi_3 != 0 || r8_5 != 0)
            sub_1405c4b20(&rbx_2[-3], rsi_3, r8_5)
            memcpy(*(rbx_2 - 0xc), rbp, rsi_3 * 0x1c)
        else
            *rbx_2 = rsi_3
    
    rbx_2[1] = *(rbx_2 + rdi_1 + 4)
    rbx_2[2].b = *(rbx_2 + rdi_1 + 8)
    sub_141f98dc0(&rbx_2[3])
    *(rbx_2 + 0x6c) = *(rbx_2 + rdi_1 + 0x6c)
    rbx_2 = &rbx_2[0x28]
    i_2 = i_5
    i_5 -= 1
while (i_2 != 1)
sub_1405af700(arg1 + 0x5a0, arg2 + 0x5a0)
*(arg1 + 0x640) = *(arg2 + 0x640)
*(arg1 + 0x644) = *(arg2 + 0x644)
*(arg1 + 0x648) = *(arg2 + 0x648)
return arg1
