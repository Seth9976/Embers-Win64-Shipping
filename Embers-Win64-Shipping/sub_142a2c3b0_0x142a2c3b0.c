// 函数: sub_142a2c3b0
// 地址: 0x142a2c3b0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t r13 = *(arg1 + 0x1168)
int64_t r15 = *(arg2 + 0x188)

if (*(arg1 + 0x10e8) != 0)
    int64_t rax_1 = sx.q(arg4)
    
    if ((*(arg1 + (rax_1 << 2) + 0x1138) & 4) != 0)
        char rax_2 = *(arg1 + (rax_1 << 3) + 0x10fc)
        *arg5 = rax_2
        arg5[1] = 0xff
        return rax_2

uint64_t rax_3 = sub_142a2a880(arg1, arg2, arg3)

if (rax_3.d == 1)
    int64_t r12_1 = sx.q(*(arg1 + (sx.q(*(arg1 + 0x1160)) << 2) + 0x10a4))
    int64_t r10_1 = sx.q(sub_142a31d50(arg1, arg2))
    int32_t r14_1 = 0
    uint32_t rbp_4 = (zx.d(*(r10_1 + r13 + 0x79e)) * (arg3[1].d - 1) + 0x100) u>> 8
    
    if (*(arg3 + 0xc) s< 0)
        sub_142a23140(arg3)
    
    int64_t r8 = *arg3
    uint64_t rcx_4 = zx.q(rbp_4) << 0x38
    
    if (r8 u>= rcx_4)
        r14_1 = 1
        rbp_4 = arg3[1].d - rbp_4
        r8 -= rcx_4
    
    uint32_t rdx_1 = zx.d(*(zx.q(rbp_4) + &data_143603f00))
    *(arg3 + 0xc) -= rdx_1
    *arg3 = r8 << rdx_1.b
    arg3[1].d = rbp_4 << rdx_1.b
    
    if (r15 != 0)
        int64_t rcx_7 = zx.q(r14_1) + (r10_1 << 1)
        *(r15 + (rcx_7 << 2) + 0x3168) += 1
    
    char* rsi_1
    rsi_1.b = r12_1.d == 0
    arg5[r12_1] = *(arg1 + 0x1160)
    rax_3 = zx.q(*(zx.q(r14_1) + arg1 + 0x1161))
    *(rsi_1 + arg5) = rax_3.b
else if (rax_3.d == 0)
    int64_t r9 = sx.q(sub_142a31fa0(arg2))
    int32_t rsi_2 = 0
    int32_t r12_2 = 0
    uint32_t rdi_4 = (zx.d(*(r13 + (r9 << 1) + 0x794)) * (arg3[1].d - 1) + 0x100) u>> 8
    
    if (*(arg3 + 0xc) s< 0)
        sub_142a23140(arg3)
    
    int64_t r8_2 = *arg3
    uint64_t rcx_11 = zx.q(rdi_4) << 0x38
    
    if (r8_2 u>= rcx_11)
        r12_2 = 1
        rdi_4 = arg3[1].d - rdi_4
        r8_2 -= rcx_11
    
    rax_3 = zx.q(rdi_4)
    uint32_t rdx_3 = zx.d(*(rax_3 + &data_143603f00))
    *(arg3 + 0xc) -= rdx_3
    *arg3 = r8_2 << rdx_3.b
    arg3[1].d = rdi_4 << rdx_3.b
    
    if (r15 != 0)
        rax_3 = zx.q(r12_2)
        int64_t rcx_14 = rax_3 + (r9 << 2)
        *(r15 + (rcx_14 << 2) + 0x3118) += 1
    
    char* rcx_22
    
    if (r12_2 == 0)
        rcx_22 = arg5
        *rcx_22 = 1
    else
        int64_t rbp_6 = sx.q(sub_142a32110(arg2))
        uint32_t rdi_9 = (zx.d(*(r13 + (rbp_6 << 1) + 0x795)) * (arg3[1].d - 1) + 0x100) u>> 8
        
        if (*(arg3 + 0xc) s< 0)
            sub_142a23140(arg3)
        
        int64_t r8_4 = *arg3
        uint64_t rcx_18 = zx.q(rdi_9) << 0x38
        
        if (r8_4 u>= rcx_18)
            rsi_2 = 1
            rdi_9 = arg3[1].d - rdi_9
            r8_4 -= rcx_18
        
        uint32_t rdx_4 = zx.d(*(zx.q(rdi_9) + &data_143603f00))
        *(arg3 + 0xc) -= rdx_4
        *arg3 = r8_4 << rdx_4.b
        arg3[1].d = rdi_9 << rdx_4.b
        
        if (r15 != 0)
            int64_t rcx_21 = zx.q(rsi_2) + (rbp_6 << 2)
            *(r15 + (rcx_21 << 2) + 0x3120) += 1
        
        rcx_22 = arg5
        rax_3.b = rsi_2 != 0
        rax_3.b += 2
        *rcx_22 = rax_3.b
    
    rcx_22[1] = 0xff

return rax_3
