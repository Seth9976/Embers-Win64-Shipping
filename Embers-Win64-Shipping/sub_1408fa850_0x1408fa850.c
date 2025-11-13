// 函数: sub_1408fa850
// 地址: 0x1408fa850
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
    void* rdx = *arg1
    
    do
        int64_t i_1 = sx.q(i)
        int64_t r9_1 = i_1 * 0x68
        int32_t rcx_5 = (*(r9_1 + rdx + 4) ^ *(arg2 + 4)) | (*(r9_1 + rdx + 8) ^ arg2[1].d)
            | (*(r9_1 + rdx + 0xc) ^ *(arg2 + 0xc))
        
        if ((rcx_5 | (*arg2 ^ *(r9_1 + rdx))) == 0)
            if (arg1[1].d != *(arg1 + 0x34))
                int64_t r8_1 = i_1 * 0x68
                int64_t rax_12 = sx.q(*(r8_1 + rdx + 0x64)) & r11_1
                void* rcx_7 = r10 + (rax_12 << 2)
                
                for (int32_t j = *(r10 + (rax_12 << 2)); j != 0xffffffff; j = *rcx_7)
                    if (j == i)
                        *rcx_7 = *(r8_1 + rdx + 0x60)
                        break
                    
                    rcx_7 = rdx + 0x60 + sx.q(j) * 0x68
            
            sub_1405ae100(*arg1 + 0x10 + r9_1)
            rbp = 1
            sub_1408fa9b0(arg1, i, 1)
            break
        
        i = *(r9_1 + rdx + 0x60)
    while (i != 0xffffffff)

return zx.q(rbp)
