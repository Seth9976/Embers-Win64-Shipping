// 函数: sub_142528690
// 地址: 0x142528690
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t i_1 = arg4
uint64_t* r12 = arg2
int64_t* result

if (arg4 != 0)
    void* r15_1 = arg3 + 0x40
    int32_t i
    
    do
        uint64_t* r14_1 = r12
        r12 = &r12[0xc]
        
        if (r14_1 != r15_1 - 0x40)
            int64_t rdi_1 = sx.q(*(r15_1 + 8))
            void* rbx_1 = &r14_1[7]
            sub_1405a4aa0(rbx_1, 0, rdi_1.d, 4)
            void* rax = *r15_1
            void* rdx = r15_1 - 8
            void* r9 = *(rbx_1 + 8)
            
            if (rax != 0)
                rdx = rax
            
            if (r9 != 0)
                rbx_1 = r9
            
            memcpy(rbx_1, rdx, (rdi_1 << 2).d)
            r14_1[9].d = rdi_1.d
            sub_140e29380(r14_1, r15_1 - 0x40)
        
        if (&r14_1[0xa] != r15_1 + 0x10)
            int32_t j_3 = r14_1[0xb].d
            
            if (j_3 != 0)
                void* rdi_3 = r14_1[0xa] + 0x10
                int32_t j
                
                do
                    int64_t* rbx_2 = *rdi_3
                    
                    if (rbx_2 != 0)
                        rbx_2[1].d -= 1
                        
                        if (rbx_2[1].d == 1)
                            (**rbx_2)(rbx_2)
                            int32_t temp3_1 = *(rbx_2 + 0xc)
                            *(rbx_2 + 0xc) -= 1
                            
                            if (temp3_1 == 1)
                                (*(*rbx_2 + 8))(rbx_2, 1)
                    
                    rdi_3 += 0x18
                    j = j_3
                    j_3 -= 1
                while (j != 1)
            
            int32_t j_2 = *(r15_1 + 0x18)
            void* rdi_4 = *(r15_1 + 0x10)
            int32_t r8_3 = *(r14_1 + 0x5c)
            r14_1[0xb].d = j_2
            
            if (j_2 != 0 || r8_3 != 0)
                sub_140808f70(&r14_1[0xa], j_2, r8_3)
                void* rdx_3 = r14_1[0xa]
                
                if (j_2 != 0)
                    void* rcx_6 = rdi_4 + 8
                    int32_t j_1
                    
                    do
                        *rdx_3 = *(rcx_6 - 8)
                        *(rdx_3 + 8) = *rcx_6
                        result = *(rcx_6 + 8)
                        *(rdx_3 + 0x10) = result
                        
                        if (result != 0)
                            result[1].d += 1
                        
                        rdx_3 += 0x18
                        rcx_6 += 0x18
                        j_1 = j_2
                        j_2 -= 1
                    while (j_1 != 1)
            else
                *(r14_1 + 0x5c) = j_2
        
        r15_1 += 0x60
        i = i_1
        i_1 -= 1
    while (i != 1)

result.b = 1
return result
