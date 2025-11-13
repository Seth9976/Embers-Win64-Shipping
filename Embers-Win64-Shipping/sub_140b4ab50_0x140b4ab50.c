// 函数: sub_140b4ab50
// 地址: 0x140b4ab50
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (arg2 != 2)
    int64_t rax_7 = sx.q(arg2)
    return sub_140b424a0(arg1 + rax_7 * 0x28, ((rax_7 + 5) << 4) + arg1) __tailcall

int64_t* rbx = arg1 + 0x18
int32_t* rdi = arg1 + 0x5c
uint64_t i_1 = zx.q(arg2)
int64_t result
uint64_t i

do
    result = rbx[-1]
    int32_t rsi_1 = *rbx
    int32_t j_2 = result.d - rsi_1
    int32_t rdx_1 = rdi[-1] + j_2
    
    if (rdx_1 s> *rdi)
        result = sub_1405c5570(&rdi[-3], rdx_1)
        rsi_1 = *rbx
    
    uint64_t rsi_2 = zx.q(rsi_1) & 0xf
    
    if (j_2 != 0)
        int64_t rcx_1 = *rbx
        uint64_t j_1 = zx.q(j_2)
        uint64_t j
        
        do
            if (rcx_1 == rbx[1] + 0x10)
                void* rcx_2 = rbx[-3]
                rsi_2 = 0
                rbx[-3] = *(rcx_2 + 0x80)
                j_sub_140a74f90(rcx_2)
                rbx[1] = *rbx
            
            int64_t rbp_2 = sx.q(rdi[-1])
            int64_t* r14_1 = rbx[-3] + (rsi_2 << 3)
            int32_t rax_6 = (rbp_2 + 1).d
            rdi[-1] = rax_6
            
            if (rax_6 s> *rdi)
                sub_1405a4d70(&rdi[-3])
            
            rsi_2 = zx.q(rsi_2.d + 1)
            result = *r14_1
            *(*(rdi - 0xc) + (rbp_2 << 3)) = result
            *rbx += 1
            rcx_1 = *rbx
            j = j_1
            j_1 -= 1
        while (j != 1)
    
    rdi = &rdi[4]
    rbx = &rbx[5]
    i = i_1
    i_1 -= 1
while (i != 1)
return result
