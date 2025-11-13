// 函数: sub_1415c5980
// 地址: 0x1415c5980
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t rsi = 0
int32_t i_1 = 0
int32_t r12 = 0
int64_t i_3 = 3
int64_t var_58 = 0
int32_t var_4c = 0
int32_t* rbx_2 = sx.q(arg2) * 0x38 + 0x28 + *arg1
int64_t result
int64_t i

do
    int32_t rax_1 = rbx_2[-3]
    int64_t i_2 = sx.q(i_1)
    int32_t var_64_1 = *rbx_2
    i_1 = (i_2 + 1).d
    
    if (i_1 s> r12)
        sub_1405a4d70(&var_58)
        r12 = var_4c
        rsi = var_58
    
    result = rax_1.q
    rbx_2 = &rbx_2[1]
    *(rsi + (i_2 << 3)) = result
    i = i_3
    i_3 -= 1
while (i != 1)

while (i_1 != 0)
    int32_t i_4 = i_1 - 1
    int32_t rdi = i_1 - i_4
    int64_t rbx_4 = *(rsi + (sx.q(i_4) << 3))
    int32_t rax_3 = rbx_4.d
    uint32_t rcx_2 = (rbx_4 u>> 0x20).d
    
    if (rdi != 1)
        memmove(rsi + (sx.q(i_4) << 3), rsi + (sx.q(i_4 + 1) << 3), (rdi - 1) << 3)
        rcx_2 = (rbx_4 u>> 0x20).d
        rax_3 = rbx_4.d
    
    i_1 = i_4
    result = arg1
    void* r14_4 = sx.q(rax_3) * 0x38 + *result
    
    if (*(r14_4 + 0x34) == 0)
        if (*(r14_4 + 0x10) f* arg3[1] + *arg3 f* *(r14_4 + 0xc)
                + *(r14_4 + 0x14) f* arg3[2] f- *(r14_4 + 0x18) >= 0f)
            *(r14_4 + 0x34) = 1
            int32_t rbx_5 = i_4 + 1
            int64_t rcx_8 = sx.q((rcx_2 + 1) s% 3)
            int32_t rax_15 = *(r14_4 + (rcx_8 << 2) + 0x1c)
            int32_t var_64_2 = *(r14_4 + (rcx_8 << 2) + 0x28)
            
            if (rbx_5 s> r12)
                sub_1405a4d70(&var_58)
                r12 = var_4c
                rsi = var_58
            
            *(rsi + (sx.q(i_4) << 3)) = rax_15.q
            int64_t rcx_11 = sx.q((rcx_2 + 2) s% 3)
            i_1 = rbx_5 + 1
            int32_t rax_18 = *(r14_4 + (rcx_11 << 2) + 0x1c)
            int32_t var_5c_1 = *(r14_4 + (rcx_11 << 2) + 0x28)
            
            if (i_1 s> r12)
                sub_1405a4d70(&var_58)
                r12 = var_4c
                rsi = var_58
            
            result = rax_18.q
            *(rsi + (sx.q(rbx_5) << 3)) = result
        else
            int64_t r14_5 = sx.q(arg4[1].d)
            int32_t rax_8 = (r14_5 + 1).d
            arg4[1].d = rax_8
            
            if (rax_8 s> *(arg4 + 0xc))
                sub_1405a4d70(arg4)
            
            result = *arg4
            *(result + (r14_5 << 3)) = rbx_4

if (rsi == 0)
    return result

return sub_140a74f90(rsi)
