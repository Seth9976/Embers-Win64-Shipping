// 函数: sub_142a2e600
// 地址: 0x142a2e600
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t rbp = 3
int32_t arg_10 = 0x10
char result = 3
char* rbx = arg4
char* rdi = arg3
int32_t r13 = 0

if (sub_142a20ce0(arg1, 0x6e) != 0)
    arg_10 = 4
    result = 2
    rbp = 2
    
    if (sub_142a20ce0(arg1, 0x6f) != 0)
        int32_t rax_2 = sub_142a20ce0(arg1, 0x96)
        rbp = rax_2
        result = rax_2.b
        arg_10 = 2

int64_t rcx_2 = sx.q(rbp)
int64_t rcx_3 = rcx_2 << 4
int64_t var_60 = rcx_3

do
    uint64_t rcx_4 = zx.q(*(sx.q(r13) + rcx_3 + 0x14360ab90))
    int32_t rdi_1
    
    if ((rcx_4.b & 3) != 0)
        rdi_1 = *(arg2 + (rcx_4 << 2) + 8)
    else if (*rdi == 9)
        rdi_1 = *(rdi + (rcx_4 << 2) + 0x18)
    else
        rdi_1 = *(rdi + 4)
    
    int32_t rbx_1
    
    if ((rcx_4.d & 0xfffffffc) != 0)
        rbx_1 = *(arg2 + (rcx_4 << 2) - 4)
    else if (*rbx == 9)
        rbx_1 = *(rbx + (rcx_4 << 2) + 0x3c)
    else
        rbx_1 = *(rbx + 4)
    
    int64_t rcx_5
    rcx_5.b = rdi_1 == rbx_1
    int64_t rax_6 = 0
    
    if (rbx_1 == 0)
        rax_6 = 4
    
    int64_t rax_7 = 0
    
    if (rdi_1 == 0)
        rax_7 = 2
    
    int64_t rcx_7 = rcx_5 | rax_6 | rax_7
    int32_t rbp_1 = 0
    int32_t r14_5 = (((*(arg1 + 0x1c) - 1) * zx.d(*(rcx_7 * 3 + &data_143609bf0))) u>> 8) + 1
    
    if (arg1[3].d s< 0)
        sub_142a2e350(arg1)
    
    int64_t r8 = arg1[2]
    uint64_t rcx_10 = zx.q(r14_5) << 0x38
    
    if (r8 u>= rcx_10)
        rbp_1 = 1
        r14_5 = *(arg1 + 0x1c) - r14_5
        r8 -= rcx_10
    
    uint32_t rdx = zx.d(*(zx.q(r14_5) + &data_143609200))
    int32_t r9_1 = arg1[3].d - rdx
    int32_t r14_6 = r14_5 << rdx.b
    arg1[2] = r8 << rdx.b
    arg1[3].d = r9_1
    *(arg1 + 0x1c) = r14_6
    int16_t rdi_8
    
    if (rbp_1 == 0)
        rbx_1 = rdi_1
        rdi_8 = rbx_1.w
    else
        int32_t rdi_2 = 0
        int32_t rbp_5 = ((zx.d(*(rcx_7 * 3 + 0x143609bf1)) * (r14_6 - 1)) u>> 8) + 1
        
        if (r9_1 s< 0)
            sub_142a2e350(arg1)
        
        int64_t r8_2 = arg1[2]
        uint64_t rcx_15 = zx.q(rbp_5) << 0x38
        
        if (r8_2 u>= rcx_15)
            rdi_2 = 1
            rbp_5 = *(arg1 + 0x1c) - rbp_5
            r8_2 -= rcx_15
        
        rdx = zx.d(*(zx.q(rbp_5) + &data_143609200))
        int32_t r9_3 = arg1[3].d - rdx
        int32_t rbp_6 = rbp_5 << rdx.b
        arg1[2] = r8_2 << rdx.b
        arg1[3].d = r9_3
        *(arg1 + 0x1c) = rbp_6
        
        if (rdi_2 == 0)
            rdi_8 = rbx_1.w
        else
            rbx_1 = 0
            int32_t r14_7 = 0
            int32_t rdi_6 = ((zx.d(*(rcx_7 * 3 + 0x143609bf2)) * (rbp_6 - 1)) u>> 8) + 1
            
            if (r9_3 s< 0)
                sub_142a2e350(arg1)
            
            int64_t r8_4 = arg1[2]
            uint64_t rcx_20 = zx.q(rdi_6) << 0x38
            
            if (r8_4 u>= rcx_20)
                r14_7 = 1
                rdi_6 = *(arg1 + 0x1c) - rdi_6
                r8_4 -= rcx_20
            
            rdx = zx.d(*(zx.q(rdi_6) + &data_143609200))
            arg1[3].d -= rdx
            arg1[2] = r8_4 << rdx.b
            *(arg1 + 0x1c) = rdi_6 << rdx.b
            
            if (r14_7 == 0)
                rdi_8 = 0.w
            else
                rdi_8 = sub_142a2f650(arg1, arg8) * 2 + arg6
                int32_t arg_8
                arg_8.w = rdi_8
                int16_t rax_21
                rax_21, rdx = sub_142a2f650(arg1, &arg8[0x13])
                arg_8:2.w = rax_21 * 2 + arg7
                rbx_1 = arg_8
    
    int32_t rcx_25 = sx.d((rbx_1 u>> 0x10).w)
    int32_t rax_24 = sx.d(rdi_8)
    rdx.b = rax_24 s< arg11
    rax_24.b = rax_24 s> arg12
    rdx.b |= rax_24.b
    rax_24.b = rcx_25 s< arg9
    rdx.b |= rax_24.b
    rax_24.b = rcx_25 s> arg10
    rdx.b |= rax_24.b
    *(arg5 + 0xa) |= rdx.b
    uint32_t i_1 = zx.d(*(&data_143609c08 + rcx_2))
    void* rax_29 = zx.q(i_1) * zx.q(r13.b) + var_60 + &data_143609bb0
    uint32_t i
    
    do
        uint64_t rcx_27 = zx.q(*rax_29)
        rax_29 += 1
        *(arg2 + (rcx_27 << 2) + 0xc) = rbx_1
        i = i_1
        i_1 -= 1
    while (i != 1)
    rbx = arg4
    rdi = arg3
    r13 += 1
    rcx_3 = var_60
while (r13 s< arg_10)

*(arg5 + 8) = result
return result
