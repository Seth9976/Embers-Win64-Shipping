// 函数: sub_140bbf860
// 地址: 0x140bbf860
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

*arg1 = *arg2
EnterCriticalSection(&data_143e1a8a0)
bool cond:0 = data_1439a98b8 == data_1439a98e4
int64_t rbx = *arg1
int64_t arg_8 = rbx
int64_t rcx_3

if (cond:0)
label_140bbf90a:
    rcx_3 = 0
else
    int32_t rax_3 = sub_140b5ead0(rbx.d) + arg_8:4.d
    void* rcx_1 = data_1439a98f0
    void* rax_5 = &data_1439a98e8
    
    if (rcx_1 != 0)
        rax_5 = rcx_1
    
    int32_t rax_6 = *(rax_5 + (((sx.q(data_1439a98f8) - 1) & sx.q(rax_3)) << 2))
    
    if (rax_6 == 0xffffffff)
    label_140bbf90a_1:
        rcx_3 = 0
    else
        int64_t r8_1 = data_1439a98b0
        int64_t rdx_4
        
        while (true)
            rdx_4 = sx.q(rax_6) * 0x18
            
            if (*(rdx_4 + r8_1) == rbx)
                break
            
            rax_6 = *(rdx_4 + r8_1 + 0x10)
            
            if (rax_6 == 0xffffffff)
                goto label_140bbf90a_2
        
        rcx_3 = rdx_4 + r8_1
        
        if (rax_6 == 0xffffffff)
        label_140bbf90a_2:
            rcx_3 = 0

int64_t rax_7 = rcx_3 + 8

if (rcx_3 == 0)
    rax_7 = 0

if (rax_7 == 0)
    int64_t* rax_8 = j_sub_140a82f30(zx.q((rax_7 + 0x10).d))
    
    if (rax_8 == 0)
        rax_8 = nullptr
    else
        *rax_8 = 0
        rax_8[1] = 0
    
    int64_t* arg_10 = rax_8
    int64_t* var_18 = arg1
    int64_t** var_10_1 = &arg_10
    sub_140bbe950(&data_1439a98b0, &arg_8, &var_18, nullptr)

LeaveCriticalSection(&data_143e1a8a0)
return arg1
