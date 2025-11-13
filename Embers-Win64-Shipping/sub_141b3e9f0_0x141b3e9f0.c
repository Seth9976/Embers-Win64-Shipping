// 函数: sub_141b3e9f0
// 地址: 0x141b3e9f0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t i_2 = arg4
int32_t i_1 = arg4
void* result = arg2

if (arg4 != 0)
    int64_t* r12_1 = arg3 + 0x18
    int32_t i
    
    do
        sub_14086c240(result + 8, &r12_1[-2])
        
        if (result + 0x18 != r12_1)
            int32_t j_3 = *(result + 0x20)
            
            if (j_3 != 0)
                void* rbx_2 = *(result + 0x18) + 0x10
                int32_t j
                
                do
                    int64_t rcx_1 = *(rbx_2 + 0x10)
                    
                    if (rcx_1 != 0)
                        sub_140a74f90(rcx_1)
                    
                    int64_t rcx_2 = *rbx_2
                    
                    if (rcx_2 != 0)
                        sub_140a74f90(rcx_2)
                    
                    rbx_2 += 0x30
                    j = j_3
                    j_3 -= 1
                while (j != 1)
            
            int32_t j_2 = r12_1[1].d
            void* rdi_1 = *r12_1
            int32_t r8 = *(result + 0x24)
            *(result + 0x20) = j_2
            
            if (j_2 != 0 || r8 != 0)
                sub_1405a4b40(result + 0x18, j_2, r8)
                int64_t* rsi_2 = *(result + 0x18)
                
                if (j_2 != 0)
                    void* rbx_3 = &rsi_2[4]
                    void* rdi_2 = rdi_1 + 0x10
                    int32_t j_1
                    
                    do
                        *rsi_2 = *(rdi_2 - 0x10)
                        *(rbx_3 - 0x18) = *(rdi_2 - 8)
                        sub_140596d10(rbx_3 - 0x10, rdi_2)
                        *rbx_3 = 0
                        uint32_t count = *(rdi_2 + 0x18)
                        int64_t r15_1 = *(rdi_2 + 0x10)
                        *(rbx_3 + 8) = count
                        
                        if (count != 0)
                            sub_1405da9e0(rbx_3, count, 0)
                            memcpy(*rbx_3, r15_1, count)
                        else
                            *(rbx_3 + 0xc) = 0
                        
                        rsi_2 = &rsi_2[6]
                        rbx_3 += 0x30
                        rdi_2 += 0x30
                        j_1 = j_2
                        j_2 -= 1
                    while (j_1 != 1)
                    i_1 = i_2
            else
                *(result + 0x24) = 0
        
        sub_141f98dc0(result + 0x28)
        result += 0x88
        r12_1 = &r12_1[0x11]
        i = i_1
        i_1 -= 1
        i_2 = i_1
    while (i != 1)

result.b = 1
return result
