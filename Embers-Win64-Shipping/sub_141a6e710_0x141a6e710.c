// 函数: sub_141a6e710
// 地址: 0x141a6e710
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t i_1 = arg3
arg1[1].d = arg3

if (arg3 == 0 && arg5 == 0 && arg4 == 0)
    *(arg1 + 0xc) = 0
    return arg5

char rax_1 = sub_140afef10(arg1, arg3 + arg5, arg4)
int128_t* rbp_1 = *arg1

if (i_1 != 0)
    void* rsi_1 = arg2 + 0x48
    void* rbx_1 = rbp_1 + 0x48
    int32_t i
    
    do
        *rbp_1 = *(rsi_1 - 0x48)
        *(rbx_1 - 0x38) = *(rsi_1 - 0x38)
        rax_1 = *(rsi_1 - 0x34)
        *(rbx_1 - 0x34) = rax_1
        *rbx_1 = 0
        int64_t r15_1 = sx.q(*(rsi_1 + 8))
        void* r13_1 = *rsi_1
        *(rbx_1 + 8) = r15_1.d
        
        if (r15_1.d != 0)
            void* rdi_1 = rbx_1 - 0x30
            sub_14174ff90(rdi_1, r15_1.d, 0)
            void* r9 = *rbx_1
            void* rdx_2 = rsi_1 - 0x30
            
            if (r13_1 != 0)
                rdx_2 = r13_1
            
            if (r9 != 0)
                rdi_1 = r9
            
            rax_1 = memcpy(rdi_1, rdx_2, (r15_1 * 0xc).d)
        else
            *(rbx_1 + 0xc) = 4
        
        rbp_1 += 0x58
        rbx_1 += 0x58
        rsi_1 += 0x58
        i = i_1
        i_1 -= 1
    while (i != 1)

return rax_1
