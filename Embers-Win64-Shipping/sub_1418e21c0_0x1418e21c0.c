// 函数: sub_1418e21c0
// 地址: 0x1418e21c0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_e8
int64_t rax_1 = __security_cookie ^ &var_e8
int32_t r8 = *(arg4 + 0x370)
int32_t var_b8 = r8
uint64_t rcx_2 = zx.q(*(arg3 + 0x24)) << 0x20 | zx.q(*(arg3 + 0x20))
uint64_t var_88 = zx.q(*(arg3 + 0xc)) << 0x20 | zx.q(*(arg3 + 8))
uint64_t var_80 = rcx_2
uint64_t var_78 = zx.q(*(arg3 + 0x3c)) << 0x20 | zx.q(*(arg3 + 0x38))
uint64_t var_70 = zx.q(*(arg3 + 0x54)) << 0x20 | zx.q(*(arg3 + 0x50))
uint64_t var_68 = zx.q(*(arg3 + 0x6c)) << 0x20 | zx.q(*(arg3 + 0x68))
uint64_t var_60 = zx.q(*(arg3 + 0x84)) << 0x20 | zx.q(*(arg3 + 0x80))
uint64_t var_58 = zx.q(*(arg3 + 0x9c)) << 0x20 | zx.q(*(arg3 + 0x98))
uint64_t var_50 = zx.q(*(arg3 + 0xb4)) << 0x20 | zx.q(*(arg3 + 0xb0))
int32_t rax_10 = sub_140b21160(&var_88, 0x40, r8)
int32_t rcx_22 = *(arg1 + 0x58)
int64_t* result_1 = nullptr
int64_t r10 = sx.q(rax_10)
var_b8 = r10.d
void* const rcx_24

if (rcx_22 == *(arg1 + 0x84))
label_1418e2310:
    rcx_24 = nullptr
else
    void* r9 = arg1 + 0x88
    void* rdx_3 = *(r9 + 8)
    
    if (rdx_3 != 0)
        r9 = rdx_3
    
    int32_t rax_11 = *(r9 + (((sx.q(*(arg1 + 0x98)) - 1) & r10) << 2))
    
    if (rax_11 == 0xffffffff)
    label_1418e2310_1:
        rcx_24 = nullptr
    else
        int64_t r8_4 = *(arg1 + 0x50)
        
        while (true)
            int64_t rdx_4 = sx.q(rax_11) * 3
            rcx_24 = r8_4 + (rdx_4 << 3)
            
            if (*(r8_4 + (rdx_4 << 3)) == r10.d)
                break
            
            rax_11 = *(rcx_24 + 0x10)
            
            if (rax_11 == 0xffffffff)
                goto label_1418e2310_2
        
        if (rax_11 == 0xffffffff)
        label_1418e2310_2:
            rcx_24 = nullptr

void* rax_12 = rcx_24 + 8

if (rcx_24 == 0)
    rax_12 = nullptr

int64_t* var_b0

if (rax_12 == 0)
    int64_t* rax_16 = j_sub_140a82f30(0x10)
    
    if (rax_16 == 0)
        rax_16 = nullptr
    else
        *rax_16 = 0
        rax_16[1] = 0
    
    var_b0 = rax_16
    int32_t* var_a0 = &var_b8
    int64_t** var_98_1 = &var_b0
    int32_t var_a8
    sub_140b91f20(arg1 + 0x50, &var_a8, &var_a0, nullptr)
    goto label_1418e23c9

int64_t* rax_13 = *rax_12
int32_t rbx_1 = 0
var_b0 = rax_13
int64_t* result

if (rax_13[1].d s<= 0)
label_1418e23c9:
    int64_t* rax_17 = j_sub_140a82f30(0x100)
    
    if (rax_17 != 0)
        result_1 = sub_1418f15d0(rax_17, arg2, arg3, arg4, arg5)
    
    int64_t* rbx_2 = var_b0
    int64_t rdi_2 = sx.q(rbx_2[1].d)
    int32_t rax_19 = (rdi_2 + 1).d
    rbx_2[1].d = rax_19
    
    if (rax_19 s> *(rbx_2 + 0xc))
        sub_1405a4d70(rbx_2)
    
    *(*rbx_2 + (rdi_2 << 3)) = result_1
    result = result_1
else
    int64_t* rdi_1 = nullptr
    
    while (true)
        if (sub_1418fdd40(*(rdi_1 + *rax_13), arg3) != 0)
            result = *(*var_b0 + (sx.q(rbx_1) << 3))
            break
        
        rax_13 = var_b0
        rbx_1 += 1
        rdi_1 = &rdi_1[1]
        
        if (rbx_1 s>= rax_13[1].d)
            goto label_1418e23c9

__security_check_cookie(rax_1 ^ &var_e8)
return result
