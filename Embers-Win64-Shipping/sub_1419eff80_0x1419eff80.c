// 函数: sub_1419eff80
// 地址: 0x1419eff80
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (arg1[1].d == *(arg1 + 0x34))
    return 0

uint32_t rbx_1 = (arg2 u>> 0x20).d
int64_t rbp_1 = sx.q(arg1[9].d) - 1
void* rsi = &arg1[7]
int32_t r9_2 = (arg2.d - rbx_1) ^ rbx_1 u>> 0xd
int32_t rdi = 0
int32_t r8_2 = (0x9e3779b9 - rbx_1 - r9_2) ^ r9_2 << 8
int32_t rcx_3 = (rbx_1 - r8_2 - r9_2) ^ r8_2 u>> 0xd
int32_t r9_5 = (r9_2 - r8_2 - rcx_3) ^ rcx_3 u>> 0xc
int32_t r8_5 = (r8_2 - r9_5 - rcx_3) ^ r9_5 << 0x10
int32_t rcx_6 = (rcx_3 - r8_5 - r9_5) ^ r8_5 u>> 5
int32_t r9_8 = (r9_5 - r8_5 - rcx_6) ^ rcx_6 u>> 3
int32_t r8_8 = (r8_5 - r9_8 - rcx_6) ^ r9_8 << 0xa
void* rax_17 = arg1[8]

if (rax_17 != 0)
    rsi = rax_17

int32_t i = *(rsi + (((sx.q(rcx_6 - r8_8 - r9_8) ^ zx.q(r8_8) u>> 0xf) & rbp_1) << 2))

if (i != 0xffffffff)
    int64_t r10_1 = *arg1
    
    do
        int64_t rcx_12 = sx.q(i) * 3
        int64_t rax_21 = *(r10_1 + (rcx_12 << 3))
        void* r8_9 = r10_1 + (rcx_12 << 3)
        
        if (rax_21.d == arg2.d && (rax_21 u>> 0x20).d == rbx_1)
            int64_t rax_24 = sx.q(*(r8_9 + 0x14)) & rbp_1
            void* rcx_13 = rsi + (rax_24 << 2)
            int32_t j = *(rsi + (rax_24 << 2))
            
            while (j != 0xffffffff)
                if (j == i)
                    *rcx_13 = *(r8_9 + 0x10)
                    break
                
                int64_t j_1 = sx.q(j)
                int64_t rcx_15 = j_1 + ((j_1 + 1) << 1)
                j = *(r10_1 + (rcx_15 << 3))
                rcx_13 = r10_1 + (rcx_15 << 3)
            
            rdi = 1
            sub_1405c3640(arg1, i, 1)
            break
        
        i = *(r8_9 + 0x10)
    while (i != 0xffffffff)

return zx.q(rdi)
