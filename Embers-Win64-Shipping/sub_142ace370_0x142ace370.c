// 函数: sub_142ace370
// 地址: 0x142ace370
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t* rbp = arg5

if (*rbp s> 0)
    return 

sub_142acd320(arg1, rbp)

if (*rbp s> 0)
    return 

*arg2 = *(arg1 + 0xa0)
int32_t rbx_1 = 0

if (*(arg1 + 0xc0) != 0 && *arg4 s> 0)
    int32_t i = 0
    
    if (0 s< *(arg1 + 0xc8))
        int64_t rcx = 0
        int64_t* rdx_1 = arg3
        
        do
            int64_t r9 = *(rcx + *(arg1 + 0xc0))
            
            if (r9 != 0)
                *rdx_1 = r9
                rbx_1 += 1
                rdx_1 = &rdx_1[1]
                
                if (rbx_1 s>= *arg4)
                    break
            
            i += 1
            rcx += 8
        while (i s< sx.d(*(arg1 + 0xc8)))

int64_t* rcx_1 = *(arg1 + 0xd0)

if (rcx_1 == 0)
    *arg4 = rbx_1
    return 

uint64_t rax = zx.q(*arg4)

if (rax.d s<= rbx_1)
    *arg4 = rbx_1
    return 

arg5.d = rax.d - rbx_1
void var_18
(*(*rcx_1 + 0x88))(rcx_1, &var_18, &arg3[sx.q(rbx_1)], &arg5, rbp)

if (*rbp s<= 0)
    *arg4 = rbx_1 + arg5.d
