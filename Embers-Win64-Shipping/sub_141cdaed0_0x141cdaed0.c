// 函数: sub_141cdaed0
// 地址: 0x141cdaed0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_88
int64_t rax_1 = __security_cookie ^ &var_88
int64_t rdi = sx.q(arg3)
int64_t rbp = sx.q(arg2)

if (arg5 != 0)
    arg5[1].d = 0
    
    if (*(arg5 + 0xc) != 0)
        sub_1405dadb0(arg5, 0)

int32_t* r14 = *arg4
int64_t var_58
__builtin_memset(&var_58, 0, 0x20)
int32_t* rcx_3 = (rbp << 4) + arg1[0x15]
*rcx_3 = *r14
rcx_3[1] = r14[1]
rcx_3[2] = r14[2]
int32_t var_38 = data_143a1c6c4
int64_t rbx = sx.q(sub_14090b0b0(&arg1[0x1c], &var_58))
int64_t var_48

if (var_48 != 0)
    sub_140a74f90(var_48)

int64_t rcx_6 = var_58

if (rcx_6 != 0)
    sub_140a74f90(rcx_6)

uint64_t* rsi = arg1[0x1c] + rbx * 0x28
sub_14090bdf0(&arg1[0x56], rbx.d)

if (*(rsi + 0xc) s< 3)
    sub_1405dadb0(rsi, 3)

void* r13_1 = &r14[sx.q(arg4[1].d)]

while (r14 != r13_1)
    int64_t r15_1 = sx.q(rsi[1].d)
    int32_t rax_9 = (r15_1 + 1).d
    rsi[1].d = rax_9
    
    if (rax_9 s> *(rsi + 0xc))
        sub_1405a4cf0(rsi)
    
    int32_t rax_10 = *r14
    r14 = &r14[1]
    *(*rsi + (r15_1 << 2)) = rax_10

rsi[4].d = rdi.d
int64_t* rdi_2 = (rdi << 4) + arg1[0x23]
int64_t r14_1 = sx.q(rdi_2[1].d)
int32_t rax_11 = (r14_1 + 1).d
rdi_2[1].d = rax_11

if (rax_11 s> *(rdi_2 + 0xc))
    sub_1405a4cf0(rdi_2)

int32_t* rdi_3 = rcx_3
*(*rdi_2 + (r14_1 << 2)) = rbx.d
rdi_3[3] = rbx.d
int64_t rbx_1 = sx.q(rsi[3].d)
int32_t rax_13 = (rbx_1 + 1).d
rsi[3].d = rax_13

if (rax_13 s> *(rsi + 0x1c))
    sub_1405a4cf0(&rsi[2])

*(rsi[2] + (rbx_1 << 2)) = rbp.d
sub_14090bdf0(&arg1[0x4b], rbp.d)
int64_t result

for (int64_t i = 0; i s< 3; )
    int64_t rdx_6 = arg1[7]
    int64_t rcx_15 = sx.q(rdi_3[i]) * 3
    int64_t rax_16 = 0
    int64_t rsi_1 = sx.q(*(rdx_6 + (rcx_15 << 3)))
    
    if (i != 2)
        rax_16 = i + 1
    
    int64_t rax_18 = *arg1
    int32_t rdi_4 = *(rdx_6 + sx.q(rdi_3[rax_16]) * 0x18)
    int64_t rcx_18 = rsi_1 << 5
    int32_t* rdx_7 = *(rcx_18 + rax_18 + 0x10)
    void* r8 = &rdx_7[sx.q(*(rcx_18 + rax_18 + 0x18))]
    int64_t rbx_2
    
    if (rdx_7 == r8)
    label_141cdb125:
        int32_t rax_22 = data_143a1c6b4
        var_58.d = rax_22
        var_58:4.d = rax_22
        int64_t var_50_1 = 0
        int64_t var_48_1 = 0
        rbx_2 = zx.q(sub_1409af2d0(&arg1[0xe], &var_58))
        
        if (var_50_1 != 0)
            sub_140a74f90(var_50_1)
        
        sub_141cda530(arg1, rbx_2.d, rsi_1.d, rdi_4)
        
        if (arg5 != 0)
            int64_t rdi_5 = sx.q(arg5[1].d)
            int32_t rax_24 = (rdi_5 + 1).d
            arg5[1].d = rax_24
            
            if (rax_24 s> *(arg5 + 0xc))
                sub_1405a4cf0(arg5)
            
            *(*arg5 + (rdi_5 << 2)) = rbx_2.d
    else
        int64_t r9_1 = arg1[0xe]
        
        while (true)
            rbx_2 = sx.q(*rdx_7)
            int64_t rcx_19 = rbx_2 * 3
            int32_t rcx_20 = *(r9_1 + (rcx_19 << 3))
            int32_t rax_21 = *(r9_1 + (rcx_19 << 3) + 4)
            
            if (rcx_20 == rsi_1.d && rax_21 == rdi_4)
                break
            
            if (rcx_20 == rdi_4 && rax_21 == rsi_1.d)
                break
            
            rdx_7 = &rdx_7[1]
            
            if (rdx_7 == r8)
                goto label_141cdb125
        
        if (rbx_2.d == data_143a1c6bc)
            goto label_141cdb125
    
    void* rdi_7 = arg1[7] + (rcx_15 << 3)
    int64_t rsi_2 = sx.q(*(rdi_7 + 0x10))
    int32_t rax_26 = (rsi_2 + 1).d
    *(rdi_7 + 0x10) = rax_26
    
    if (rax_26 s> *(rdi_7 + 0x14))
        sub_1405a4cf0(rdi_7 + 8)
    
    *(*(rdi_7 + 8) + (rsi_2 << 2)) = rbp.d
    int64_t rcx_26 = sx.q(rbx_2.d) * 3
    int64_t rax_29 = arg1[0xe]
    int64_t rdi_8 = sx.q(*(rax_29 + (rcx_26 << 3) + 0x10))
    void* rbx_3 = rax_29 + (rcx_26 << 3)
    int32_t rax_30 = (rdi_8 + 1).d
    *(rbx_3 + 0x10) = rax_30
    
    if (rax_30 s> *(rbx_3 + 0x14))
        sub_1405a4cf0(rbx_3 + 8)
    
    result = *(rbx_3 + 8)
    i += 1
    *(result + (rdi_8 << 2)) = rbp.d
    rdi_3 = rcx_3

__security_check_cookie(rax_1 ^ &var_88)
return result
