// 函数: sub_141019670
// 地址: 0x141019670
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_c8
int64_t rax_1 = __security_cookie ^ &var_c8
void** const var_68 = &data_142da2668
void* var_60 = arg1
void*** var_78 = nullptr
int64_t* result_1 = nullptr
int64_t (* var_88)(int64_t* arg1, int64_t* arg2) = sub_141016020
AcquireSRWLockExclusive(arg1 + 0xb0)
void* rdi_2

if (*(arg1 + 0x18) == *(arg1 + 0x44))
label_141019753:
    rdi_2 = nullptr
else
    void* rcx_1 = *(arg1 + 0x50)
    void* r8_1 = arg1 + 0x48
    
    if (rcx_1 != 0)
        r8_1 = rcx_1
    
    int32_t rbx_1 = *(r8_1 + (((sx.q(*(arg1 + 0x58)) - 1) & sx.q(arg2[0x2d].d)) << 2))
    
    if (rbx_1 == 0xffffffff)
    label_141019753_1:
        rdi_2 = nullptr
    else
        int64_t r14_1 = *(arg1 + 0x10)
        
        while (true)
            rdi_2 = sx.q(rbx_1) * 0x310 + r14_1
            void var_a8
            
            if (sub_141010a20(&var_a8, rdi_2, arg2) != 0)
                break
            
            rbx_1 = *(rdi_2 + 0x308)
            
            if (rbx_1 == 0xffffffff)
                goto label_141019753_2
        
        if (rbx_1 == 0xffffffff)
        label_141019753_2:
            rdi_2 = nullptr

void* rax_6 = rdi_2 + 0x300

if (rdi_2 == 0)
    rax_6 = nullptr

if (rax_6 == 0)
    int64_t* result_4 = j_sub_140a82f30(0x30)
    int64_t* result_3 = result_4
    
    if (result_4 == 0)
        result_3 = nullptr
    else
        *result_4 = *(arg1 + 8)
        int32_t rdx_5 = (1 << (data_1439c7a34).b) - 1
        result_4[1].d = rdx_5
        *(result_4 + 0xc) = rdx_5
        result_4[2] = 0
        result_4[3] = 0
        InitializeSRWLock(&result_4[4])
        result_3[5].b = 0
    
    int64_t* result_2 = result_3
    sub_141000fa0(arg1 + 0x10, arg2, &result_2)
    result_1 = result_2
    ReleaseSRWLockExclusive(arg1 + 0xb0)
    void** var_90 = &result_1
    void*** rcx_9 = &var_68
    
    if (var_78 != 0)
        rcx_9 = var_78
    
    var_88((*rcx_9)[1](rcx_9), &var_90, arg2)
else
    result_1 = *rax_6
    ReleaseSRWLockExclusive(arg1 + 0xb0)

if (var_88 != 0)
    void** const* rcx_11 = &var_68
    
    if (var_78 != 0)
        rcx_11 = var_78
    
    (*rcx_11)[2](rcx_11)

int64_t* result = result_1
__security_check_cookie(rax_1 ^ &var_c8)
return result
