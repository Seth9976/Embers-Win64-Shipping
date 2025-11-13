// 函数: sub_14200d7c0
// 地址: 0x14200d7c0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (arg1[1].d == *(arg1 + 0x34))
    return 0

int32_t rax_1 = sub_140a6b260(arg2, 0x10)
void* rcx_1 = arg1[8]
void* r9 = &arg1[7]
int32_t rbp = 0
int64_t r10_1 = sx.q(arg1[9].d) - 1

if (rcx_1 != 0)
    r9 = rcx_1

int32_t i = *(r9 + ((sx.q(rax_1) & r10_1) << 2))

if (i != 0xffffffff)
    int64_t rdx = *arg1
    
    do
        int64_t i_1 = sx.q(i)
        int64_t r11_1 = i_1 * 0x48
        int32_t rcx_5 = (*(r11_1 + rdx + 4) ^ *(arg2 + 4)) | (*(r11_1 + rdx + 8) ^ arg2[1].d)
            | (*(r11_1 + rdx + 0xc) ^ *(arg2 + 0xc))
        
        if ((rcx_5 | (*arg2 ^ *(r11_1 + rdx))) == 0)
            if (arg1[1].d != *(arg1 + 0x34))
                int64_t rax_12 = i_1 * 9
                int64_t rax_14 = sx.q(*(rdx + (rax_12 << 3) + 0x44)) & r10_1
                void* rcx_7 = r9 + (rax_14 << 2)
                int32_t j = *(r9 + (rax_14 << 2))
                
                while (j != 0xffffffff)
                    if (j == i)
                        *rcx_7 = *(rdx + (rax_12 << 3) + 0x40)
                        break
                    
                    int64_t j_1 = sx.q(j)
                    j = *(rdx + ((j_1 * 9 + 8) << 3))
                    rcx_7 = rdx + ((j_1 * 9 + 8) << 3)
            
            void* rbx_3 = *arg1 + r11_1
            sub_1405d1550(rbx_3 + 0x18)
            sub_1405d1550(rbx_3 + 0x10)
            rbp = 1
            sub_1407c2d20(arg1, i, 1)
            break
        
        i = *(r11_1 + rdx + 0x40)
    while (i != 0xffffffff)

return zx.q(rbp)
