// 函数: sub_1422be420
// 地址: 0x1422be420
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* r14 = arg2
int64_t* rdi = arg2[1]
int64_t* rbx = *arg2
int64_t* r15_2 = (zx.q(arg3) << 5) + **(arg1 + 0x10)
uint32_t rcx = zx.d(rbx[1].w)
int16_t rax_1 = rdi[1].w
void* rax_2 = *r15_2
int16_t result_2 = rcx.w
void* rdx = *(rax_2 + 0x78)
int32_t r8 = *(rax_2 + 0x80)
int32_t rax_3 = *(rdx + 0x3c)
void* var_80 = rdx
int32_t var_70 = rax_3
int32_t var_6c = r8
int64_t* var_78 = rdi
sub_1422cf5a0(&var_80, rcx)
uint32_t result_1 = zx.d(result_2)
char r12 = *(arg1 + 1)
int32_t rbp = 0
int64_t var_90 = 0
int16_t rdx_2 = 0
int32_t var_88 = 0
int32_t rsi = 0
int64_t rbx_1 = *rbx
uint64_t result = zx.q(result_1)
int64_t rdi_1 = *rdi
*(arg1 + 1) = r12

if (result_1 != 0)
    do
        int32_t rcx_3 = zx.d(*(r15_2 + 0xa)) * rsi
        
        if (r12 != 0 || rsi s>= zx.d(rax_1))
            result.b = 1
        else
            result.b = 0
        
        *(arg1 + 1) = result.b
        int64_t rcx_4 = sx.q(rcx_3)
        int16_t r9 = r15_2[1].w - 1
        int64_t var_68 = rcx_4 + rbx_1
        int64_t var_60_1 = rcx_4 + rdi_1
        int64_t* var_58_1 = &var_90
        result_1 = zx.d(result_2)
        rsi += 1
        rdx_2 = sub_1422be6d0(arg1, &var_68, arg3 + 1, r9, rdx_2)
        result = zx.q(result_1)
    while (rsi s< result_1)
    
    rbp = var_88
    r14 = arg2

*(arg1 + 1) = r12
uint64_t* rbx_5
int64_t rdi_5

if (rbp != 0)
    int64_t* rbx_2 = r14[2]
    int64_t rdi_2 = sx.q(rbx_2[1].d)
    int32_t rax_7 = (rdi_2 + 1).d
    rbx_2[1].d = rax_7
    
    if (rax_7 s> *(rbx_2 + 0xc))
        sub_140594770(rbx_2)
    
    *(*rbx_2 + (rdi_2 << 1)) = arg4
    int64_t* rbx_3 = r14[2]
    int64_t rdi_3 = sx.q(rbx_3[1].d)
    int32_t rax_9 = (rdi_3 + 1).d
    rbx_3[1].d = rax_9
    
    if (rax_9 s> *(rbx_3 + 0xc))
        sub_140594770(rbx_3)
    
    *(*rbx_3 + (rdi_3 << 1)) = rbp.w
    uint64_t* rbx_4 = r14[2]
    
    if (var_88 != 0)
        int32_t rax_11 = rbx_4[1].d
        int32_t rdx_7 = rax_11 + var_88
        
        if (rdx_7 s> *(rbx_4 + 0xc))
            sub_1405947f0(rbx_4, rdx_7)
            rax_11 = rbx_4[1].d
        
        memcpy(*rbx_4 + (sx.q(rax_11) << 1), var_90, var_88 * 2)
        rbx_4[1].d += var_88
    
    rbx_5 = r14[2]
    rdi_5 = sx.q(rbx_5[1].d)
    int32_t rax_13 = (rdi_5 + 1).d
    rbx_5[1].d = rax_13
    
    if (rax_13 s> *(rbx_5 + 0xc))
        sub_140594770(rbx_5)
    
    result = *rbx_5
    *(result + (rdi_5 << 1)) = 0
else if (result_1.w != rax_1)
    int64_t* rbx_6 = r14[2]
    int64_t rdi_6 = sx.q(rbx_6[1].d)
    int32_t rax_14 = (rdi_6 + 1).d
    rbx_6[1].d = rax_14
    
    if (rax_14 s> *(rbx_6 + 0xc))
        sub_140594770(rbx_6)
    
    *(*rbx_6 + (rdi_6 << 1)) = arg4
    int64_t* rbx_7 = r14[2]
    int64_t rdi_7 = sx.q(rbx_7[1].d)
    int32_t rax_16 = (rdi_7 + 1).d
    rbx_7[1].d = rax_16
    
    if (rax_16 s> *(rbx_7 + 0xc))
        sub_140594770(rbx_7)
    
    *(*rbx_7 + (rdi_7 << 1)) = 0
    rbx_5 = r14[2]
    rdi_5 = sx.q(rbx_5[1].d)
    int32_t rax_18 = (rdi_5 + 1).d
    rbx_5[1].d = rax_18
    
    if (rax_18 s> *(rbx_5 + 0xc))
        sub_140594770(rbx_5)
    
    result = *rbx_5
    *(result + (rdi_5 << 1)) = 0
int64_t rcx_15 = var_90

if (rcx_15 == 0)
    return result

return sub_140a74f90(rcx_15)
