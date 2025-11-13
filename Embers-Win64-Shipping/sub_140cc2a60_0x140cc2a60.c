// 函数: sub_140cc2a60
// 地址: 0x140cc2a60
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t r13
r13.b = 0
void* r11_2 = sx.q(arg1) * 0x50 + data_143e1d678
int32_t* i = *(r11_2 + 0x18)

for (void* r10 = &i[sx.q(*(r11_2 + 0x20))]; i != r10; i = &i[1])
    int32_t rax_2 = *i
    
    if (rax_2 s>= 0)
        int64_t rdx_1 = sx.q(zx.d(rax_2.w)) * 3
        int64_t rcx_1 = *(data_143e1d9a0 + (sx.q(rax_2 s>> 0x10) << 3))
        int32_t rcx_2 = *(rcx_1 + (rdx_1 << 3) + 8)
        
        if (((rcx_2 u>> 0x1d).b & 1) != 0)
            *i = 0xffffffff
            r13.b = 1
        else
            *(rcx_1 + (rdx_1 << 3) + 8) = rcx_2 & 0xefffffff

int32_t* rdi = *(r11_2 + 0x28)
int64_t r15
r15.b = 0
int64_t result = sx.q(*(r11_2 + 0x30))
void* r12 = &rdi[result]

if (rdi != r12)
    do
        result = zx.q(*rdi)
        
        if (result.d s>= 0)
            int64_t rdx_3 = sx.q(zx.d(result.w)) * 3
            int64_t rcx_5 = *(data_143e1d9a0 + (sx.q(result.d s>> 0x10) << 3))
            int64_t* rsi_1 = rcx_5 + (rdx_3 << 3)
            int32_t rdx_4 = *(rcx_5 + (rdx_3 << 3) + 8)
            result = zx.q(rdx_4 u>> 0x1d)
            
            if ((result.b & 1) != 0)
                *rdi = 0xffffffff
                r15.b = 1
            else
                result = zx.q(rdx_4 u>> 0x1c)
                
                if ((result.b & 1) == 0)
                    int32_t rcx_9 = *(rsi_1 + 0xc)
                    
                    if (rcx_9 s> 0)
                        result = zx.q(rdx_4 u>> 0x17)
                        
                        if ((result.b & 1) == 0)
                            uint32_t rax_15 = zx.d(rcx_9.w)
                            rsi_1[1].d = rdx_4 | 0x800000
                            
                            if (rcx_9 s< 0)
                                rcx_9 += 0xffff
                                rax_15 -= 0x10000
                            
                            int64_t rdx_9 = sx.q(rax_15) * 3
                            int64_t rcx_12 = *(data_143e1d9a0 + (sx.q(rcx_9 s>> 0x10) << 3))
                            void* r8 = rcx_12 + (rdx_9 << 3)
                            int32_t rcx_13 = *(rcx_12 + (rdx_9 << 3) + 8)
                            result = zx.q(rcx_13 u>> 0x1c)
                            
                            if ((result.b & 1) != 0)
                                *(r8 + 8) = rcx_13 & 0xefffffff
                                result = sub_140cc2a60(zx.q(not.d(*(r8 + 0xc))), arg2)
                else
                    int64_t r14_1 = *rsi_1
                    rsi_1[1].d = rdx_4 & 0xefffffff
                    int64_t rbp_1 = sx.q(arg2[1].d)
                    int32_t rax_13 = (rbp_1 + 1).d
                    arg2[1].d = rax_13
                    
                    if (rax_13 s> *(arg2 + 0xc))
                        sub_1405a4d70(arg2)
                    
                    result = *arg2
                    *(result + (rbp_1 << 3)) = r14_1
                    int32_t rcx_7 = *(rsi_1 + 0xc)
                    
                    if (rcx_7 s< 0)
                        result = sub_140cc2a60(zx.q(not.d(rcx_7)), arg2)
        
        rdi = &rdi[1]
    while (rdi != r12)
    
    if (r15.b != 0 || r13.b != 0)
        goto label_140cc2c32
else if (r13.b != 0)
label_140cc2c32:
    int64_t rbp_2 = 0
    int32_t* rdi_1 = *(r11_2 + 8)
    result = &rdi_1[sx.q(*(r11_2 + 0x10))]
    uint64_t r14_3 = sx.q(*(r11_2 + 0x10)) << 2 u>> 2
    
    if (rdi_1 u> result)
        r14_3 = 0
    
    if (r14_3 != 0)
        do
            int32_t rax_20 = *rdi_1
            uint32_t rdx_11 = zx.d(rax_20.w)
            
            if (rax_20 s< 0)
                rax_20 += 0xffff
                rdx_11 -= 0x10000
            
            int64_t rsi_2 = sx.q(arg2[1].d)
            int32_t rax_24 = (rsi_2 + 1).d
            int64_t r15_1 =
                *(*(data_143e1d9a0 + (sx.q(rax_20 s>> 0x10) << 3)) + sx.q(rdx_11) * 0x18)
            arg2[1].d = rax_24
            
            if (rax_24 s> *(arg2 + 0xc))
                sub_1405a4d70(arg2)
            
            result = *arg2
            rdi_1 = &rdi_1[1]
            rbp_2 += 1
            *(result + (rsi_2 << 3)) = r15_1
        while (rbp_2 != r14_3)
    
    *(r11_2 + 0x48) = 1
    data_143e1d69c = 1

return result
