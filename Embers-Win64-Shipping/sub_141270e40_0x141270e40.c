// 函数: sub_141270e40
// 地址: 0x141270e40
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t* rbx = *(arg1 + 0x30)
int32_t r10 = 0
int32_t rbp = arg2
int32_t rdi_1 = *(arg1 + 0x40) & arg3
int64_t rax = sx.q(rdi_1)
int64_t rsi = rax << 2
int32_t r11_2 = (rdi_1 - rbx[rax]) & *(arg1 + 0x40)

if (*(rbx + rsi) != 0x80000000)
    do
        if (r11_2 u< r10)
            if (r10 u> *(arg1 + 0x44))
                rbx = *(arg1 + 0x30)
                *(arg1 + 0x44) = r10
            
            int32_t* rdx = *(arg1 + 0x20)
            r10 = r11_2
            int32_t rax_1 = *(rsi + rbx)
            int32_t r9_1 = *(rdx + rsi)
            *(rdx + rsi) = rbp
            rbp = r9_1
            *(rsi + *(arg1 + 0x30)) = arg3
            arg3 = rax_1
            rbx = *(arg1 + 0x30)
        
        r10 += 1
        rdi_1 = (rdi_1 + 1) & *(arg1 + 0x40)
        rsi = sx.q(rdi_1) << 2
        r11_2 = (rdi_1 - *(rsi + rbx)) & *(arg1 + 0x40)
    while (*(rsi + rbx) != 0x80000000)

if (r10 u> *(arg1 + 0x44))
    *(arg1 + 0x44) = r10

int64_t rdx_2 = sx.q(rdi_1) << 2
*(rdx_2 + *(arg1 + 0x20)) = rbp
int64_t result = *(arg1 + 0x30)
*(rdx_2 + result) = arg3
return result
