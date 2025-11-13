// 函数: sub_14263bdb0
// 地址: 0x14263bdb0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* rdi = arg1 - 0xb0

if (rdi != 0)
    *(rdi + 0xb8) += 1

int64_t* rcx = *(arg2 + 0x60)
char r12 = *(arg2 + 0x39)

if (rcx != 0 && r12 == 4)
    if (((*(arg2 + 0x3c) u>> 7).b & 1) == 0)
        sub_14263a2c0(rcx)
    else
        sub_14263cad0(rcx)

if ((*(arg2 + 0x3c) & 1) != 0)
    int64_t* r9_1 = *(arg1 + 0x40)
    int64_t r10_1 = sx.q(*(arg1 + 0x48))
    int64_t* rcx_1 = r9_1
    void* rdx = &r9_1[r10_1]
    
    if (r9_1 != rdx)
        do
            if (*rcx_1 == arg2)
                int32_t rcx_3 = ((rcx_1 - r9_1) s>> 3).d
                
                if (rcx_3 != 0xffffffff)
                    int32_t rax_5 = r10_1.d - rcx_3 - 1
                    
                    if (rax_5 s>= 1)
                        rax_5 = 1
                    
                    if (rax_5 != 0)
                        memcpy(&r9_1[sx.q(rcx_3)], &r9_1[sx.q(r10_1.d - rax_5)], rax_5 << 3)
                        r10_1 = zx.q(*(arg1 + 0x48))
                    
                    *(arg1 + 0x48) = (r10_1 - 1).d
                    sub_1405c53d0(arg1 + 0x40)
                
                break
            
            rcx_1 = &rcx_1[1]
        while (rcx_1 != rdx)

int64_t* r15 = nullptr

if (r12 == 4)
    int32_t rcx_6 = *(arg1 + 0x58)
    int32_t rsi_1 = 0
    
    if (rcx_6 s> 0)
        int64_t rbp_1 = 0
        int32_t rax_9
        
        do
            int64_t* r9_2 = *(arg1 + 0x50)
            rax_9 = rcx_6
            
            if (*(r9_2 + rbp_1) == arg2)
                int32_t rax_11 = rax_9 - rsi_1 - 1
                
                if (rax_11 s>= 1)
                    rax_11 = 1
                
                if (rax_11 != 0)
                    memcpy(&r9_2[sx.q(rsi_1)], &r9_2[sx.q(rcx_6 - rax_11)], rax_11 << 3)
                    rcx_6 = *(arg1 + 0x58)
                
                *(arg1 + 0x58) = rcx_6 - 1
                sub_1405c53d0(arg1 + 0x50)
                rax_9 = *(arg1 + 0x58)
                rsi_1 -= 1
                rbp_1 -= 8
            
            rsi_1 += 1
            rbp_1 += 8
            rcx_6 = rax_9
        while (rsi_1 s< rax_9)
        rdi = arg1 - 0xb0

if (((*(arg2 + 0x3c) u>> 1).b & 1) != 0)
    int64_t* r10_3 = *(arg1 + 0x10)
    uint64_t r9_3 = sx.q(*(arg1 + 0x18))
    int64_t* rcx_10 = r10_3
    void* rdx_3 = &r10_3[r9_3]
    
    if (r10_3 != rdx_3)
        do
            if (*rcx_10 == arg2)
                int32_t rcx_12 = ((rcx_10 - r10_3) s>> 3).d
                
                if (rcx_12 != 0xffffffff)
                    int32_t rax_19 = r9_3.d - rcx_12 - 1
                    
                    if (rax_19 s>= 1)
                        rax_19 = 1
                    
                    if (rax_19 != 0)
                        memcpy(&r10_3[sx.q(rcx_12)], &r10_3[sx.q(r9_3.d - rax_19)], rax_19 << 3)
                        r9_3 = zx.q(*(arg1 + 0x18))
                    
                    *(arg1 + 0x18) = (r9_3 - 1).d
                    sub_1405c53d0(arg1 + 0x10)
                
                break
            
            rcx_10 = &rcx_10[1]
        while (rcx_10 != rdx_3)
    
    *(arg1 + 0xc) |= 2

char var_38
void* var_30

if (((*(arg2 + 0x3c) & 0x10) != 0 || *(arg2 + 0x40) != 0 || *(arg2 + 0x42) != 0) && r12 == 4)
    int64_t rbp_2 = sx.q(*(rdi + 0xe8))
    var_38 = 1
    var_30 = arg2
    int32_t rax_23 = (rbp_2 + 1).d
    *(rdi + 0xe8) = rax_23
    
    if (rax_23 s> *(rdi + 0xec))
        sub_1405a4f90(rdi + 0xe0)
    
    *(*(rdi + 0xe0) + rbp_2 * 0x10) = var_38.o
    
    if (*(rdi + 0xe8) == 1 && (*(rdi + 0xbc) & 1) == 0 && *(rdi + 0xb8) == 0)
        sub_14263c400(rdi)

if (*(arg2 + 0x50) != 0 && sub_140d3e110(arg2 + 0x48) != 0)
    r15 = *(arg2 + 0x50)

if ((*(arg2 + 0x3c) & 0xa0) == 0 && r15 != 0)
    (*(*r15 + 0x40))(r15, arg2)

int32_t result = (*(*rdi + 0x3e8))(rdi)

if ((*(rdi + 0x8a) & 1) != result.b)
    int64_t r9_5 = *rdi
    result = (*(r9_5 + 0x278))(rdi, zx.q(result.b), 0, r9_5, var_38, var_30)

if (rdi != 0)
    result = *(rdi + 0xb8) - 1
    bool cond:1_1 = *(rdi + 0xe8) == 0
    *(rdi + 0xb8) = result
    
    if (not(cond:1_1) && (*(rdi + 0xbc) & 1) == 0 && result == 0)
        return sub_14263c400(rdi) __tailcall

return result
