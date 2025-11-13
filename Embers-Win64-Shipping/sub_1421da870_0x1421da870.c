// 函数: sub_1421da870
// 地址: 0x1421da870
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (*(arg1 + 0x10) == 0)
    return 

int32_t i_1 = 0
int32_t i = 0
int64_t __saved_r15

if (*(arg1 + 0x30) s> 0)
    int64_t rbp_1 = 0
    __saved_r15 = arg3
    
    do
        int64_t i_2 = sx.q(i)
        (*(*arg2 + 0x38))(arg2, *(arg1 + 0x28) + (i_2 << 3), 0, 0)
        int64_t* rcx_1 = *(arg1 + 0x38)
        
        if (*(rcx_1 + rbp_1) != 0)
            (*(*arg2 + 0x38))(arg2, &rcx_1[i_2 * 2], 0, 0, __saved_r15)
        
        i += 1
        rbp_1 += 0x10
    while (i s< *(arg1 + 0x30))

if (*(arg1 + 0x70) s<= 0)
    return 

do
    (*(*arg2 + 0x38))(arg2, *(arg1 + 0x68) + (sx.q(i_1) << 3), 0, 0, __saved_r15)
    i_1 += 1
while (i_1 s< *(arg1 + 0x70))
