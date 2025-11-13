// 函数: sub_1409c8d30
// 地址: 0x1409c8d30
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* i = *(arg1 + 0x18)
void* rbp_2 = &i[sx.q(*(arg1 + 0x20)) * 2]
int64_t rsi = sx.q(arg2)

for (; i != rbp_2; i = &i[2])
    int64_t rdi_1 = sx.q(i[1].d)
    
    if (rsi.d s>= rdi_1.d)
        int32_t rax_1 = (rsi + 1).d
        i[1].d = rax_1
        
        if (rax_1 s> *(i + 0xc))
            sub_1406105e0(i)
        
        int32_t r9_1 = rdi_1.d
        int64_t r8_1 = *i + (rdi_1 << 2)
        
        if (rdi_1.d s<= rsi.d)
            if (rsi.d - rdi_1.d + 1 u>= 4
                    && (r8_1 + (rdi_1 << 2) u> arg1 + 0x28 || r8_1 + (rsi << 2) u< arg1 + 0x28))
                int32_t rcx_4 = (rsi.d - rdi_1.d + 1) & 0x80000003
                
                if (rcx_4 s< 0)
                    rcx_4 = ((rcx_4 - 1) | 0xfffffffc) + 1
                
                int32_t rax_3 = rsi.d - rcx_4
                
                do
                    r9_1 += 4
                while (r9_1 s<= rax_3)
                
                int32_t temp2_1
                int32_t temp3_1
                temp2_1:temp3_1 = sx.q(rax_3 - rdi_1.d + 4)
                int64_t rdx_5 = sx.q((temp3_1 + (temp2_1 & 3)) s>> 2) << 4
                int64_t rcx_9
                int64_t rdi_3
                rdi_3, rcx_9 = __memfill_u32(r8_1, *(arg1 + 0x28), rdx_5 u>> 2)
                r8_1 += rdx_5
            
            if (r9_1 s<= rsi.d)
                if (rsi.d - r9_1 + 1 s>= 4)
                    uint64_t rax_15 = zx.q(((rsi.d - r9_1 - 3) u>> 2) + 1)
                    uint64_t j_2 = zx.q(rax_15.d)
                    r9_1 += (rax_15 << 2).d
                    uint64_t j
                    
                    do
                        *r8_1 = *(arg1 + 0x28)
                        *(r8_1 + 4) = *(arg1 + 0x28)
                        *(r8_1 + 8) = *(arg1 + 0x28)
                        *(r8_1 + 0xc) = *(arg1 + 0x28)
                        r8_1 += 0x10
                        j = j_2
                        j_2 -= 1
                    while (j != 1)
                
                if (r9_1 s<= rsi.d)
                    int64_t j_3 = sx.q(rsi.d - r9_1 + 1)
                    int64_t j_1
                    
                    do
                        *r8_1 = *(arg1 + 0x28)
                        r8_1 += 4
                        j_1 = j_3
                        j_3 -= 1
                    while (j_1 != 1)

int32_t rcx_10 = (rsi + 1).d

if (*(arg1 + 0xc) s>= rcx_10)
    rcx_10 = *(arg1 + 0xc)

*(arg1 + 0xc) = rcx_10
