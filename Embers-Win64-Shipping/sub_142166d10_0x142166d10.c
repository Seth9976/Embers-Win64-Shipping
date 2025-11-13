// 函数: sub_142166d10
// 地址: 0x142166d10
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* rbx = *(arg1 + 0x2e8)
int32_t var_f8
int32_t arg_8
int32_t rax_5

if (rbx[1].d == *(rbx + 0x34))
label_142166d95:
    sub_14090a150(rbx, &var_f8)
    int32_t* var_f0
    *var_f0 = *arg2
    int32_t rax_3 = var_f8
    *(var_f0 + 4) = -2
    sub_1414529f0(rbx, &arg_8, *var_f0, var_f0, rax_3, nullptr)
    rax_5 = *(*rbx + sx.q(arg_8) * 0x10 + 4)
else
    int64_t r9 = sx.q(*arg2)
    void* r8 = &rbx[7]
    void* rcx = *(r8 + 8)
    
    if (rcx != 0)
        r8 = rcx
    
    int32_t rax_1 = *(r8 + (((sx.q(rbx[9].d) - 1) & r9) << 2))
    
    if (rax_1 == 0xffffffff)
        goto label_142166d95
    
    int64_t r8_1 = *rbx
    int64_t rdx_3
    
    while (true)
        rdx_3 = sx.q(rax_1)
        int64_t rcx_2 = rdx_3 * 2
        
        if (*(r8_1 + (rcx_2 << 3)) == r9.d)
            break
        
        rax_1 = *(r8_1 + (rcx_2 << 3) + 8)
        
        if (rax_1 == 0xffffffff)
            goto label_142166d95
    
    if (rax_1 == 0xffffffff)
        goto label_142166d95
    
    int64_t rdx_6 = rdx_3 << 4
    void* rdx_7 = rdx_6 + r8_1
    
    if (rdx_6 == neg.q(r8_1) || rdx_7 == -4)
        goto label_142166d95
    
    rax_5 = *(rdx_7 + 4)

if (rax_5 != 0xffffffff)
    void* rsi_1 = *(arg1 + 0x310)
    char r12_1 = *(rsi_1 + 0x152)
    *(rsi_1 + 0x152) = 1
    int64_t rbx_1 = data_143f4d190
    int64_t rcx_8
    
    if (data_143de5480 == 0)
        rcx_8 = 0
    else
        rcx_8.b = GetCurrentThreadId() != data_143de5470
    
    int32_t r14_1 = *(rbx_1 + (rcx_8 << 2))
    int64_t rbx_2 = sx.q(*(arg1 + 0x140))
    int32_t rax_7 = (rbx_2 + 1).d
    *(arg1 + 0x140) = rax_7
    
    if (rax_7 s> *(arg1 + 0x144))
        sub_1405a4f90(arg1 + 0x138)
    
    int64_t* rbx_4 = (rbx_2 << 4) + *(arg1 + 0x138)
    *rbx_4 = 0
    rbx_4[1] = 0
    
    if (r14_1 s> 0)
        sub_1405c5510(rbx_4, r14_1)
    
    arg_8.q = 0
    void** const var_e8
    memset(&var_e8, 0, 0x90)
    sub_140b4c2a0(&var_e8)
    int64_t var_58_1 = 0
    var_e8 = &data_142d6ad48
    int64_t* var_50_1 = rbx_4
    int64_t var_48_1 = 0
    sub_140b552b0(&var_e8, 1)
    var_e8[0x1b](&var_e8, 0)
    int32_t var_108
    var_108.q = sub_140596d10(&var_f8, arg4)
    sub_14216b1e0(arg1, &var_e8, *arg2, arg3, var_108, arg5)
    int32_t rdx_15 = rbx_4[1].d
    
    if (*(rbx_4 + 0xc) != rdx_15)
        sub_1405c5510(rbx_4, rdx_15)
    
    int64_t* r9_3 = *(arg1 + 0x2e8)
    
    if (r9_3[1].d != *(r9_3 + 0x34))
        void* rdx_16 = r9_3[8]
        void* r8_4 = &r9_3[7]
        int64_t r10_1 = sx.q(*arg2)
        
        if (rdx_16 != 0)
            r8_4 = rdx_16
        
        int32_t i = *(r8_4 + (((sx.q(r9_3[9].d) - 1) & r10_1) << 2))
        
        if (i != 0xffffffff)
            int64_t r8_5 = *r9_3
            
            do
                int64_t i_1 = sx.q(i)
                int64_t rcx_22 = i_1 * 2
                
                if (*(r8_5 + (rcx_22 << 3)) == r10_1.d)
                    if (i != 0xffffffff)
                        int64_t rdx_17 = i_1 << 4
                        void* rdx_18 = rdx_17 + r8_5
                        
                        if (rdx_17 != neg.q(r8_5) && rdx_18 != -4)
                            *(rdx_18 + 4) = 0xffffffff
                    
                    break
                
                i = *(r8_5 + (rcx_22 << 3) + 8)
            while (i != 0xffffffff)
    
    sub_140b4cb40(&var_e8)
    *(rsi_1 + 0x152) = r12_1

sub_14084eee0(arg1 + 0x148, 0)
void* result
result.b = 1
*(arg1 + 0x308) = 0
return result
