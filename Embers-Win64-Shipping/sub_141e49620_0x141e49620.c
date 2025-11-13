// 函数: sub_141e49620
// 地址: 0x141e49620
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t rax
int64_t rdi_1

if (arg1 == 0)
    rdi_1 = 0
else
    void* rdi = arg1[4]
    
    if (rdi != 0)
        void* rax_1 = sub_142591550()
        void* r8_1 = *(rdi + 0x10)
        rax = sx.q(*(rax_1 + 0x38))
        
        if (rax.d s<= *(r8_1 + 0x38) && *(*(r8_1 + 0x30) + (rax << 3)) == rax_1 + 0x30)
            r8_1.b = 1
            sub_141f3e990(arg1[4], 1, r8_1.b)
    
    rdi_1 = arg1[0x48]
    
    if (rdi_1 == 0)
        rax = (*(*arg1 + 0x300))(arg1)
        arg1[0x48] = rax
        rdi_1 = rax

*(rdi_1 + 0x824) = arg2
void* rsi_1 = arg1[0x4d]

if (rsi_1 == 0)
    return 

void* rax_3 = sub_1424641d0()
void* rdx_1 = *(rsi_1 + 0x10)
rax = sx.q(*(rax_3 + 0x38))

if (rax.d s<= *(rdx_1 + 0x38) && *(*(rdx_1 + 0x30) + (rax << 3)) == rax_3 + 0x30)
    sub_141e49710(arg1, rsi_1, *(rdi_1 + 0x824), 0)
