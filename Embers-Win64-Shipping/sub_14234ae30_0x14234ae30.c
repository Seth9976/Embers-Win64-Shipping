// 函数: sub_14234ae30
// 地址: 0x14234ae30
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* rbp = arg2[0x86]
void* rax = sub_140d3c6e0(&arg2[0x87])
void* rsi
void* rdi
int64_t r15

if (rax == 0 || arg2[0x97].d != *(rbp + 0x1b0))
    r15.b = 0
    char rax_8 = arg2[0xb5].b & 0x20
    
    if (rax_8 == 0)
        rsi = &arg2[0x90]
    else
        rsi = &arg2[(sx.q(arg2[0x92].d) + 0x45) * 2]
    
    if (rax_8 == 0)
        rdi = &arg2[0x8e]
    else
        rdi = &arg2[(sx.q(arg2[0x92].d) + 0x58) * 2]
else
    r15.b = 1
    char rcx_1 = *(rax + 0x5a8) & 0x20
    int64_t rax_4
    
    if (rcx_1 == 0)
        rax_4 = 0x480
    else
        rax_4 = (sx.q(*(rax + 0x490)) + 0x45) << 4
    
    rsi = rax_4 + rax
    
    if (rcx_1 == 0)
        rdi = 0x470 + rax
    else
        rdi = ((sx.q(*(rax + 0x490)) + 0x58) << 4) + rax

void* rbp_1 = rbp + 0x2e0

if ((*(*arg2 + 0x8c8))(arg2) != 0 && *((*(*arg2 + 0x8c8))(arg2) + 8) == *(rbp_1 + 8))
    rbp_1 = (*(*arg2 + 0x8c8))(arg2)

void* rbx_1 = nullptr

if (arg1[1].d != *(rbp_1 + 8))
    int32_t rdx_1 = *(arg1 + 0xc)
    int32_t r8 = 0
    arg1[1].d = 0
    
    if (rdx_1 s< 0 && rdx_1 != 0)
        sub_1405a52a0(arg1, 0)
        r8 = arg1[1].d
        rdx_1 = *(arg1 + 0xc)
    
    int32_t rcx_9 = *(rbp_1 + 8) + r8
    arg1[1].d = rcx_9
    
    if (rcx_9 s> rdx_1)
        sub_1405c4fe0(arg1)

if (r15.b != 0)
    rbx_1 = &arg2[0x96]

return sub_14234b1a0(arg1, rsi, rdi, rbx_1, rbp_1, rbp + 0x188, arg3, arg4, arg5)
