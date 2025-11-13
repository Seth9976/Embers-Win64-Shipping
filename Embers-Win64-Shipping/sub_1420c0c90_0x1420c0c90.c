// 函数: sub_1420c0c90
// 地址: 0x1420c0c90
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t rdi = -1

if (arg1 == 0)
    return 0xffffffff

int32_t rsi = 0
char rbp = not.b((*(arg2 + 0x80)).b) & 1
int32_t r14 = 0
int64_t* r15 = *(arg2 + 0x78)
int32_t r13 = *(r15 + 0x3c)

while (true)
    int32_t rax_1 = arg1[1].d
    
    if (rsi s>= rax_1 || rdi != 0xffffffff)
        return zx.q(rdi)
    
    void* r8
    
    if (rax_1 != 0)
        void* rax_2 = *arg1
        
        if (rbp == 0 && (rax_2.b & 1) != 0)
            rax_2 = (rax_2 s>> 1) + arg1
        
        r8 = sx.q(r14) + rax_2
    else
        r8 = nullptr
    
    if ((*(*r15 + 0x80))(r15, arg3, r8, 0) != 0)
        rdi = rsi
    
    rsi += 1
    r14 += r13
