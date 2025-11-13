// 函数: sub_140a49030
// 地址: 0x140a49030
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t rdx
int64_t r8

if (data_143de5480 == 0)
    rdx = 0
    r8 = 0
else
    rdx = 0
    r8.b = GetCurrentThreadId() != data_143de5470

bool cond:2 = *(r8 + arg1 + 0x38) != 0
*arg2 = 0
wchar16 const* const rsi = u"false"

if (cond:2)
    rsi = u"true"

arg2[1] = 0

if (*rsi != 0)
    int64_t rbx_1 = -1
    
    do
        rbx_1 += 1
    while (rsi[rbx_1] != 0)
    
    if (rbx_1.d + 1 s> 0)
        sub_1405947f0(arg2, rbx_1.d + 1)
        rdx = arg2[1].d
    
    int32_t rax_2 = rdx + rbx_1.d + 1
    arg2[1].d = rax_2
    
    if (rax_2 s> *(arg2 + 0xc))
        sub_140594770(arg2)
    
    memcpy(*arg2, rsi, (rbx_1.d + 1) * 2)

return arg2
