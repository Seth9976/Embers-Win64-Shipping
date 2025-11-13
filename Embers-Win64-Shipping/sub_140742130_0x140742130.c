// 函数: sub_140742130
// 地址: 0x140742130
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t rbp = arg2[1]
int64_t* i = *arg2
int64_t* r8 = &arg1[2]
*arg1 = 0
arg1[1] = 0
r8[2] = 0
r8[3].d = 0
*(r8 + 0x1c) = 0x80
int64_t* rax = r8[2]

if (rax != 0)
    r8 = rax

int32_t rsi_2 = ((rbp - i) s>> 4).d
*r8 = 0
r8[1] = 0
arg1[6].d = 0xffffffff
*(arg1 + 0x34) = 0
arg1[8] = 0
arg1[9].d = 0

if (rsi_2 s> arg1[1].d - *(arg1 + 0x34))
    sub_1407745b0(arg1, rsi_2)
    int32_t rax_5
    
    if (rsi_2 u< 4)
        rax_5 = 1
    else
        uint32_t rsi_3 = rsi_2 u>> 1
        uint64_t rflags_1
        int32_t temp0_2
        temp0_2, rflags_1 = _bit_scan_reverse(rsi_3 + 8)
        int32_t rcx_1
        
        if (rsi_3 == 0xfffffff8)
            rcx_1 = 0x20
        else
            rcx_1 = 0x1f - temp0_2
        
        int32_t rcx_3 = rcx_1 << 0x1a s>> 0x1f
        uint64_t rflags_2
        char temp0_3
        temp0_3, rflags_2 = _bit_scan_reverse(rsi_3 + 7)
        
        if (rcx_3 == 0)
            rax_5 = 1
        else
            rax_5 = 1 << ((not.d(rcx_3)).b & (0x20 - (0x1f - temp0_3)))
    
    int32_t rcx_6 = arg1[9].d
    
    if (rcx_6 == 0 || rcx_6 s< rax_5)
        arg1[9].d = rax_5
        sub_140773a10(arg1)

for (; i != rbp; i = &i[2])
    int64_t var_18 = *i
    int64_t var_10_1 = i[1]
    void arg_8
    sub_1406f4ec0(arg1, &arg_8, &var_18, nullptr)

return arg1
