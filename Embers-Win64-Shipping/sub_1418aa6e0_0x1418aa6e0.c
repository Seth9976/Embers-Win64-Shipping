// 函数: sub_1418aa6e0
// 地址: 0x1418aa6e0
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
    int64_t r9_1 = *arg1
    
    do
        int64_t i_1 = sx.q(i)
        void* rdx_2 = (i_1 << 5) + r9_1
        int32_t rcx_6 = (*(rdx_2 + 4) ^ *(arg2 + 4)) | (*(rdx_2 + 8) ^ arg2[1].d)
            | (*(rdx_2 + 0xc) ^ *(arg2 + 0xc)) | (*arg2 ^ *rdx_2)
        
        if (rcx_6 == 0)
            if (arg1[1].d != *(arg1 + 0x34))
                int64_t rdx_4 = i_1 << 5
                int64_t rax_12 = sx.q(*(rdx_4 + r9_1 + 0x1c)) & r11_1
                void* rcx_7 = r10 + (rax_12 << 2)
                
                for (int32_t j = *(r10 + (rax_12 << 2)); j != 0xffffffff; j = *rcx_7)
                    if (j == i)
                        *rcx_7 = *(rdx_4 + r9_1 + 0x18)
                        break
                    
                    rcx_7 = (sx.q(j) << 5) + 0x18 + r9_1
            
            rbp = 1
            int64_t* rcx_11 = *((i_1 << 5) + *arg1 + 0x10)
            
            if (rcx_11 != 0)
                int64_t r8_3 = *rcx_11
                (*r8_3)(rcx_11, 1, r8_3)
            
            sub_1405c36f0(arg1, i, 1)
            break
        
        i = *(rdx_2 + 0x18)
    while (i != 0xffffffff)

return zx.q(rbp)
