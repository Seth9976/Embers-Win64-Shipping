// 函数: sub_14212ff20
// 地址: 0x14212ff20
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (arg1[1].d == *(arg1 + 0x34))
    return 0

void* r8 = arg1[8]
int64_t rbp_1 = sx.q(arg1[9].d) - 1
void* rsi = &arg1[7]
int32_t rdi = 0
void* rax_1 = rsi

if (r8 != 0)
    rax_1 = r8

int32_t i = *(rax_1 + ((sx.q(*arg2) & rbp_1) << 2))

if (i != 0xffffffff)
    void* rbx_1 = *arg1
    
    do
        int64_t* rdx_3 = sx.q(i) * 0x38 + rbx_1
        
        if (*rdx_3 == *arg2 && rdx_3[1] == *(arg2 + 8) && rdx_3[2].d == arg2[4]
                && *(rdx_3 + 0x14) == arg2[5] && rdx_3[3].d == arg2[6] && rdx_3[4].d == arg2[8]
                && *(rdx_3 + 0x1c) == arg2[7])
            int64_t rcx_1 = sx.q(*(rdx_3 + 0x34)) & rbp_1
            
            if (r8 != 0)
                rsi = r8
            
            int32_t j = *(rsi + (rcx_1 << 2))
            void* r8_1 = rsi + (rcx_1 << 2)
            
            for (; j != 0xffffffff; j = *r8_1)
                if (j == i)
                    *r8_1 = rdx_3[6].d
                    break
                
                r8_1 = rbx_1 + 0x30 + sx.q(j) * 0x38
            
            rdi = 1
            sub_140afe9e0(arg1, i, 1)
            break
        
        i = rdx_3[6].d
    while (i != 0xffffffff)

return zx.q(rdi)
