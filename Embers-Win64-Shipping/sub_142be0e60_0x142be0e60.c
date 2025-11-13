// 函数: sub_142be0e60
// 地址: 0x142be0e60
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t arg_18 = 0

if (arg1 + 4 u> *(arg2 + 0x108))
    sub_142b9a750(arg2, 8)
    noreturn

uint32_t rsi_2 = zx.d(*(arg1 + 2)) << 8 | zx.d(*(arg1 + 3))
uint32_t var_68 = rsi_2

if (zx.q(rsi_2) + arg1 u> *(arg2 + 0x108))
    if (arg2[0x11].d s>= 1)
        sub_142b9a750(arg2, 8)
        noreturn
    
    rsi_2 = (*(arg2 + 0x108)).d - arg1.d
    var_68 = rsi_2

if (rsi_2 u< 0x10)
    sub_142b9a750(arg2, 8)
    noreturn

uint32_t r13_2 = zx.d(*(arg1 + 6)) << 8 | zx.d(*(arg1 + 7))

if (arg2[0x11].d s>= 2 && (r13_2.b & 1) != 0)
    sub_142b9a750(arg2, 8)
    noreturn

uint64_t r13_3 = zx.q(r13_2 u>> 1)

if (rsi_2 u< ((r13_3 << 3) + 0x10).d)
    sub_142b9a750(arg2, 8)
    noreturn

if (arg2[0x11].d s>= 2)
    uint32_t rsi_6 = zx.d(*(arg1 + 8)) << 8 | zx.d(*(arg1 + 9))
    uint32_t rbp_3 = zx.d(*(arg1 + 0xc)) << 8 | zx.d(*(arg1 + 0xd))
    
    if (((rbp_3.b | rsi_6.b) & 1) != 0)
        sub_142b9a750(arg2, 8)
        noreturn
    
    uint32_t rsi_7 = rsi_6 u>> 1
    
    if (rsi_7 u> r13_3.d || rsi_7 * 2 u< r13_3.d || (rbp_3 u>> 1) + rsi_7 != r13_3.d
            || rsi_7 != 1 << ((zx.d(*(arg1 + 0xa)) << 8).b | *(arg1 + 0xb)))
        sub_142b9a750(arg2, 8)
        noreturn

uint64_t rax_15 = zx.q((r13_3 << 1).d)
void* rsi_9 = arg1 + 0x10 + zx.q(rax_15.d)
void* var_70 = arg1 + 0xe
void* rdi_1 = rax_15 + rsi_9
void* r9 = rax_15 + rdi_1
void* rax_16 = rax_15 + r9
void* var_78 = r9

if (arg2[0x11].d s>= 2)
    uint64_t rax_18 = zx.q(((r13_3 << 1) + -fffffffffffffffe).d)
    
    if ((zx.w(*(rax_18 + arg1 + 0xe)) << 8 | zx.w(*(rax_18 + arg1 + 0xe + 1))) != 0xffff)
        sub_142b9a750(arg2, 8)
        noreturn

int32_t rdx_1 = 0
int32_t arg_10 = 0
uint32_t r12 = 0
uint32_t r14_4 = 0

if (r13_3.d != 0)
    void* r10_1 = arg1 + 0xe - rdi_1
    void* rax_20 = rsi_9 - 1
    void* r9_1 = r9 - rdi_1
    void* var_70_1 = r10_1
    void* var_78_1 = r9_1
    void* r8_1 = rdi_1 - 1
    bool cond:0_1
    
    do
        uint32_t rbp_8 = zx.d(*(rax_20 + 1)) << 8 | zx.d(*(rax_20 + 2))
        uint32_t r15_3 = zx.d(*(r10_1 + r8_1 + 1)) << 8 | zx.d(*(r10_1 + r8_1 + 2))
        uint32_t rsi_12 = zx.d(*(r9_1 + r8_1 + 1)) << 8 | zx.d(*(r9_1 + r8_1 + 2))
        
        if (rbp_8 u> r15_3)
            sub_142b9a750(arg2, 8)
            noreturn
        
        if (rbp_8 u<= r14_4 && arg_10 != 0)
            if (arg2[0x11].d s>= 1)
                sub_142b9a750(arg2, 8)
                noreturn
            
            int32_t rdx_2
            
            if (r12 u> rbp_8 || r14_4 u> r15_3)
                rdx_2 = rdx_1 | 1
            else
                rdx_2 = rdx_1 | 2
            
            arg_18 = rdx_2
        
        if (rsi_12 != 0)
            if (rsi_12 != 0xffff)
                void* rdi_4 = r8_1 + 1 + r9_1 + zx.q(rsi_12)
                void* rax_33
                uint64_t rcx_17
                
                if (arg2[0x11].d s>= 1)
                    if (rdi_4 u< rax_16)
                        sub_142b9a750(arg2, 8)
                        noreturn
                    
                    rcx_17 = zx.q(((zx.q(r15_3 - rbp_8) << 1) + 2).d)
                    rax_33 = zx.q(var_68) + arg1
                label_142be11b7:
                    
                    if (rcx_17 + rdi_4 u> rax_33)
                        sub_142b9a750(arg2, 8)
                        noreturn
                else if (arg_10 != (r13_3 - 1).d || rbp_8 != 0xffff || r15_3 != 0xffff)
                    if (rdi_4 u< rax_16)
                        sub_142b9a750(arg2, 8)
                        noreturn
                    
                    rcx_17 = zx.q(((zx.q(r15_3 - rbp_8) << 1) + 2).d)
                    rax_33 = *(arg2 + 0x108)
                    goto label_142be11b7
                
                if (arg2[0x11].d s>= 1 && rbp_8 u< r15_3)
                    void* rdi_5 = rdi_4 - 1
                    uint64_t i_1 = zx.q(r15_3 - rbp_8)
                    uint64_t i
                    
                    do
                        uint32_t rax_38 = zx.d(*(rdi_5 + 1))
                        rdi_5 += 2
                        uint32_t rax_40 = rax_38 << 8 | zx.d(*rdi_5)
                        
                        if (rax_40 != 0
                                && zx.d(rax_40.w + (zx.w(*(r8_1 + 1)) << 8 | zx.w(*(r8_1 + 2))))
                                u>= arg2[0x12].d)
                            sub_142b9a750(arg2, 0x10)
                            noreturn
                        
                        i = i_1
                        i_1 -= 1
                    while (i != 1)
            else if (arg2[0x11].d s>= 2 || arg_10 != (r13_3 - 1).d || rbp_8 != 0xffff
                    || r15_3 != 0xffff)
                sub_142b9a750(arg2, 8)
                noreturn
        
        r12 = rbp_8
        rdx_1 = arg_18
        r8_1 += 2
        cond:0_1 = arg_10 + 1 u< r13_3.d
        r9_1 = var_78_1
        r14_4 = r15_3
        r10_1 = var_70_1
        arg_10 += 1
        rax_20 += 2
    while (cond:0_1)

return zx.q(rdx_1)
