// 函数: sub_141e7edb0
// 地址: 0x141e7edb0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t arg_10 = arg2
int32_t arg_8
sub_1405ba450(arg1 + 0x70, &arg_8, arg2)
int64_t rax = sx.q(arg_8)
void* const rcx_1

if (rax.d == 0xffffffff)
    rcx_1 = nullptr
else
    rcx_1 = *(arg1 + 0x70) + rax * 0x28

void* result = rcx_1 + 8

if (rcx_1 == 0)
    result = nullptr

if (result == 0)
    int64_t* arg_18 = &arg_10
    sub_141e6de20(arg1 + 0x70, &arg_8, &arg_18, nullptr)
    int64_t rcx_3 = sx.q(arg_8) * 5
    int64_t rax_3 = *(arg1 + 0x70)
    int32_t* r8_2 = *(rax_3 + (rcx_3 << 3) + 8)
    void* rbx_1 = rax_3 + (rcx_3 << 3)
    int64_t rdx_3 = sx.q(*(rbx_1 + 0x10))
    int32_t* rax_4 = r8_2
    void* rcx_4 = &r8_2[rdx_3]
    
    if (r8_2 != rcx_4)
        while (*rax_4 != 0)
            rax_4 = &rax_4[1]
            
            if (rax_4 == rcx_4)
                goto label_141e7ee6b
    
    if (r8_2 == rcx_4 || ((rax_4 - r8_2) s>> 2).d == 0xffffffff)
    label_141e7ee6b:
        int32_t rax_7 = (rdx_3 + 1).d
        *(rbx_1 + 0x10) = rax_7
        
        if (rax_7 s> *(rbx_1 + 0x14))
            sub_1405a4cf0(rbx_1 + 8)
        
        *((rdx_3 << 2) + *(rbx_1 + 8)) = 0
    
    result = rbx_1 + 8
    *(rbx_1 + 0x18) = 0

return result
