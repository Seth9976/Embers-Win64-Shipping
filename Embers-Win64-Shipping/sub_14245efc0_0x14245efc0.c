// 函数: sub_14245efc0
// 地址: 0x14245efc0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t i_1 = arg4
void** r15 = arg3
int64_t* rbp = arg2

if (arg4 != 0)
    int32_t i
    
    do
        int64_t* r14_1 = rbp
        rbp = &rbp[2]
        
        if (r14_1 != r15)
            int32_t j_3 = r14_1[1].d
            
            if (j_3 != 0)
                int64_t* rbx_2 = *r14_1 + 0x88
                int32_t j
                
                do
                    int64_t rcx = *rbx_2
                    
                    if (rcx != 0)
                        sub_140a74f90(rcx)
                    
                    rbx_2[-0xe] = &data_142d6a040
                    int64_t rcx_1 = rbx_2[-3]
                    
                    if (rcx_1 != 0)
                        sub_140a74f90(rcx_1)
                    
                    sub_1405ae180(&rbx_2[-0xd])
                    rbx_2 = &rbx_2[0x13]
                    j = j_3
                    j_3 -= 1
                while (j != 1)
            
            int32_t j_2 = r15[1].d
            void* rbx_3 = *r15
            int32_t r8 = *(r14_1 + 0xc)
            r14_1[1].d = j_2
            
            if (j_2 != 0 || r8 != 0)
                sub_14174fef0(r14_1, j_2, r8)
                void* rdi_1 = *r14_1
                
                if (j_2 != 0)
                    int32_t j_1
                    
                    do
                        *rdi_1 = *rbx_3
                        *(rdi_1 + 0x10) = *(rbx_3 + 0x10)
                        sub_141adec50(rdi_1 + 0x18, rbx_3 + 0x18)
                        rdi_1 += 0x98
                        rbx_3 += 0x98
                        j_1 = j_2
                        j_2 -= 1
                    while (j_1 != 1)
            else
                *(r14_1 + 0xc) = j_2
        
        r15 = &r15[2]
        i = i_1
        i_1 -= 1
    while (i != 1)

void*** result
result.b = 1
return result
