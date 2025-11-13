// 函数: sub_1408741d0
// 地址: 0x1408741d0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t i_1 = arg4
int64_t* r14 = arg3
int64_t* r15 = arg2

if (arg4 != 0)
    int32_t i
    
    do
        int64_t* rsi_1 = r15
        r15 = &r15[2]
        
        if (rsi_1 != r14)
            int32_t j_3 = rsi_1[1].d
            
            if (j_3 != 0)
                int64_t* rbx_2 = *rsi_1 + 8
                int32_t j
                
                do
                    int64_t rcx = *rbx_2
                    
                    if (rcx != 0)
                        sub_140a74f90(rcx)
                    
                    rbx_2 = &rbx_2[5]
                    j = j_3
                    j_3 -= 1
                while (j != 1)
            
            int32_t j_2 = r14[1].d
            void* rdi_1 = *r14
            int32_t r8 = *(rsi_1 + 0xc)
            rsi_1[1].d = j_2
            
            if (j_2 != 0 || r8 != 0)
                sub_1407751d0(rsi_1, j_2, r8)
                void* rbx_3 = *rsi_1
                
                if (j_2 != 0)
                    void* rdi_2 = rdi_1 + 0x24
                    int32_t j_1
                    
                    do
                        sub_140873a00(rbx_3, rdi_2 - 0x24)
                        int32_t rax = *(rdi_2 - 4)
                        rdi_2 += 0x28
                        *(rbx_3 + 0x20) ^= (rax ^ *(rbx_3 + 0x20)) & 1
                        *(rbx_3 + 0x24) = *(rdi_2 - 0x28)
                        rbx_3 += 0x28
                        j_1 = j_2
                        j_2 -= 1
                    while (j_1 != 1)
            else
                *(rsi_1 + 0xc) = 0
        
        r14 = &r14[2]
        i = i_1
        i_1 -= 1
    while (i != 1)

int32_t result
result.b = 1
return result
