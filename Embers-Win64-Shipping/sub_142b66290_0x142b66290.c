// 函数: sub_142b66290
// 地址: 0x142b66290
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t* rbx = arg5
void* rsi = arg4

if (*rbx s> 0)
    return 

sub_142a9eda0(arg1)
int32_t rdi_1 = -1
int32_t rax = sub_142a9fa50(rsi)
int32_t rbp_1 = 0
int32_t r13_1 = rax

if (rax s> 0)
    do
        int32_t rbx_1 = sub_142a9fa80(rsi, rbp_1)
        rax = sub_142a9fa60(rsi, zx.q(rbp_1))
        int32_t rsi_1 = rax
        
        if (rbx_1 s<= rax)
            do
                if (arg2(zx.q(rbx_1), arg3).b == 0)
                    if (rdi_1 s>= 0)
                        sub_142a9e9d0(arg1, rdi_1, rbx_1 - 1)
                        rdi_1 = -1
                else if (rdi_1 s< 0)
                    rdi_1 = rbx_1
                
                rbx_1 += 1
            while (rbx_1 s<= rsi_1)
        
        rsi = arg4
        rbp_1 += 1
    while (rbp_1 s< r13_1)
    
    if (rdi_1 s>= 0)
        sub_142a9e9d0(arg1, rdi_1, 0x10ffff)
    
    rbx = arg5

if ((*(arg1 + 0x20) & 1) != 0 && *rbx s<= 0)
    *rbx = 7
