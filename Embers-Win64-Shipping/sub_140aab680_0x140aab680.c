// 函数: sub_140aab680
// 地址: 0x140aab680
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

EnterCriticalSection(arg1)
int32_t rax = sub_140a5ff80(arg2, 0)
int32_t r9 = arg1->__offset(0x30).d
int32_t rsi = 0
int32_t arg_18 = rax
int64_t* rdi_1

if (r9 == arg1->__offset(0x5c).d)
label_140aab748:
    rdi_1 = nullptr
else
    void* rdx = arg1->__offset(0x68).q
    void* __offset(_RTL_CRITICAL_SECTION, 0x60) r9_1 = arg1 + 0x60
    
    if (rdx != 0)
        r9_1 = rdx
    
    int32_t rbx_1 = *(r9_1 + (((sx.q(arg1->__offset(0x70).d) - 1) & sx.q(rax)) << 2))
    
    if (rbx_1 == 0xffffffff)
    label_140aab748_1:
        rdi_1 = nullptr
    else
        int64_t r14_1 = arg1->__offset(0x28).q
        
        while (true)
            int64_t rcx_2 = sx.q(rbx_1) * 5
            int64_t rax_2 = sx.q(*(r14_1 + (rcx_2 << 3) + 8))
            rdi_1 = r14_1 + (rcx_2 << 3)
            
            if (rax_2.d == arg3 && memcmp(*rdi_1, arg2, rax_2 * 2) == 0)
                break
            
            rbx_1 = rdi_1[4].d
            
            if (rbx_1 == 0xffffffff)
                goto label_140aab748_2
        
        if (rbx_1 == 0xffffffff)
        label_140aab748_2:
            rdi_1 = nullptr

void* rbx_2 = &rdi_1[2]
int16_t* const rdi_2 = &data_142d40450

if (rdi_1 == 0)
    rbx_2 = nullptr

int32_t rsi_1

if (rbx_2 != 0)
    rsi_1 = arg_18
else
    int16_t* var_68 = nullptr
    int32_t var_60_1 = 0
    
    if (arg3 + 1 s> 0)
        sub_1405947f0(&var_68, arg3 + 1)
    
    sub_140a20ba0(&var_68, arg2, arg3)
    int16_t* const rax_5
    
    if (var_60_1 == 0)
        rax_5 = &data_142d40450
    else
        rsi = var_60_1 - 1
        rax_5 = var_68
    
    int16_t* const var_58 = rax_5
    int32_t var_50_1 = rsi
    rsi_1 = arg_18
    int64_t* var_48 = &var_58
    int32_t var_4c_1 = rsi_1
    int64_t* var_40_1 = &var_68
    sub_140a91f20(&arg1[1], &arg_18, &var_48, nullptr)
    rbx_2 = arg1->__offset(0x28).q + ((sx.q(arg_18) * 5 + 2) << 3)
    int16_t* rcx_9 = var_68
    
    if (rcx_9 != 0)
        sub_140a74f90(rcx_9)

if (*(rbx_2 + 8) != 0)
    rdi_2 = *rbx_2

*arg4 = rdi_2
*arg5 = rsi_1

if (arg1 == 0)
    return arg5

return LeaveCriticalSection(arg1)
