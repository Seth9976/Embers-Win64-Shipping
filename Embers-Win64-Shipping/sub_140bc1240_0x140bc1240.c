// 函数: sub_140bc1240
// 地址: 0x140bc1240
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

sub_140b983a0(arg1, arg2, arg3)
void* rax = sub_140d2bce0(arg2)

if (rax == 0)
    return arg1

void* rdi = arg1[0x12]
EnterCriticalSection(rdi + 0x58)

if (rax != *(rdi + 0x80))
    *(rdi + 0x80) = rax
    int32_t arg_8
    sub_140865c40(rdi + 8, &arg_8, rax)
    int64_t rax_1 = sx.q(arg_8)
    void* const rcx_3
    
    if (rax_1.d == 0xffffffff)
        rcx_3 = nullptr
    else
        rcx_3 = *(rdi + 8) + rax_1 * 0x18
    
    int64_t* rax_3 = rcx_3 + 8
    
    if (rcx_3 == 0)
        rax_3 = nullptr
    
    if (rax_3 == 0)
        *(rdi + 0x88) = 0
    else
        *(rdi + 0x88) = *rax_3

void* rdi_1 = *(rdi + 0x88)

if (rdi != -0x58)
    LeaveCriticalSection(rdi + 0x58)

if (rdi_1 != 0)
    void var_48
    int64_t* rax_5 = sub_140d21d60(&var_48, rdi_1)
    *arg2 = *rax_5
    
    if (&arg2[1] != &rax_5[1])
        int64_t rcx_7 = arg2[1]
        
        if (rcx_7 != 0)
            sub_140a74f90(rcx_7)
        
        arg2[1] = rax_5[1]
        rax_5[1] = 0
        arg2[2].d = rax_5[2].d
        *(arg2 + 0x14) = *(rax_5 + 0x14)
        rax_5[2] = 0
    
    int64_t var_40
    
    if (var_40 != 0)
        sub_140a74f90(var_40)

return arg1
