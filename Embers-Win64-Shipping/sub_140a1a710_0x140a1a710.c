// 函数: sub_140a1a710
// 地址: 0x140a1a710
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t i_1 = arg4
uint64_t* result = arg2

if (arg4 != 0)
    int64_t* rbp_1 = arg3 + 0x58
    int32_t i
    
    do
        sub_140597df0(result, &rbp_1[-0xb])
        sub_140597df0(&result[2], &rbp_1[-9])
        sub_140597df0(&result[4], &rbp_1[-7])
        sub_140597df0(&result[6], &rbp_1[-5])
        
        if (&result[8] != &rbp_1[-3])
            int32_t j_3 = result[9].d
            void* rbx_1 = result[8]
            
            if (j_3 != 0)
                int32_t j
                
                do
                    int64_t rcx_4 = *(rbx_1 + 0xf8)
                    
                    if (rcx_4 != 0)
                        sub_140a74f90(rcx_4)
                    
                    int64_t rcx_5 = *(rbx_1 + 0xc8)
                    
                    if (rcx_5 != 0)
                        sub_140a74f90(rcx_5)
                    
                    int64_t rcx_6 = *(rbx_1 + 0xb0)
                    
                    if (rcx_6 != 0)
                        sub_140a74f90(rcx_6)
                    
                    int64_t rcx_7 = *(rbx_1 + 0x50)
                    
                    if (rcx_7 != 0)
                        sub_140a74f90(rcx_7)
                    
                    int64_t rcx_8 = *(rbx_1 + 0x20)
                    
                    if (rcx_8 != 0)
                        sub_140a74f90(rcx_8)
                    
                    int64_t rcx_9 = *(rbx_1 + 0x10)
                    
                    if (rcx_9 != 0)
                        sub_140a74f90(rcx_9)
                    
                    int64_t rcx_10 = *rbx_1
                    
                    if (rcx_10 != 0)
                        sub_140a74f90(rcx_10)
                    
                    rbx_1 += 0x178
                    j = j_3
                    j_3 -= 1
                while (j != 1)
            
            int32_t j_2 = rbp_1[-2].d
            int64_t* rdi_1 = rbp_1[-3]
            int32_t r8 = *(result + 0x4c)
            result[9].d = j_2
            
            if (j_2 != 0 || r8 != 0)
                sub_1406d1960(&result[8], j_2, r8)
                int64_t* rbx_2 = result[8]
                
                if (j_2 != 0)
                    int32_t j_1
                    
                    do
                        sub_1406ca8a0(rbx_2, rdi_1)
                        rbx_2 = &rbx_2[0x2f]
                        rdi_1 = &rdi_1[0x2f]
                        j_1 = j_2
                        j_2 -= 1
                    while (j_1 != 1)
            else
                *(result + 0x4c) = j_2
        
        result[0xa].b = rbp_1[-1].b
        sub_140a19d00(&result[0xb], rbp_1)
        int32_t rax_2 = rbp_1[2].d
        rbp_1 = &rbp_1[0xe]
        result[0xd].d = rax_2
        result = &result[0xe]
        i = i_1
        i_1 -= 1
    while (i != 1)

result.b = 1
return result
