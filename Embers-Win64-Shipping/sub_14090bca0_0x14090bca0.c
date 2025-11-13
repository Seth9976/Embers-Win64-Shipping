// 函数: sub_14090bca0
// 地址: 0x14090bca0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* i = *(arg1 + 0x18)
void* r14_2 = &i[sx.q(*(arg1 + 0x20)) * 2]
int64_t rsi = sx.q(arg2)

for (; i != r14_2; i = &i[2])
    int64_t rdi_1 = sx.q(i[1].d)
    
    if (rsi.d s>= rdi_1.d)
        uint64_t rax = zx.q((rsi + 1).d)
        i[1].d = rax.d
        
        if (rax.d s> *(i + 0xc))
            sub_1405a4cf0(i)
        
        int32_t* r8_2 = *i + (rdi_1 << 2)
        int32_t r9_1 = rdi_1.d
        
        if (rdi_1.d s<= rsi.d)
            if (rsi.d - rdi_1.d + 1 u>= 4
                    && (&r8_2[rdi_1] u> arg1 + 0x28 || &r8_2[rsi] u< arg1 + 0x28))
                int32_t rcx_4 = (rsi.d - rdi_1.d + 1) & 0x80000003
                
                if (rcx_4 s< 0)
                    rcx_4 = ((rcx_4 - 1) | 0xfffffffc) + 1
                
                int32_t rax_2 = rsi.d - rcx_4
                
                do
                    r9_1 += 4
                while (r9_1 s<= rax_2)
                
                int32_t temp1_1
                int32_t temp2_1
                temp1_1:temp2_1 = sx.q(rax_2 - rdi_1.d + 4)
                int64_t rcx_9
                int64_t rdi_3
                rdi_3, rcx_9 = __memfill_u32(r8_2, *(arg1 + 0x28), 
                    sx.q((temp2_1 + (temp1_1 & 3)) s>> 2) << 4 u>> 2)
                r8_2 = &r8_2[sx.q((temp2_1 + (temp1_1 & 3)) s>> 2) * 4]
            
            if (r9_1 s<= rsi.d)
                int64_t j_1 = sx.q(rsi.d - r9_1 + 1)
                int64_t j
                
                do
                    *r8_2 = *(arg1 + 0x28)
                    r8_2 = &r8_2[1]
                    j = j_1
                    j_1 -= 1
                while (j != 1)

int32_t rcx_10 = (rsi + 1).d

if (*(arg1 + 0xc) s>= rcx_10)
    rcx_10 = *(arg1 + 0xc)

*(arg1 + 0xc) = rcx_10
