// 函数: sub_1413938e0
// 地址: 0x1413938e0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t r9 = *(arg1 + 0x110)
void* r11 = *(arg1 + 0xf0)
void* r8 = r11 + 0xe68
void* rax = *(r8 + 0x10)

if (rax != 0)
    r8 = rax

int32_t temp0
int32_t temp1
temp0:temp1 = sx.q(r9)
uint32_t result = *(r8 + (sx.q((temp1 + (temp0 & 0x1f)) s>> 5) << 2))

if (test_bit(result, r9 & 0x1f))
    result = zx.d(*(arg1 + 0x120))
    
    if ((result.b & 1) == 0)
        result.b |= 1
        void* arg_10 = arg1
        *(arg1 + 0x120) = result.b
        void arg_8
        return sub_141113900(r11 + 0xe88, &arg_8, &arg_10, nullptr)

return result
