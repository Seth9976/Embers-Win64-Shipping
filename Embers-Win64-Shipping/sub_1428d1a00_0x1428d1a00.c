// 函数: sub_1428d1a00
// 地址: 0x1428d1a00
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

__chkstk(0x68)
int64_t rax = *(arg1 + 0x180)
int64_t i = arg4
int64_t rcx_1 = *(arg1 + 0x38) + arg4
char* r12 = arg3
void* r15 = arg2

if (rcx_1 u> 0xfffffffe0 || rcx_1 u< arg4)
    return 0xffffffff

int32_t rbp = *(arg1 + 0x170)
*(arg1 + 0x38) = rcx_1
void* rcx_2 = arg1 + 0x40
int32_t arg_8 = rbp
void* var_50 = rcx_2

if (*(arg1 + 0x174) == 0)
    var_50 = rcx_2
label_1428d1af5:
    uint32_t r13_7 =
        ((zx.d(*(arg1 + 0xc)) << 8 | zx.d(*(arg1 + 0xd))) << 8 | zx.d(*(arg1 + 0xe))) << 8
        | zx.d(*(arg1 + 0xf))
    uint64_t r14_2 = zx.q(rbp) & 0xf
    int32_t var_58_1 = r14_2.d
    
    if (r14_2.d == 0)
        goto label_1428d1b76
    
    while (i != 0)
        char rdx_1 = *r15
        i -= 1
        uint64_t rax_5 = zx.q(rbp)
        r15 += 1
        rbp += 1
        *(rax_5 + arg1 + 0x188) = rdx_1
        *r12 = *(r14_2 + arg1 + 0x10) ^ rdx_1
        r12 = &r12[1]
        r14_2 = zx.q(r14_2.d + 1) & 0xf
        var_58_1 = r14_2.d
        
        if (r14_2.d == 0)
            goto label_1428d1b57
    
    if (r14_2.d == 0)
    label_1428d1b57:
        sub_1428d2a90(arg1 + 0x40, arg1 + 0x60, arg1 + 0x188, zx.q(rbp))
        rcx_2 = var_50
        rbp = 0
        arg_8 = 0
    label_1428d1b76:
        
        if (i u>= 0x10 && rbp != 0)
            sub_1428d2a90(rcx_2, arg1 + 0x60, arg1 + 0x188, zx.q(rbp))
            rbp = 0
            arg_8 = 0
        
        if (i u>= 0xc00)
            uint64_t i_3 = i u/ 0xc00
            i = i u% 0xc00
            uint64_t i_1
            
            do
                sub_1428d2a90(var_50, arg1 + 0x60, r15, 0xc00)
                arg5(r15, r12, 0xc0, rax, arg1)
                r13_7 += 0xc0
                r12 = &r12[0xc00]
                *(arg1 + 0xf) = r13_7.b
                r15 += 0xc00
                *(arg1 + 0xc) = (r13_7 u>> 0x18).b
                *(arg1 + 0xd) = (r13_7 u>> 0x10).b
                *(arg1 + 0xe) = (r13_7 u>> 8).b
                i_1 = i_3
                i_3 -= 1
            while (i_1 != 1)
            rbp = arg_8
            r14_2 = zx.q(var_58_1)
        
        int64_t rax_16 = i & 0xfffffffffffffff0
        
        if (rax_16 != 0)
            uint64_t rdi_3 = rax_16 u>> 4
            sub_1428d2a90(var_50, arg1 + 0x60, r15, rax_16)
            arg5(r15, r12, rdi_3, rax, arg1)
            r13_7 += rdi_3.d
            *(arg1 + 0xf) = r13_7.b
            *(arg1 + 0xc) = (r13_7 u>> 0x18).b
            *(arg1 + 0xd) = (r13_7 u>> 0x10).b
            *(arg1 + 0xe) = (r13_7 u>> 8).b
            r12 = &r12[rax_16]
            r15 += rax_16
            i -= rax_16
        
        if (i != 0)
            (*(arg1 + 0x178))(arg1, arg1 + 0x10, rax)
            *(arg1 + 0xf) = (r13_7 + 1).b
            *(arg1 + 0xc) = ((r13_7 + 1) u>> 0x18).b
            *(arg1 + 0xd) = ((r13_7 + 1) u>> 0x10).b
            *(arg1 + 0xe) = ((r13_7 + 1) u>> 8).b
            int64_t i_2
            
            do
                char* rdx_10 = zx.q(r14_2.d)
                r14_2 = zx.q(r14_2.d + 1)
                uint64_t rax_30 = zx.q(rbp)
                rbp += 1
                char rcx_10 = *(rdx_10 + r15)
                *(rax_30 + arg1 + 0x188) = rcx_10
                *(rdx_10 + r12) = *(rdx_10 + arg1 + 0x10) ^ rcx_10
                i_2 = i
                i -= 1
            while (i_2 != 1)
    
    *(arg1 + 0x170) = rbp
else
    if (arg4 != 0)
        rbp = 0x10
        arg_8 = 0x10
        *(arg1 + 0x188) = *rcx_2
        *rcx_2 = 0
        *(arg1 + 0x48) = 0
        *(arg1 + 0x174) = 0
        goto label_1428d1af5
    
    sub_1428d2c70(rcx_2, arg1 + 0x60)
    *(arg1 + 0x174) = 0

return 0
