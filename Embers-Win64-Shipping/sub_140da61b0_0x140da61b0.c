// 函数: sub_140da61b0
// 地址: 0x140da61b0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t i = *(arg1 + 0x20)
void* rsi = arg1 + 8
void* rax = *(rsi + 0x10)
int32_t rbx = 0
void arg_8

if (i s> 0)
    void* r15_1 = rsi
    
    if (rax != 0)
        r15_1 = rax
    
    do
        int32_t rcx_1 = i & 0x80000001
        
        if (rcx_1 s< 0)
            rcx_1 = ((rcx_1 - 1) | 0xfffffffe) + 1
        
        int32_t temp1_1
        int32_t temp2_1
        temp1_1:temp2_1 = sx.q(i)
        int32_t i_1 = (temp2_1 - temp1_1) s>> 1
        i = i_1
        int32_t rax_4 = i_1 + rbx
        int64_t rcx_5 = *public: __cdecl std::_Callable_base<class <lambda_508dc996854572947a45292d62928d80>, 0>::_Callable_base<class <lambda_508dc996854572947a45292d62928d80>, 0><class <lambda_508dc996854572947a45292d62928d80> &>(class <lambda_508dc996854572947a45292d62928d80> &)(
            &arg_8, (sx.q(rax_4) << 4) + r15_1)
        int32_t rax_6 = rcx_5.d
        int32_t rax_7 = rax_6 - *arg2
        
        if (rax_6 == *arg2)
            rax_7 = (rcx_5 u>> 0x20).d - arg2[1]
        
        if (rax_7 s< 0)
            rbx = rax_4 + rcx_1
    while (i s> 0)
    
    i = *(rsi + 0x18)

if (rbx s< i)
    void* rax_10 = *(rsi + 0x10)
    void* rdx_4 = rsi
    int64_t rdi_1 = sx.q(rbx) << 4
    
    if (rax_10 != 0)
        rdx_4 = rax_10
    
    int64_t rcx_7 = *public: __cdecl std::_Callable_base<class <lambda_508dc996854572947a45292d62928d80>, 0>::_Callable_base<class <lambda_508dc996854572947a45292d62928d80>, 0><class <lambda_508dc996854572947a45292d62928d80> &>(class <lambda_508dc996854572947a45292d62928d80> &)(
        &arg_8, rdx_4 + rdi_1)
    int32_t rax_12 = *arg2
    int32_t rax_13 = rax_12 - rcx_7.d
    
    if (rax_12 == rcx_7.d)
        rax_13 = arg2[1] - (rcx_7 u>> 0x20).d
    
    if (rax_13 s>= 0 && rbx != 0xffffffff)
        void* rax_15 = *(rsi + 0x10)
        
        if (rax_15 != 0)
            rsi = rax_15
        
        return *(rsi + rdi_1 + 8)

return 0
