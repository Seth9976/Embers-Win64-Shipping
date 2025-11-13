// 函数: sub_142c46a40
// 地址: 0x142c46a40
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* rbx = arg1
int32_t* result = sub_142c45920(arg1, arg2, arg3, arg4)

if (result.b == 0)
    char* rax = strchr(rbx, 0x2d)
    char* rsi_1 = rax
    
    if (rax != 0 && arg2 - rbx s>= 6)
        char* rax_1 = strchr(&rax[1], 0x2d)
        int64_t rax_3
        
        if (rax_1 == 0)
            rax_3 = -1
            
            do
                rax_3 += 1
            while (rsi_1[rax_3 + 1] != 0)
        else
            rax_3 = rax_1 - rsi_1 - 1
        
        if (rax_3 == 3)
            char rcx_2 = rsi_1[1]
            
            if (rcx_2 - 0x61 u<= 0x19 || rcx_2 - 0x41 u<= 0x19)
                rbx = &rsi_1[1]
    
    uint64_t rbp_1 = 0
    int32_t r12_1 = 0
    int32_t r13_1 = 0x3eb
    
    while (true)
        uint32_t rax_6 = (r12_1 + r13_1) u>> 1
        uint64_t r15 = zx.q(rax_6)
        char* rax_7 = strchr(rbx, 0x2d)
        int32_t r14_2
        
        if (rax_7 == 0)
            int64_t rax_8 = -1
            
            do
                rax_8 += 1
            while (*(rbx + rax_8) != 0)
            
            r14_2 = rax_8.d
        else
            r14_2 = rax_7.d - rbx.d
        
        char* rax_9 = strchr((zx.q(rax_6) << 4) + &data_1436a6b10, 0x2d)
        uint64_t rax_10
        
        if (rax_9 == 0)
            rax_10 = -1
            
            do
                rax_10 += 1
            while (((zx.q(rax_6) << 4) + &data_1436a6b10)[rax_10] != 0)
        else
            rax_10 = zx.q(rax_9.d - ((zx.q(rax_6) << 4) + &data_1436a6b10).d)
        
        if (r14_2 u> rax_10.d)
            rax_10 = zx.q(r14_2)
        
        int32_t rax_11
        char r8_1
        char r9
        rax_11, r8_1, r9 = strncmp(rbx, (zx.q(rax_6) << 4) + &data_1436a6b10, zx.q(rax_10.d))
        
        if (rax_11 s>= 0)
            if (rax_11 s> 0)
                r12_1 = (r15 + 1).d
                goto label_142c46b96
            
            result = &data_1436a6b10
            uint64_t rdx_3 = r15 << 4
            
            if (rdx_3 != -0x1436a6b10)
                if (*arg3 u> 0)
                    do
                        int32_t rcx_7 = *(rdx_3 + &data_1436a6b10 + (rbp_1 << 2) + 4)
                        
                        if (rcx_7 == 0)
                            break
                        
                        arg4[rbp_1] = rcx_7
                        rbp_1 = zx.q(rbp_1.d + 1)
                    while (rbp_1.d u< *arg3)
                
                *arg3 = rbp_1.d
                break
        else
            r13_1 = (r15 - 1).d
        label_142c46b96:
            
            if (r12_1 s<= r13_1)
                continue
        
        if (rsi_1 == 0)
            void* rsi_2 = -ffffffffffffffff
            
            do
                rsi_2 += 1
            while (*(rbx + rsi_2) != 0)
            
            rsi_1 = rsi_2 + rbx
        
        if (rsi_1 - rbx != 3)
            result = arg3
            *result = 0
            break
        
        *arg4 = sub_142bf7ca0(rbx, rsi_1.d - rbx.d, r8_1, r9, arg5) & 0xdfdfdfff
        result = arg3
        *result = 1
        break

return result
