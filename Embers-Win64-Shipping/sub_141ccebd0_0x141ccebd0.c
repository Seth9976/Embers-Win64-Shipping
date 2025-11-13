// 函数: sub_141ccebd0
// 地址: 0x141ccebd0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* rbp = *(arg1 + 8)
*(arg1 + 0x1b) = 1

if (*(rbp + 0x21c) == 2)
    return 

int32_t rax_1 = *(rbp + 0x200)
char r9 = 0
int64_t r14
r14.b = 0
int64_t rbx_1 = sx.q(rax_1 - 1)
uint64_t r15
r15.b = 1

if (rax_1 - 1 s>= 0)
    int64_t rsi_2 = rbx_1 << 4
    int64_t temp1_1
    
    do
        char rcx = 0
        int64_t* rdx_1 = *(rsi_2 + *(rbp + 0x1f8))
        char r8_1 = *(rdx_1 + 0x1b)
        
        if (r8_1 != 0)
            rcx = r15.b
        
        r15 = zx.q(rcx)
        
        if (r14.b == 0)
            r14.b = rdx_1 == arg1
        else if (*(rbp + 0x2b8) != 0 && r8_1 == 0 && *(arg1 + 0x18) != r8_1 && r9 == 0
                && rdx_1[3].b != r9)
            (*(*rdx_1 + 0x68))(rdx_1)
            r9 = 1
        
        rsi_2 -= 0x10
        temp1_1 = rbx_1
        rbx_1 -= 1
    while (temp1_1 - 1 s>= 0)

if (rax_1 - 1 s< 0 || r15.b != 0)
    sub_141ccdfa0(rbp)
