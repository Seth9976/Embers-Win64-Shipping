// 函数: sub_1425b01d0
// 地址: 0x1425b01d0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t i_1 = arg4
int64_t* r12 = arg2

if (arg4 != 0)
    int32_t* rsi_1 = arg3 + 0x18
    int32_t i
    
    do
        int64_t* rbx_1 = r12
        r12 = &r12[8]
        
        if (rbx_1 != &rsi_1[-6])
            int64_t rdi_1 = sx.q(rsi_1[-4])
            int64_t rbp_1 = *(rsi_1 - 0x18)
            int32_t r8 = *(rbx_1 + 0xc)
            rbx_1[1].d = rdi_1.d
            
            if (rdi_1.d != 0 || r8 != 0)
                sub_1407751d0(rbx_1, rdi_1.d, r8)
                memcpy(*rbx_1, rbp_1, (rdi_1 * 0x28).d)
            else
                *(rbx_1 + 0xc) = 0
        
        if (&rbx_1[2] != &rsi_1[-2])
            int64_t rbp_2 = sx.q(*rsi_1)
            int64_t r14_1 = *(rsi_1 - 8)
            int32_t r8_3 = *(rbx_1 + 0x1c)
            rbx_1[3].d = rbp_2.d
            
            if (rbp_2.d != 0 || r8_3 != 0)
                sub_1407751d0(&rbx_1[2], rbp_2.d, r8_3)
                memcpy(rbx_1[2], r14_1, (rbp_2 * 0x28).d)
            else
                *(rbx_1 + 0x1c) = 0
        
        if (&rbx_1[4] != &rsi_1[2])
            int64_t rbp_3 = sx.q(rsi_1[4])
            int64_t r14_2 = *(rsi_1 + 8)
            int32_t r8_7 = *(rbx_1 + 0x2c)
            rbx_1[5].d = rbp_3.d
            
            if (rbp_3.d != 0 || r8_7 != 0)
                sub_141ae1d10(&rbx_1[4], rbp_3.d, r8_7)
                memcpy(rbx_1[4], r14_2, rbp_3.d * 0x2c)
            else
                *(rbx_1 + 0x2c) = 0
        
        if (&rbx_1[6] != &rsi_1[6])
            int32_t j_1 = rbx_1[7].d
            
            if (j_1 != 0)
                void* rbx_3 = rbx_1[6] + 0x48
                int32_t j
                
                do
                    int64_t rcx_6 = *(rbx_3 + 0x10)
                    
                    if (rcx_6 != 0)
                        sub_140a74f90(rcx_6)
                    
                    int64_t rcx_7 = *rbx_3
                    
                    if (rcx_7 != 0)
                        sub_140a74f90(rcx_7)
                    
                    int64_t rcx_8 = *(rbx_3 - 0x10)
                    
                    if (rcx_8 != 0)
                        sub_140a74f90(rcx_8)
                    
                    int64_t rcx_9 = *(rbx_3 - 0x20)
                    
                    if (rcx_9 != 0)
                        sub_140a74f90(rcx_9)
                    
                    rbx_3 += 0x68
                    j = j_1
                    j_1 -= 1
                while (j != 1)
            
            sub_142117ad0(&rbx_1[6], *(rsi_1 + 0x18), rsi_1[8], *(rbx_1 + 0x3c), 0)
        
        rsi_1 = &rsi_1[0x10]
        i = i_1
        i_1 -= 1
    while (i != 1)

int64_t* result
result.b = 1
return result
