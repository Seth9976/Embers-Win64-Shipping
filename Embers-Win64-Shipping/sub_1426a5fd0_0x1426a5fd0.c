// 函数: sub_1426a5fd0
// 地址: 0x1426a5fd0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t r9 = *(arg1 + 0x40)
int32_t r8 = 0
int64_t r10_1

if (r9 s> 0)
    r10_1 = *(arg1 + 0x38)
    
    while (*(r10_1 + sx.q(r8) * 0x18) != *arg2)
        r8 += 1
        
        if (r8 s>= r9)
            goto label_1426a6019

if (r9 s<= 0 || *(arg1 + 0x4c) + r8.b == 0xff)
label_1426a6019:
    
    if (*(arg1 + 0x30) == 0)
        int64_t rax_2 = *arg2
        sub_140d19010(arg1, 
            NewObject with empty name can't be used to create default subobjects (inside of UObject "
        "derived class constructor) as it produces incon")
        int64_t arg_8 = 0
        void* result = sub_140d2dfc0(sub_14272e650(), arg1, 0, 0, 0, 0, 0, 0, 0)
        int64_t rsi = sx.q(*(arg1 + 0x40))
        void* result_1 = result
        int32_t rcx_3 = (rsi + 1).d
        *(arg1 + 0x40) = rcx_3
        
        if (rcx_3 s> *(arg1 + 0x44))
            sub_1405a4df0(arg1 + 0x38)
        
        int64_t rax_4 = *(arg1 + 0x38)
        int64_t rcx_5 = rsi * 3
        *(rax_4 + (rcx_5 << 3)) = rax_2.o
        int32_t var_18
        *(rax_4 + (rcx_5 << 3) + 0x10) = (var_18 & 0xfffffffe).q
        sub_140d25500(arg1)
        sub_1426bb040(arg1)
        return result
else if (*(arg1 + 0x30) != 0)
    uint64_t rcx_8 = zx.q(r8.b)
    int32_t rax_8 = r9 - rcx_8.d
    int32_t rdx_2 = r9
    
    if (rax_8 != 1)
        memmove(r10_1 + rcx_8 * 0x18, r10_1 + zx.q((rcx_8 + 1).d) * 0x18, (rax_8 - 1) * 0x18)
        rdx_2 = *(arg1 + 0x40)
    
    *(arg1 + 0x40) = rdx_2 - 1
    sub_1405fde90(arg1 + 0x38)
    sub_140d25500(arg1)
    sub_1426bb040(arg1)

return 0
