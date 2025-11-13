// 函数: sub_141a58090
// 地址: 0x141a58090
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

while (arg1[1].d != 0xffffffff || *(arg1 + 0x14) == 0)
    int64_t r8_1 = arg1[1].q
    int128_t* rsi_1 = *(arg1 + 0x18)
    int128_t* rdx_3
    
    if (r8_1.d == 0xffffffff)
        rdx_3 = rsi_1
    else
        rdx_3 =
            ((sx.q(*(rsi_1[2].q + sx.q(r8_1.d) * 0xc)) + sx.q((r8_1 u>> 0x20).d)) << 5) + rsi_1[3].q
    
    int128_t zmm0 = *arg1
    int128_t zmm1 = *rdx_3
    int64_t rax_4
    int64_t r8_3
    
    if (arg2 == 0)
        r8_3 = zmm0.q
        rax_4 = zmm1.q
    else
        r8_3 = zmm0:8.q
        rax_4 = zmm1:8.q
    
    if (rax_4.b == r8_3.b && (rax_4.b == 2 || (rax_4 u>> 0x20).d == (r8_3 u>> 0x20).d))
        arg1[1].q = rdx_3[1].q
        continue
    
    char rax_6 = *arg1
    int32_t arg_8
    uint32_t arg_c
    uint64_t rbx_1
    
    if (rax_6 == 2)
    label_141a58179:
        rbx_1 = zmm0.q
        
        if (arg2 != 0)
            rbx_1 = zmm0:8.q
        
        if (rbx_1.b == 0)
            arg_8.b = 1
            arg_c = (rbx_1 u>> 0x20).d
            rbx_1 = arg_8.q
        else if (rbx_1.b == 1)
            arg_8.b = 0
            arg_c = (rbx_1 u>> 0x20).d
            rbx_1 = arg_8.q
    else
        char rcx_3 = *(arg1 + 8)
        
        if (rcx_3 == 2)
            goto label_141a58179
        
        int32_t rdx_4 = *(arg1 + 4)
        int32_t temp0_1 = *(arg1 + 0xc)
        
        if (rdx_4 s<= temp0_1 && (rdx_4 != temp0_1 || (rax_6 != 0 && rcx_3 != 0)))
            goto label_141a58179
        
        arg_c = 0
        arg_8.b = 2
        rbx_1 = arg_8.q
    
    sub_141a4b4f0(arg1, &arg_8, arg1[1].q, rbx_1, arg2)
    int64_t rax_7 = arg_8.q
    int128_t zmm0_1
    
    while (true)
        int128_t* r8_8
        
        if (rax_7.d != 0xffffffff)
            r8_8 = ((sx.q(*(rsi_1[2].q + sx.q(rax_7.d) * 0xc)) + sx.q((rax_7 u>> 0x20).d)) << 5)
                + rsi_1[3].q
        else
            if ((rax_7 u>> 0x20).d != 0)
                break
            
            if (rax_7.d == rax_7.d)
                r8_8 = rsi_1
            else
                r8_8 = ((sx.q(*(rsi_1[2].q + sx.q(rax_7.d) * 0xc)) + sx.q((rax_7 u>> 0x20).d)) << 5)
                    + rsi_1[3].q
        
        zmm0_1 = *r8_8
        int64_t rcx_12 = zmm0_1.q
        
        if (arg2 == 0)
            rcx_12 = zmm0_1:8.q
        
        if (rcx_12.b != rbx_1.b)
            break
        
        if (rcx_12.b != 2 && (rcx_12 u>> 0x20).d != (rbx_1 u>> 0x20).d)
            break
        
        arg1[1].q = rax_7
        rax_7 = *sub_141a4b4f0(arg1, &arg_8, rax_7, rbx_1, arg2)
    
    int64_t r9_3 = arg1[1].q
    int128_t* r8_13
    
    if (r9_3.d == 0xffffffff)
        r8_13 = rsi_1
    else
        r8_13 =
            ((sx.q(*(rsi_1[2].q + sx.q(r9_3.d) * 0xc)) + sx.q((r9_3 u>> 0x20).d)) << 5) + rsi_1[3].q
    
    zmm0_1 = *r8_13
    uint64_t rcx_18 = zmm0_1.q
    
    if (arg2 != 0)
        rcx_18 = zmm0_1:8.q
    
    if (rax_7.d != 0xffffffff)
    label_141a582ad:
        rsi_1 = ((sx.q(*(rsi_1[2].q + sx.q(rax_7.d) * 0xc)) + sx.q((rax_7 u>> 0x20).d)) << 5)
            + rsi_1[3].q
    label_141a582cd:
        zmm0_1 = *rsi_1
        
        if (arg2 == 0)
            int64_t rax_12 = zmm0_1:8.q
            
            if (rax_12.b != rbx_1.b)
            label_141a58318:
                rcx_18 = zmm0_1:8.q
                
                if (arg2 != 0)
                    rcx_18 = zmm0_1.q
                
                if (rcx_18.b == 0)
                    arg_8.b = 1
                    arg_c = (rcx_18 u>> 0x20).d
                    rcx_18 = arg_8.q
                else if (rcx_18.b == 1)
                    arg_8.b = 0
                    arg_c = (rcx_18 u>> 0x20).d
                    rcx_18 = arg_8.q
            else if (rax_12.b != 2 && (rax_12 u>> 0x20).d != (rbx_1 u>> 0x20).d)
                goto label_141a58318
        else
            int64_t rax_10 = zmm0_1.q
            
            if (rax_10.b != rbx_1.b)
                goto label_141a58318
            
            if (rax_10.b != 2 && (rax_10 u>> 0x20).d != (rbx_1 u>> 0x20).d)
                goto label_141a58318
    else if ((rax_7 u>> 0x20).d == 0)
        if (rax_7.d == rax_7.d)
            goto label_141a582cd
        
        goto label_141a582ad
    
    uint64_t rax = rcx_18
    
    if (arg2 != 0)
        rax = rbx_1
    
    if (arg2 != 0)
        rbx_1 = rcx_18
    
    int128_t var_28_4
    var_28_4:8.q = rbx_1
    var_28_4.q = rax
    *arg1 = var_28_4
    break
