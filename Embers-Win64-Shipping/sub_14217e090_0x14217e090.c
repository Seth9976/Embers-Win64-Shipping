// 函数: sub_14217e090
// 地址: 0x14217e090
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t r9 = sx.q(arg3)
*(*(arg2 + 0x18) + r9 * 0x14 + 0x10) = 1
void* r11 = *(arg1 + 0x2e8)
int64_t r10_2 = zx.q(*(arg2 + 0x10)) << 0x20 | r9
int32_t rax_1 = *(r11 + 0xa8)
int64_t arg_8 = r10_2

if (rax_1 != *(r11 + 0xd4))
    void* r9_1 = r11 + 0xd8
    void* r8_1 = *(r9_1 + 8)
    
    if (r8_1 != 0)
        r9_1 = r8_1
    
    int32_t i =
        *(r9_1 + ((sx.q((r10_2 u>> 0x20).d * 0x17 + r10_2.d) & (sx.q(*(r11 + 0xe8)) - 1)) << 2))
    
    if (i != 0xffffffff)
        int64_t rdx_2 = *(r11 + 0xa0)
        
        do
            int64_t rcx_3 = sx.q(i) * 2
            
            if (*(rdx_2 + (rcx_3 << 3)) == r10_2)
                if (i != 0xffffffff)
                    return i
                
                break
            
            i = *(rdx_2 + (rcx_3 << 3) + 8)
        while (i != 0xffffffff)

void arg_18
return sub_1407d1070(arg1 + 0x330, &arg_18, &arg_8, nullptr)
