// 函数: sub_14122fa20
// 地址: 0x14122fa20
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

sub_1413e83d0(*(arg1 + 0x80))

if (*(arg1 + 0x30) == 0)
    int32_t rdi_1 = 0
    int64_t* r14_2 = *(arg1 + 0x80) + 0x2110
    int32_t rcx_3 = r14_2[1].d
    
    if (rcx_3 s> 0)
        int32_t* rsi_1 = nullptr
        int32_t rdx_2
        
        do
            int64_t r9_1 = *r14_2
            rdx_2 = rcx_3
            
            if (*(rsi_1 + r9_1) == *(arg1 + 0x28))
                int32_t rax_4 = rcx_3 - rdi_1 - 1
                
                if (rax_4 s>= 1)
                    rax_4 = 1
                
                if (rax_4 != 0)
                    memcpy(r9_1 + (sx.q(rdi_1) << 2), r9_1 + (sx.q(rcx_3 - rax_4) << 2), rax_4 << 2)
                    rcx_3 = r14_2[1].d
                
                r14_2[1].d = rcx_3 - 1
                sub_1405dac90(r14_2)
                rdx_2 = r14_2[1].d
                rdi_1 -= 1
                rsi_1 -= 4
            
            rdi_1 += 1
            rsi_1 = &rsi_1[1]
            rcx_3 = rdx_2
        while (rdi_1 s< rdx_2)
else
    void* rcx_2 = *(arg1 + 0x80) + 0x1d60
    int128_t var_18 = *(arg1 + 0x30)
    sub_14122f170(rcx_2, &var_18)

void* rdx_5
void* r8_3
rdx_5, r8_3 = sub_14122ea30(*(arg1 + 0x80) + 0x1ab8, *(arg1 + 0x28))

for (int64_t* i = *(arg1 + 0x10); i != 0; i = *(arg1 + 0x10))
    rdx_5, r8_3 = sub_14141c8d0(i, rdx_5, r8_3)

int64_t* i_1

for (i_1 = *(arg1 + 0x18); i_1 != 0; i_1 = *(arg1 + 0x18))
    rdx_5, r8_3 = sub_14141c8d0(i_1, rdx_5, r8_3)

return i_1
