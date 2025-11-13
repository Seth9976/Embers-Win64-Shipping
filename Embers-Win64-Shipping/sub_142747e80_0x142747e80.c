// 函数: sub_142747e80
// 地址: 0x142747e80
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* r15 = arg2

if (arg1[0xd0] == 0)
    return 

int32_t rbx_1 = 0
void* const rsi_1 = arg1[0x86]
int64_t rax

if (rsi_1 == 0)
    rsi_1 = nullptr
else
    void* rax_1 = sub_142749290()
    arg3 = *(rsi_1 + 0x10)
    arg2 = rax_1 + 0x30
    rax = sx.q(*(rax_1 + 0x38))
    
    if (rax.d s> *(arg3 + 0x38))
        rsi_1 = nullptr
    else if (*(*(arg3 + 0x30) + (rax << 3)) != arg2)
        rsi_1 = nullptr

int64_t* rcx_1 = *(rsi_1 + 0x418)

if (rcx_1 == 0)
    return 

rax = (*(*rcx_1 + 0xc0))(rcx_1, arg2, arg3)
int32_t rsi_2 = rax.d

if (rax.d == 0)
    return 

int64_t rdx_2

do
    int64_t* rcx_2 = arg1[0xd0]
    int64_t r8 = *rcx_2
    int64_t rax_3 = (*(r8 + 0xd0))(rcx_2, zx.q(rbx_1), r8)
    
    if (arg1[0x15] == 0)
        sub_141ee69e0(arg1)
    
    rbx_1 += 1
    arg1[0x73] = rax_3
    arg1[0x55].d = rbx_1
    rax, rdx_2 = sub_142222130(&arg1[0x55], r15)
while (rbx_1 u< rsi_2)

if (rsi_2 != 0)
    rdx_2.b = 1
    (*(*arg1 + 0x818))(arg1, rdx_2)
