// 函数: sub_141067830
// 地址: 0x141067830
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (arg3 == 0)
    return 

void* rsi_1 = arg2
int32_t r13_1 = arg4
int64_t var_58_1 = 0
void* i = arg3
int64_t var_70_1 = 0x1688
uint32_t rbx_1 = divu.dp.d(0:(*(arg3 + 0x18)), r13_1)
int32_t var_74_1 = 1
int32_t var_78_1

if ((*(arg3 + 0x1c) & 0x20) == 0)
    var_78_1 = sub_140fe7330((&data_1439c85fc)[zx.q(arg5) * 0xa], 0)
else
    var_78_1 = 0x27
    r13_1 = 4
    var_58_1.d = 1

int64_t rax_5 = *(i + 0xb8)
int32_t var_5c_1 = 0
uint128_t var_50 = var_78_1.o

if (rbx_1 u>= 0xffffffff)
    rbx_1 = -1

uint32_t var_60_1 = rbx_1
uint64_t var_30_1 = var_58_1
int128_t var_40_1 = divu.dp.q(0:rax_5, zx.q(r13_1)).o

do
    if (*(rsi_1 + 0x20) == 0)
        void* rcx_3 = *(i + 0x28)
        *(rsi_1 + 0x20) = rcx_3
        void arg_18
        
        if (rcx_3 != 0)
            *(rsi_1 + 0x28) = *sub_141013ee0(rcx_3 + 0x1b0, &arg_18, rsi_1 + 0x30)
    
    sub_141025d40(rsi_1, &var_50, i + 0x68, r13_1, 0)
    EnterCriticalSection(i + 0x30)
    *(rsi_1 + 0x88) = i + 0x20
    int64_t rbp_1 = sx.q(*(i + 0x60))
    int32_t rax_8 = (rbp_1 + 1).d
    *(i + 0x60) = rax_8
    
    if (rax_8 s> *(i + 0x64))
        sub_1405a4d70(i + 0x58)
    
    (*(i + 0x58))[rbp_1] = rsi_1 + 0x88
    
    if (*(i + 0x60) == 4)
        data_143e2c7cc += 1
    
    if (i != -0x30)
        LeaveCriticalSection(i + 0x30)
    
    i = *(i + 0xd8)
    
    if (i != 0 && *(rsi_1 + 0x90) == 0)
        void*** rax_9 = j_sub_140a82f30(0xa8)
        void*** rbx_3
        
        if (rax_9 == 0)
            rbx_3 = nullptr
        else
            rbx_3 = sub_14100d6c0(rax_9, *(i + 0x28))
        
        sub_1405d16e0(rsi_1 + 0x90, rbx_3)
        
        if (rbx_3 != 0)
            rbx_3[0x13].b = 0
    
    rsi_1 = *(rsi_1 + 0x90)
while (i != 0)
