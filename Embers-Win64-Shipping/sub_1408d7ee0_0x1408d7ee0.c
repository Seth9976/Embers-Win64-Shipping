// 函数: sub_1408d7ee0
// 地址: 0x1408d7ee0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* arg_10 = arg2
int64_t r8 = arg2[2]
int64_t var_48 = r8
int64_t arg_8

if (*sub_140865c40(arg1 + 0x98, &arg_8, r8) != 0xffffffff)
    return (**arg2)(arg2, 1)

if (*(arg2 + 0x24) == 2)
    *(arg1 + 0x40) += 1

int64_t* var_58

if (*(arg1 + 0x38) != 0)
    sub_1408d8e50(arg2, arg1 + 0x30, (*(arg1 + 0x28) u>> 2).b & 1, arg3)
    int64_t* rbx_1 = arg_10
    
    if (*(rbx_1 + 0x24) == 2)
        void* rcx_3 = &rbx_1[0x12]
        int512_t zmm1
        zmm1.o = 0x3f800000
        int32_t arg_18 = rbx_1[4].d
        int32_t arg_20 = 0x3f800000
        arg_8.b = 0
        var_58 = rbx_1
        void* rax_3 = rbx_1[0x10]
        
        if (rax_3 != 0)
            rcx_3 = rax_3
        
        rbx_1[0xe]((*(*rcx_3 + 8))(rcx_3, zmm1), &var_58, &arg_20, &arg_18, &arg_8)

var_58 = &var_48
int64_t** var_50 = &arg_10
sub_1408d5f10(arg1 + 0x98, &arg_8, &var_58, nullptr)
int64_t rbx_3 = arg_10[3]
arg_8 = rbx_3
int32_t r9_3 = sub_140b5ead0(rbx_3.d) + arg_8:4.d
void* rsi_4

if (*(arg1 + 0x50) == *(arg1 + 0x7c))
label_1408d805d:
    rsi_4 = sub_1408d6090(arg1 + 0x48, r9_3, &arg_8)
else
    void* r8_5 = arg1 + 0x80
    void* rcx_7 = *(r8_5 + 8)
    
    if (rcx_7 != 0)
        r8_5 = rcx_7
    
    int32_t rax_9 = *(r8_5 + (((sx.q(*(arg1 + 0x90)) - 1) & sx.q(r9_3)) << 2))
    
    if (rax_9 == 0xffffffff)
    label_1408d805d_1:
        rsi_4 = sub_1408d6090(arg1 + 0x48, r9_3, &arg_8)
    else
        int64_t* rsi_3
        
        while (true)
            rsi_3 = (sx.q(rax_9) << 5) + *(arg1 + 0x48)
            
            if (*rsi_3 == rbx_3)
                break
            
            rax_9 = rsi_3[3].d
            
            if (rax_9 == 0xffffffff)
                goto label_1408d805d_2
        
        if (rax_9 == 0xffffffff || rsi_3 == 0)
        label_1408d805d_2:
            rsi_4 = sub_1408d6090(arg1 + 0x48, r9_3, &arg_8)
        else
            rsi_4 = &rsi_3[1]

int64_t rbx_4 = sx.q(*(rsi_4 + 8))

if (rbx_4.d s<= 0)
    int32_t rax_21 = (rbx_4 + 1).d
    *(rsi_4 + 8) = rax_21
    
    if (rax_21 s> *(rsi_4 + 0xc))
        sub_1405a4d70(rsi_4)
    
    int64_t* rax_22 = arg_10
    *(*rsi_4 + (rbx_4 << 3)) = rax_22
    return rax_22

int64_t (* r15_1)(void* arg1, void* arg2) = sub_1408d6fc0
int32_t rdi = 0

if (((*(arg1 + 0x28) u>> 2).b & 1) != 0)
    r15_1 = sub_1408d6fb0

while (true)
    int32_t r14_1 = (rbx_4 - 1).d
    
    while (true)
        int32_t temp0_1
        int32_t temp1_1
        temp0_1:temp1_1 = sx.q(r14_1 - rdi)
        rbx_4 = zx.q(rdi + ((temp1_1 - temp0_1) s>> 1))
        int64_t* rax_19
        
        if (r15_1(arg_10, *(*rsi_4 + (sx.q(rbx_4.d) << 3))) != 0)
            if (rdi != rbx_4.d)
                break
            
            int32_t r14_2 = *(rsi_4 + 8)
            *(rsi_4 + 8) = r14_2 + 1
            
            if (r14_2 + 1 s> *(rsi_4 + 0xc))
                sub_1405a4d70(rsi_4)
            
            int64_t rbx_5 = sx.q(rdi)
            int64_t rdx_13 = *rsi_4 + (rbx_5 << 3)
            memmove(rdx_13 + 8, rdx_13, (r14_2 - rdi) << 3)
            rax_19 = arg_10
            *(*rsi_4 + (rbx_5 << 3)) = rax_19
        else if (rdi == r14_1)
            int32_t r14_4 = *(rsi_4 + 8)
            *(rsi_4 + 8) = r14_4 + 1
            
            if (r14_4 + 1 s> *(rsi_4 + 0xc))
                sub_1405a4d70(rsi_4)
            
            int64_t rbx_6 = sx.q(rdi)
            int64_t rdx_17 = *rsi_4 + 8 + (rbx_6 << 3)
            memmove(rdx_17 + 8, rdx_17, (r14_4 - (rdi + 1)) << 3)
            rax_19 = arg_10
            *(*rsi_4 + (rbx_6 << 3) + 8) = rax_19
        else
            rdi = (rbx_4 + 1).d
            continue
        
        return rax_19
