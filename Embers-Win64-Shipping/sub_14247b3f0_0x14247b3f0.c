// 函数: sub_14247b3f0
// 地址: 0x14247b3f0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t i_1 = arg4
int64_t* result = arg2

if (arg4 != 0)
    void* rbp_1 = arg3 + 0x18
    int32_t i
    
    do
        *result = *(rbp_1 - 0x18)
        *(result + 8) = *(rbp_1 - 0x10)
        *(result + 0x18) = *rbp_1
        *(result + 0x28) = *(rbp_1 + 0x10)
        *(result + 0x38) = *(rbp_1 + 0x20)
        *(result + 0x48) = *(rbp_1 + 0x30)
        *(result + 0x58) = *(rbp_1 + 0x40)
        result[0xd] = *(rbp_1 + 0x50)
        sub_140597df0(&result[0xe], rbp_1 + 0x58)
        sub_14065da90(&result[0x10], rbp_1 + 0x68)
        result[0x13] = *(rbp_1 + 0x80)
        result[0x14] = *(rbp_1 + 0x88)
        result[0x15].b = *(rbp_1 + 0x90)
        
        if (&result[0x16] != rbp_1 + 0x98)
            int32_t j_3 = result[0x17].d
            
            if (j_3 != 0)
                int64_t* rbx_2 = result[0x16] + 8
                int32_t j
                
                do
                    int64_t rcx_2 = *rbx_2
                    
                    if (rcx_2 != 0)
                        sub_140a74f90(rcx_2)
                    
                    rbx_2 = &rbx_2[3]
                    j = j_3
                    j_3 -= 1
                while (j != 1)
            
            int32_t j_2 = *(rbp_1 + 0xa0)
            int64_t* rdi_1 = *(rbp_1 + 0x98)
            int32_t r8 = *(result + 0xbc)
            result[0x17].d = j_2
            
            if (j_2 != 0 || r8 != 0)
                sub_140808f70(&result[0x16], j_2, r8)
                void* rbx_3 = result[0x16]
                
                if (j_2 != 0)
                    int32_t j_1
                    
                    do
                        *rbx_3 = *rdi_1
                        sub_140596d10(rbx_3 + 8, &rdi_1[1])
                        rbx_3 += 0x18
                        rdi_1 = &rdi_1[3]
                        j_1 = j_2
                        j_2 -= 1
                    while (j_1 != 1)
            else
                *(result + 0xbc) = j_2
        
        sub_140597df0(&result[0x18], rbp_1 + 0xa8)
        result = &result[0x1a]
        rbp_1 += 0xd0
        i = i_1
        i_1 -= 1
    while (i != 1)

result.b = 1
return result
