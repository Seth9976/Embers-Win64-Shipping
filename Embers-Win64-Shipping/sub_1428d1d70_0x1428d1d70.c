// 函数: sub_1428d1d70
// 地址: 0x1428d1d70
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

__chkstk(0x68)
int64_t rax = *(arg1 + 0x178)
int64_t i = arg4
int64_t rax_1 = *(arg1 + 0x180)
void* rsi = arg3
void* rbp = arg2
int64_t rcx_1 = *(arg1 + 0x38) + arg4

if (rcx_1 u> 0xfffffffe0 || rcx_1 u< arg4)
    return 0xffffffff

*(arg1 + 0x38) = rcx_1
void* rcx_2 = arg1 + 0x40
int32_t r15 = *(arg1 + 0x170)
int32_t arg_8 = r15
void* var_60 = rcx_2

if (*(arg1 + 0x174) == 0)
    var_60 = rcx_2
label_1428d1e72:
    uint32_t rdi_7 =
        ((zx.d(*(arg1 + 0xc)) << 8 | zx.d(*(arg1 + 0xd))) << 8 | zx.d(*(arg1 + 0xe))) << 8
        | zx.d(*(arg1 + 0xf))
    uint64_t r13_2 = zx.q(r15) & 0xf
    int32_t var_68_1 = r13_2.d
    
    if (r13_2.d == 0)
        goto label_1428d1ef3
    
    while (i != 0)
        i -= 1
        char rcx_3 = *(r13_2 + arg1 + 0x10) ^ *rbp
        rbp += 1
        *rsi = rcx_3
        rsi += 1
        uint64_t rax_6 = zx.q(r15)
        r15 += 1
        r13_2 = zx.q(r13_2.d + 1) & 0xf
        var_68_1 = r13_2.d
        *(rax_6 + arg1 + 0x188) = rcx_3
        
        if (r13_2.d == 0)
            goto label_1428d1ed1
    
    if (r13_2.d == 0)
    label_1428d1ed1:
        sub_1428d2a90(arg1 + 0x40, arg1 + 0x60, arg1 + 0x188, zx.q(r15))
        rcx_2 = var_60
        r15 = 0
        arg_8 = 0
    label_1428d1ef3:
        
        if (i u>= 0x10 && r15 != 0)
            sub_1428d2a90(rcx_2, arg1 + 0x60, arg1 + 0x188, zx.q(r15))
            r15 = 0
            arg_8 = 0
        
        if (i u>= 0xc00)
            uint64_t i_4 = i u/ 0xc00
            uint64_t i_1
            
            do
                int64_t j_1 = 0xc0
                int64_t j
                
                do
                    rax(arg1, arg1 + 0x10, rax_1)
                    rdi_7 += 1
                    *(arg1 + 0xf) = rdi_7.b
                    *(arg1 + 0xc) = (rdi_7 u>> 0x18).b
                    *(arg1 + 0xd) = (rdi_7 u>> 0x10).b
                    *(arg1 + 0xe) = (rdi_7 u>> 8).b
                    *rsi = *(arg1 + 0x10) ^ *rbp
                    int64_t rax_18 = *(rbp + 8)
                    rbp += 0x10
                    *(rsi + 8) = rax_18 ^ *(arg1 + 0x18)
                    rsi += 0x10
                    j = j_1
                    j_1 -= 1
                while (j != 1)
                sub_1428d2a90(var_60, arg1 + 0x60, rsi - 0xc00, 0xc00)
                i_1 = i_4
                i_4 -= 1
            while (i_1 != 1)
            i = i u% 0xc00
            r15 = arg_8
            r13_2 = zx.q(var_68_1)
        
        int64_t rax_21 = i & 0xfffffffffffffff0
        
        if (rax_21 != 0)
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
                    *rsi = *(arg1 + 0x10) ^ *rbp
                    int64_t rax_31 = *(rbp + 8)
                    rbp += 0x10
                    *(rsi + 8) = rax_31 ^ *(arg1 + 0x18)
                    rsi += 0x10
                    i_2 = i_5
                    i_5 -= 1
                while (i_2 != 1)
                i = i_6
                r15 = arg_8
                r13_2 = zx.q(var_68_1)
            
            sub_1428d2a90(var_60, arg1 + 0x60, rsi - rax_21, rax_21)
        
        if (i != 0)
            rax(arg1, arg1 + 0x10, rax_1)
            *(arg1 + 0xf) = (rdi_7 + 1).b
            *(arg1 + 0xc) = ((rdi_7 + 1) u>> 0x18).b
            *(arg1 + 0xd) = ((rdi_7 + 1) u>> 0x10).b
            *(arg1 + 0xe) = ((rdi_7 + 1) u>> 8).b
            int64_t i_3
            
            do
                char* rax_39 = zx.q(r13_2.d)
                r13_2 = zx.q(r13_2.d + 1)
                char rcx_12 = *(arg1 + rax_39 + 0x10) ^ *(rax_39 + rbp)
                *(rax_39 + rsi) = rcx_12
                uint64_t rax_40 = zx.q(r15)
                r15 += 1
                *(rax_40 + arg1 + 0x188) = rcx_12
                i_3 = i
                i -= 1
            while (i_3 != 1)
    
    *(arg1 + 0x170) = r15
else
    if (arg4 != 0)
        r15 = 0x10
        arg_8 = 0x10
        *(arg1 + 0x188) = *rcx_2
        *rcx_2 = 0
        *(arg1 + 0x48) = 0
        *(arg1 + 0x174) = 0
        goto label_1428d1e72
    
    sub_1428d2c70(rcx_2, arg1 + 0x60)
    *(arg1 + 0x174) = 0

return 0
