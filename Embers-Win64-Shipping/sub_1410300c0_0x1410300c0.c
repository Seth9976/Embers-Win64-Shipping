// 函数: sub_1410300c0
// 地址: 0x1410300c0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t i_1 = *(arg1 + 0x130)
uint64_t rdi = zx.q(arg3)

if (i_1 == 0)
    return 

uint64_t rflags_1
int32_t temp0_1
temp0_1, rflags_1 = _bit_scan_forward(i_1)
int32_t r11_1 = temp0_1

if (i_1 == 0)
    return 

int32_t i

do
    void* rdx = *(arg1 + (zx.q(r11_1) << 3) + 0x140)
    void* rax_1 = arg4
    
    if (arg4 != 0 && data_1439c7a34 u> 1)
        while (*(rax_1 + 0x18) != *(rdx + 0x138))
            rax_1 = *(rax_1 + 0x20)
            
            if (rax_1 == 0)
                break
    
    if (*(rdx + (rdi << 3) + 0x3178) != rax_1)
        *(rdx + (rdi << 3) + 0x3178) = rax_1
        *(rdx + 0x2ef2) |= (1 << (rdi.d u% 0x20)).w
    
    int32_t rax_4 = 1 << r11_1.b
    r11_1 = 0x20
    i = not.d(rax_4) & i_1
    i_1 = i
    
    if (i != 0)
        uint64_t rflags_2
        int32_t temp0_2
        temp0_2, rflags_2 = _bit_scan_forward(i)
        r11_1 = temp0_2
while (i != 0)
