// 函数: sub_140bd1d60
// 地址: 0x140bd1d60
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t rdi = sx.q(arg1)

if (rdi.d == 0xffffffff)
    return 

AcquireSRWLockExclusive(&data_143e1a888)
int64_t r14_1 = data_1439a9a50
int64_t rsi_2 = rdi * 2
int64_t rbx_1 = *(r14_1 + (rsi_2 << 3))
void* rcx_3

if (data_1439a9a08 == data_1439a9a34)
labelid_13:
    rcx_3 = nullptr
else
    int32_t rax_3 = sub_140b5ead0(rbx_1.d) + rbx_1:4.d
    void* rcx_1 = data_1439a9a40
    void* rax_5 = &data_1439a9a38
    
    if (rcx_1 != 0)
        rax_5 = rcx_1
    
    int32_t rax_6 = *(rax_5 + (((sx.q(data_1439a9a48) - 1) & sx.q(rax_3)) << 2))
    
    if (rax_6 == 0xffffffff)
    label_140bd1e2a:
        rcx_3 = nullptr
    else
        int64_t r8_1 = data_1439a9a00
        int64_t rdx_5
        
        while (true)
            rdx_5 = sx.q(rax_6) * 0x28
            
            if (*(rdx_5 + r8_1) == rbx_1)
                break
            
            rax_6 = *(rdx_5 + r8_1 + 0x20)
            
            if (rax_6 == 0xffffffff)
                goto label_140bd1e2a_1
        
        rcx_3 = rdx_5 + r8_1
        
        if (rax_6 == 0xffffffff)
        label_140bd1e2a_1:
            rcx_3 = nullptr

void* rax_7 = rcx_3 + 8

if (rcx_3 == 0)
    rax_7 = nullptr

if (rax_7 != 0)
    int16_t temp0_1 = *(rax_7 + 0x10)
    *(rax_7 + 0x10) -= 1
    
    if (temp0_1 == 1)
        sub_140bce870(&data_1439a9a00, *(r14_1 + (rsi_2 << 3)))

if (data_1439a9a84 != 0)
    *(data_1439a9a50 + sx.q(data_1439a9a80) * 0x10) = rdi.d

int64_t rcx_7 = data_1439a9a50
void* r8_2 = &data_1439a9a60
int32_t rax_9 = -1
*(rcx_7 + (rsi_2 << 3)) = 0xffffffff

if (data_1439a9a84 s> 0)
    rax_9 = data_1439a9a80

*(rcx_7 + (rsi_2 << 3) + 4) = rax_9
void* rax_10 = data_1439a9a70
data_1439a9a84 += 1
data_1439a9a80 = rdi.d

if (rax_10 != 0)
    r8_2 = rax_10

int32_t temp1_1
int32_t temp2_1
temp1_1:temp2_1 = sx.q(rdi.d)
int64_t rdx_9 = sx.q((temp2_1 + (temp1_1 & 0x1f)) s>> 5)
*(r8_2 + (rdx_9 << 2)) &= not.d(rol.d(1, rdi.b))
ReleaseSRWLockExclusive(&data_143e1a888)
