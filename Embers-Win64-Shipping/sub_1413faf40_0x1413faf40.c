// 函数: sub_1413faf40
// 地址: 0x1413faf40
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t rax = data_1439b6b10
int64_t rbx

if (rax s>= 0)
    rbx.b = rax != 0
else
    rbx.b = *(arg1 + 0x12c8) == 1

uint64_t result = sub_1410f8230()
bool cond:1_1

if (result.d s> 0 || (rbx.b != 0 && result.d s< 0))
    int32_t temp1_1 = data_1439b6b14
    cond:1_1 = temp1_1 s<= 0
    
    if (temp1_1 s< 0)
        cond:1_1 = *(arg1 + 0x12e0) s<= 0

char rdx

if ((result.d s<= 0 && (rbx.b == 0 || result.d s>= 0)) || cond:1_1)
    rdx = 0
else
    rdx = 1

if (data_143f0f21f != 0)
    uint64_t r8_1 = zx.q(data_143f0f1a0)
    
    if (((*(&data_143f025fc + sx.q(r8_1.d) * 0x14) u>> 0x13).b & 1) != 0
            && test_bit(data_143f13cd8, r8_1) && rdx != 0)
        result.b = 1
        return result

result.b = 0
return result
