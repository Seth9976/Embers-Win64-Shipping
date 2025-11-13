// 函数: sub_141b43af0
// 地址: 0x141b43af0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t i_2 = arg4
int32_t i_1 = arg4
void* r12 = arg2

if (arg4 != 0)
    int64_t* r15_1 = arg3 + 0x18
    int32_t i
    
    do
        void* r13_1 = r12
        r12 += 0xa0
        sub_14086c240(r13_1 + 8, &r15_1[-2])
        
        if (r13_1 + 0x18 != r15_1)
            int32_t j_3 = *(r13_1 + 0x20)
            int64_t* rbx_1 = *(r13_1 + 0x18)
            
            if (j_3 != 0)
                int32_t j
                
                do
                    int64_t rcx_1 = *rbx_1
                    
                    if (rcx_1 != 0)
                        sub_140a74f90(rcx_1)
                    
                    rbx_1 = &rbx_1[2]
                    j = j_3
                    j_3 -= 1
                while (j != 1)
            
            int32_t j_2 = r15_1[1].d
            void* rdi_1 = *r15_1
            int32_t r8 = *(r13_1 + 0x24)
            *(r13_1 + 0x20) = j_2
            
            if (j_2 != 0 || r8 != 0)
                sub_1405a4be0(r13_1 + 0x18, j_2, r8)
                int64_t* rbx_2 = *(r13_1 + 0x18)
                
                if (j_2 != 0)
                    int32_t j_1
                    
                    do
                        *rbx_2 = 0
                        int32_t rsi_2 = *(rdi_1 + 8)
                        int64_t r14 = *rdi_1
                        rbx_2[1].d = rsi_2
                        
                        if (rsi_2 != 0)
                            sub_1405a4c70(rbx_2, rsi_2, 0)
                            memcpy(*rbx_2, r14, rsi_2 * 2)
                        else
                            *(rbx_2 + 0xc) = 0
                        
                        rbx_2 = &rbx_2[2]
                        rdi_1 += 0x10
                        j_1 = j_2
                        j_2 -= 1
                    while (j_1 != 1)
                    i_1 = i_2
            else
                *(r13_1 + 0x24) = j_2
        
        sub_140597df0(r13_1 + 0x28, &r15_1[2])
        *(r13_1 + 0x38) = r15_1[4].b
        sub_141f98dc0(r13_1 + 0x40)
        r15_1 = &r15_1[0x14]
        i = i_1
        i_1 -= 1
        i_2 = i_1
    while (i != 1)

void* const* result
result.b = 1
return result
