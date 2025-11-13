// 函数: sub_142583970
// 地址: 0x142583970
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t i_1 = arg4
int64_t* r12 = arg3
int64_t* result = arg2

if (arg4 != 0)
    int32_t i
    
    do
        int64_t j_1 = 2
        void* r14_2 = r12 - result
        *result = *r12
        void* rbx_1 = result + 0x14
        int64_t j
        
        do
            void* rax_3 = rbx_1 - 0xc + r14_2
            
            if (rbx_1 - 0xc != rax_3)
                int64_t rdi_1 = sx.q(*(rbx_1 + r14_2 - 4))
                int64_t r15_1 = *rax_3
                int32_t r8 = *rbx_1
                *(rbx_1 - 4) = rdi_1.d
                
                if (rdi_1.d != 0 || r8 != 0)
                    sub_1405a4be0(rbx_1 - 0xc, rdi_1.d, r8)
                    memcpy(*(rbx_1 - 0xc), r15_1, (rdi_1 << 4).d)
                else
                    *rbx_1 = rdi_1.d
            
            rbx_1 += 0x10
            j = j_1
            j_1 -= 1
        while (j != 1)
        result = &result[5]
        r12 = &r12[5]
        i = i_1
        i_1 -= 1
    while (i != 1)

result.b = 1
return result
