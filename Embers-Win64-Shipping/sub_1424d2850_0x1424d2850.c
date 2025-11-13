// 函数: sub_1424d2850
// 地址: 0x1424d2850
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t i_1 = arg4
char** r12 = arg2
char* result

if (arg4 != 0)
    int32_t* rsi_1 = arg3 + 0x38
    int32_t i
    
    do
        int64_t* rbp_1 = r12
        char** r14_1 = r12
        r12 = &r12[0xc]
        
        if (rbp_1 != &rsi_1[-0xe])
            int32_t j_2 = rbp_1[1].d
            
            if (j_2 != 0)
                result = &(*rbp_1)[4]
                int32_t j
                
                do
                    if (*result != 0)
                        *result = 0
                    
                    result = &result[8]
                    j = j_2
                    j_2 -= 1
                while (j != 1)
            
            int32_t j_3 = rsi_1[-0xc]
            int32_t* rbx_2 = *(rsi_1 - 0x38)
            int32_t r8 = *(r14_1 + 0xc)
            r14_1[1].d = j_3
            
            if (j_3 != 0 || r8 != 0)
                sub_1405c4a00(r14_1, j_3, r8)
                result = *r14_1
                
                if (j_3 != 0)
                    int32_t j_1
                    
                    do
                        result[4] = 0
                        
                        if (rbx_2[1].b != 0)
                            *result = *rbx_2
                            result[4] = 1
                        
                        result = &result[8]
                        rbx_2 = &rbx_2[2]
                        j_1 = j_3
                        j_3 -= 1
                    while (j_1 != 1)
            else
                *(r14_1 + 0xc) = j_3
        
        if (&r14_1[2] != &rsi_1[-0xa])
            int64_t rdi_1 = sx.q(rsi_1[8])
            void* rbx_3 = &rbp_1[9]
            sub_1405a4aa0(rbx_3, 0, rdi_1.d, 4)
            void* rcx_3 = *(rbx_3 + 8)
            void* rdx_1 = &rsi_1[4]
            void* rax = *(rsi_1 + 0x18)
            
            if (rax != 0)
                rdx_1 = rax
            
            if (rcx_3 != 0)
                rbx_3 = rcx_3
            
            memcpy(rbx_3, rdx_1, (rdi_1 << 2).d)
            rbp_1[0xb].d = rdi_1.d
            int64_t rdi_2 = sx.q(rsi_1[-8])
            rbp_1[3].d = 0
            
            if (*(rbp_1 + 0x1c) != rdi_2.d)
                sub_1405a5410(&r14_1[2], rdi_2.d)
            
            *(rbp_1 + 0x44) = 0
            void* rbx_4 = &rbp_1[4]
            rbp_1[8].d = 0xffffffff
            sub_14059a8e0(rbx_4, rdi_2.d)
            int32_t rax_1 = rbp_1[3].d + rdi_2.d
            rbp_1[3].d = rax_1
            
            if (rax_1 s> *(rbp_1 + 0x1c))
                sub_140610660(&r14_1[2])
            
            rbp_1[8].d = rsi_1[2]
            *(rbp_1 + 0x44) = rsi_1[3]
            void* rbp_2 = &rsi_1[-6]
            
            if (rbx_4 != rbp_2)
                sub_14059a8e0(rbx_4, *rsi_1)
                int32_t rax_4 = *rsi_1
                *(rbx_4 + 0x18) = rax_4
                
                if (rax_4 != 0)
                    void* rcx_9 = *(rsi_1 - 8)
                    void* r9 = *(rbx_4 + 0x10)
                    
                    if (rcx_9 != 0)
                        rbp_2 = rcx_9
                    
                    if (r9 != 0)
                        rbx_4 = r9
                    
                    memcpy(rbx_4, rbp_2, (zx.q(rax_4 + 0x1f) u>> 5 << 2).d)
            
            memcpy(r14_1[2], *(rsi_1 - 0x28), (rdi_2 << 4).d)
        
        rsi_1 = &rsi_1[0x18]
        i = i_1
        i_1 -= 1
    while (i != 1)

result.b = 1
return result
