// 函数: sub_140ba72b0
// 地址: 0x140ba72b0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

EnterCriticalSection(arg1)
sub_140b9dfd0(arg1)
int64_t* rdx_5

if (arg1->__offset(0xa8).d == arg1->__offset(0xd4).d)
label_140ba734e:
    rdx_5 = nullptr
else
    int32_t rax_2 = sub_140b5ead0(arg3.d) + arg3:4.d
    void* __offset(_RTL_CRITICAL_SECTION, 0xd8) r8 = arg1 + 0xd8
    void* rcx_2 = (r8 - 0xd8)->__offset(0xe0).q
    
    if (rcx_2 != 0)
        r8 = rcx_2
    
    int32_t rax_4 = *(r8 + (((sx.q(arg1->__offset(0xe8).d) - 1) & sx.q(rax_2)) << 2))
    
    if (rax_4 == 0xffffffff)
    label_140ba734e_1:
        rdx_5 = nullptr
    else
        while (true)
            rdx_5 = (sx.q(rax_4) << 5) + arg1->__offset(0xa0).q
            
            if (*rdx_5 == arg3)
                break
            
            rax_4 = rdx_5[3].d
            
            if (rax_4 == 0xffffffff)
                goto label_140ba734e_2
        
        if (rax_4 == 0xffffffff)
        label_140ba734e_2:
            rdx_5 = nullptr

void* rax_5 = &rdx_5[1]

if (rdx_5 == 0)
    rax_5 = nullptr

int64_t rcx_3

if (rax_5 == 0)
    int64_t arg_8 = 0
    rcx_3 = 0
else
    rcx_3 = **rax_5

*arg2 = rcx_3

if (arg1 != 0)
    LeaveCriticalSection(arg1)

return arg2
