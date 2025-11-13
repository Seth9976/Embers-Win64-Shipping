// 函数: sub_1418ae070
// 地址: 0x1418ae070
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t i_1 = arg4
uint64_t* result = arg2

if (arg4 != 0)
    void* r14_1 = arg3 + 0x30
    int32_t i
    
    do
        sub_140597df0(result, r14_1 - 0x30)
        *(result + 0x10) = *(r14_1 - 0x20)
        result[4].d = *(r14_1 - 0x10)
        
        if (&result[5] != r14_1 - 8)
            int64_t rdi_1 = sx.q(*r14_1)
            int64_t rsi_1 = *(r14_1 - 8)
            int32_t r8 = *(result + 0x34)
            result[6].d = rdi_1.d
            
            if (rdi_1.d != 0 || r8 != 0)
                sub_140808f70(&result[5], rdi_1.d, r8)
                memcpy(result[5], rsi_1, (rdi_1 * 0x18).d)
            else
                *(result + 0x34) = rdi_1.d
        
        if (&result[7] != r14_1 + 8)
            int32_t j_3 = result[8].d
            int64_t* rbx_2 = result[7]
            
            if (j_3 != 0)
                int32_t j
                
                do
                    int64_t rcx_3 = *rbx_2
                    
                    if (rcx_3 != 0)
                        sub_140a74f90(rcx_3)
                    
                    rbx_2 = &rbx_2[2]
                    j = j_3
                    j_3 -= 1
                while (j != 1)
            
            int32_t j_2 = *(r14_1 + 0x10)
            void* rdi_2 = *(r14_1 + 8)
            int32_t r8_3 = *(result + 0x44)
            result[8].d = j_2
            
            if (j_2 != 0 || r8_3 != 0)
                sub_1405a4be0(&result[7], j_2, r8_3)
                int64_t* rbx_3 = result[7]
                
                if (j_2 != 0)
                    int32_t j_1
                    
                    do
                        *rbx_3 = 0
                        int32_t rsi_3 = *(rdi_2 + 8)
                        int64_t r15_2 = *rdi_2
                        rbx_3[1].d = rsi_3
                        
                        if (rsi_3 != 0)
                            sub_1405a4c70(rbx_3, rsi_3, 0)
                            memcpy(*rbx_3, r15_2, rsi_3 * 2)
                        else
                            *(rbx_3 + 0xc) = 0
                        
                        rbx_3 = &rbx_3[2]
                        rdi_2 += 0x10
                        j_1 = j_2
                        j_2 -= 1
                    while (j_1 != 1)
            else
                *(result + 0x44) = j_2
        
        result[9].b = *(r14_1 + 0x18)
        sub_140597df0(&result[0xa], r14_1 + 0x20)
        result[0xc].b = *(r14_1 + 0x30)
        char rax_5 = *(r14_1 + 0x31)
        r14_1 += 0x68
        *(result + 0x61) = rax_5
        result = &result[0xd]
        i = i_1
        i_1 -= 1
    while (i != 1)

result.b = 1
return result
