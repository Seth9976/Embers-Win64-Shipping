// 函数: sub_141a60c70
// 地址: 0x141a60c70
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (arg1[1].d == *(arg1 + 0x34))
    return 0

void* rax_1 = arg1[8]
int64_t r11 = sx.q(arg2[2])
int64_t r10 = sx.q(arg2[3])
int64_t rbp = sx.q(arg2[1])
int32_t rsi = 0
int64_t r12_1 = sx.q(arg1[9].d) - 1
int64_t r14 = sx.q(*arg2)
void* r15 = &arg1[7]

if (rax_1 != 0)
    r15 = rax_1

int32_t i = *(r15 + (((r14 ^ rbp ^ r11 ^ r10) & r12_1) << 2))

if (i != 0xffffffff)
    void* r8_1 = *arg1
    
    do
        int64_t i_1 = sx.q(i)
        void* rdx_1 = i_1 * 0x68 + r8_1
        
        if (((*(rdx_1 + 4) ^ rbp.d) | (*(rdx_1 + 8) ^ r11.d) | (*(rdx_1 + 0xc) ^ r10.d)
                | (r14.d ^ *rdx_1)) == 0)
            void* r10_1 = i_1 * 0x68
            int64_t rax_9 = sx.q(*(r10_1 + r8_1 + 0x64)) & r12_1
            void* rcx_10 = r15 + (rax_9 << 2)
            
            for (int32_t j = *(r15 + (rax_9 << 2)); j != 0xffffffff; j = *rcx_10)
                if (j == i)
                    *rcx_10 = *(r10_1 + r8_1 + 0x60)
                    break
                
                rcx_10 = r8_1 + 0x60 + sx.q(j) * 0x68
            
            int64_t rcx_13 = *(r10_1 + *arg1 + 0x50)
            
            if (rcx_13 != 0)
                sub_140a74f90(rcx_13)
            
            rsi = 1
            sub_1408fa9b0(arg1, i, 1)
            break
        
        i = *(rdx_1 + 0x60)
    while (i != 0xffffffff)

return zx.q(rsi)
