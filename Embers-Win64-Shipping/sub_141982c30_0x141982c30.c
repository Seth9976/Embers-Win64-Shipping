// 函数: sub_141982c30
// 地址: 0x141982c30
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (arg1[1].d == *(arg1 + 0x34))
    return 0

void* rax_1 = arg1[8]
int64_t rbx = *(arg2 + 0x50)
uint64_t rbp = zx.q(arg2[1].b)
int64_t rsi = *(arg2 + 0x60)
int64_t rdi = *(arg2 + 0x58)
void* r12 = &arg1[7]
int64_t r13_1 = sx.q(arg1[9].d) - 1
int64_t r11 = *(arg2 + 0x48)
int64_t r14 = sx.q(*arg2)
int32_t r15 = 0

if (rax_1 != 0)
    r12 = rax_1

int64_t rdx_3 = sx.q((r11 u>> 0x20).d * 0x17 + r11.d) ^ sx.q((rbx u>> 0x20).d * 0x17 + rbx.d)
    ^ sx.q((rsi u>> 0x20).d * 0x17 + rsi.d) ^ sx.q((rdi u>> 0x20).d * 0x17 + rdi.d)
int32_t i = *(r12 + (((rdx_3 ^ r14 ^ rbp) & r13_1) << 2))

if (i != 0xffffffff)
    int32_t* rdx_7 = *arg1
    
    do
        int64_t r10_1 = sx.q(i) * 0x78
        
        if (rdx_7[sx.q(i) * 0x1e] == r14.d && rdx_7[sx.q(i) * 0x1e + 1].b == rbp.b
                && *(rdx_7 + r10_1 + 0x48) == r11 && *(rdx_7 + r10_1 + 0x50) == rbx
                && *(rdx_7 + r10_1 + 0x58) == rdi && *(rdx_7 + r10_1 + 0x60) == rsi)
            int64_t rax_21 = sx.q(rdx_7[sx.q(i) * 0x1e + 0x1d]) & r13_1
            void* rcx_2 = r12 + (rax_21 << 2)
            
            for (int32_t j = *(r12 + (rax_21 << 2)); j != 0xffffffff; j = *rcx_2)
                if (j == i)
                    *rcx_2 = rdx_7[sx.q(i) * 0x1e + 0x1c]
                    break
                
                rcx_2 = sx.q(j) * 0x78 + 0x70 + rdx_7
            
            r15 = 1
            void* rbx_1 = &arg1[2]
            
            if (*(arg1 + 0x34) != 0)
                *(sx.q(arg1[6].d) * 0x78 + *arg1) = i
            
            int32_t* rcx_7 = *arg1
            int32_t rax_26 = -1
            rcx_7[sx.q(i) * 0x1e] = 0xffffffff
            
            if (*(arg1 + 0x34) s> 0)
                rax_26 = arg1[6].d
            
            rcx_7[sx.q(i) * 0x1e + 1] = rax_26
            *(arg1 + 0x34) += 1
            arg1[6].d = i
            void* rax_27 = *(rbx_1 + 0x10)
            
            if (rax_27 != 0)
                rbx_1 = rax_27
            
            int32_t temp0_1
            int32_t temp1_1
            temp0_1:temp1_1 = sx.q(i)
            int64_t rcx_8 = sx.q((temp1_1 + (temp0_1 & 0x1f)) s>> 5)
            *(rbx_1 + (rcx_8 << 2)) &= not.d(rol.d(1, i.b))
            break
        
        i = rdx_7[sx.q(i) * 0x1e + 0x1c]
    while (i != 0xffffffff)

return zx.q(r15)
