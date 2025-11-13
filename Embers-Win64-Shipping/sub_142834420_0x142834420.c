// 函数: sub_142834420
// 地址: 0x142834420
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* i_2 = arg1[3]

if (i_2 != 0)
    int64_t* i
    
    do
        if (*(*i_2 + 0x58) != 0)
            return 0xffffffff
        
        if (i_2 == 0)
            break
        
        i = i_2[1]
        i_2 = i
    while (i != 0)

int64_t rcx = *arg1

if (rcx != 0)
    free(rcx)

int64_t* i_3 = arg1[3]

if (i_3 != 0)
    int64_t* i_1
    
    do
        XXH32_freeState(*i_3)
        
        if (i_3 == 0)
            break
        
        i_1 = i_3[1]
        i_3 = i_1
    while (i_1 != 0)
    void* rdi_1 = arg1[3]
    
    if (rdi_1 != 0)
        sub_14283403c(rdi_1)

int64_t rcx_3 = arg1[2]

if (rcx_3 != 0)
    free(rcx_3)

while (true)
    int64_t* rcx_4 = arg1[4]
    
    if (rcx_4 == 0)
        break
    
    arg1[4] = *rcx_4
    sub_1428343a0(rcx_4)

free(arg1)
return 0
