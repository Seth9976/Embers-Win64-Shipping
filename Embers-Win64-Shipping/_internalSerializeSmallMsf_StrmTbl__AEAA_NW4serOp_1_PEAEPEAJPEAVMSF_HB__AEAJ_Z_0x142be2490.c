// 函数: ?internalSerializeSmallMsf@StrmTbl@@AEAA_NW4serOp@1@PEAEPEAJPEAVMSF_HB@@AEAJ@Z
// 地址: 0x142be2490
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

uint64_t r13
uint64_t var_28 = r13
void* rdi = arg4
void* rbx = arg3
int32_t rbp = arg2
uint32_t rdx_1
uint32_t r8_1
uint32_t r9
int32_t result_1
int32_t result

if (*(arg3 + 0x78) != 0)
    uint32_t rcx_2 = *(arg4 + 0x90)
    uint32_t rsi_3 = rcx_2
    rdx_1 = *(arg3 + 0x90)
    r13 = zx.q(*(rdi + 0x94))
    
    if (rdx_1 s< rcx_2)
        rsi_3 = rdx_1
    
    r8_1 = *(arg3 + 0x94)
    r9 = *(arg3 + 0x6c) + rdx_1
    uint32_t r12_2 = *(rdi + 0x6c) + rcx_2
    
    if (r9 s> r12_2)
        r12_2 = r9
    
    int32_t rcx_4 = r8_1 - *(rbx + 0x68)
    int32_t rax_5 = r13.d - *(rdi + 0x68)
    
    if (rcx_4 s< rax_5)
        rax_5 = rcx_4
    
    if (r8_1 s> r13.d)
        r13 = zx.q(r8_1)
    
    if (rsi_3 != rdx_1 || r12_2 != r9 || rax_5 != rcx_4 || r13.d != r8_1)
        int32_t rcx_6 = r13.d - rax_5
        uint64_t r12_3 = zx.q(r12_2 - rsi_3)
        uint32_t r14_1 = (r12_3 << 2).d
        int64_t rax_6 = sub_142b99860(*(arg1 + 0x98), r14_1 * rcx_6, &result_1)
        int64_t rdx_4 = rax_6
        result = result_1
        
        if (result != 0)
            return result
        
        int64_t rbp_1 = *(rbx + 0x78)
        int32_t i = 0
        int64_t rsi_5 =
            sx.q((*(rbx + 0x90) - rsi_3) << 2) + rdx_4 + sx.q((r13.d - *(rbx + 0x94)) * r14_1)
        
        if (*(rbx + 0x68) u> 0)
            uint32_t rax_14 = (r12_3 << 2).d
            uint32_t var_48 = rax_14
            
            do
                memcpy(rsi_5, rbp_1, *(rbx + 0x6c) << 2)
                rsi_5 += zx.q(rax_14)
                rbp_1 += sx.q(*(rbx + 0x70))
                i += 1
            while (i u< *(rbx + 0x68))
            
            rdi = arg4
            rdx_4 = rax_6
        
        rdx_1, r8_1, r9 = sub_142b99180(rbx, rdx_4)
        rbp = arg2
        *(rbx + 0x90) = rsi_3
        *(rbx + 0x68) = rcx_6
        *(rbx + 0x70) = (r12_3 << 2).d
        void* rax_19 = *(rbx + 0xf0)
        *(rbx + 0x94) = r13.d
        *(rbx + 0x6c) = r12_3.d
        *(rax_19 + 8) |= 1
        __builtin_strncpy(rbx + 0x60, "stib", 4)
else
    *(arg3 + 0x90) = *(arg4 + 0x90)
    *(arg3 + 0x94) = *(arg4 + 0x94)
    *(arg3 + 0x6c) = *(arg4 + 0x6c)
    int32_t rax_3 = *(arg4 + 0x68)
    int32_t rsi_1 = *(arg3 + 0x6c) << 2
    *(arg3 + 0x70) = rsi_1
    int32_t rsi_2 = rsi_1 * rax_3
    *(arg3 + 0x80) = 0x100
    *(arg3 + 0x68) = rax_3
    *(arg3 + 0x82) = 7
    result = sub_142b98ac0(rbx, rsi_2)
    result_1 = result
    
    if (result != 0)
        return result
    
    rdx_1, r8_1, r9 = memset(*(rbx + 0x78), 0, zx.q(rsi_2))

if (rbp != 0xffff)
    int64_t rax_21 = *(arg1 + 0x3a0)
    uint64_t rcx_12 = zx.q(rbp)
    r13 = zx.q(*(rax_21 + (rcx_12 << 2)))
    rdx_1 = zx.d(*(rax_21 + (rcx_12 << 2) + 1))
    r8_1 = zx.d(*(rax_21 + (rcx_12 << 2) + 2))
    r9 = zx.d(*(rax_21 + (rcx_12 << 2) + 3))
else if (*(arg1 + 0x3a8) == 0)
    int64_t rcx_11 = *(arg1 + 0x380)
    
    if (rcx_11 == 0 || (*(rcx_11 + (zx.q(*(arg1 + 0x398)) << 1)) & 2) == 0)
        r13.b = 0
        rdx_1.b = 0
        r8_1.b = 0
        r9.b = 0xff
    else
        r13.b = 0xff
        rdx_1 = 0xff
        r8_1 = 0xff
        r9 = 0xff
else
    r13 = zx.q(*(arg1 + 0x3a9))
    rdx_1 = zx.d(*(arg1 + 0x3aa))
    r8_1 = zx.d(*(arg1 + 0x3ab))
    r9 = zx.d(*(arg1 + 0x3ac))

int32_t i_1 = 0
int64_t r14_2 = *(rdi + 0x78)
char var_56_1 = r9.b
char var_57_1 = r8_1.b
char var_58_1 = rdx_1.b
int32_t i_2 = 0
int64_t rsi_8 = sx.q((*(rbx + 0x94) - *(rdi + 0x94)) * *(rbx + 0x70))
    + sx.q((*(rdi + 0x90) - *(rbx + 0x90)) << 2) + *(rbx + 0x78)

if (*(rdi + 0x68) u> 0)
    int32_t j = *(rdi + 0x6c)
    
    do
        uint64_t r12_4 = 0
        
        if (j != 0)
            int32_t r15_1 = 2
            
            do
                int32_t temp0_1
                int32_t temp1_1
                temp0_1:temp1_1 = mulu.dp.d(0x80808081, zx.d(*(r12_4 + r14_2)) * zx.d(r9.b))
                uint64_t rax_31 = zx.q(r15_1 - 2)
                uint32_t r11_2 = temp0_1 u>> 7
                uint64_t rax_36 = zx.q(r15_1 - 1)
                *(zx.q(rax_31.d) + rsi_8) = (zx.d(*(rax_31 + rsi_8)) * (0xff - r11_2) s/ 0xff).b
                    + (zx.d(r13.b) * r11_2 s/ 0xff).b
                *(zx.q(rax_36.d) + rsi_8) = (zx.d(*(rax_36 + rsi_8)) * (0xff - r11_2) s/ 0xff).b
                    + (zx.d(rdx_1.b) * r11_2 s/ 0xff).b
                char* r9_5 = zx.q(r15_1) + rsi_8
                *r9_5 = (zx.d(*r9_5) * (0xff - r11_2) s/ 0xff).b + (zx.d(r8_1.b) * r11_2 s/ 0xff).b
                char* r8_15 = zx.q(r15_1 + 1) + rsi_8
                r12_4 = zx.q(r12_4.d + 1)
                r15_1 += 4
                *r8_15 = (zx.d(*r8_15) * (0xff - r11_2) s/ 0xff).b + r11_2.b
                j = *(rdi + 0x6c)
            while (r12_4.d u< j)
            
            rbx = arg3
            i_1 = i_2
        
        i_1 += 1
        rdx_1 = zx.d(var_58_1)
        r14_2 += sx.q(*(rdi + 0x70))
        r8_1 = zx.d(var_57_1)
        rsi_8 += sx.q(*(rbx + 0x70))
        r9 = zx.d(var_56_1)
        i_2 = i_1
    while (i_1 u< *(rdi + 0x68))

return 0
