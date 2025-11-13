// 函数: sub_141a35680
// 地址: 0x141a35680
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t rax = arg3[6]
uint64_t var_78
int64_t var_50
int32_t var_44

if (arg2[3].d s> 0)
    int32_t rdi_1 = 0
    var_50 = 0
    uint64_t rsi_2
    
    if (rax s> 0)
        rsi_2 = sx.q(arg3[6])
        int64_t r15_2 = 0
        int32_t rax_8 = arg3[2]
        int64_t r12_2 = *(arg3 + 0x10)
        uint64_t var_60_3 = *arg3
        int32_t var_48_4 = rsi_2.d
        int32_t r12_3
        
        if (rsi_2.d != 0)
            sub_1405c4bc0(&var_50, rsi_2.d, 0)
            r15_2 = var_50
            memcpy(r15_2, r12_2, (rsi_2 * 0x14).d)
            r12_3 = var_44
            rsi_2 = zx.q(var_48_4)
        else
            r12_3 = 0
            var_44 = 0
        
        int64_t rax_10 = *(arg2 + 4)
        int32_t arg_10
        arg_10.q = rax_10
        
        if (rax_10.d != 0 || zx.o(0).d.d f!= 0.q:4.d || not(1f f== *arg2))
            int32_t rax_11 = arg2[1].d
            int64_t r13_1 = sx.q(rsi_2.d)
            var_78 = *arg2
            int32_t var_70_2 = rax_11
            int32_t var_6c_2 = 0
            rsi_2 = zx.q((r13_1 + 1).d)
            var_48_4 = rsi_2.d
            
            if (rsi_2.d s> r12_3)
                sub_1405c4d20(&var_50)
                r12_3 = var_44
                rsi_2 = zx.q(var_48_4)
                r15_2 = var_50
            
            int64_t rcx_14 = r13_1 * 5
            *(r15_2 + (rcx_14 << 2)) = var_78.o
            *(r15_2 + (rcx_14 << 2) + 0x10) = 0
        
        int64_t rdi_2 = sx.q(arg2[3].d)
        
        if (rdi_2.d != 0)
            int32_t rdx_9 = (rsi_2 + rdi_2).d
            
            if (rdx_9 s> r12_3)
                sub_1405c55e0(&var_50, rdx_9)
                r12_3 = var_44
                rsi_2 = zx.q(var_48_4)
                r15_2 = var_50
            
            memcpy(r15_2 + sx.q(rsi_2.d) * 0x14, arg2[2], (rdi_2 * 0x14).d)
            rsi_2 = zx.q(rsi_2.d + rdi_2.d)
        
        *arg1 = var_60_3
        arg1[1].d = rax_8
        arg1[2] = r15_2
        *(arg1 + 0x1c) = r12_3
    else
        int32_t var_44_1 = 0
        rsi_2 = 0
        float* rax_6 = sub_141a359a0(&var_78, arg2, arg3)
        int64_t zmm0_2 = *rax_6
        int32_t rcx_7 = rax_6[2]
        int64_t r14_1 = 0
        
        if (&var_50 == &arg2[2])
            goto label_141a35828
        
        rsi_2 = sx.q(arg2[3].d)
        int64_t r14_2 = arg2[2]
        int32_t var_48_3 = rsi_2.d
        
        if (rsi_2.d != 0)
            sub_1405c4bc0(&var_50, rsi_2.d, 0)
            r14_1 = var_50
            memcpy(r14_1, r14_2, (rsi_2 * 0x14).d)
            rdi_1 = var_44_1
            rsi_2 = zx.q(var_48_3)
        label_141a35828:
            *arg1 = zmm0_2
            arg1[1].d = rcx_7
            arg1[2] = r14_1
            *(arg1 + 0x1c) = rdi_1
        else
            *arg1 = zmm0_2
            arg1[1].d = rcx_7
            arg1[2] = 0
            *(arg1 + 0x1c) = 0
    
    arg1[3].d = rsi_2.d
else if (rax s> 0)
    int64_t rsi_1 = sx.q(arg3[6])
    int64_t r15_1 = 0
    int32_t rax_2 = arg3[2]
    int64_t r12_1 = *(arg3 + 0x10)
    uint64_t var_60_1 = *arg3
    var_50 = 0
    int32_t var_48_1 = rsi_1.d
    int32_t rdx
    
    if (rsi_1.d != 0)
        sub_1405c4bc0(&var_50, rsi_1.d, 0)
        r15_1 = var_50
        memcpy(r15_1, r12_1, (rsi_1 * 0x14).d)
        rdx = var_44
        rsi_1 = zx.q(var_48_1)
    else
        rdx = 0
        var_44 = 0
    
    int32_t r8_2 = (rsi_1 + 1).d
    int32_t rax_3 = arg2[1].d
    var_78 = *arg2
    int32_t var_70_1 = rax_3
    int32_t var_6c_1 = 0
    
    if (r8_2 s> rdx)
        sub_1405c4d20(&var_50)
        rdx = var_44
        r15_1 = var_50
    
    int64_t rcx_5 = sx.q(rsi_1.d) * 5
    *(r15_1 + (rcx_5 << 2)) = var_78.o
    *(r15_1 + (rcx_5 << 2) + 0x10) = 0
    *arg1 = var_60_1
    arg1[1].d = rax_2
    arg1[2] = r15_1
    arg1[3].d = r8_2
    *(arg1 + 0x1c) = rdx
else
    float* rax_1 = sub_141a359a0(&var_78, arg2, arg3)
    int32_t rcx_1 = rax_1[2]
    *arg1 = *rax_1
    arg1[1].d = rcx_1
    arg1[2] = 0
    arg1[3] = 0
return arg1
