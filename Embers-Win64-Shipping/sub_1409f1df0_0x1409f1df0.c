// 函数: sub_1409f1df0
// 地址: 0x1409f1df0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t i_1 = arg4
int32_t* r13 = arg2

if (arg4 != 0)
    int64_t* r15_1 = arg3 + 0x18
    int32_t i
    
    do
        int32_t* rbx_1 = r13
        r13 = &r13[0xa]
        *rbx_1 = r15_1[-3].d
        sub_140780c40(&rbx_1[2], &r15_1[-2])
        
        if (&rbx_1[6] != r15_1)
            int32_t j_3 = rbx_1[8]
            int64_t* rbx_2 = *(rbx_1 + 0x18)
            
            if (j_3 != 0)
                int32_t j
                
                do
                    int64_t rcx_1 = *rbx_2
                    
                    if (rcx_1 != 0)
                        sub_140a74f90(rcx_1)
                    
                    rbx_2 = &rbx_2[2]
                    j = j_3
                    j_3 -= 1
                while (j != 1)
            
            int32_t j_2 = r15_1[1].d
            void* rdi_1 = *r15_1
            int32_t r8 = rbx_1[9]
            rbx_1[8] = j_2
            
            if (j_2 != 0 || r8 != 0)
                sub_1405a4be0(&rbx_1[6], j_2, r8)
                int64_t* rbx_3 = *(rbx_1 + 0x18)
                
                if (j_2 != 0)
                    int32_t j_1
                    
                    do
                        *rbx_3 = 0
                        int64_t rsi_2 = sx.q(*(rdi_1 + 8))
                        int64_t r14_1 = *rdi_1
                        rbx_3[1].d = rsi_2.d
                        
                        if (rsi_2.d != 0)
                            sub_1405c4a00(rbx_3, rsi_2.d, 0)
                            memcpy(*rbx_3, r14_1, (rsi_2 << 3).d)
                        else
                            *(rbx_3 + 0xc) = 0
                        
                        rbx_3 = &rbx_3[2]
                        rdi_1 += 0x10
                        j_1 = j_2
                        j_2 -= 1
                    while (j_1 != 1)
            else
                rbx_1[9] = 0
        
        r15_1 = &r15_1[5]
        i = i_1
        i_1 -= 1
    while (i != 1)

int64_t* result
result.b = 1
return result
