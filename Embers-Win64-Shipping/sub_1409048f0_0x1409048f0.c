// 函数: sub_1409048f0
// 地址: 0x1409048f0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

*(arg3 + 0x18) = *(arg1 + 0x18)
void* rax_1 = *(arg1 + 0x18)

if (rax_1 != 0)
    *(rax_1 + 0x28) = arg3

*(arg1 + 0x18) = arg3
int64_t rbx = *arg2
int32_t rax_2 = *(arg1 + 0x28)
int64_t arg_8 = rbx
void* rax_7

if (rax_2 == *(arg1 + 0x54))
labelid_7:
    rax_7 = nullptr
else
    int32_t rax_4 = sub_140b5ead0(rbx.d) + arg_8:4.d
    void* r8 = arg1 + 0x58
    void* rcx_1 = *(r8 + 8)
    
    if (rcx_1 != 0)
        r8 = rcx_1
    
    int32_t rax_6 = *(r8 + (((sx.q(*(arg1 + 0x68)) - 1) & sx.q(rax_4)) << 2))
    
    if (rax_6 == 0xffffffff)
    label_140904987:
        rax_7 = nullptr
    else
        int64_t r8_1 = *(arg1 + 0x20)
        int64_t rcx_2
        
        while (true)
            rcx_2 = sx.q(rax_6)
            int64_t rdx_3 = rcx_2 * 3
            
            if (*(r8_1 + (rdx_3 << 3)) == rbx)
                break
            
            rax_6 = *(r8_1 + (rdx_3 << 3) + 0x10)
            
            if (rax_6 == 0xffffffff)
                goto label_140904987_2
        
        if (rax_6 == 0xffffffff)
        label_140904987_1:
            rax_7 = nullptr
        else
            void* rax_9 = r8_1 + rcx_2 * 0x18
            
            if (rax_9 == 0 || rax_9 == -8)
            label_140904987_2:
                rax_7 = nullptr
            else
                rax_7 = *(rax_9 + 8)

*(arg3 + 0x20) = rax_7
int32_t var_28
int64_t* var_20

if (rax_7 == 0)
    sub_1405b3620(arg1 + 0x70, &var_28)
    uint32_t r10_2 = (arg3 u>> 4).d
    *var_20 = arg3
    var_20[1] = *arg2
    int32_t r8_3 = (0x9e3779b9 - r10_2) ^ r10_2 << 8
    var_20[2].d = 0xffffffff
    int32_t rdx_7 = neg.d(r10_2 + r8_3) ^ r8_3 u>> 0xd
    int32_t r10_5 = (r10_2 - rdx_7 - r8_3) ^ rdx_7 u>> 0xc
    int32_t r8_6 = (r8_3 - r10_5 - rdx_7) ^ r10_5 << 0x10
    int32_t rdx_10 = (rdx_7 - r10_5 - r8_6) ^ r8_6 u>> 5
    int32_t r10_8 = (r10_5 - rdx_10 - r8_6) ^ rdx_10 u>> 3
    int32_t r8_9 = (r8_6 - r10_8 - rdx_10) ^ r10_8 << 0xa
    sub_140901360(arg1 + 0x70, &arg_8, r8_9 u>> 0xf ^ (rdx_10 - (r10_8 + r8_9)), var_20, var_28, 
        nullptr)
else
    *(rax_7 + 0x30) = arg3

sub_1405b3620(arg1 + 0x20, &var_28)
int64_t rax_28 = *arg2
*var_20 = rax_28
var_20[1] = arg3
var_20[2].d = 0xffffffff
int32_t* result = sub_1405b8140(arg1 + 0x20, &arg_8, (rax_28 u>> 0x20).d + sub_140b5ead0(rax_28.d), 
    var_20, var_28, nullptr)

if (*(arg1 + 0x10) == 0)
    *(arg1 + 0x10) = arg3

return result
