// 函数: sub_141d6a6f0
// 地址: 0x141d6a6f0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (arg1[1].d == *(arg1 + 0x34))
    return 0

int32_t rax_1 = sub_140a6b260(arg2, 0x10)
void* rcx_1 = arg1[8]
void* r10 = &arg1[7]
int32_t rbp = 0
int64_t r11_1 = sx.q(arg1[9].d) - 1

if (rcx_1 != 0)
    r10 = rcx_1

int32_t i = *(r10 + ((sx.q(rax_1) & r11_1) << 2))

if (i != 0xffffffff)
    void* r8_1 = *arg1
    
    do
        int64_t i_1 = sx.q(i)
        void* rdx_1 = i_1 * 0x38 + r8_1
        int32_t rcx_6 = (*(rdx_1 + 4) ^ *(arg2 + 4)) | (*(rdx_1 + 8) ^ arg2[1].d)
            | (*(rdx_1 + 0xc) ^ *(arg2 + 0xc)) | (*arg2 ^ *rdx_1)
        
        if (rcx_6 == 0)
            if (arg1[1].d != *(arg1 + 0x34))
                int64_t rdx_2 = i_1 * 0x38
                int64_t rax_12 = sx.q(*(rdx_2 + r8_1 + 0x34)) & r11_1
                void* rcx_7 = r10 + (rax_12 << 2)
                
                for (int32_t j = *(r10 + (rax_12 << 2)); j != 0xffffffff; j = *rcx_7)
                    if (j == i)
                        *rcx_7 = *(rdx_2 + r8_1 + 0x30)
                        break
                    
                    rcx_7 = r8_1 + 0x30 + sx.q(j) * 0x38
            
            int64_t rcx_10 = *(i_1 * 0x38 + *arg1 + 0x20)
            
            if (rcx_10 != 0)
                sub_140a74f90(rcx_10)
            
            rbp = 1
            sub_140afe9e0(arg1, i, 1)
            break
        
        i = *(rdx_1 + 0x30)
    while (i != 0xffffffff)

return zx.q(rbp)
