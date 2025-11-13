// 函数: sub_141be8e80
// 地址: 0x141be8e80
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

*(arg1 + 0x1b4) |= 0x40
int64_t rbx = 0
int64_t* rdi = arg1[0x2f]
char rdx = *(arg1 + 0x1b4)
uint64_t r14_1 = sx.q(arg1[0x30].d) << 3 u>> 3

if (rdi u> &rdi[arg1[0x30]])
    r14_1 = 0

if (r14_1 != 0)
    do
        void* rsi_1 = *rdi
        
        if ((*(*(rsi_1 + 0x28) + 0x38))(rsi_1 + 0x28) == 1)
            sub_141be8cc0(rsi_1)
        
        rdi = &rdi[1]
        rbx += 1
    while (rbx != r14_1)
    
    rdx = *(arg1 + 0x1b4)

*(arg1 + 0x1b4) = rdx & 0xbf
return sub_141bf4410(arg1) __tailcall
