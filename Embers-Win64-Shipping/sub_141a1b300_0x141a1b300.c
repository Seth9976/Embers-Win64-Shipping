// 函数: sub_141a1b300
// 地址: 0x141a1b300
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* r8 = arg1[1]
int32_t* rcx = *r8

if (&rcx[1] u<= r8[1])
    arg2[2].d = *rcx
    int64_t* rax_2 = arg1[1]
    *rax_2 += 4
else if ((*(arg1 + 0x29) & 0x20) != 0)
    sub_140b54070(arg1, &arg2[2], arg3)
else
    (*(*arg1 + 0x150))(arg1, &arg2[2], 4)

int64_t* rcx_2 = arg1[1]
int32_t* r8_1 = *rcx_2

if (&r8_1[1] u<= rcx_2[1])
    *(arg2 + 0x14) = *r8_1
    int64_t* rax_6 = arg1[1]
    *rax_6 += 4
else if ((*(arg1 + 0x29) & 0x20) != 0)
    sub_140b54070(arg1, arg2 + 0x14, arg3)
else
    (*(*arg1 + 0x150))(arg1, arg2 + 0x14, 4)

int64_t* rcx_4 = arg1[1]
int64_t var_18 = 0
int32_t var_10 = 0
int32_t* rdx_2 = *rcx_4

if (&rdx_2[1] u<= rcx_4[1])
    *(arg2 + 0xc) = *rdx_2
    int64_t* rax_10 = arg1[1]
    *rax_10 += 4
else if ((*(arg1 + 0x29) & 0x20) != 0)
    sub_140b54070(arg1, arg2 + 0xc, arg3)
else
    (*(*arg1 + 0x150))(arg1, arg2 + 0xc, 4)

int64_t r10 = sx.q(*(arg2 + 0xc))
int32_t rax_12 = var_10

if (r10.d s> rax_12)
    var_10 = r10.d
    
    if (r10.d s> 0)
        sub_1405a4cf0(&var_18)
else if (r10.d s< rax_12)
    int32_t rsi_2 = rax_12 - r10.d
    
    if (rax_12 != r10.d)
        int32_t rcx_8 = rax_12 - rsi_2
        
        if (rcx_8 != r10.d)
            int64_t r9_1 = var_18
            memmove(r9_1 + (r10 << 2), r9_1 + (sx.q(rsi_2 + r10.d) << 2), (rcx_8 - r10.d) << 2)
            rax_12 = var_10
        
        var_10 = rax_12 - rsi_2
        sub_1405dac90(&var_18)

int32_t* result = (*(*arg1 + 0x150))(arg1, var_18, sx.q(*(arg2 + 0xc)) << 2)

if (*(arg2 + 0xc) s> 0)
    result = data_143f290a0
    
    if (*result != 0)
        void*** rax_16 = j_sub_140a82f30(0x48)
        void*** rbx_1 = rax_16
        
        if (rax_16 == 0)
            rbx_1 = nullptr
        else
            rax_16[1].d = 0xffffffff
            *(rax_16 + 0xc) = 4
            rax_16[2] = 0
            rax_16[3] = 0
            *rbx_1 = &data_143020c80
            __builtin_memset(&rbx_1[5], 0, 0x11)
            rbx_1[4] = &data_142dd66a0
            rbx_1[8].d = 0
        
        (*rbx_1)[0x13](rbx_1, &var_18)
        *arg2 = rbx_1
        result = sub_141997e80(rbx_1)

int64_t rcx_16 = var_18

if (rcx_16 == 0)
    return result

return sub_140a74f90(rcx_16)
