// 函数: sub_141bcaee0
// 地址: 0x141bcaee0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t arg_10 = arg2
int32_t arg_18
sub_140865c40(arg1 + 0x298, &arg_18, arg2)
int64_t rax = sx.q(arg_18)
int64_t* rdi = nullptr
void* const rcx_1

if (rax.d == 0xffffffff)
    rcx_1 = nullptr
else
    rcx_1 = *(arg1 + 0x298) + rax * 0x18

int32_t* result = rcx_1 + 8

if (rcx_1 == 0)
    result = nullptr

uint64_t rbp
rbp.b = 0

if (result != 0)
    rbp = zx.q(*result)
    arg_18:1.b = *(result + 1)
label_141bcaf5d:
    arg_18.b = arg3
    int64_t* var_38 = &arg_10
    int32_t* var_30_1 = &arg_18
    void arg_8
    result = sub_141b70b60(arg1 + 0x298, &arg_8, &var_38, nullptr)
    
    if (rbp.b != arg3)
        int64_t rbp_1 = arg_10
        
        if (*(arg1 + 0x310) != 0)
            int64_t* rcx_3 = *(arg1 + 0x308)
            
            if (rcx_3 != 0 && (*(*rcx_3 + 0x28))(rcx_3) != 0)
                if (*(arg1 + 0x310) != 0)
                    rdi = *(arg1 + 0x308)
                
                (*(*rdi + 0x50))(rdi, rbp_1, zx.q(arg3))
        
        return (*(*(arg1 - 0x4f8) + 0x240))(arg1 - 0x4f8)
else if (arg3 != 0)
    arg_18:1.b = 0
    goto label_141bcaf5d

return result
