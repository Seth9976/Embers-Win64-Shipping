// 函数: sub_142576e10
// 地址: 0x142576e10
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t result_1 = arg4
int32_t result = arg4
int64_t* r12 = arg3
int64_t* r13 = arg2

if (arg4 != 0)
    int32_t i
    
    do
        int64_t* rsi_1 = r13
        r13 = &r13[2]
        
        if (rsi_1 != r12)
            int32_t j_3 = rsi_1[1].d
            
            if (j_3 != 0)
                int64_t* rbx_2 = *rsi_1 + 0x18
                int32_t j
                
                do
                    int64_t rcx = *rbx_2
                    
                    if (rcx != 0)
                        sub_140a74f90(rcx)
                    
                    rbx_2 = &rbx_2[7]
                    j = j_3
                    j_3 -= 1
                while (j != 1)
                result = result_1
            
            int32_t j_2 = r12[1].d
            void* r14_1 = *r12
            int32_t r8 = *(rsi_1 + 0xc)
            rsi_1[1].d = j_2
            
            if (j_2 != 0 || r8 != 0)
                sub_140874c00(rsi_1, j_2, r8)
                int32_t* r15_1 = *rsi_1
                
                if (j_2 != 0)
                    void* rdi_1 = &r15_1[8]
                    int64_t arg_18 = 0
                    void* r14_2 = r14_1 + 8
                    int32_t j_1
                    
                    do
                        *(rdi_1 - 8) = 0
                        *rdi_1 = 0
                        *r15_1 = 0xffffffff
                        *(rdi_1 - 0x1c) = 0
                        *(rdi_1 - 0x10) = 0
                        *rdi_1 = 0
                        
                        if (*(rdi_1 + 4) s<= 0xffffffff)
                            sub_1405947f0(rdi_1 - 8, 0)
                        
                        int16_t* rax = *(rdi_1 - 8)
                        
                        if (rax != 0)
                            *rax = 0
                        
                        *(rdi_1 - 0x18) = 0
                        *r15_1 = *(r14_2 - 8)
                        *(rdi_1 - 0x18) = *r14_2
                        *(rdi_1 - 0x10) = *(r14_2 + 8)
                        sub_140597df0(rdi_1 - 8, r14_2 + 0x10)
                        r15_1 = &r15_1[0xe]
                        *(rdi_1 + 8) = *(r14_2 + 0x20)
                        int64_t rax_5 = *(r14_2 + 0x28)
                        r14_2 += 0x38
                        *(rdi_1 + 0x10) = rax_5
                        rdi_1 += 0x38
                        j_1 = j_2
                        j_2 -= 1
                    while (j_1 != 1)
                
                result = result_1
            else
                *(rsi_1 + 0xc) = 0
        
        r12 = &r12[2]
        i = result
        result -= 1
        result_1 = result
    while (i != 1)

result.b = 1
return result
