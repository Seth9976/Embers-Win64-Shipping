// 函数: sub_1413ef1f0
// 地址: 0x1413ef1f0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* rsi = arg1

if (*(data_143ec8d48 + 4) != 0)
    return sub_1413a0a50(arg1, arg2, arg3) __tailcall

int32_t r12 = *(data_143ec8408 + 4)

if (*(arg1 + 0x1598) s> 0 || *(arg1 + 0x159c) s> 0)
    arg1.b = 1
else
    arg1.b = 0

int64_t rbp

if (r12 != 0)
    if (arg1.b != 0)
        rbp.b = 0
    else
        rbp.b = 1
else if (*(data_143ec8358 + 4) == r12 || arg1.b != 0)
    rbp.b = 0
else
    rbp.b = 1

int32_t rax_4 = sub_1422e5a30(rsi)
int64_t rdi = 0
int64_t rax_5
int32_t r14_1

if (data_143f0f220 != 0 && *(data_143ec8340 + 4) != 0)
    rax_5 = sx.q(rax_4)
    r14_1 = 0x18

if (data_143f0f220 == 0 || *(data_143ec8340 + 4) == 0
        || ((*(&data_143f025fc + rax_5 * 0x14) u>> 0x14).b & 1) == 0)
    r14_1 = 0

char rax_9
int32_t rax_10

if (*(data_143ec8b78 + 4) != 0)
    rax_9, arg4 = sub_1413faff0(*(arg2 + 0xf80))
    rax_10 = 0x30

if (*(data_143ec8b78 + 4) == 0 || rax_9 == 0)
    rax_10 = 0

int32_t r15_1 = r14_1 + rax_10
void* rax_11 = data_143ec8e58
void* var_28
int64_t* rdx_1 = &var_28
int32_t rcx_5 = *(rax_11 + 4)
void* var_20
int32_t r9_4

if (rbp.b == 0)
    r9_4 = (sbb.d(arg4, arg4, rcx_5 != 0) & 0xc) + r15_1
else
    int32_t r9_1 = 2
    
    if (r12 != 0)
        r9_1 = 8
    
    sub_1419a2ec0(*(rsi + 0x5150), rdx_1, &data_143ec8d50, 
        r9_1 + (sbb.d(rax_11.d, rax_11.d, rcx_5 != 0) & 0xc) + r15_1)
    void* rax_15 = var_28
    int64_t r14_2 = 0
    
    if (rax_15 != 0)
        int64_t rdx_2 = sx.q(*(rax_15 + 0x10c))
        int64_t r14_3 = rdx_2 << 3
        int64_t* rbp_1 = *(var_20 + 0x10)
        int64_t rax_17 = rbp_1[3]
        
        if (*(r14_3 + rax_17) == 0)
            sub_1419ccf30(rbp_1, rdx_2.d)
            rax_17 = rbp_1[3]
        
        r14_2 = *(r14_3 + rax_17)
    
    int64_t rbp_2 = sx.q(arg3[1].d)
    int32_t rax_18 = (rbp_2 + 1).d
    arg3[1].d = rax_18
    
    if (rax_18 s> *(arg3 + 0xc))
        sub_1405a4d70(arg3)
    
    int32_t r9_3 = 4
    rdx_1 = &var_28
    *(*arg3 + (rbp_2 << 3)) = r14_2
    void* rax_20 = data_143ec8e58
    
    if (r12 != 0)
        r9_3 = 0xa
    
    r9_4 = r9_3 + (sbb.d(rax_20.d, rax_20.d, *(rax_20 + 4) != 0) & 0xc) + r15_1

sub_1419a2ec0(*(rsi + 0x5150), rdx_1, &data_143ec8d50, r9_4)
void* rax_24 = var_28

if (rax_24 != 0)
    int64_t rdx_4 = sx.q(*(rax_24 + 0x10c))
    int64_t r14_4 = rdx_4 << 3
    int64_t* rsi_1 = *(var_20 + 0x10)
    int64_t rdi_1 = rsi_1[3]
    
    if (*(r14_4 + rdi_1) == 0)
        sub_1419ccf30(rsi_1, rdx_4.d)
        rdi_1 = rsi_1[3]
    
    rdi = *(r14_4 + rdi_1)

int64_t rsi_2 = sx.q(arg3[1].d)
int32_t rax_26 = (rsi_2 + 1).d
arg3[1].d = rax_26

if (rax_26 s> *(arg3 + 0xc))
    sub_1405a4d70(arg3)

int64_t result = *arg3
*(result + (rsi_2 << 3)) = rdi
return result
