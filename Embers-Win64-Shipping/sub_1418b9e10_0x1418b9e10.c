// 函数: sub_1418b9e10
// 地址: 0x1418b9e10
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t i = 0

if (arg1[2].d s> 0)
    int64_t* r14_1 = nullptr
    
    do
        void* rsi_1 = *(r14_1 + arg1[1])
        data_143efb938(*(*(rsi_1 + 0x38) + 8), **(rsi_1 + 0xa8), 1, rsi_1 + 0x40)
        *(rsi_1 + 0x40) = 0
        *(rsi_1 + 0x2c) = 5
        sub_1418b9b80(rsi_1)
        j_sub_140a74f90(rsi_1)
        i += 1
        r14_1 = &r14_1[1]
    while (i s< arg1[2].d)

int32_t i_1 = 0

if (arg1[4].d s> 0)
    int64_t* r14_2 = nullptr
    
    do
        void* rdi_1 = *(r14_2 + arg1[3])
        
        if (rdi_1 != 0)
            sub_1418b9b80(rdi_1)
            j_sub_140a74f90(rdi_1)
        
        i_1 += 1
        r14_2 = &r14_2[1]
    while (i_1 s< arg1[4].d)

data_143efb920(*(arg1[0xa] + 8), *arg1, 0)
*arg1 = 0
int64_t result = DeleteCriticalSection(&arg1[5])
int64_t rcx_9 = arg1[3]

if (rcx_9 != 0)
    result = sub_140a74f90(rcx_9)

int64_t rcx_10 = arg1[1]

if (rcx_10 == 0)
    return result

return sub_140a74f90(rcx_10) __tailcall
