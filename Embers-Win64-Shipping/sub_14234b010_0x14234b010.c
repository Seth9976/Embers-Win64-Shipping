// 函数: sub_14234b010
// 地址: 0x14234b010
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* rsi = arg2[0x86]
void* rax = sub_140d3c6e0(&arg2[0x87])
int64_t rbp
void* r14_1
void* r15_1

if (rax == 0 || arg2[0x97].d != *(rsi + 0x1b0))
    *(arg2 + 0x494)
    r14_1 = &arg2[0x8a + sx.q(*(arg2 + 0x494)) * 2]
    rbp.b = 0
    r15_1 = &arg2[0xb0 + sx.q(*(arg2 + 0x494)) * 2]
else
    int64_t rcx_3 = sx.q(*(rax + 0x494)) << 4
    r14_1 = rax + 0x450 + rcx_3
    rbp.b = 1
    r15_1 = rax + 0x580 + rcx_3

void* rsi_1 = rsi + 0x2e0

if ((*(*arg2 + 0x8c8))(arg2) != 0 && *((*(*arg2 + 0x8c8))(arg2) + 8) == *(rsi_1 + 8))
    rsi_1 = (*(*arg2 + 0x8c8))(arg2)

void* rbx_1 = nullptr

if (arg1[1].d != *(rsi_1 + 8))
    int32_t rdx = *(arg1 + 0xc)
    int32_t r8 = 0
    arg1[1].d = 0
    
    if (rdx s< 0 && rdx != 0)
        sub_1405a52a0(arg1, 0)
        r8 = arg1[1].d
        rdx = *(arg1 + 0xc)
    
    int32_t rcx_11 = *(rsi_1 + 8) + r8
    arg1[1].d = rcx_11
    
    if (rcx_11 s> rdx)
        sub_1405c4fe0(arg1)

if (rbp.b != 0)
    rbx_1 = &arg2[0x96]

return sub_14234b1a0(arg1, r14_1, r15_1, rbx_1, rsi_1, rsi + 0x188, arg3, arg4, arg5)
