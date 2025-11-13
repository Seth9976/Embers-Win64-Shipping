// 函数: sub_140bc95f0
// 地址: 0x140bc95f0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

TEB* gsbase

if (data_143e1aab8 s> *(0x14 + *(gsbase->ThreadLocalStoragePointer + (zx.q(data_14401b1a0) << 3))))
    _Init_thread_header(&data_143e1aab8)
    
    if (data_143e1aab8 == 0xffffffff)
        sub_140b58260(&data_143e1aab0, u"/Script/CoreUObject", 1)
        _Init_thread_footer(&data_143e1aab8)

int64_t rcx_1 = *(sub_140d21d80(arg2) + 0x18)
bool cond:0 = rcx_1 != data_143e1aab0
int64_t arg_20 = rcx_1

if (not(cond:0))
    void* result
    result.b = 1
    return result

EnterCriticalSection(arg1 + 0xd8)
int64_t arg_18 = *(arg2 + 0x18)
int16_t* var_40
sub_140b63b70(&arg_18, &var_40)
int64_t var_30
int64_t* rax_3 = sub_140b63b70(&arg_20, &var_30)
int32_t var_38
int32_t rbx_2

if (var_38 == 0)
    rbx_2 = 0
else
    rbx_2 = var_38 - 1

int32_t rdx_2

if (rax_3[1].d == 0)
    rdx_2 = 2

if (rax_3[1].d != 0 || rbx_2 == 0xffffffff)
    rdx_2 = 1

int16_t* var_50 = *rax_3
*rax_3 = 0
int32_t rax_6 = rax_3[1].d
int32_t rax_7 = *(rax_3 + 0xc)
rax_3[1] = 0
int32_t rdx_4 = rdx_2 + rax_6 + rbx_2

if (rdx_4 s> rax_7)
    sub_1405947f0(&var_50, rdx_4)

sub_140a2cf70(&var_50, var_40, rbx_2)
int16_t* const rdx_6 = &data_142d40450

if (rax_6 != 0)
    rdx_6 = var_50

int64_t var_58
sub_140b58260(&var_58, rdx_6, 1)
int16_t* rcx_9 = var_50

if (rcx_9 != 0)
    sub_140a74f90(rcx_9)

int64_t rcx_10 = var_30

if (rcx_10 != 0)
    sub_140a74f90(rcx_10)

int16_t* rcx_11 = var_40

if (rcx_11 != 0)
    sub_140a74f90(rcx_11)

int64_t rbx_3 = var_58
void* const rcx_15

if (*(arg1 + 0x10) == *(arg1 + 0x3c))
label_140bc97b0:
    rcx_15 = nullptr
else
    arg_18 = rbx_3
    int32_t rax_10 = sub_140b5ead0(rbx_3.d) + arg_18:4.d
    void* r8_2 = arg1 + 0x40
    void* rcx_13 = *(r8_2 + 8)
    
    if (rcx_13 != 0)
        r8_2 = rcx_13
    
    int32_t rax_12 = *(r8_2 + (((sx.q(*(arg1 + 0x50)) - 1) & sx.q(rax_10)) << 2))
    
    if (rax_12 == 0xffffffff)
    label_140bc97b0_1:
        rcx_15 = nullptr
    else
        int64_t r8_3 = *(arg1 + 8)
        
        while (true)
            int64_t rdx_10 = sx.q(rax_12) * 5
            rcx_15 = r8_3 + (rdx_10 << 3)
            
            if (*(r8_3 + (rdx_10 << 3)) == rbx_3)
                break
            
            rax_12 = *(rcx_15 + 0x20)
            
            if (rax_12 == 0xffffffff)
                goto label_140bc97b0_2
        
        if (rax_12 == 0xffffffff)
        label_140bc97b0_2:
            rcx_15 = nullptr

void* rax_13 = rcx_15 + 8

if (rcx_15 == 0)
    rax_13 = nullptr

if (rax_13 == 0 || *(rax_13 + 4) == 2)
    rbx_3.b = 1
else
    rbx_3.b = 0

if (arg1 != -0xd8)
    LeaveCriticalSection(arg1 + 0xd8)

return zx.q(rbx_3.b)
