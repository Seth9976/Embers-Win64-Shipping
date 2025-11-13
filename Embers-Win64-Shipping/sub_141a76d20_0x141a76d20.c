// 函数: sub_141a76d20
// 地址: 0x141a76d20
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t i_2 = arg4
int32_t i_1 = arg4
uint64_t* result = arg2

if (arg4 != 0)
    int64_t* r13_1 = arg3 + 0x10
    int32_t i
    
    do
        sub_14090a0d0(result, &r13_1[-2])
        
        if (&result[2] != r13_1)
            int32_t j_2 = result[3].d
            
            if (j_2 != 0)
                int64_t* rbx_3 = result[2] + 0x48
                int32_t j
                
                do
                    int64_t rcx_1 = *rbx_3
                    
                    if (rcx_1 != 0)
                        sub_140a74f90(rcx_1)
                    
                    rbx_3 = &rbx_3[0xb]
                    j = j_2
                    j_2 -= 1
                while (j != 1)
            
            int32_t j_3 = r13_1[1].d
            void* rsi_1 = *r13_1
            int32_t r8 = *(result + 0x1c)
            result[3].d = j_3
            
            if (j_3 != 0 || r8 != 0)
                sub_140afef10(&result[2], j_3, r8)
                int128_t* rbp_2 = result[2]
                
                if (j_3 != 0)
                    void* rbx_4 = rbp_2 + 0x48
                    void* rsi_2 = rsi_1 + 0x48
                    int32_t j_1
                    
                    do
                        *rbp_2 = *(rsi_2 - 0x48)
                        *(rbx_4 - 0x38) = *(rsi_2 - 0x38)
                        *(rbx_4 - 0x34) = *(rsi_2 - 0x34)
                        *rbx_4 = 0
                        int64_t r15 = sx.q(*(rsi_2 + 8))
                        void* r12_1 = *rsi_2
                        *(rbx_4 + 8) = r15.d
                        
                        if (r15.d != 0)
                            void* rdi_1 = rbx_4 - 0x30
                            sub_14174ff90(rdi_1, r15.d, 0)
                            void* r9 = *rbx_4
                            void* rdx_3 = rsi_2 - 0x30
                            
                            if (r12_1 != 0)
                                rdx_3 = r12_1
                            
                            if (r9 != 0)
                                rdi_1 = r9
                            
                            memcpy(rdi_1, rdx_3, (r15 * 0xc).d)
                        else
                            *(rbx_4 + 0xc) = 4
                        
                        rbp_2 += 0x58
                        rbx_4 += 0x58
                        rsi_2 += 0x58
                        j_1 = j_3
                        j_3 -= 1
                    while (j_1 != 1)
                    i_1 = i_2
            else
                *(result + 0x1c) = j_3
        
        result = &result[4]
        r13_1 = &r13_1[4]
        i = i_1
        i_1 -= 1
        i_2 = i_1
    while (i != 1)

result.b = 1
return result
