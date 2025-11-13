// 函数: sub_140aab440
// 地址: 0x140aab440
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* arg_10 = arg2
EnterCriticalSection(arg1)
int32_t rsi = arg2[1].d
int16_t* const r12 = &data_142d40450
int32_t rbp = 0
int32_t r15 = rsi - 1

if (rsi == 0)
    r15 = 0

int16_t* buffer2

if (rsi == 0)
    buffer2 = &data_142d40450
else
    buffer2 = *arg2

int64_t r10 = sx.q(sub_140a5ff80(buffer2, 0))
int32_t var_88 = r10.d
int64_t* rdi_2

if (arg1->__offset(0x30).d == *(arg1 + 0x5c))
label_140aab52f:
    rdi_2 = nullptr
else
    void* rdx = *(arg1 + 0x68)
    void* r9 = arg1 + 0x60
    
    if (rdx != 0)
        r9 = rdx
    
    int32_t rbx_1 = *(r9 + (((sx.q(*(arg1 + 0x70)) - 1) & r10) << 2))
    
    if (rbx_1 == 0xffffffff)
    label_140aab52f_1:
        rdi_2 = nullptr
    else
        int64_t DebugInfo = arg1[1].DebugInfo
        
        while (true)
            rdi_2 = sx.q(rbx_1) * 0x28 + DebugInfo
            int64_t rax_3 = sx.q(rdi_2[1].d)
            
            if (rax_3.d == r15 && memcmp(*rdi_2, buffer2, rax_3 * 2) == 0)
                break
            
            rbx_1 = rdi_2[4].d
            
            if (rbx_1 == 0xffffffff)
                goto label_140aab52f_2
        
        if (rbx_1 == 0xffffffff)
        label_140aab52f_2:
            rdi_2 = nullptr

int16_t** rbx_2 = &rdi_2[2]

if (rdi_2 == 0)
    rbx_2 = nullptr

int32_t rsi_1
CRITICAL_SECTION* lpCriticalSection

if (rbx_2 != 0)
    lpCriticalSection = arg1
    rsi_1 = var_88
else
    int64_t* rbx_3 = arg_10
    int16_t* const rax_5 = nullptr
    uint64_t var_80 = 0
    int64_t rbx_4 = *rbx_3
    
    if (rsi != 0)
        sub_1405a4c70(&var_80, rsi, 0)
        memcpy(var_80, rbx_4, rsi * 2)
        rax_5 = var_80
    else
        int32_t var_74_1 = 0
    
    if (rsi == 0)
        rax_5 = &data_142d40450
    else
        rbp = rsi - 1
    
    lpCriticalSection = arg1
    rsi_1 = var_88
    int16_t* const var_70 = rax_5
    int32_t var_68_1 = rbp
    int64_t* var_60 = &var_70
    int32_t var_64_1 = rsi_1
    uint64_t* var_58_1 = &var_80
    sub_140a91f20(&lpCriticalSection[1], &arg_10, &var_60, nullptr)
    rbx_2 = lpCriticalSection->__offset(0x28).q + ((sx.q(arg_10.d) * 5 + 2) << 3)
    uint64_t rcx_9 = var_80
    
    if (rcx_9 != 0)
        sub_140a74f90(rcx_9)

if (rbx_2[1].d != 0)
    r12 = *rbx_2

*arg3 = r12
*arg4 = rsi_1

if (lpCriticalSection == 0)
    return arg4

return LeaveCriticalSection(lpCriticalSection)
