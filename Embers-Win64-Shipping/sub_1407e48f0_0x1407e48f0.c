// 函数: sub_1407e48f0
// 地址: 0x1407e48f0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (arg1[0x18].d s> 0)
    int64_t rbp_1 = 0
    void* rax_1 = arg1[0x17]
    void* rsi_1 = &arg1[0x15]
    
    if (rax_1 != 0)
        rsi_1 = rax_1
    
    int64_t r15_1 = sx.q(arg1[0x18].d) << 3
    uint64_t r15_2 = r15_1 u>> 3
    
    if (rsi_1 u> rsi_1 + r15_1)
        r15_2 = 0
    
    if (r15_2 != 0)
        do
            int64_t r14_1 = *rsi_1
            EnterCriticalSection(&data_143ce2e68)
            int64_t rbx_1 = sx.q(data_143ce2e98)
            int32_t rax_4 = (rbx_1 + 1).d
            bool cond:1_1 = rax_4 s<= data_143ce2e9c
            data_143ce2e98 = rax_4
            
            if (not(cond:1_1))
                sub_1405a4d70(&data_143ce2e90)
            
            *(data_143ce2e90 + (rbx_1 << 3)) = r14_1
            LeaveCriticalSection(&data_143ce2e68)
            rsi_1 += 8
            rbp_1 += 1
        while (rbp_1 != r15_2)
    
    arg1[0x18].d = 0
    
    if (*(arg1 + 0xc4) != 0)
        sub_1408098d0(&arg1[0x15], 0)

void* rcx_1 = arg1[0xe]

if (rcx_1 != 0)
    int32_t rax_6 = 0
    
    if (0 == *(rcx_1 + 8))
        *(rcx_1 + 8) = 0
    else
        rax_6 = *(rcx_1 + 8)
    
    if (rax_6 == 1)
        void* rsi_2 = arg1[0xe]
        
        if (*(rsi_2 + 0x11) != 0)
            if (data_143f0f1c7 != 0)
                int64_t* rcx_2 = data_143f0f180
                (*(*rcx_2 + 0x630))(rcx_2, rsi_2)
            
            *(rsi_2 + 0x11) = 0
    
    arg1[0x11].d = 0
    sub_1405d16e0(&arg1[0xe], nullptr)
    sub_1405d16e0(&arg1[0xf], nullptr)
    sub_1405d16e0(&arg1[0x10], nullptr)

arg1[0x12].d = 0
int64_t rcx_6 = arg1[0x17]

if (rcx_6 != 0)
    sub_140a74f90(rcx_6)

sub_1408081b0(&arg1[0xe])
sub_1405ec8a0(&arg1[0x10])
sub_1405d1550(&arg1[0xf])
sub_1405d1550(&arg1[0xe])
int64_t rcx_11 = arg1[0xc]

if (rcx_11 != 0)
    sub_140a74f90(rcx_11)

int64_t rcx_12 = arg1[8]

if (rcx_12 != 0)
    sub_140a74f90(rcx_12)

sub_1407e4530(&arg1[2])
return sub_140745ac0(arg1) __tailcall
