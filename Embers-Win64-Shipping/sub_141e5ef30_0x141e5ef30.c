// 函数: sub_141e5ef30
// 地址: 0x141e5ef30
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

uint64_t r8 = zx.q(*(arg1 + 0xc))
int32_t rcx = r8.d
void* const r8_1
int32_t r9

if (rcx == 1)
    *arg2 = 0
    arg2[1] = 0
    sub_1405947f0(arg2, 5)
    int32_t rax_4 = arg2[1].d + 5
    arg2[1].d = rax_4
    
    if (rax_4 s> *(arg2 + 0xc))
        sub_140594770(arg2)
    
    r9 = 5
    r8_1 = "Mono"
else if (rcx == 2)
    *arg2 = 0
    arg2[1] = 0
    sub_1405947f0(arg2, 7)
    int32_t rax_3 = arg2[1].d + 7
    arg2[1].d = rax_3
    
    if (rax_3 s> *(arg2 + 0xc))
        sub_140594770(arg2)
    
    r9 = 7
    r8_1 = "Stereo"
else if (rcx == 6)
    *arg2 = 0
    arg2[1] = 0
    sub_1405947f0(arg2, 4)
    int32_t rax_2 = arg2[1].d + 4
    arg2[1].d = rax_2
    
    if (rax_2 s> *(arg2 + 0xc))
        sub_140594770(arg2)
    
    r9 = 4
    r8_1 = &data_14324c718
else
    if (rcx != 8)
        sub_140a2e390(arg2, u"%d Channels", r8)
        return arg2
    
    *arg2 = 0
    arg2[1] = 0
    sub_1405947f0(arg2, 4)
    int32_t rax_1 = arg2[1].d + 4
    arg2[1].d = rax_1
    
    if (rax_1 s> *(arg2 + 0xc))
        sub_140594770(arg2)
    
    r9 = 4
    r8_1 = &data_14324c71c

sub_1405a7220(*arg2, r9, r8_1, r9, 0x3f)
return arg2
