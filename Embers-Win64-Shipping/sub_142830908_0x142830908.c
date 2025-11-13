// 函数: sub_142830908
// 地址: 0x142830908
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (arg1 == 0)
    return 

int64_t rcx = *arg1

if (rcx != 0)
    free(rcx)

int64_t rcx_1 = arg1[1]

if (rcx_1 != 0)
    free(rcx_1)

int64_t* i = arg1[3]

if (i != 0)
    do
        free(*i)
        i = i[1]
    while (i != 0)
    
    sub_14283403c(arg1[3])

free(arg1)
