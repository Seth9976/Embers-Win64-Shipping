// 函数: sub_1406b1b80
// 地址: 0x1406b1b80
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t i_1 = arg4
int64_t* r12 = arg3
int64_t* r13 = arg2
int32_t result

if (arg4 != 0)
    int32_t i
    
    do
        int64_t* r14_1 = r13
        r13 = &r13[3]
        
        if (r14_1 != r12)
            int32_t j_3 = r14_1[1].d
            int64_t* rbx_1 = *r14_1
            
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
            
            int32_t j_2 = r12[1].d
            void* rdi_1 = *r12
            int32_t r8 = *(r14_1 + 0xc)
            r14_1[1].d = j_2
            
            if (j_2 != 0 || r8 != 0)
                sub_1405a4be0(r14_1, j_2, r8)
                int64_t* rbx_2 = *r14_1
                
                if (j_2 != 0)
                    int32_t j_1
                    
                    do
                        *rbx_2 = 0
                        int32_t rsi_1 = *(rdi_1 + 8)
                        int64_t r15_1 = *rdi_1
                        rbx_2[1].d = rsi_1
                        
                        if (rsi_1 != 0)
                            sub_1405a4c70(rbx_2, rsi_1, 0)
                            memcpy(*rbx_2, r15_1, rsi_1 * 2)
                        else
                            *(rbx_2 + 0xc) = 0
                        
                        rbx_2 = &rbx_2[2]
                        rdi_1 += 0x10
                        j_1 = j_2
                        j_2 -= 1
                    while (j_1 != 1)
            else
                *(r14_1 + 0xc) = 0
        
        result = r12[2].d
        r12 = &r12[3]
        i = i_1
        i_1 -= 1
        r14_1[2].d = result
    while (i != 1)

result.b = 1
return result
