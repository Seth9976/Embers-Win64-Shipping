// 函数: sub_141425640
// 地址: 0x141425640
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t i_1 = arg1[5].d
int32_t rsi = 0

if (i_1 s> 0)
    int64_t rbp_1 = 0
    
    do
        int64_t* rax_1 = arg1[4]
        int64_t* rdx_1 = arg1
        
        if (rax_1 != 0)
            rdx_1 = rax_1
        
        int64_t* rcx = *(rdx_1 + rbp_1)
        *(rdx_1 + rbp_1) = 0
        
        if (rcx != 0)
            (*(*rcx + 0x38))(rcx)
        
        i_1 = arg1[5].d
        rsi += 1
        rbp_1 += 8
    while (rsi s< i_1)

int64_t* result = arg1[4]
int64_t* result_1 = arg1

if (result != 0)
    result_1 = result

if (i_1 != 0)
    int32_t i
    
    do
        int64_t* rcx_1 = *result_1
        
        if (rcx_1 != 0)
            result = (*(*rcx_1 + 0x38))(rcx_1)
        
        result_1 = &result_1[1]
        i = i_1
        i_1 -= 1
    while (i != 1)

arg1[5].d = 0

if (*(arg1 + 0x2c) != 0)
    result = sub_141427a80(arg1, 0)

int64_t* rcx_3 = arg1[6]
arg1[6] = 0

if (rcx_3 == 0)
    return result

jump(*(*rcx_3 + 0x38))
