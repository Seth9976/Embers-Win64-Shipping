// 函数: sub_1405d98f0
// 地址: 0x1405d98f0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (*(arg1 + 0xc4) s<= 0 || *(arg1 + 0xc8) s<= 0)
    arg2.b = 4
    return sub_1405daf00(arg1, arg2.b) __tailcall

bool z

if (0 == *(arg1 + 0xfb))
    *(arg1 + 0xfb) = 0
    z = true
else
    int64_t rax
    rax.b = *(arg1 + 0xfb)
    z = false

int32_t i_1 = 1

if (z)
    i_1 = arg2

*(arg1 + 0x6c) = i_1
int64_t r14 = sx.q(*(arg1 + 0x60))
int32_t rax_1 = i_1 + r14.d
*(arg1 + 0x60) = rax_1

if (rax_1 s> *(arg1 + 0x64))
    sub_1405c4fe0(arg1 + 0x58)

int64_t* rcx_3 = (r14 << 6) + *(arg1 + 0x58)

if (i_1 != 0)
    void* rax_2 = rcx_3 + 0xc
    int32_t i
    
    do
        *rcx_3 = 0
        rcx_3 = &rcx_3[8]
        *(rax_2 - 4) = 0
        *(rax_2 + 4) = 0
        *(rax_2 + 0xc) = 0
        *(rax_2 + 0x10) = 0xea60
        *(rax_2 + 0x14) = 1
        *(rax_2 + 0x20) = 0
        *(rax_2 + 0x24) = 0
        *(rax_2 + 0x2c) = 0
        rax_2 += 0x40
        i = i_1
        i_1 -= 1
    while (i != 1)

int64_t rax_3 = 0
bool z_1

if (0 == *(arg1 + 0xfb))
    *(arg1 + 0xfb) = 0
    z_1 = true
else
    rax_3.b = *(arg1 + 0xfb)
    z_1 = false

if (not(z_1))
    char temp0_2 = *(arg1 + 0xfa)
    *(arg1 + 0xfa) = 1
    int64_t rsi
    rsi.b = temp0_2
    return rax_3

void* arg_20 = arg1
void** rcx_4

if (sub_140a80f40() == 0)
    uint32_t rax_6
    
    if (data_143f138f4 == 0 && data_143de5480 != 0)
        rax_6.b = GetCurrentThreadId() == data_143de5470
    
    if (data_143f138f4 != 0 || (data_143de5480 != 0 && rax_6.b == 0))
        void var_40
        void** rax_7 = sub_1405d8e70(&var_40, nullptr, 0xff)
        *(*rax_7 + 0x10) = arg1
        void* rcx_7 = *rax_7
        int32_t r8_1 = rax_7[2].d
        int64_t* rdx_3 = rax_7[1]
        int64_t* rbx_1 = *(rcx_7 + 0x20)
        int64_t* arg_18 = rbx_1
        int32_t* rdi = &rbx_1[9]
        
        if (rbx_1 != 0)
            *rdi += 1
            rbx_1 = arg_18
        
        int32_t rax_5 = sub_1405a5630(rcx_7, rdx_3, r8_1, 1)
        
        if (rbx_1 != 0)
            rax_5 = *rdi
            *rdi -= 1
            
            if (rax_5 == 1)
                return sub_140a2f6e0(arg_18)
        
        return rax_5
    
    void* var_48 = arg1
    rcx_4 = &var_48
else
    rcx_4 = &arg_20

return sub_1405d59a0(rcx_4)
