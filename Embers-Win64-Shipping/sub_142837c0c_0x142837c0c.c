// 函数: sub_142837c0c
// 地址: 0x142837c0c
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t rcx = *(arg1 + 0x18)

if (rcx != 0)
    (*(arg2 + 0x28))(rcx)

int64_t rcx_1 = *(arg1 + 0x10)

if (rcx_1 != 0)
    free(rcx_1)

int64_t* i = *(arg1 + 0x20)

if (i != 0)
    do
        free(*i)
        i = i[1]
    while (i != 0)
    
    i = *(arg1 + 0x20)

sub_14283403c(i)
*(arg1 + 0x20) = 0
int64_t* i_1 = *(arg1 + 0x28)

if (i_1 != 0)
    do
        void* rcx_5 = *i_1
        int64_t* j = *(rcx_5 + 0x28)
        
        if (j != 0)
            do
                sub_142837d54(*j)
                j = j[1]
            while (j != 0)
            
            rcx_5 = *i_1
        
        sub_14283403c(*(rcx_5 + 0x28))
        free(*i_1)
        i_1 = i_1[1]
    while (i_1 != 0)
    
    i_1 = *(arg1 + 0x28)

sub_14283403c(i_1)
*(arg1 + 0x28) = 0
int64_t* i_2 = *(arg1 + 0x30)

if (i_2 != 0)
    do
        void* rcx_10 = *i_2
        int64_t* j_1 = *(rcx_10 + 0x18)
        
        if (j_1 != 0)
            do
                sub_142837d54(*j_1)
                j_1 = j_1[1]
            while (j_1 != 0)
            
            rcx_10 = *i_2
        
        sub_14283403c(*(rcx_10 + 0x18))
        free(*i_2)
        i_2 = i_2[1]
    while (i_2 != 0)
    
    i_2 = *(arg1 + 0x30)

sub_14283403c(i_2)
*(arg1 + 0x30) = 0
int64_t* i_3 = *(arg1 + 0x38)

if (i_3 != 0)
    do
        free(*i_3)
        i_3 = i_3[1]
    while (i_3 != 0)
    
    i_3 = *(arg1 + 0x38)

sub_14283403c(i_3)
*(arg1 + 0x38) = 0
return free(arg1) __tailcall
