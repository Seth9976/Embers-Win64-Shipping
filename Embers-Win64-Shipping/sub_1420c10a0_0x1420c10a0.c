// 函数: sub_1420c10a0
// 地址: 0x1420c10a0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (arg1 == 0)
    return 

int32_t rsi_1 = *(arg2 + 0x80)
int64_t* r12_1 = *(arg2 + 0x78)
int64_t* var_48 = r12_1
int32_t var_34_1 = rsi_1
int32_t r14_1 = *(r12_1 + 0x3c)
int32_t var_38_1 = r14_1
int32_t var_40_1 = arg1.d
int32_t rdi_1

if (arg4 s>= 0)
    rdi_1 = arg1[1].d

if (arg4 s>= 0 && (arg4 s< rdi_1 || (arg4 s>= 0 && arg4 s<= rdi_1)))
    rsi_1.b = not.b(rsi_1.b)
    arg1[1].d = rdi_1 + 1
    int32_t rcx = *(arg1 + 0xc)
    rsi_1.b &= 1
    void* r9_1
    
    if (rsi_1.b != 0)
        if (rdi_1 + 1 s> rcx)
            sub_140ce4cd0(arg1, zx.q(rdi_1), r14_1)
        
        r9_1 = *arg1
    else
        if (rdi_1 + 1 s> rcx)
            sub_140ce4c40(arg1, rdi_1, r14_1)
        
        r9_1 = *arg1
        
        if ((r9_1.b & 1) != 0)
            r9_1 = (r9_1 s>> 1) + arg1
    
    int64_t r15_1 = sx.q(r14_1 * arg4)
    memmove(sx.q((arg4 + 1) * r14_1) + r9_1, r15_1 + r9_1, (rdi_1 - arg4) * r14_1)
    sub_1420b6b60(&var_48, arg4, 1)
    void* rcx_6
    
    if (arg1[1].d != 0)
        void* rax_6 = *arg1
        
        if (rsi_1.b == 0 && (rax_6.b & 1) != 0)
            rax_6 = (rax_6 s>> 1) + arg1
        
        rcx_6 = r15_1 + rax_6
    else
        rcx_6 = nullptr
    
    (*(*r12_1 + 0xc0))(r12_1, rcx_6, arg3)
else
    int32_t rax_9 = arg1[1].d
    int32_t rbx_2 = rax_9 - 1
    
    if (rax_9 s<= 0)
        rbx_2 = 0
    
    sub_140b63b70(arg2 + 0x28, &var_48)
    int16_t* const rdi_4 = &data_142d40450
    int64_t* r8_4 = &data_142d40450
    int32_t var_68_1 = rbx_2
    
    if (var_40_1 != 0)
        r8_4 = var_48
    
    int16_t* var_58
    sub_140a2e390(&var_58, Attempted to insert an item into array %s out of bounds [%d/%d]!", r8_4)
    data_143f47df0
    int32_t var_50
    
    if (var_50 != 0)
        rdi_4 = var_58
    
    sub_140d23f50(rdi_4, 3)
    int16_t* rcx_11 = var_58
    
    if (rcx_11 != 0)
        sub_140a74f90(rcx_11)
    
    int64_t* rcx_12 = var_48
    
    if (rcx_12 != 0)
        sub_140a74f90(rcx_12)
