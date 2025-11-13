// 函数: sub_142476980
// 地址: 0x142476980
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t i_1 = arg4
int64_t* r13 = arg2
void* const* result

if (arg4 != 0)
    void* r12_1 = arg3 + 0x10
    int32_t i
    
    do
        int64_t* r14_1 = r13
        r13 = &r13[4]
        
        if (r14_1 != r12_1 - 0x10)
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
            
            int32_t j_2 = *(r12_1 - 8)
            void* rdi_1 = *(r12_1 - 0x10)
            int32_t r8 = *(r14_1 + 0xc)
            r14_1[1].d = j_2
            
            if (j_2 != 0 || r8 != 0)
                sub_1405a4be0(r14_1, j_2, r8)
                int64_t* rbx_2 = *r14_1
                
                if (j_2 != 0)
                    int32_t j_1
                    
                    do
                        *rbx_2 = 0
                        uint32_t count = *(rdi_1 + 8)
                        int64_t r15_1 = *rdi_1
                        rbx_2[1].d = count
                        
                        if (count != 0)
                            sub_1405da9e0(rbx_2, count, 0)
                            memcpy(*rbx_2, r15_1, count)
                        else
                            *(rbx_2 + 0xc) = 0
                        
                        rbx_2 = &rbx_2[2]
                        rdi_1 += 0x10
                        j_1 = j_2
                        j_2 -= 1
                    while (j_1 != 1)
            else
                *(r14_1 + 0xc) = 0
        
        r14_1[2] = *r12_1
        result = *(r12_1 + 8)
        r12_1 += 0x20
        i = i_1
        i_1 -= 1
        r14_1[3] = result
    while (i != 1)

result.b = 1
return result
