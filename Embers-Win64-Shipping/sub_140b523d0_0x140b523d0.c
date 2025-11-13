// 函数: sub_140b523d0
// 地址: 0x140b523d0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (arg1[0x282] == arg1[0x28b])
    return 0

int32_t rax_1 = sub_140a6b260(arg2, 0x10)
void* rcx_1 = *(arg1 + 0xab0)
void* r11 = &arg1[0x28c]
int32_t rsi = 0
int64_t rbp_1 = sx.q(arg1[0x2ae]) - 1

if (rcx_1 != 0)
    r11 = rcx_1

int32_t i = *(r11 + ((sx.q(rax_1) & rbp_1) << 2))

if (i != 0xffffffff)
    int32_t* rax_4 = *(arg1 + 0xa00)
    int32_t* r9_1 = arg1
    
    if (rax_4 != 0)
        r9_1 = rax_4
    
    do
        int64_t i_1 = sx.q(i)
        int64_t rax_5 = i_1 * 5
        void* r8_1 = &r9_1[rax_5 * 2]
        int32_t rcx_5 = (r9_1[rax_5 * 2 + 1] ^ *(arg2 + 4)) | (r9_1[rax_5 * 2 + 2] ^ arg2[1].d)
            | (*(r8_1 + 0xc) ^ *(arg2 + 0xc))
        
        if ((rcx_5 | (*arg2 ^ *r8_1)) == 0)
            if (arg1[0x282] != arg1[0x28b])
                int64_t rax_13 = i_1 * 5
                int64_t rax_15 = sx.q(r9_1[rax_13 * 2 + 9]) & rbp_1
                void* rcx_7 = r11 + (rax_15 << 2)
                int32_t j = *(r11 + (rax_15 << 2))
                
                while (j != 0xffffffff)
                    if (j == i)
                        *rcx_7 = r9_1[rax_13 * 2 + 8]
                        break
                    
                    int64_t j_1 = sx.q(j)
                    j = r9_1[(j_1 * 5 + 4) * 2]
                    rcx_7 = &r9_1[(j_1 * 5 + 4) * 2]
            
            rsi = 1
            sub_140b525c0(arg1, i, 1)
            break
        
        i = *(r8_1 + 0x20)
    while (i != 0xffffffff)

return zx.q(rsi)
