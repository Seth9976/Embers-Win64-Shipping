// 函数: sub_1413f64e0
// 地址: 0x1413f64e0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t r12 = arg2
void* rbp = arg1

if (*(arg1 + 0x30) == 0xffffffff)
    void* rbx = arg1 + 0x98
    uint32_t rsi_2 = (arg2 + 0x1f) u>> 5
    uint64_t rcx_2 = zx.q((*(rbx + 0x1c) + 0x1f) u>> 5)
    void* r14 = rbx + 0x18
    *r14 = arg2
    
    if (rsi_2 u<= rcx_2.d)
        void* rax_5 = *(rbx + 0x10)
        
        if (rax_5 != 0)
            rbx = rax_5
        
        if (rcx_2.d u> 8)
            memset(rbx, 0, zx.q(rcx_2.d) << 2)
        else if (rcx_2.d != 0)
            __builtin_memset(rbx, 0, rcx_2 << 2)
    else
        sub_1405a4a00(rbx, 0, rsi_2, 4)
        *(rbx + 0x1c) = rsi_2 << 5
        void* rax_3 = *(rbx + 0x10)
        
        if (rax_3 != 0)
            rbx = rax_3
        
        if (rsi_2 u> 8)
            memset(rbx, 0, zx.q(rsi_2) << 2)
        else if (rsi_2 != 0)
            __builtin_memset(rbx, 0, zx.q(rsi_2) << 2)
        
        void* rdx = rbx + (zx.q(rsi_2 - 1) << 2)
        *rdx &= 0xffffffff u>> ((neg.d(*r14)).b & 0x1f)
    
    bool cond:1 = *(rbp + 0x30) == 0xffffffff
    *(rbp + 0x38) = r12
    *(rbp + 0x3c) = arg3
    
    if (cond:1)
        jump(*(*(rbp + 0x28) + 0x28))
    
    return sub_1419ba620(rbp + 0x28) __tailcall

int32_t* r14_1 = nullptr
int32_t* var_70 = nullptr
int32_t i_7 = 0
int64_t var_68 = 0
int32_t r9_1 = 0
int32_t r15_1 = 0
int32_t i = 0

if (*(arg1 + 0x38) s> 0)
    do
        int32_t i_4
        void* r8_6
        
        if (i s< *(rbp + 0xb0))
            r8_6 = rbp + 0x98
            void* rax_8 = *(r8_6 + 0x10)
            
            if (rax_8 != 0)
                r8_6 = rax_8
            
            i_4 = i
            
            if (i s< 0)
                i_4 = i + 0x1f
        
        if (i s>= *(rbp + 0xb0) || not(test_bit(*(r8_6 + (sx.q(i_4 s>> 5) << 2)), i & 0x1f)))
            int64_t i_10 = sx.q(i_7)
            i_7 = (i_10 + 1).d
            var_68.d = i_7
            
            if (i_7 s> r9_1)
                sub_1405a4cf0(&var_70)
                r9_1 = var_68:4.d
                i_7 = var_68.d
                r14_1 = var_70
            
            r14_1[i_10] = 0xffffffff
        else
            int64_t i_9 = sx.q(i_7)
            i_7 = (i_9 + 1).d
            var_68.d = i_7
            
            if (i_7 s> r9_1)
                sub_1405a4cf0(&var_70)
                r9_1 = var_68:4.d
                i_7 = var_68.d
                r14_1 = var_70
            
            r14_1[i_9] = r15_1
            r15_1 += 1
        
        i += 1
    while (i s< *(rbp + 0x38))

uint32_t rsi_4 = (r12 + 0x1f) u>> 5
uint64_t rcx_18 = zx.q((*(rbp + 0xb4) + 0x1f) u>> 5)
*(rbp + 0xb0) = r12

if (rsi_4 u<= rcx_18.d)
    void* rax_15 = *(rbp + 0xa8)
    void* rdi_6 = rbp + 0x98
    
    if (rax_15 != 0)
        rdi_6 = rax_15
    
    if (rcx_18.d u> 8)
        memset(rdi_6, 0, zx.q(rcx_18.d) << 2)
    else if (rcx_18.d != 0)
        __builtin_memset(rdi_6, 0, rcx_18 << 2)
else
    sub_1405a4a00(rbp + 0x98, 0, rsi_4, 4)
    void* r15_2 = rbp + 0x98
    *(rbp + 0xb4) = rsi_4 << 5
    void* rax_13 = *(rbp + 0xa8)
    
    if (rax_13 != 0)
        r15_2 = rax_13
    
    if (rsi_4 u> 8)
        memset(r15_2, 0, zx.q(rsi_4) << 2)
    else if (rsi_4 != 0)
        __builtin_memset(r15_2, 0, zx.q(rsi_4) << 2)
    
    void* rdx_5 = r15_2 + (zx.q(rsi_4 - 1) << 2)
    *rdx_5 &= 0xffffffff u>> ((neg.d(*(rbp + 0xb0))).b & 0x1f)

int64_t* var_60 = nullptr
int32_t i_8 = 0
sub_1413b8f90(rbp + 0x48, &var_60)
uint64_t i_6 = zx.q(i_8)
int32_t rsi_5 = 0
int64_t* rdi_7 = var_60

if (i_6.d s> 0)
    int64_t* r12_1 = rdi_7
    uint64_t i_3 = i_6
    uint64_t i_1
    
    do
        int32_t arg_20
        sub_140865c40(rbp + 0x48, &arg_20, *r12_1)
        int64_t rax_16 = sx.q(arg_20)
        void* const rcx_28
        
        if (rax_16.d == 0xffffffff)
            rcx_28 = nullptr
        else
            rcx_28 = *(rbp + 0x48) + rax_16 * 0x18
        
        int32_t* r9_2 = rcx_28 + 8
        void* rcx_29 = rbp + 0x98
        
        if (rcx_28 == 0)
            r9_2 = nullptr
        
        int32_t r8_13 = r14_1[sx.q(*r9_2)]
        void* rax_19 = *(rbp + 0xa8)
        
        if (rax_19 != 0)
            rcx_29 = rax_19
        
        int32_t rax_20 = r8_13
        
        if (r8_13 s< 0)
            rax_20 = r8_13 + 0x1f
        
        void* rdi_8 = rcx_29 + (sx.q(rax_20 s>> 5) << 2)
        int32_t rax_23 = r8_13 + 1
        *rdi_8 |= 1 << (r8_13.b & 0x1f)
        *r9_2 = r8_13
        
        if (rsi_5 s>= rax_23)
            rax_23 = rsi_5
        
        r12_1 = &r12_1[1]
        i_1 = i_3
        i_3 -= 1
        rsi_5 = rax_23
    while (i_1 != 1)
    rbp = arg1
    rdi_7 = var_60
    r12 = arg2

if (i_7 s> 0)
    int32_t* rax_24 = r14_1
    uint64_t i_5 = zx.q(i_7)
    uint64_t i_2
    
    do
        if (*rax_24 s>= rsi_5)
            *rax_24 = 0xffffffff
        
        rax_24 = &rax_24[1]
        i_2 = i_5
        i_5 -= 1
    while (i_2 != 1)

int64_t result = sub_1413f61a0(rbp + 0x28, r12, arg3, &var_70)

if (rdi_7 != 0)
    result = sub_140a74f90(rdi_7)

if (r14_1 == 0)
    return result

return sub_140a74f90(r14_1)
