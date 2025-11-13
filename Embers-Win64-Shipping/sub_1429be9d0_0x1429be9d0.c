// 函数: sub_1429be9d0
// 地址: 0x1429be9d0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t r10 = *(arg1 + 0x10)
char rbx = arg4
int32_t i_1 = 0
int64_t rax
int64_t rdx
rdx:rax = muls.dp.q(0x2aaaaaaaaaaaaaab, *(arg1 + 0x18) - r10)
int64_t rdx_1 = rdx s>> 2

if (rdx_1 != neg.q(rdx_1 u>> 0x3f))
    uint64_t i = 0
    int64_t rdx_11
    
    do
        int32_t j_1 = 0
        int64_t rsi_1 = i * 0x18
        int64_t rax_4
        int64_t rdx_3
        rdx_3:rax_4 = muls.dp.q(0x2aaaaaaaaaaaaaab, *(rsi_1 + r10 + 8) - *(rsi_1 + r10))
        int64_t rdx_4 = rdx_3 s>> 2
        
        if (rdx_4 != neg.q(rdx_4 u>> 0x3f))
            uint64_t j = 0
            int64_t rdx_8
            
            do
                int32_t k_1 = 0
                int64_t rdi_1 = j * 0x18
                int64_t rax_8 = *(rsi_1 + r10)
                
                if ((*(rdi_1 + rax_8 + 8) - *(rdi_1 + rax_8)) s>> 3 != 0)
                    uint64_t k = 0
                    int64_t r8 = *(rdi_1 + *(rsi_1 + *(arg1 + 0x10)))
                    int64_t rax_10
                    
                    do
                        sub_14297d090(arg2, r8 + (k << 3))
                        r10 = *(arg1 + 0x10)
                        k_1 += 1
                        k = zx.q(k_1)
                        rax_10 = *(rsi_1 + r10)
                        r8 = *(rdi_1 + rax_10)
                    while (k u< (*(rdi_1 + rax_10 + 8) - r8) s>> 3)
                
                j_1 += 1
                int64_t rax_11
                int64_t rdx_7
                rdx_7:rax_11 = muls.dp.q(0x2aaaaaaaaaaaaaab, *(rsi_1 + r10 + 8) - *(rsi_1 + r10))
                j = zx.q(j_1)
                rdx_8 = rdx_7 s>> 2
            while (j u< rdx_8 + (rdx_8 u>> 0x3f))
        
        i_1 += 1
        i = zx.q(i_1)
        int64_t rax_14
        int64_t rdx_10
        rdx_10:rax_14 = muls.dp.q(0x2aaaaaaaaaaaaaab, *(arg1 + 0x18) - r10)
        rdx_11 = rdx_10 s>> 2
    while (i u< rdx_11 + (rdx_11 u>> 0x3f))
    rbx = arg4

char result = sub_1429be280(arg1)

if (result == 0)
    *arg3 = 1
    return result

*arg3 = 0
return sub_1429bee20(arg1, arg2, zx.q(rbx), zx.q(arg5)) __tailcall
