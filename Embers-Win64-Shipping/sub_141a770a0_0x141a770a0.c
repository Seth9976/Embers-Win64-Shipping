// 函数: sub_141a770a0
// 地址: 0x141a770a0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t i_1 = arg4
void* result = arg2

if (arg4 != 0)
    void* r13_1 = arg3 + 0x48
    int32_t i
    
    do
        void* result_1 = result
        *(result_1 + 8) = *(r13_1 - 0x40)
        sub_14086c240(result_1 + 0x10, r13_1 - 0x38)
        
        if (result_1 + 0x20 != r13_1 - 0x28)
            int32_t j_3 = *(result_1 + 0x28)
            
            if (j_3 != 0)
                int64_t* rbx_2 = *(result_1 + 0x20) + 0x18
                int32_t j
                
                do
                    int64_t rcx_1 = *rbx_2
                    
                    if (rcx_1 != 0)
                        sub_140a74f90(rcx_1)
                    
                    rbx_2 = &rbx_2[6]
                    j = j_3
                    j_3 -= 1
                while (j != 1)
            
            int32_t j_2 = *(r13_1 - 0x20)
            void* r14_2 = *(r13_1 - 0x28)
            int32_t r8 = *(result_1 + 0x2c)
            *(result_1 + 0x28) = j_2
            
            if (j_2 != 0 || r8 != 0)
                sub_1405a4b40(result_1 + 0x20, j_2, r8)
                int32_t* r15_1 = *(result_1 + 0x20)
                
                if (j_2 != 0)
                    void* rdi_1 = &r15_1[8]
                    int64_t arg_18 = 0
                    void* r14_3 = r14_2 + 8
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
                        
                        int16_t* rax_2 = *(rdi_1 - 8)
                        
                        if (rax_2 != 0)
                            *rax_2 = 0
                        
                        *(rdi_1 - 0x18) = 0
                        *r15_1 = *(r14_3 - 8)
                        *(rdi_1 - 0x18) = *r14_3
                        *(rdi_1 - 0x10) = *(r14_3 + 8)
                        sub_140597df0(rdi_1 - 8, r14_3 + 0x10)
                        r15_1 = &r15_1[0xc]
                        *(rdi_1 + 8) = *(r14_3 + 0x20)
                        r14_3 += 0x30
                        rdi_1 += 0x30
                        j_1 = j_2
                        j_2 -= 1
                    while (j_1 != 1)
                    result_1 = result
            else
                *(result_1 + 0x2c) = 0
        
        *(result_1 + 0x30) = *(r13_1 - 0x18)
        *(result_1 + 0x38) = *(r13_1 - 0x10)
        *(result_1 + 0x40) = *(r13_1 - 8)
        sub_140597df0(result_1 + 0x48, r13_1)
        *(result_1 + 0x58) = *(r13_1 + 0x10)
        sub_141f98dc0(result_1 + 0x60)
        result += 0xc0
        r13_1 += 0xc0
        i = i_1
        i_1 -= 1
    while (i != 1)

result.b = 1
return result
