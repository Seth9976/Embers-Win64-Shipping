// 函数: sub_1418ec6f0
// 地址: 0x1418ec6f0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

*(arg1 + 8) = -1
*arg1 = 0
void* rsi = &arg1[4]
arg1[1].w = 0
int64_t i_1 = 8
int32_t result
int64_t i

do
    result = *(rsi + 0xc)
    int64_t* rbx_1 = *rsi
    int32_t j_2 = *(rsi + 8)
    
    if (result s< 0)
        if (j_2 != 0)
            int32_t j
            
            do
                int64_t rcx_1 = *rbx_1
                
                if (rcx_1 != 0)
                    sub_140a74f90(rcx_1)
                
                rbx_1 = &rbx_1[2]
                j = j_2
                j_2 -= 1
            while (j != 1)
            result = *(rsi + 0xc)
        
        *(rsi + 8) = 0
        
        if (result != 0)
            result = sub_1405a5410(rsi, 0)
    else
        if (j_2 != 0)
            int32_t j_1
            
            do
                int64_t rcx = *rbx_1
                
                if (rcx != 0)
                    result = sub_140a74f90(rcx)
                
                rbx_1 = &rbx_1[2]
                j_1 = j_2
                j_2 -= 1
            while (j_1 != 1)
        
        *(rsi + 8) = 0
    
    *(rsi + 0x10) = 0
    rsi += 0x18
    i = i_1
    i_1 -= 1
while (i != 1)
return result
