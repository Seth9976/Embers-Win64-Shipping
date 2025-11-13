// 函数: sub_140cb27d0
// 地址: 0x140cb27d0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_228
int64_t rax_1 = __security_cookie ^ &var_228
char rax_2 = sub_140b5b8a0(*(arg2 + 8), 5)
bool rdx = *(arg2 + 0xc) == 0
int64_t result

if ((rdx & rax_2) == 0)
    result = 0
else
    int64_t* rbx_1 = *(*arg3 + 8)
    int32_t var_1f8_1 = 0xffffffff
    void* const rsi_1 = (*(*rbx_1 + 0x18))(rbx_1, rdx)
    int64_t var_200 = 0
    int32_t var_1f4
    __builtin_memset(&var_1f4, 0, 0x14)
    int32_t i_1 = 0
    void var_1e0
    void** var_1d8
    int64_t* r9 = *(**SymBuffer::end(sub_140b4cb20(&var_1d8, rbx_1), &var_1e0) + 8)
    int64_t* rcx_5 = r9[1]
    int32_t* rdx_3 = *rcx_5
    
    if (&rdx_3[1] u> rcx_5[1])
        int32_t* rdx_4 = &i_1
        
        if ((*(r9 + 0x29) & 0x20) != 0)
            sub_140b54070(r9, rdx_4, arg5)
        else
            (*(*r9 + 0x150))(r9, rdx_4, 4)
    else
        i_1 = *rdx_3
        int64_t* rax_11 = r9[1]
        *rax_11 += 4
    
    sub_140b4cbb0(&var_1d8)
    int32_t i = i_1
    int64_t r14
    r14.b = i s> 0
    bool cond:2_1 = i s>= 0
    int64_t var_1f0
    int64_t var_1e8_1
    
    while (i != 0)
        int64_t* rbx_3
        
        if (cond:2_1)
            rbx_3 = (sx.q(i - 1) << 7) + *(rsi_1 + 0x18)
        else
            rbx_3 = sx.q(0xffffffff - i) * 0x38 + *(rsi_1 + 8)
        
        int64_t rdi_1 = sx.q(var_1e8_1.d)
        int32_t rax_15 = (rdi_1 + 1).d
        var_1e8_1.d = rax_15
        
        if (rax_15 s> var_1e8_1:4.d)
            sub_1405a4d70(&var_1f0)
        
        *(var_1f0 + (rdi_1 << 3)) = *rbx_3
        i = rbx_3[1].d
        i_1 = i
        cond:2_1 = i s>= 0
    
    if (r14.b != 0)
        int64_t rdi_2 = sx.q(var_1e8_1.d)
        int32_t rax_17 = (rdi_2 + 1).d
        int64_t rbx_7 = *(*(rsi_1 + 0xa0) + 0x18)
        var_1e8_1.d = rax_17
        
        if (rax_17 s> var_1e8_1:4.d)
            sub_1405a4d70(&var_1f0)
        
        *(var_1f0 + (rdi_2 << 3)) = rbx_7
    
    if (var_1e8_1.d != 0)
        if (rsi_1 == 0 || *(rsi_1 + 0x98) != 1)
            rsi_1 = nullptr
        
        if (sub_140cd04d0(&var_200, nullptr, 0) == 0 && rsi_1 != 0)
            sub_140cd02e0(&var_200)
    
    int64_t* rdx_9 = sx.q(*(arg1 + 0x4c)) + sx.q(*(arg2 + 0x40) * *(arg1 + 0x3c)) + arg4
    *rdx_9 = var_200
    rdx_9[1] = var_1f8_1.q
    
    if (&rdx_9[2] != &var_1f0)
        int64_t rdi_3 = sx.q(var_1e8_1.d)
        int64_t rsi_2 = var_1f0
        int32_t r8 = *(rdx_9 + 0x1c)
        rdx_9[3].d = rdi_3.d
        
        if (rdi_3.d != 0 || r8 != 0)
            sub_1405c4a00(&rdx_9[2], rdi_3.d, r8)
            memcpy(rdx_9[2], rsi_2, (rdi_3 << 3).d)
        else
            *(rdx_9 + 0x1c) = rdi_3.d
    
    int64_t rcx_16 = var_1f0
    
    if (rcx_16 != 0)
        sub_140a74f90(rcx_16)
    
    result = 2

__security_check_cookie(rax_1 ^ &var_228)
return result
