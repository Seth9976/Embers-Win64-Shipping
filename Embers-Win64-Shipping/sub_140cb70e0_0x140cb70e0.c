// 函数: sub_140cb70e0
// 地址: 0x140cb70e0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t i = 0

if (*(arg1 + 0x20) s> 0)
    int64_t rsi_1 = 0
    
    do
        if (*(rsi_1 + *(arg1 + 0x18) + 0x40) != 0)
            sub_140cb73e0(arg1, i)
        
        i += 1
        rsi_1 -= -0x80
    while (i s< *(arg1 + 0x20))

void* rax_2 = sub_140cdbb20()
EnterCriticalSection(rax_2 + 0x58)
sub_1409740e0(rax_2 + 8, arg1)

if (rax_2 != -0x58)
    LeaveCriticalSection(rax_2 + 0x58)

EnterCriticalSection(rax_2 + 0xd0)
sub_1409740e0(rax_2 + 0x80, arg1)

if (rax_2 != -0xd0)
    LeaveCriticalSection(rax_2 + 0xd0)

char arg_8 = 0
char* var_30 = &arg_8
void*** (* var_38)() = sub_140884c50
void* r13 = *(sub_140a756e0(&var_38, &data_14397f5f0) + 0x48)
int64_t rcx_8 = sx.q(*(r13 + 0x28))

if (rcx_8.d != 0)
    int32_t rsi_3 = 0
    int32_t r12_1 = 0
    int64_t rbx_2 = 0
    int64_t r15
    r15.b = **(r13 + 0x20) != arg1
    
    do
        int64_t r9_1 = sx.q(rsi_3)
        rbx_2 += 1
        rsi_3 += 1
        
        if (rbx_2 s< rcx_8)
            int64_t rcx_9 = *(r13 + 0x20) + (rbx_2 << 3)
            
            do
                int32_t rax_6
                rax_6.b = *rcx_9 != arg1
                
                if (zx.d(r15.b) != rax_6)
                    break
                
                rsi_3 += 1
                rbx_2 += 1
                rcx_9 += 8
            while (rbx_2 s< rcx_8)
        
        int32_t r14_2 = rsi_3 - r9_1.d
        
        if (r15.b != 0)
            if (r12_1 != r9_1.d)
                int64_t rcx_10 = *(r13 + 0x20)
                memmove(rcx_10 + (sx.q(r12_1) << 3), rcx_10 + (r9_1 << 3), r14_2 << 3)
            
            r12_1 += r14_2
        
        r15.b ^= 1
    while (rbx_2 s< rcx_8)
    
    *(r13 + 0x28) = r12_1

int64_t rcx_12 = *(arg1 + 0x2a8)

if (rcx_12 != 0)
    j_sub_140a74f90(rcx_12)

*(arg1 + 0x2a8) = 0
int64_t rsi_4 = 0
int64_t* rbx_3 = *(arg1 + 0x2c8)
uint64_t r14_4 = sx.q(*(arg1 + 0x2d0)) << 3 u>> 3

if (rbx_3 u> &rbx_3[sx.q(*(arg1 + 0x2d0))])
    r14_4 = 0

if (r14_4 != 0)
    do
        void* rcx_13 = *rbx_3
        
        if (rcx_13 != 0)
            if (*(rcx_13 + 0x18) != 0)
                *(rcx_13 + 0x18) = 0
            
            j_sub_140a74f90(rcx_13)
        
        rbx_3 = &rbx_3[1]
        rsi_4 += 1
    while (rsi_4 != r14_4)

*(arg1 + 0x2d0) = 0

if (*(arg1 + 0x2d4) != 0)
    sub_1405c5570(arg1 + 0x2c8, 0)

void*** rbx_4 = *(arg1 + 0x2b0)

if (rbx_4 != 0)
    sub_140b4cbb0(rbx_4)
    j_sub_140a74f90(rbx_4)

*(arg1 + 0x2b0) = 0
*(arg1 + 0x2a3) = 1
int64_t* rcx_17 = *(arg1 + 0x2d8)

if (rcx_17 != 0)
    (**rcx_17)(rcx_17, 1)
    *(arg1 + 0x2d8) = 0

*(arg1 + 0x2a3) = 0
*(arg1 + 0x1c8) = 0

if (*(arg1 + 0x1cc) != 0)
    sub_1405dadb0(arg1 + 0x1c0, 0)

sub_140cb91d0(arg1 + 0x1d0, 0)
*(arg1 + 0x10) = 0

if (*(arg1 + 0x14) != 0)
    sub_1408cf3a0(arg1 + 8, 0)

*(arg1 + 0x20) = 0

if (*(arg1 + 0x24) != 0)
    sub_140888ba0(arg1 + 0x18, 0)

sub_140bb7c10(arg1)
void* result = *(arg1 + 0xa0)

if (result != 0)
    *(result + 0x68) = 0
    *(arg1 + 0xa0) = 0

return result
