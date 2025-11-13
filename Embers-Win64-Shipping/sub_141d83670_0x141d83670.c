// 函数: sub_141d83670
// 地址: 0x141d83670
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t i_1 = arg4
int64_t* r15 = arg3
int64_t* r12 = arg2

if (arg4 != 0)
    int32_t i
    
    do
        int64_t* rsi_1 = r12
        r12 = &r12[2]
        
        if (rsi_1 != r15)
            int32_t j_3 = rsi_1[1].d
            int64_t* rbx_1 = *rsi_1
            
            if (j_3 != 0)
                int32_t j
                
                do
                    int64_t rcx = *rbx_1
                    
                    if (rcx != 0)
                        sub_140a74f90(rcx)
                    
                    rbx_1 = &rbx_1[2]
                    j = j_3
                    j_3 -= 1
                while (j != 1)
            
            int32_t j_2 = r15[1].d
            void* rdi_1 = *r15
            int32_t r8 = *(rsi_1 + 0xc)
            rsi_1[1].d = j_2
            
            if (j_2 != 0 || r8 != 0)
                sub_1405a4be0(rsi_1, j_2, r8)
                int64_t* rbx_2 = *rsi_1
                
                if (j_2 != 0)
                    int32_t j_1
                    
                    do
                        *rbx_2 = 0
                        int32_t rsi_2 = *(rdi_1 + 8)
                        int64_t r14_1 = *rdi_1
                        rbx_2[1].d = rsi_2
                        
                        if (rsi_2 != 0)
                            sub_1405a4c70(rbx_2, rsi_2, 0)
                            memcpy(*rbx_2, r14_1, rsi_2 * 2)
                        else
                            *(rbx_2 + 0xc) = 0
                        
                        rbx_2 = &rbx_2[2]
                        rdi_1 += 0x10
                        j_1 = j_2
                        j_2 -= 1
                    while (j_1 != 1)
            else
                *(rsi_1 + 0xc) = 0
        
        r15 = &r15[2]
        i = i_1
        i_1 -= 1
    while (i != 1)

int64_t result
result.b = 1
return result
