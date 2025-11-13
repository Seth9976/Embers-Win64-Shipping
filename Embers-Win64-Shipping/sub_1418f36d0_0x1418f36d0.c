// 函数: sub_1418f36d0
// 地址: 0x1418f36d0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t rbp = arg8
*arg1 = &data_142ff18d8
sub_1418f2510(&arg1[1], arg2, arg3, arg4, arg5, arg6, arg7, rbp, arg9, arg10, arg11, arg13, arg14)
__builtin_memset(&arg1[0x10], 0, 0x14)
int64_t r12
r12.b = arg3 - 4 u<= 2
arg1[0x13] = 0
arg1[0x14] = 0
int32_t r10 = *arg12
*(arg1 + 0x24) = r10
arg1[4].d = *arg12
int32_t var_40

if (arg3 != 0x7fffffff)
    int64_t r8 = arg1[3]
    
    if (r8 != 0)
        int32_t rdx
        bool cond:1_1
        
        if (r12.b == 0)
            rdx = arg7
            cond:1_1 = arg7 u<= 1
        else
            rdx = rbp
            cond:1_1 = rbp u<= 1
        
        if (cond:1_1)
            rdx = 1
        
        int32_t rcx_1 = 1
        var_40.q = arg12
        
        if (arg1[0xe].d u>= 1)
            rcx_1 = arg1[0xe].d
        
        int64_t var_48
        var_48.d = rdx
        sub_1418f7360(&arg1[0x10], arg2, r8, arg3, arg1[0xf].d, arg4, r10, 0, rcx_1, 0, var_48.d, 
            var_40, 0)

if (arg1[0xf].d != *(arg1 + 0x7c))
    int64_t* rax_12 = j_sub_140a82f30(0x18)
    int64_t* r14_1 = rax_12
    
    if (rax_12 == 0)
        r14_1 = nullptr
    else
        __builtin_memset(rax_12, 0, 0x14)
    
    arg1[0x13] = r14_1
    bool cond:3_1
    
    if (r12.b == 0)
        rbp = arg7
        cond:3_1 = arg7 u<= 1
    else
        cond:3_1 = rbp u<= 1
    
    int32_t rax_13 = 1
    
    if (cond:3_1)
        rbp = 1
    
    int64_t rbx_1 = arg1[3]
    
    if (arg9 u>= 1)
        rax_13 = arg9
    
    var_40.q = arg12
    *r14_1 = sub_141903390(arg2, rbx_1, arg1[0xc].d, *(arg1 + 0x7c), *(arg1 + 0x34), 
        *(arg1 + 0x24), 0, rax_13, 0, rbp, 0, var_40)
    r14_1[1] = rbx_1
    
    if (data_1439c7a08 s<= 1)
        int32_t rdi_1 = (data_143efb4e0).d
        data_143efb4e0 += 1
        r14_1[2].d = rdi_1 + 1
else
    arg1[0x13] = &arg1[0x10]

sub_1418fbbb0(arg2, arg11, 5)
return arg1
