// 函数: sub_1418f80e0
// 地址: 0x1418f80e0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t result = sub_1418be030(arg2 + 0x3b0, 7, *(arg1 + 0x48))
int32_t i = 0
*(arg1 + 0x48) = 0

if (*(arg1 + 0x30) s> 0)
    int64_t* rdi_1 = nullptr
    
    do
        result = sub_1418be030(arg2 + 0x3b0, 4, *(rdi_1 + *(arg1 + 0x28)))
        i += 1
        rdi_1 = &rdi_1[1]
    while (i s< *(arg1 + 0x30))

int32_t i_1 = 0

if (*(arg1 + 0x40) s> 0)
    int64_t* rsi = nullptr
    
    do
        void* rcx_2 = *(rsi + *(arg1 + 0x38))
        void* arg_10 = rcx_2
        
        if (rcx_2 != 0)
            *(rcx_2 + 8) += 1
        
        result = sub_1418be110(arg2 + 0x3b0, &arg_10)
        i_1 += 1
        rsi = &rsi[1]
    while (i_1 s< *(arg1 + 0x40))

int32_t i_3 = *(arg1 + 0x40)
int64_t* rbx_1 = *(arg1 + 0x38)

if (i_3 != 0)
    int32_t i_2
    
    do
        int64_t* rcx_4 = *rbx_1
        
        if (rcx_4 != 0)
            result = rcx_4[1].d
            rcx_4[1].d -= 1
            
            if (result == 1 && rcx_4 != 0)
                result = (**rcx_4)(rcx_4, 1)
        
        rbx_1 = &rbx_1[1]
        i_2 = i_3
        i_3 -= 1
    while (i_2 != 1)

bool cond:0 = *(arg1 + 0x44) == 0
*(arg1 + 0x40) = 0

if (cond:0)
    return result

return sub_1405c5570(arg1 + 0x38, 0)
