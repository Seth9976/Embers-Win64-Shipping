// 函数: sub_142837d54
// 地址: 0x142837d54
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (arg1 == 0)
    return 

int64_t* i = *(arg1 + 8)

if (i != 0)
    do
        int64_t rcx = *i
        
        if (rcx != 0)
            free(rcx)
        
        i = i[1]
    while (i != 0)
    
    i = *(arg1 + 8)

sub_14283403c(i)
int64_t* i_1 = *(arg1 + 0x10)

if (i_1 != 0)
    do
        int64_t rcx_2 = *i_1
        
        if (rcx_2 != 0)
            free(rcx_2)
        
        i_1 = i_1[1]
    while (i_1 != 0)
    
    i_1 = *(arg1 + 0x10)

sub_14283403c(i_1)
free(arg1)
