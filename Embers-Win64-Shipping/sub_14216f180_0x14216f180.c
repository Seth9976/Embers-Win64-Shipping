// 函数: sub_14216f180
// 地址: 0x14216f180
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t arg_18 = arg3
char rax_1 = (*(*arg1 + 0x368))()
int64_t r8 = *arg2
char result = (*(r8 + 0x1c0))(arg2, arg4, r8)

if (result == 0 || *(arg2 + 0x5f) == 0 || rax_1 == 0)
    return result

int64_t rbx_1 = arg_18
int32_t arg_8
int32_t rcx_4
int64_t rbx_2
uint32_t rsi_1

if (arg1[0x70].d == *(arg1 + 0x3ac))
label_14216f237:
    rcx_4 = 0
    arg_8 = 0
    rsi_1 = 0
    arg5 = 0
    rbx_2 = arg_8.q
else
    arg_8.q = rbx_1
    int32_t rax_4 = sub_140b5ead0(rbx_1.d) + arg5
    void* r8_1 = &arg1[0x76]
    void* rcx_2 = *(r8_1 + 8)
    
    if (rcx_2 != 0)
        r8_1 = rcx_2
    
    int32_t rax_6 = *(r8_1 + (((sx.q(arg1[0x78].d) - 1) & sx.q(rax_4)) << 2))
    
    if (rax_6 == 0xffffffff)
        goto label_14216f237
    
    int64_t r8_2 = arg1[0x6f]
    int64_t rdx_3
    
    while (true)
        rdx_3 = sx.q(rax_6)
        int64_t rcx_3 = rdx_3 * 3
        
        if (*(r8_2 + (rcx_3 << 3)) == rbx_1)
            break
        
        rax_6 = *(r8_2 + (rcx_3 << 3) + 0x10)
        
        if (rax_6 == 0xffffffff)
            goto label_14216f237
    
    if (rax_6 == 0xffffffff)
        goto label_14216f237
    
    void* rbx_3 = r8_2 + rdx_3 * 0x18
    
    if (rbx_3 == 0)
        goto label_14216f237
    
    rbx_2 = *(rbx_3 + 8)
    arg_8.q = rbx_2
    rcx_4 = arg_8
    rsi_1 = (rbx_2 u>> 0x20).d

bool cond:1_1 = (sub_140b5b8a0(rcx_4, 0) == 0 | rsi_1 != 0) != 0
int64_t rax_8 = arg_18

if (cond:1_1)
    rax_8 = rbx_2

arg_18 = rax_8
int64_t arg_10 = arg2[3]
int64_t* var_28 = &arg_10
int64_t* var_20_1 = &arg_18
return sub_14215a050(&arg1[0x6f], &arg_8, &var_28, nullptr)
