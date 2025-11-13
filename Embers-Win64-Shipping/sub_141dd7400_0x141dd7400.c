// 函数: sub_141dd7400
// 地址: 0x141dd7400
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* const rsi = arg2

if (arg2 == 0)
    rsi = nullptr
else
    void* rax_1 = sub_1425492f0()
    
    if (rax_1 == 0)
        rsi = nullptr
    else
        int64_t rax_2 = sx.q(*(rax_1 + 0x38))
        
        if (rax_2.d s> *(rsi + 0x38) || *(*(rsi + 0x30) + (rax_2 << 3)) != rax_1 + 0x30)
            rsi = nullptr

sub_140d3a3a0(&arg1[3], rsi)
int64_t* rax_4 = sub_140d3c6e0(&arg1[3])
int64_t* result = sub_140d3c6e0(&arg1[5])
int64_t* result_1 = result

if (rax_4 != 0)
    int64_t* rcx_4 = rax_4[0x23]
    
    if (rcx_4 != 0)
    label_141dd7490:
        result = (*(*rcx_4 + 0x268))(rcx_4)
        
        if (result.b != 0)
        label_141dd74d0:
            *arg1 &= 0xfffffffe
            *arg1 |= 1
            return result
    else
        result = (*(*rax_4 + 0x390))(rax_4)
        rcx_4 = rax_4[0x23]
        
        if (rcx_4 != 0)
            goto label_141dd7490

if (result_1 != 0)
    int64_t* rcx_6 = result_1[0x23]
    
    if (rcx_6 != 0)
    label_141dd74c6:
        result = (*(*rcx_6 + 0x268))(rcx_6)
        
        if (result.b != 0)
            goto label_141dd74d0
    else
        result = (*(*result_1 + 0x390))(result_1)
        rcx_6 = result_1[0x23]
        
        if (rcx_6 != 0)
            goto label_141dd74c6

*arg1 &= 0xfffffffe
return result
