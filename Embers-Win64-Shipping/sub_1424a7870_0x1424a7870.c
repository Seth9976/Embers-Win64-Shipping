// 函数: sub_1424a7870
// 地址: 0x1424a7870
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t i_1 = arg4
uint64_t* result = arg2

if (arg4 != 0)
    int32_t* r15_1 = arg3 + 0x20
    int32_t i
    
    do
        sub_140597df0(result, &r15_1[-8])
        sub_140597df0(&result[2], &r15_1[-4])
        result[4].d = *r15_1
        *(result + 0x24) = r15_1[1]
        sub_140597df0(&result[5], &r15_1[2])
        sub_140597df0(&result[7], &r15_1[6])
        
        if (&result[9] != &r15_1[0xa])
            int32_t j_3 = result[0xa].d
            int64_t* rbx_1 = result[9]
            
            if (j_3 != 0)
                int32_t j
                
                do
                    int64_t rcx_4 = *rbx_1
                    
                    if (rcx_4 != 0)
                        sub_140a74f90(rcx_4)
                    
                    rbx_1 = &rbx_1[2]
                    j = j_3
                    j_3 -= 1
                while (j != 1)
            
            int32_t j_2 = r15_1[0xc]
            void* rdi_1 = *(r15_1 + 0x28)
            int32_t r8 = *(result + 0x54)
            result[0xa].d = j_2
            
            if (j_2 != 0 || r8 != 0)
                sub_1405a4be0(&result[9], j_2, r8)
                int64_t* rbx_2 = result[9]
                
                if (j_2 != 0)
                    int32_t j_1
                    
                    do
                        *rbx_2 = 0
                        int32_t rsi_2 = *(rdi_1 + 8)
                        int64_t r14_2 = *rdi_1
                        rbx_2[1].d = rsi_2
                        
                        if (rsi_2 != 0)
                            sub_1405a4c70(rbx_2, rsi_2, 0)
                            memcpy(*rbx_2, r14_2, rsi_2 * 2)
                        else
                            *(rbx_2 + 0xc) = 0
                        
                        rbx_2 = &rbx_2[2]
                        rdi_1 += 0x10
                        j_1 = j_2
                        j_2 -= 1
                    while (j_1 != 1)
            else
                *(result + 0x54) = j_2
        
        sub_140597df0(&result[0xb], &r15_1[0xe])
        result = &result[0xd]
        r15_1 = &r15_1[0x1a]
        i = i_1
        i_1 -= 1
    while (i != 1)

result.b = 1
return result
