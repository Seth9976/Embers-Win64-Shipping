// 函数: sub_1413e9c80
// 地址: 0x1413e9c80
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* rsi = arg2
void* rax_1
int64_t rax_2
void* rdx

if (arg2 != 0)
    rax_1 = sub_142542e20()
    rdx = rsi[2]
    rax_2 = sx.q(*(rax_1 + 0x38))

int64_t* rbp

if (arg2 == 0 || rax_2.d s> *(rdx + 0x38) || *(*(rdx + 0x30) + (rax_2 << 3)) != rax_1 + 0x30)
    rbp = nullptr
else
    rbp = rsi
    rsi = rsi[0x1a]

int64_t rax_4 = sx.q(*(arg1 + 0x4b0))
int64_t* result

if (rax_4.d u>= *(arg1 + 0x4a8))
    void* result_2 = sub_142121cc0(rsi, nullptr)
    int64_t rsi_1 = sx.q(*(arg1 + 0x4a8))
    result = result_2
    int32_t rax_6 = (rsi_1 + 1).d
    *(arg1 + 0x4a8) = rax_6
    
    if (rax_6 s> *(arg1 + 0x4ac))
        sub_1405a4d70(arg1 + 0x4a0)
    
    *(*(arg1 + 0x4a0) + (rsi_1 << 3)) = result
else
    result = *(*(arg1 + 0x4a0) + (rax_4 << 3))
    
    if (result[0x1a] != rsi)
        void* result_1 = sub_142121cc0(rsi, nullptr)
        result = result_1
        *(*(arg1 + 0x4a0) + (sx.q(*(arg1 + 0x4b0)) << 3)) = result_1
    
    sub_142120450(result)

if (rbp != 0)
    sub_1421206b0(result, rbp)

*(arg1 + 0x4b0) += 1
return result
