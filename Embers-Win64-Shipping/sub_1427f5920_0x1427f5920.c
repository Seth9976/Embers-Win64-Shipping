// 函数: sub_1427f5920
// 地址: 0x1427f5920
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* arg_10 = arg5
int64_t* rcx = *(arg1 + 0x100)
char rax_2

if (rcx != 0)
    rax_2 = (*(*rcx + 0x20))(rcx)

void* var_38
char arg_18
int32_t rsi
int64_t r15
void* arg_8

if (rcx == 0 || rax_2 == 0)
    arg_8 = arg2
    r15.b = 0
    void** rax_23 = sub_1427cf220(arg1 + 0xc0, &arg_8, &arg_18)
    
    if (arg_18 == 0 && rax_23 != 0)
        *rax_23 = arg2
        rax_23[1].d = 0
    
    rsi = rax_23[1].d
else
    int64_t* rcx_1 = *(arg1 + 0x100)
    r15.b = 1
    void* rax_4 = (*(*rcx_1 + 0x68))(rcx_1, arg2)
    arg5 = rax_4
    
    if (*(arg1 + 0x3c) == 0)
    label_1427f5a1f:
        rsi = *(arg1 + 0x48)
        arg_8 = arg5
        int64_t* rax_24 = sub_1427cf220(arg1 + 8, &arg_8, &arg_18)
        
        if (arg_18 == 0 && rax_24 != 0)
            *rax_24 = arg5
            rax_24[1].d = rsi
        
        uint64_t rdx_14 = zx.q(*(arg1 + 0x48))
        int32_t var_30
        var_30.w = *(arg2 + 8)
        int32_t rax_27 = *(arg1 + 0x4c) & 0x7fffffff
        var_38 = arg5
        
        if (rax_27 u> rdx_14.d)
            uint64_t rax_29 = rdx_14 << 4
            
            if (rax_29 != neg.q(*(arg1 + 0x40)))
                *(rax_29 + *(arg1 + 0x40)) = var_38.o
            
            *(arg1 + 0x48) += 1
        else
            sub_1427f5ce0(arg1 + 0x40, &var_38)
    else
        void* rdx_4 = not.q(rax_4 << 0x20) + rax_4
        int64_t rdx_5 = rdx_4 ^ rdx_4 u>> 0x16
        int64_t rdx_6 = rdx_5 + not.q(rdx_5 << 0xd)
        int64_t rcx_4 = (rdx_6 u>> 8 ^ rdx_6) * 9
        int64_t rcx_5 = rcx_4 ^ rcx_4 u>> 0xf
        int64_t rcx_6 = rcx_5 + not.q(rcx_5 << 0x1b)
        int32_t rcx_9 = *(*(arg1 + 0x20)
            + (((zx.q((rcx_6 u>> 0x1f).d) ^ zx.q(rcx_6.d)) & zx.q(*(arg1 + 0x2c) - 1)) << 2))
        
        if (rcx_9 == 0xffffffff)
            goto label_1427f5a1f
        
        int64_t r8 = *(arg1 + 0x10)
        
        while (*(r8 + zx.q(rcx_9) * 0x10) != arg5)
            rcx_9 = *(*(arg1 + 0x18) + (zx.q(rcx_9) << 2))
            
            if (rcx_9 == 0xffffffff)
                goto label_1427f5a1f
        
        if (rcx_9 == 0xffffffff)
            goto label_1427f5a1f
        
        int64_t rax_22 = zx.q(rcx_9) << 4
        
        if (rax_22 == neg.q(r8))
            goto label_1427f5a1f
        
        rsi = (rax_22 + r8)[1].d
var_38 = arg4
int32_t var_30_1 = arg3
void* const rax_31 = 0x88

if (arg3 s< 0)
    rax_31 = 0x50

char temp0 = r15.b
r15.b = neg.b(r15.b)
int64_t* result = sub_1427f5be0(rax_31 + arg1, &var_38, &arg_18)

if (arg_18 == 0 && result != 0)
    *result = arg4
    result[1].d = arg3
    result[2].d = 0xffffffff

result[2].d = (sbb.d(arg5.d, arg5.d, temp0 != 0) & 0x80000000) | rsi
return result
