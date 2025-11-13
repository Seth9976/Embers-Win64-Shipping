// 函数: sub_141ae04b0
// 地址: 0x141ae04b0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t i_1 = arg4
void* r12 = arg2

if (arg4 != 0)
    void* r13_1 = arg3 + 0x10
    int32_t i
    
    do
        void* r15_1 = r12
        r12 += 0xc0
        *(r15_1 + 8) = *(r13_1 - 8)
        *(r15_1 + 0x10) = *r13_1
        sub_1405b0be0(r15_1 + 0x20, r13_1 + 0x10)
        
        if (r15_1 + 0x30 != r13_1 + 0x20)
            int32_t j_3 = *(r15_1 + 0x38)
            int64_t* rbx_1 = *(r15_1 + 0x30)
            
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
            
            int32_t j_2 = *(r13_1 + 0x28)
            void* rsi_2 = *(r13_1 + 0x20)
            int32_t r8 = *(r15_1 + 0x3c)
            *(r15_1 + 0x38) = j_2
            
            if (j_2 != 0 || r8 != 0)
                sub_1405a4be0(r15_1 + 0x30, j_2, r8)
                int64_t* rbx_2 = *(r15_1 + 0x30)
                
                if (j_2 != 0)
                    int32_t j_1
                    
                    do
                        *rbx_2 = 0
                        int64_t rdi_1 = sx.q(*(rsi_2 + 8))
                        int64_t r14_2 = *rsi_2
                        rbx_2[1].d = rdi_1.d
                        
                        if (rdi_1.d != 0)
                            sub_1407c3650(rbx_2, rdi_1.d, 0)
                            memcpy(*rbx_2, r14_2, (rdi_1 * 0xc).d)
                        else
                            *(rbx_2 + 0xc) = 0
                        
                        rbx_2 = &rbx_2[2]
                        rsi_2 += 0x10
                        j_1 = j_2
                        j_2 -= 1
                    while (j_1 != 1)
            else
                *(r15_1 + 0x3c) = j_2
        
        sub_140627690(r15_1 + 0x40, r13_1 + 0x30)
        *(r15_1 + 0x50) = *(r13_1 + 0x40)
        *(r15_1 + 0x51) = *(r13_1 + 0x41)
        *(r15_1 + 0x52) = *(r13_1 + 0x42)
        *(r15_1 + 0x53) = *(r13_1 + 0x43)
        *(r15_1 + 0x54) = *(r13_1 + 0x44)
        *(r15_1 + 0x58) = *(r13_1 + 0x48)
        sub_140780c40(r15_1 + 0x60, r13_1 + 0x50)
        *(r15_1 + 0x70) = *(r13_1 + 0x60)
        *(r15_1 + 0x80) = *(r13_1 + 0x70)
        sub_140780c40(r15_1 + 0x90, r13_1 + 0x80)
        sub_140780c40(r15_1 + 0xa0, r13_1 + 0x90)
        sub_14081d8c0(r15_1 + 0xb0, r13_1 + 0xa0)
        r13_1 += 0xc0
        i = i_1
        i_1 -= 1
    while (i != 1)

void* const* result
result.b = 1
return result
