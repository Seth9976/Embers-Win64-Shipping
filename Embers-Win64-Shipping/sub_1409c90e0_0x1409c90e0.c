// 函数: sub_1409c90e0
// 地址: 0x1409c90e0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* i = *(arg1 + 0x18)
void* r15_2 = &i[sx.q(*(arg1 + 0x20)) * 2]
int64_t rsi = sx.q(arg2)

for (; i != r15_2; i = &i[2])
    int64_t rdi_1 = sx.q(i[1].d)
    
    if (rsi.d s>= rdi_1.d)
        uint64_t rax = zx.q((rsi + 1).d)
        i[1].d = rax.d
        
        if (rax.d s> *(i + 0xc))
            sub_1405a4d70(i)
        
        uint64_t* r9_2 = *i + (rdi_1 << 3)
        int32_t r10_1 = rdi_1.d
        
        if (rdi_1.d s<= rsi.d)
            if (rsi.d - rdi_1.d + 1 u>= 2
                    && (&r9_2[rdi_1] u> arg1 + 0x28 || &r9_2[rsi] u< arg1 + 0x28))
                int32_t rcx_4 = (rsi.d - rdi_1.d + 1) & 0x80000001
                
                if (rcx_4 s< 0)
                    rcx_4 = ((rcx_4 - 1) | 0xfffffffe) + 1
                
                int32_t rax_2 = rsi.d - rcx_4
                
                do
                    r10_1 += 2
                while (r10_1 s<= rax_2)
                
                int32_t temp1_1
                int32_t temp2_1
                temp1_1:temp2_1 = sx.q(rax_2 - rdi_1.d + 2)
                int64_t rcx_9
                int64_t rdi_3
                rdi_3, rcx_9 =
                    __memfill_u64(r9_2, *(arg1 + 0x28), sx.q((temp2_1 - temp1_1) s>> 1) << 4 u>> 3)
                r9_2 = &r9_2[sx.q((temp2_1 - temp1_1) s>> 1) * 2]
            
            if (r10_1 s<= rsi.d)
                int64_t j_1 = sx.q(rsi.d - r10_1 + 1)
                int64_t j
                
                do
                    *r9_2 = *(arg1 + 0x28)
                    r9_2 = &r9_2[1]
                    j = j_1
                    j_1 -= 1
                while (j != 1)

int32_t rcx_10 = (rsi + 1).d

if (*(arg1 + 0xc) s>= rcx_10)
    rcx_10 = *(arg1 + 0xc)

*(arg1 + 0xc) = rcx_10
