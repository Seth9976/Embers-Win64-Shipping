// 函数: sub_141dee4c0
// 地址: 0x141dee4c0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* rcx = arg5
int64_t rax_1 = (*(*rcx + 0x18))(rcx)
EnterCriticalSection(&arg2[3])
void* r8 = arg2[1]
void* rcx_2 = r8
void* rdx_2 = (sx.q(arg2[2].d) << 5) + r8
int32_t rcx_3

if (r8 == rdx_2)
label_141dee532:
    rcx_3 = -1
else
    while (*(rcx_2 + 0x18) != arg3)
        rcx_2 += 0x20
        
        if (rcx_2 == rdx_2)
            goto label_141dee532
    
    rcx_3 = ((rcx_2 - r8) s>> 5).d

void* rbp_2 = (sx.q(rcx_3) << 5) + r8
QueryPerformanceCounter(&arg5)
void** result

if (rax_1 == 0)
    int32_t* rdx_5 = arg2[0xc]
    int64_t r8_1 = sx.q(arg2[0xd].d)
    int32_t* rax_7 = rdx_5
    void* rcx_13 = &rdx_5[r8_1]
    
    if (rdx_5 != rcx_13)
        while (*rax_7 != arg3)
            rax_7 = &rax_7[1]
            
            if (rax_7 == rcx_13)
                goto label_141dee6bd
        
        result = (rax_7 - rdx_5) s>> 2
    
    if (rdx_5 == rcx_13 || result.d == 0xffffffff)
    label_141dee6bd:
        int32_t rax_9 = (r8_1 + 1).d
        arg2[0xd].d = rax_9
        
        if (rax_9 s> *(arg2 + 0x6c))
            sub_1405a4cf0(&arg2[0xc])
        
        result = arg2[0xc]
        *(result + (r8_1 << 2)) = arg3
else
    uint64_t* rax_2 = j_sub_140a82f30(0x70)
    uint64_t* rdi_1 = rax_2
    
    if (rax_2 == 0)
        rdi_1 = nullptr
    else
        __builtin_memset(rax_2, 0, 0x6c)
    
    void** const var_c8
    memset(&var_c8, 0, 0x90)
    sub_140b4c2a0(&var_c8)
    int64_t var_38_1 = 0
    var_c8 = &data_142ef5568
    int64_t var_30_1 = rax_1
    int64_t var_20_1 = 0x7fffffffffffffff
    int32_t r9
    int32_t var_28_1 = r9
    sub_140b55290(&var_c8, 1)
    var_c8[0x1b](&var_c8, 0)
    void* r9_1 = *arg2
    char var_d0_1 = 1
    sub_141e0c0a0(rdi_1, &var_c8, 0, r9_1, arg4, *(r9_1 + 0x38), *(r9_1 + 0xc8), (*(r9_1 + 0xd0)).b)
    *rbp_2
    *rbp_2 = rdi_1
    *(rbp_2 + 0x1c) = 1
    *(rbp_2 + 0x10) = -0x4000000000000000
    sub_140a74f90(rax_1)
    result = sub_140b4cb40(&var_c8)

if (arg2 == -0x18)
    return result

return LeaveCriticalSection(&arg2[3])
