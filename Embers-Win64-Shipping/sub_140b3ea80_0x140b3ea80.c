// 函数: sub_140b3ea80
// 地址: 0x140b3ea80
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

uint64_t r15 = zx.q(arg5)
uint64_t r10 = zx.q(arg4)
int32_t rax_2 = arg1[1].d
int64_t rbx_6 = (((((zx.q(arg3) & 0x7ff) | arg2 << 0xb) * 2) | r15) * 2) | r10
int64_t arg_8 = rbx_6
void* const rcx_3

if (rax_2 == *(arg1 + 0x34))
label_140b3eb30:
    rcx_3 = nullptr
else
    void* r8 = arg1[8]
    void* r9 = &arg1[7]
    
    if (r8 != 0)
        r9 = r8
    
    int32_t rax_7 =
        *(r9 + ((sx.q((rbx_6 u>> 0x20).d * 0x17 + rbx_6.d) & (sx.q(arg1[9].d) - 1)) << 2))
    
    if (rax_7 == 0xffffffff)
    label_140b3eb30_1:
        rcx_3 = nullptr
    else
        int64_t r8_1 = *arg1
        
        while (true)
            int64_t rdx_2 = sx.q(rax_7) * 3
            rcx_3 = r8_1 + (rdx_2 << 3)
            
            if (*(r8_1 + (rdx_2 << 3)) == rbx_6)
                break
            
            rax_7 = *(rcx_3 + 0x10)
            
            if (rax_7 == 0xffffffff)
                goto label_140b3eb30_2
        
        if (rax_7 == 0xffffffff)
        label_140b3eb30_2:
            rcx_3 = nullptr

void* rax_8 = rcx_3 + 8

if (rcx_3 == 0)
    rax_8 = nullptr

if (rax_8 != 0)
    return zx.q(*rax_8)

int64_t rsi = 0
int32_t rdi = 0
int64_t var_58

if (r10.b != 0)
    int64_t* rax_12 =
        sub_140b5e790(sub_140b5e600(*sub_140b5e4f0(&arg5, (rbx_6 u>> 0xd).d)), &var_58)
    void var_48
    
    if (&var_48 != rax_12)
        rsi = *rax_12
        *rax_12 = 0
        rdi = rax_12[1].d
        rax_12[1] = 0
    
    int64_t rcx_7 = var_58
    
    if (rcx_7 != 0)
        sub_140a74f90(rcx_7)
    
    goto label_140b3ed0a

int32_t rax_13 = sub_140b3ee30(arg2)
int32_t rcx_9 = arg1[0xb].d
int64_t rdi_1 = sx.q(rax_13)
uint64_t r10_3 = zx.q(rdi_1.d) << 0xd | (zx.q(rbx_6.d) & 0x1fff)
uint64_t arg_10 = r10_3
void* const rcx_13

if (rcx_9 == *(arg1 + 0x84))
label_140b3ec50:
    rcx_13 = nullptr
else
    void* r9_1 = &arg1[0x11]
    void* r8_2 = *(r9_1 + 8)
    
    if (r8_2 != 0)
        r9_1 = r8_2
    
    int32_t rax_18 =
        *(r9_1 + ((sx.q((r10_3 u>> 0x20).d * 0x17 + r10_3.d) & (sx.q(arg1[0x13].d) - 1)) << 2))
    
    if (rax_18 == 0xffffffff)
    label_140b3ec50_1:
        rcx_13 = nullptr
    else
        int64_t r8_3 = arg1[0xa]
        
        while (true)
            int64_t rdx_7 = sx.q(rax_18) * 3
            rcx_13 = r8_3 + (rdx_7 << 3)
            
            if (*(r8_3 + (rdx_7 << 3)) == r10_3)
                break
            
            rax_18 = *(rcx_13 + 0x10)
            
            if (rax_18 == 0xffffffff)
                goto label_140b3ec50_2
        
        if (rax_18 == 0xffffffff)
        label_140b3ec50_2:
            rcx_13 = nullptr

void* rax_19 = rcx_13 + 8
int32_t* r8_4 = &arg5

if (rcx_13 == 0)
    rax_19 = nullptr

if (rax_19 == 0)
    arg5.d = arg1[0x14].d
    sub_140b2c5a0(&arg1[0xa], &arg_10, r8_4)
    var_58 = 0
    int64_t* rax_24 = (rdi_1 << 4) + data_143de7198
    rdi = rax_24[1].d
    int64_t rbx_9 = *rax_24
    
    if (rdi != 0)
        sub_1405a4c70(&var_58, rdi, 0)
        rsi = var_58
        memcpy(rsi, rbx_9, rdi * 2)
    
label_140b3ed0a:
    arg5.d = arg1[0x14].d
    sub_140b2c5a0(arg1, &arg_8, &arg5)
    arg1[0x14].d += 1
    int64_t rbx_10 = sx.q(arg1[0x16].d)
    int32_t rax_26 = (rbx_10 + 1).d
    arg1[0x16].d = rax_26
    
    if (rax_26 s> *(arg1 + 0xb4))
        sub_1405a4f90(&arg1[0x15])
    
    int64_t* rbx_12 = (rbx_10 << 4) + arg1[0x15]
    *rbx_12 = 0
    rbx_12[1].d = rdi
    
    if (rdi != 0)
        sub_1405a4c70(rbx_12, rdi, 0)
        memcpy(*rbx_12, rsi, rdi * 2)
    else
        *(rbx_12 + 0xc) = 0
    
    int64_t rdi_2 = sx.q(arg1[0x18].d)
    int32_t rax_27 = (rdi_2 + 1).d
    arg1[0x18].d = rax_27
    
    if (rax_27 s> *(arg1 + 0xc4))
        sub_1405a4cf0(&arg1[0x17])
    
    *(arg1[0x17] + (rdi_2 << 2)) = arg3
    char* rbx_13 = sx.q(arg1[0x1a].d)
    int32_t rax_29 = (&rbx_13[1]).d
    arg1[0x1a].d = rax_29
    
    if (rax_29 s> *(arg1 + 0xd4))
        sub_1405daba0(&arg1[0x19])
    
    rbx_13[arg1[0x19]] = r15.b
    
    if (rsi != 0)
        sub_140a74f90(rsi)
else
    arg5.d = *rax_19
    sub_140b2c5a0(arg1, &arg_8, r8_4)

return zx.q(arg5.d)
