// 函数: sub_14255ce80
// 地址: 0x14255ce80
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t i_1 = arg4
int64_t* r14 = arg3
int64_t* rbp = arg2
int128_t* result

if (arg4 != 0)
    int32_t i
    
    do
        int64_t* rsi_1 = rbp
        rbp = &rbp[2]
        
        if (rsi_1 != r14)
            int32_t j_2 = rsi_1[1].d
            
            if (j_2 != 0)
                int64_t* rbx_2 = *rsi_1 + 8
                int32_t j
                
                do
                    int64_t* rcx = *rbx_2
                    
                    if (rcx != 0)
                        (**rcx)(rcx, 1)
                        *rbx_2 = 0
                    
                    rbx_2 = &rbx_2[2]
                    j = j_2
                    j_2 -= 1
                while (j != 1)
            
            int32_t j_3 = r14[1].d
            int128_t* rbx_3 = *r14
            int32_t r8 = *(rsi_1 + 0xc)
            rsi_1[1].d = j_3
            
            if (j_3 != 0 || r8 != 0)
                sub_1405a4be0(rsi_1, j_3, r8)
                result = *rsi_1
                
                if (j_3 != 0)
                    int32_t j_1
                    
                    do
                        int128_t zmm0_1 = *rbx_3
                        rbx_3 = &rbx_3[1]
                        *result = zmm0_1
                        result = &result[1]
                        j_1 = j_3
                        j_3 -= 1
                    while (j_1 != 1)
            else
                *(rsi_1 + 0xc) = 0
        
        r14 = &r14[2]
        i = i_1
        i_1 -= 1
    while (i != 1)

result.b = 1
return result
