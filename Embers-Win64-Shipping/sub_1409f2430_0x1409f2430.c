// 函数: sub_1409f2430
// 地址: 0x1409f2430
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t i_2 = arg4
int32_t i_1 = arg4
void* r13 = arg2

if (arg4 != 0)
    int32_t* r15_1 = arg3 + 0x28
    int32_t i
    
    do
        void* r12_1 = r13
        r13 += 0x30
        
        if (r12_1 != &r15_1[-0xa])
            int64_t rbx_1 = sx.q(r15_1[-8])
            int64_t rdi_1 = *(r15_1 - 0x28)
            int32_t r8 = *(r12_1 + 0xc)
            *(r12_1 + 8) = rbx_1.d
            
            if (rbx_1.d != 0 || r8 != 0)
                sub_1407c3650(r12_1, rbx_1.d, r8)
                memcpy(*r12_1, rdi_1, (rbx_1 * 0xc).d)
            else
                *(r12_1 + 0xc) = rbx_1.d
        
        if (r12_1 + 0x10 != &r15_1[-6])
            int32_t j_3 = *(r12_1 + 0x18)
            int64_t* rbx_2 = *(r12_1 + 0x10)
            
            if (j_3 != 0)
                int32_t j
                
                do
                    int64_t rcx_2 = *rbx_2
                    
                    if (rcx_2 != 0)
                        sub_140a74f90(rcx_2)
                    
                    rbx_2 = &rbx_2[2]
                    j = j_3
                    j_3 -= 1
                while (j != 1)
            
            int32_t j_2 = r15_1[-4]
            void* rdi_2 = *(r15_1 - 0x18)
            int32_t r8_3 = *(r12_1 + 0x1c)
            *(r12_1 + 0x18) = j_2
            
            if (j_2 != 0 || r8_3 != 0)
                sub_1405a4be0(r12_1 + 0x10, j_2, r8_3)
                int64_t* rbx_3 = *(r12_1 + 0x10)
                
                if (j_2 == 0)
                    i_1 = i_2
                else
                    int32_t j_1
                    
                    do
                        *rbx_3 = 0
                        int32_t rsi_2 = *(rdi_2 + 8)
                        int64_t r14_2 = *rdi_2
                        rbx_3[1].d = rsi_2
                        
                        if (rsi_2 != 0)
                            sub_1409ea8f0(rbx_3, rsi_2, 0)
                            memcpy(*rbx_3, r14_2, rsi_2 * 0xd0)
                        else
                            *(rbx_3 + 0xc) = 0
                        
                        rbx_3 = &rbx_3[2]
                        rdi_2 += 0x10
                        j_1 = j_2
                        j_2 -= 1
                    while (j_1 != 1)
                    i_1 = i_2
            else
                *(r12_1 + 0x1c) = 0
                i_1 = i_2
        
        if (r12_1 + 0x20 != &r15_1[-2])
            int64_t rdi_3 = sx.q(*r15_1)
            void* const rsi_3 = *(r15_1 - 8)
            int32_t r8_5 = *(r12_1 + 0x2c)
            *(r12_1 + 0x28) = rdi_3.d
            
            if (rdi_3.d != 0 || r8_5 != 0)
                sub_1407c3650(r12_1 + 0x20, rdi_3.d, r8_5)
                memcpy(*(r12_1 + 0x20), rsi_3, (rdi_3 * 0xc).d)
            else
                *(r12_1 + 0x2c) = 0
        
        r15_1 = &r15_1[0xc]
        i = i_1
        i_1 -= 1
        i_2 = i_1
    while (i != 1)

void* const* result
result.b = 1
return result
