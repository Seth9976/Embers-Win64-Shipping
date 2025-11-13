// 函数: sub_142611af0
// 地址: 0x142611af0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

*arg1 = arg2
uint64_t rbp = zx.q(arg3)
arg1[1] = arg4

if (arg4 != 0)
    (*(*arg4 + 0x10))(arg4)

if (rbp.d s> 0)
    int64_t* rbx_1 = arg1[0xd]
    int64_t* rax_2
    
    if (rbx_1 == 0)
    label_142611ba7:
        int32_t temp0_1
        int32_t temp1_1
        temp0_1:temp1_1 = sx.q(rbp.d)
        int32_t rcx_9 =
            ((((temp0_1 & 3) + temp1_1) s>> 2) - 1) | ((((temp0_1 & 3) + temp1_1) s>> 2) - 1) u>> 1
        int32_t rcx_10 = rcx_9 | rcx_9 u>> 2
        int32_t rcx_11 = rcx_10 | rcx_10 u>> 4
        int32_t rcx_12 = rcx_11 | rcx_11 u>> 8
        rax_2 = sub_142602300(data_143b50290(0x28, 0), rbp.d, (rcx_12 u>> 0x10 | rcx_12) + 1)
        arg1[0xd] = rax_2
        
        if (rax_2 == 0)
            return 0x80000004
    else
        if (rbx_1[3].d s< rbp.d)
            int64_t rcx_2 = *rbx_1
            
            if (rcx_2 != 0)
                data_143b50298(rcx_2)
            
            int64_t rcx_3 = rbx_1[2]
            
            if (rcx_3 != 0)
                data_143b50298(rcx_3)
            
            int64_t rcx_4 = rbx_1[1]
            
            if (rcx_4 != 0)
                data_143b50298(rcx_4)
            
            int64_t rcx_5 = arg1[0xd]
            
            if (rcx_5 != 0)
                data_143b50298(rcx_5)
            
            arg1[0xd] = 0
            goto label_142611ba7
        
        memset(rbx_1[1], 0xff, sx.q(*(rbx_1 + 0x1c)) * 2)
        *(rbx_1 + 0x24) = 0
        rax_2 = arg1[0xd]
    
    rax_2[4].d = rbp.d
    void* rbx_2 = arg1[0xc]
    
    if (rbx_2 != 0)
        memset(*(rbx_2 + 8), 0xff, sx.q(*(rbx_2 + 0x1c)) * 2)
        *(rbx_2 + 0x24) = 0
    else
        int64_t* rax_15 = sub_142602300(data_143b50290(zx.q((rbx_2 + 0x28).d), 0), 
            (rbx_2 + 0x40).d, (rbx_2 + 0x20).d)
        arg1[0xc] = rax_15
        
        if (rax_15 == 0)
            return 0x80000004
    
    int64_t* rcx_18 = arg1[0xe]
    
    if (rcx_18 == 0)
    label_142611c90:
        int64_t* rax_18 = data_143b50290(0x10, 0)
        *rax_18 = 0
        rax_18[1].d = rbp.d
        *(rax_18 + 0xc) = 0
        *rax_18 = data_143b50290(zx.q(((rbp << 3) + 8).d), 0)
        arg1[0xe] = rax_18
    else
        if (rcx_18[1].d s< rbp.d)
            int64_t rax_17 = *rcx_18
            
            if (rax_17 != 0)
                data_143b50298(rax_17)
                rcx_18 = arg1[0xe]
            
            if (rcx_18 != 0)
                data_143b50298(rcx_18)
            
            arg1[0xe] = 0
            goto label_142611c90
        
        *(rcx_18 + 0xc) = 0

return 0x40000000
