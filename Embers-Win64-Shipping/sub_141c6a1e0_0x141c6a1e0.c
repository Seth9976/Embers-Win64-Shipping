// 函数: sub_141c6a1e0
// 地址: 0x141c6a1e0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* rsi = *(arg1 + 0xc8)
char r9 = 1
int64_t* rdi = sx.q(arg2) * 0x3f0
char arg_10 = 1
int32_t result_1 = *(rdi + rsi + 0x94)
int64_t r14 = sx.q(*(rdi + rsi + 0x3d4))
int64_t r15 = r14
arg2.b = result_1 + 1 s>= *(rdi + rsi + 0x28)
int32_t result
result.b = result_1 s>= *(rdi + rsi + 0x28)
int64_t i_3 = 0

while (true)
    uint64_t r12_4 = 3
    
    if (arg2.b != 0)
        if (result.b == 0)
            r9 = 0
            int32_t r10 = result_1 * r14.d
            int64_t i_1 = 0
            arg_10 = 0
            int64_t r13_1 = **(rdi + rsi + 0x18)
            
            if (r15 s>= 4)
                int64_t rax_2 = sx.q(r10)
                int32_t* r9_2 = (rax_2 << 2) + r13_1
                int64_t i_6 = ((r15 - 4) u>> 2) + 1
                i_1 = i_6 << 2
                int64_t i
                
                do
                    void* rdx = r9_2 + neg.q((rax_2 << 2) + r13_1)
                    *(rdx + *(rdi + rsi + 0x70)) = *r9_2
                    *(rdx + *(rdi + rsi + 0x70) + 4) = r9_2[1]
                    *(r9_2 + ((2 - rax_2) << 2) - r13_1 + *(rdi + rsi + 0x70)) = r9_2[2]
                    void* rdx_2 = r9_2 + ((3 - rax_2) << 2) - r13_1
                    int32_t rax_6 = r9_2[3]
                    r9_2 = &r9_2[4]
                    *(rdx_2 + *(rdi + rsi + 0x70)) = rax_6
                    i = i_6
                    i_6 -= 1
                while (i != 1)
                r14 = zx.q(r15.d)
                r12_4 = zx.q((i_6 + 3).d)
                r9 = 0
            
            for (; i_1 s< r15; i_1 += 1)
                *(*(rdi + rsi + 0x70) + (i_1 << 2)) = *((sx.q(r10) << 2) + r13_1 + (i_1 << 2))
        
        goto label_141c6a34d
    
    int64_t* rcx
    
    if (result.b == 0)
        rcx = *(rdi + rsi + 0x18)
    label_141c6a4e0:
        
        if (rcx == 0)
            return result
        
        void* rbx_8 = *rcx
        result = (result_1 + 1) * r14.d
        int64_t result_2 = sx.q(result)
        
        if (r9 == 0)
            if (r15 s>= 4)
                void* r8_5 = rbx_8 + (result_2 << 2)
                int64_t i_5 = ((r15 - 4) u>> 2) + 1
                i_3 = i_5 << 2
                int64_t i_2
                
                do
                    void* rdx_12 = r8_5 + neg.q(rbx_8 + (result_2 << 2))
                    *(rdx_12 + *(rdi + rsi + 0x80)) = *r8_5
                    *(*(rdi + rsi + 0x80) + rdx_12 + 4) = *(r8_5 + 4)
                    *(r8_5 + ((2 - result_2) << 2) - rbx_8 + *(rdi + rsi + 0x80)) = *(r8_5 + 8)
                    result = *(r8_5 + 0xc)
                    void* rcx_31 = *(rdi + rsi + 0x80) + r8_5
                    r8_5 += 0x10
                    *(rcx_31 + ((r12_4 - result_2) << 2) - rbx_8) = result
                    i_2 = i_5
                    i_5 -= 1
                while (i_2 != 1)
            
            for (; i_3 s< r15; i_3 += 1)
                result = *(rbx_8 + (result_2 << 2) + (i_3 << 2))
                *(*(rdi + rsi + 0x80) + (i_3 << 2)) = result
        else
            int32_t r10_1 = result_1 * r14.d
            
            if (r15 s>= 4)
                int64_t rax_22 = result_2 << 2
                int64_t r9_4 = sx.q(r10_1) - result_2
                void* r8_2 = rbx_8 + 4 + rax_22
                int64_t i_7 = ((r15 - 4) u>> 2) + 1
                i_3 = i_7 << 2
                int64_t i_4
                
                do
                    int32_t* rdx_8 = r8_2 + -4 - rax_22 - rbx_8
                    *(rdx_8 + *(rdi + rsi + 0x70)) = *(r8_2 + (r9_4 << 2) - 4)
                    *(rdx_8 + *(rdi + rsi + 0x80)) = *(r8_2 - 4)
                    *(rdx_8 + *(rdi + rsi + 0x70) + 4) = *(r8_2 + (r9_4 << 2))
                    *(rdx_8 + *(rdi + rsi + 0x80) + 4) = *r8_2
                    void* rdx_9 = 4 - rax_22 - rbx_8 + r8_2
                    *(rdx_9 + *(rdi + rsi + 0x70)) = *(r8_2 + (r9_4 << 2) + 4)
                    *(rdx_9 + *(rdi + rsi + 0x80)) = *(r8_2 + 4)
                    void* rdx_10 = ((2 - result_2) << 2) - rbx_8 + r8_2
                    int32_t rax_29 = *(r8_2 + (r9_4 << 2) + 8)
                    r8_2 += 0x10
                    *(rdx_10 + *(rdi + rsi + 0x70)) = rax_29
                    result = *(r8_2 - 8)
                    *(rdx_10 + *(rdi + rsi + 0x80)) = result
                    i_4 = i_7
                    i_7 -= 1
                while (i_4 != 1)
            
            for (; i_3 s< r15; i_3 += 1)
                void* rdx_11 = rbx_8 + (result_2 << 2) + (i_3 << 2)
                *(*(rdi + rsi + 0x70) + (i_3 << 2)) = *(rdx_11 + ((sx.q(r10_1) - result_2) << 2))
                result = *rdx_11
                *(*(rdi + rsi + 0x80) + (i_3 << 2)) = result
        
        return result
    
label_141c6a34d:
    int64_t** r13_3 = rsi + 0x18 + rdi
    rcx = *r13_3
    
    if (rcx != 0)
        if (rcx[2].d == 0xffffffff && (*(rcx + 0x14) & 1) == 0)
            int32_t rax_20 = *(rdi + rsi + 0x94)
            result_1 = 0
            result = rax_20 - *(rdi + rsi + 0x28)
            
            if (rax_20 - *(rdi + rsi + 0x28) s>= 0)
                result_1 = result
            
            *(rdi + rsi + 0x94) = result_1
            goto label_141c6a4e0
        
        void* r14_4 = *(rdi + rsi)
        void* lpCriticalSection_1 = nullptr
        BOOL rax_9
        rax_9.b = TryEnterCriticalSection(r14_4 + 0x90) != 0
        
        if (rax_9.b != 0)
            lpCriticalSection_1 = r14_4 + 0x90
        
        if (lpCriticalSection_1 != 0)
            if ((*(r14_4 + 8) != 0 || (*(r14_4 + 0xe0) & 2) == 0)
                    && ((*(r14_4 + 0xe0) & 0x20) == 0 || *(r14_4 + 0x58) != 0))
                sub_141c69550(r14_4)
            
            LeaveCriticalSection(lpCriticalSection_1)
    
    void* r14_5 = *(rdi + rsi)
    CRITICAL_SECTION* lpCriticalSection = nullptr
    result.b = TryEnterCriticalSection(r14_5 + 0x90) != 0
    
    if (result.b != 0)
        lpCriticalSection = r14_5 + 0x90
    
    if (lpCriticalSection == 0)
        *(rdi + rsi + 0x3d1) |= 0x20
        return result
    
    int32_t rbx_6 = *(r14_5 + 8)
    result = LeaveCriticalSection(lpCriticalSection)
    
    if (rbx_6 s<= 0)
        *(rdi + rsi + 0x3d1) |= 0x20
        return result
    
    r14 = zx.q(r15.d)
    
    if (r15.d s<= 0)
        *(rdi + rsi + 0x3d1) |= 0x20
        return result
    
    void var_48
    int64_t* rax_10 = sub_141c5e210(*(rdi + rsi), &var_48)
    
    if (r13_3 != rax_10)
        *r13_3 = *rax_10
        *rax_10 = 0
        sub_1405aeff0(&r13_3[1], &rax_10[1])
    
    int64_t* var_40
    
    if (var_40 != 0)
        var_40[1].d -= 1
        
        if (var_40[1].d == 1)
            (**var_40)(var_40)
            int32_t rax_13 = *(var_40 + 0xc)
            *(var_40 + 0xc) -= 1
            
            if (rax_13 == 1)
                (*(*var_40 + 8))(var_40, 1)
    
    r9 = arg_10
    int32_t temp0_3 = divs.dp.d(sx.q((*r13_3)[1].d), r14.d)
    *(rdi + rsi + 0x28) = temp0_3
    int32_t rax_19
    
    if (r9 == 0)
        rax_19 = -1
    else
        int32_t rcx_15 = *(rdi + rsi + 0x94)
        rax_19 = 0
        
        if (rcx_15 - temp0_3 s>= 0)
            rax_19 = rcx_15 - temp0_3
    
    *(rdi + rsi + 0x94) = rax_19
    result_1 = *(rdi + rsi + 0x94)
    arg2.b = rax_19 + 1 s>= *(rdi + rsi + 0x28)
    result.b = result_1 s>= *(rdi + rsi + 0x28)
