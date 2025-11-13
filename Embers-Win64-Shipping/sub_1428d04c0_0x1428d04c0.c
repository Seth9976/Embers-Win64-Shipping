// 函数: sub_1428d04c0
// 地址: 0x1428d04c0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (arg3 == 0)
    return 

__chkstk(0x20)
int128_t* rbp_1 = arg5
int64_t rbx_1 = arg3
int128_t* rdi_1 = arg2
int64_t rsi_1 = arg1
int128_t* r10_1 = rbp_1

if (rbx_1 u>= 0x10)
    uint64_t i_3 = rbx_1 u>> 4
    rbx_1 -= i_3 * 0x10
    uint64_t i
    
    do
        int64_t rcx = rsi_1
        int64_t j_1 = 2
        int64_t j
        
        do
            *(rdi_1 - rsi_1 + rcx) = *(r10_1 - rsi_1 + rcx) ^ *rcx
            rcx += 8
            j = j_1
            j_1 -= 1
        while (j != 1)
        arg6(rdi_1, rdi_1, arg4)
        r10_1 = rdi_1
        rsi_1 += 0x10
        rdi_1 = &rdi_1[1]
        i = i_3
        i_3 -= 1
    while (i != 1)
    rbp_1 = arg5

if (rbx_1 != 0)
    while (true)
        void* rax_4 = nullptr
        
        while (true)
            if (rax_4 u< rbx_1)
                void* rdx_1 = rax_4 + rsi_1
                *(rdi_1 - rsi_1 + rdx_1) = *(r10_1 - rsi_1 + rdx_1) ^ *rdx_1
                
                if (1 - rsi_1 + rdx_1 u>= rbx_1)
                    rax_4 += 1
                else
                    *(rdi_1 + rax_4 + 1) = *(rsi_1 + rax_4 + 1) ^ *(rax_4 + r10_1 + 1)
                    
                    if (2 - rsi_1 + rdx_1 u>= rbx_1)
                        rax_4 += 2
                    else
                        *(rdi_1 + rax_4 + 2) = *(rsi_1 + rax_4 + 2) ^ *(rax_4 + r10_1 + 2)
                        
                        if (3 - rsi_1 + rdx_1 u>= rbx_1)
                            rax_4 += 3
                        else
                            *(rdi_1 + rax_4 + 3) = *(rsi_1 + rax_4 + 3) ^ *(rax_4 + r10_1 + 3)
                            rax_4 += 4
                            
                            if (rax_4 u>= 0x10)
                                break
                            
                            continue
            
            if (rax_4 u>= 0x10)
                break
            
            void* rcx_9 = rax_4 + rdi_1
            void* i_2 = 0x10 - rax_4
            void* i_1
            
            do
                *rcx_9 = *(r10_1 - rdi_1 + rcx_9)
                rcx_9 += 1
                i_1 = i_2
                i_2 -= 1
            while (i_1 != 1)
            break
        
        arg6(rdi_1, rdi_1, arg4)
        r10_1 = rdi_1
        
        if (rbx_1 u<= 0x10)
            break
        
        rsi_1 += 0x10
        rdi_1 = &rdi_1[1]
        int64_t temp2_1 = rbx_1
        rbx_1 -= 0x10
        
        if (temp2_1 == 0x10)
            break

*rbp_1 = *r10_1
