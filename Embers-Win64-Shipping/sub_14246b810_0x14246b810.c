// 函数: sub_14246b810
// 地址: 0x14246b810
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t i_1 = arg4
int64_t* rbp = arg2

if (arg4 != 0)
    int64_t* rsi_1 = arg3 + 8
    int32_t i
    
    do
        int64_t* r14_1 = rbp
        rbp = &rbp[0xb]
        *r14_1 = rsi_1[-1]
        
        if (&r14_1[1] != rsi_1)
            int32_t j_1 = r14_1[2].d
            
            if (j_1 != 0)
                int64_t* rbx_2 = r14_1[1] + 0x10
                int32_t j
                
                do
                    int64_t rcx = *rbx_2
                    
                    if (rcx != 0)
                        sub_140a74f90(rcx)
                    
                    rbx_2 = &rbx_2[4]
                    j = j_1
                    j_1 -= 1
                while (j != 1)
            
            sub_141ddd4b0(&r14_1[1], *rsi_1, rsi_1[1].d, *(r14_1 + 0x14), 0)
        
        r14_1[3].d = rsi_1[2].d
        *(r14_1 + 0x1c) = *(rsi_1 + 0x14)
        r14_1[4].d = rsi_1[3].d
        *(r14_1 + 0x24) = *(rsi_1 + 0x1c)
        r14_1[5].b = rsi_1[4].b
        *(r14_1 + 0x2c) = *(rsi_1 + 0x24)
        sub_14090a0d0(&r14_1[6], &rsi_1[5])
        sub_14090a0d0(&r14_1[8], &rsi_1[7])
        char rax = rsi_1[9].b
        rsi_1 = &rsi_1[0xb]
        r14_1[0xa].b = rax
        i = i_1
        i_1 -= 1
    while (i != 1)

return 1
