// 函数: sub_140d85ce0
// 地址: 0x140d85ce0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t rbx = 0
int64_t* rsi_1 = data_143e203a8 + 0xb8
int32_t rcx = rsi_1[1].d

if (rcx s<= 0)
    return 

int64_t* rdi_1 = nullptr
int32_t rax

do
    int64_t r9_1 = *rsi_1
    rax = rcx
    
    if (*(rdi_1 + r9_1) == arg2)
        int32_t rax_2 = rax - rbx - 1
        
        if (rax_2 s>= 1)
            rax_2 = 1
        
        if (rax_2 != 0)
            memcpy(r9_1 + (sx.q(rbx) << 3), r9_1 + (sx.q(rcx - rax_2) << 3), rax_2 << 3)
            rcx = rsi_1[1].d
        
        rsi_1[1].d = rcx - 1
        sub_1405c53d0(rsi_1)
        rax = rsi_1[1].d
        rbx -= 1
        rdi_1 -= 8
    
    rbx += 1
    rdi_1 = &rdi_1[1]
    rcx = rax
while (rbx s< rax)
