// 函数: sub_1426fae20
// 地址: 0x1426fae20
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (arg7 == 0)
    return sub_1426faa60(arg1, arg2, arg3, arg8, arg4, arg5)

void* rsi_1 = arg6
int32_t rdi_1 = 0
int64_t var_18 = 0
int32_t var_10_1 = 0
int32_t result

if (sub_1426e2f00(arg1, rsi_1) == 0)
    if (rsi_1 == 0)
        rsi_1 = nullptr
    else
        void* rax_4 = sub_142736ba0()
        
        if (rax_4 == 0)
            rsi_1 = nullptr
        else
            int64_t rax_5 = sx.q(*(rax_4 + 0x38))
            
            if (rax_5.d s> *(rsi_1 + 0x38) || *(*(rsi_1 + 0x30) + (rax_5 << 3)) != rax_4 + 0x30)
                rsi_1 = nullptr
    
    result = sub_1426e7540(arg3, rsi_1, &var_18)
else
    int64_t rsi_2 = sx.q(var_10_1)
    int32_t rax_1 = (rsi_2 + 1).d
    var_10_1 = rax_1
    
    if (rax_1 s> 0)
        sub_14083a7e0(&var_18)
    
    int64_t* rdx_2 = var_18 + rsi_2 * 0xc
    *rdx_2 = *arg9
    result = arg9[1].d
    rdx_2[1].d = result

if (var_10_1 s> 0)
    do
        int64_t var_28
        sub_140ae4210(var_18 + sx.q(rdi_1) * 0xc, &var_28)
        int64_t rsi_3 = sx.q(arg2[1].d)
        int32_t rax_9 = (rsi_3 + 1).d
        arg2[1].d = rax_9
        
        if (rax_9 s> *(arg2 + 0xc))
            sub_140638a00(arg2)
        
        int64_t rax_10 = *arg2
        int64_t rcx_7 = rsi_3 * 3
        rdi_1 += 1
        *(rax_10 + (rcx_7 << 2)) = var_28
        int32_t result_1
        result = result_1
        *(rax_10 + (rcx_7 << 2) + 8) = result
    while (rdi_1 s< var_10_1)

int64_t rcx_8 = var_18

if (rcx_8 == 0)
    return result

return sub_140a74f90(rcx_8)
