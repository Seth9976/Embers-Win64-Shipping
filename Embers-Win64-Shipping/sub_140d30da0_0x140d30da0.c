// 函数: sub_140d30da0
// 地址: 0x140d30da0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

sub_140bd0e40()
int64_t r9 = EnterCriticalSection(&data_143e1da90)
int32_t rcx = data_143e1da88
int32_t rax = rcx - 1
int64_t rbx = sx.q(rax)

if (rax s>= 0)
    int64_t temp0_1
    
    do
        int64_t* rcx_1 = *(data_143e1da80 + (rbx << 3))
        r9 = (*(*rcx_1 + 0x10))(rcx_1)
        temp0_1 = rbx
        rbx -= 1
    while (temp0_1 - 1 s>= 0)
    rcx = data_143e1da88

if (rcx != 0)
    sub_140af98a0("Unknown", 0x19e, 
        All UObject delete listeners should be unregistered when shutting down ", r9)
    sub_140afbb40()

int64_t r9_1 = LeaveCriticalSection(&data_143e1da90)
int32_t rcx_2 = data_143e1da78
int32_t result = rcx_2 - 1
int64_t result_1 = sx.q(result)

if (result s>= 0)
    int64_t result_2
    
    do
        int64_t* rcx_3 = *(data_143e1da70 + (result_1 << 3))
        result, r9_1 = (*(*rcx_3 + 0x10))(rcx_3)
        result_2 = result_1
        result_1 -= 1
    while (result_2 - 1 s>= 0)
    rcx_2 = data_143e1da78

if (rcx_2 != 0)
    sub_140af98a0("Unknown", 0x1a6, 
        All UObject delete listeners should be unregistered when shutting down ", r9_1)
    result = sub_140afbb40()

data_143e1d834 = 0
return result
