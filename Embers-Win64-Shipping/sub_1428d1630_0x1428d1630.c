// 函数: sub_1428d1630
// 地址: 0x1428d1630
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

__chkstk(0x68)
int64_t rax = *(arg1 + 0x178)
int64_t i = arg4
int64_t rax_1 = *(arg1 + 0x180)
char* r15 = arg3
void* rsi = arg2
int64_t rcx_1 = *(arg1 + 0x38) + arg4

if (rcx_1 u> 0xfffffffe0 || rcx_1 u< arg4)
    return 0xffffffff

int32_t rbp = *(arg1 + 0x170)
*(arg1 + 0x38) = rcx_1
void* rcx_2 = arg1 + 0x40
int32_t arg_8 = rbp
void* var_60 = rcx_2

if (*(arg1 + 0x174) == 0)
    var_60 = rcx_2
label_1428d172f:
    uint32_t rdi_7 =
        ((zx.d(*(arg1 + 0xc)) << 8 | zx.d(*(arg1 + 0xd))) << 8 | zx.d(*(arg1 + 0xe))) << 8
        | zx.d(*(arg1 + 0xf))
    uint64_t r13_2 = zx.q(rbp) & 0xf
    int32_t var_68_1 = r13_2.d
    
    if (r13_2.d == 0)
        goto label_1428d17b3
    
    while (i != 0)
        char rdx_1 = *rsi
        i -= 1
        uint64_t rax_6 = zx.q(rbp)
        rsi += 1
        rbp += 1
        *(rax_6 + arg1 + 0x188) = rdx_1
        *r15 = *(r13_2 + arg1 + 0x10) ^ rdx_1
        r15 = &r15[1]
        r13_2 = zx.q(r13_2.d + 1) & 0xf
        var_68_1 = r13_2.d
        
        if (r13_2.d == 0)
            goto label_1428d1792
    
    if (r13_2.d == 0)
    label_1428d1792:
        sub_1428d2a90(arg1 + 0x40, arg1 + 0x60, arg1 + 0x188, zx.q(rbp))
        rcx_2 = var_60
        rbp = 0
        arg_8 = 0
    label_1428d17b3:
        
        if (i u>= 0x10 && rbp != 0)
            sub_1428d2a90(rcx_2, arg1 + 0x60, arg1 + 0x188, zx.q(rbp))
            rbp = 0
            arg_8 = 0
        
        if (i u>= 0xc00)
            void* rbp_1 = var_60
            uint64_t i_4 = i u/ 0xc00
            uint64_t i_1
            
            do
                sub_1428d2a90(rbp_1, arg1 + 0x60, rsi, 0xc00)
                int64_t j_1 = 0xc0
                int64_t j
                
                do
                    rax(arg1, arg1 + 0x10, rax_1)
                    rdi_7 += 1
                    *(arg1 + 0xf) = rdi_7.b
                    *(arg1 + 0xc) = (rdi_7 u>> 0x18).b
                    *(arg1 + 0xd) = (rdi_7 u>> 0x10).b
                    *(arg1 + 0xe) = (rdi_7 u>> 8).b
                    *r15 = *(arg1 + 0x10) ^ *rsi
                    int64_t rax_18 = *(rsi + 8)
                    rsi += 0x10
                    *(r15 + 8) = rax_18 ^ *(arg1 + 0x18)
                    r15 = &r15[0x10]
                    j = j_1
                    j_1 -= 1
                while (j != 1)
                i_1 = i_4
                i_4 -= 1
                rbp_1 = var_60
            while (i_1 != 1)
            i = i u% 0xc00
            rbp = arg_8
            r13_2 = zx.q(var_68_1)
        
        int64_t r9_3 = i & 0xfffffffffffffff0
        
        if (r9_3 != 0)
            sub_1428d2a90(var_60, arg1 + 0x60, rsi, r9_3)
            
            if (i u>= 0x10)
                uint64_t i_5 = i u>> 4
                int64_t i_6 = i - i_5 * 0x10
                uint64_t i_2
                
                do
                    rax(arg1, arg1 + 0x10, rax_1)
                    rdi_7 += 1
                    *(arg1 + 0xf) = rdi_7.b
                    *(arg1 + 0xc) = (rdi_7 u>> 0x18).b
                    *(arg1 + 0xd) = (rdi_7 u>> 0x10).b
                    *(arg1 + 0xe) = (rdi_7 u>> 8).b
                    *r15 = *(arg1 + 0x10) ^ *rsi
                    int64_t rax_29 = *(rsi + 8)
                    rsi += 0x10
                    *(r15 + 8) = rax_29 ^ *(arg1 + 0x18)
                    r15 = &r15[0x10]
                    i_2 = i_5
                    i_5 -= 1
                while (i_2 != 1)
                i = i_6
                rbp = arg_8
                r13_2 = zx.q(var_68_1)
        
        if (i != 0)
            rax(arg1, arg1 + 0x10, rax_1)
            *(arg1 + 0xf) = (rdi_7 + 1).b
            *(arg1 + 0xc) = ((rdi_7 + 1) u>> 0x18).b
            *(arg1 + 0xd) = ((rdi_7 + 1) u>> 0x10).b
            *(arg1 + 0xe) = ((rdi_7 + 1) u>> 8).b
            int64_t i_3
            
            do
                char* rdx_11 = zx.q(r13_2.d)
                r13_2 = zx.q(r13_2.d + 1)
                uint64_t rax_37 = zx.q(rbp)
                rbp += 1
                char rcx_10 = *(rdx_11 + rsi)
                *(rax_37 + arg1 + 0x188) = rcx_10
                *(rdx_11 + r15) = *(arg1 + rdx_11 + 0x10) ^ rcx_10
                i_3 = i
                i -= 1
            while (i_3 != 1)
    
    *(arg1 + 0x170) = rbp
else
    if (arg4 != 0)
        rbp = 0x10
        arg_8 = 0x10
        *(arg1 + 0x188) = *rcx_2
        *rcx_2 = 0
        *(arg1 + 0x48) = 0
        *(arg1 + 0x174) = 0
        goto label_1428d172f
    
    sub_1428d2c70(rcx_2, arg1 + 0x60)
    *(arg1 + 0x174) = 0

return 0
