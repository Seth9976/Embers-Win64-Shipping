// 函数: sub_140aab880
// 地址: 0x140aab880
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t arg_20 = arg4
EnterCriticalSection(arg1)
int32_t rsi = 0
int64_t* rdi_1

if (arg1->__offset(0x30).d == arg1->__offset(0x5c).d)
label_140aab928:
    rdi_1 = nullptr
else
    void* r8 = arg1->__offset(0x68).q
    void* r9 = arg1 + 0x60
    
    if (r8 != 0)
        r9 = r8
    
    int32_t rbx_1 = *(r9 + (((sx.q(arg1->__offset(0x70).d) - 1) & sx.q(arg4)) << 2))
    
    if (rbx_1 == 0xffffffff)
    label_140aab928_1:
        rdi_1 = nullptr
    else
        int64_t r15_1 = arg1->__offset(0x28).q
        
        while (true)
            int64_t rcx = sx.q(rbx_1) * 5
            int64_t rax_2 = sx.q(*(r15_1 + (rcx << 3) + 8))
            rdi_1 = r15_1 + (rcx << 3)
            
            if (rax_2.d == arg3 && memcmp(*rdi_1, arg2, rax_2 * 2) == 0)
                break
            
            rbx_1 = rdi_1[4].d
            
            if (rbx_1 == 0xffffffff)
                goto label_140aab928_2
        
        if (rbx_1 == 0xffffffff)
        label_140aab928_2:
            rdi_1 = nullptr

void* rbx_2 = &rdi_1[2]
int16_t* const rdi_2 = &data_142d40450

if (rdi_1 == 0)
    rbx_2 = nullptr

if (rbx_2 == 0)
    int16_t* var_58 = nullptr
    int32_t var_50_1 = 0
    
    if (arg3 + 1 s> 0)
        sub_1405947f0(&var_58, arg3 + 1)
    
    sub_140a20ba0(&var_58, arg2, arg3)
    int16_t* const rax_5
    
    if (var_50_1 == 0)
        rax_5 = &data_142d40450
    else
        rsi = var_50_1 - 1
        rax_5 = var_58
    
    int16_t* const var_48 = rax_5
    int32_t var_3c_1 = arg_20
    int32_t var_40_1 = rsi
    int64_t* var_38 = &var_48
    int64_t* var_30_1 = &var_58
    sub_140a91f20(&arg1[1], &arg_20, &var_38, nullptr)
    rbx_2 = arg1->__offset(0x28).q + ((sx.q(arg_20) * 5 + 2) << 3)
    int16_t* rcx_7 = var_58
    
    if (rcx_7 != 0)
        sub_140a74f90(rcx_7)

if (*(rbx_2 + 8) != 0)
    rdi_2 = *rbx_2

*arg5 = rdi_2

if (arg1 == 0)
    return arg5

return LeaveCriticalSection(arg1) __tailcall
