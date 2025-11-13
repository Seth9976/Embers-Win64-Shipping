// 函数: sub_142148240
// 地址: 0x142148240
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t rbx = 0
int64_t rdi = sx.q(*(arg4 + 0xe0))
int32_t result_1 = 0
int64_t r14 = *(arg6 + 0x2a0)

if (rdi s> 0)
    int64_t rdx = 0
    
    while (true)
        void* rcx_1 = *(arg4 + 0xd8)
        
        if ((*(arg4 + 0xd8) & 1) != 0)
            rcx_1 = (rcx_1 s>> 1) + arg4 + 0xd8
        
        if (*(rcx_1 + (rdx << 3)) == data_143f4cb20)
            break
        
        result_1 += 1
        rdx += 1
        
        if (rdx s>= rdi)
            goto label_1421482dd

uint64_t result
void* rdx_1

if (rdi s<= 0 || result_1 == 0xffffffff)
label_1421482dd:
    TEB* gsbase
    result = zx.q(*(0x14 + *(gsbase->ThreadLocalStoragePointer + (zx.q(data_14401b1a0) << 3))))
    
    if (data_143ce8564 s> result.d)
        result = _Init_thread_header(&data_143ce8564)
        
        if (data_143ce8564 == 0xffffffff)
            data_143ce8560 = 0xffff
            result = _Init_thread_footer(&data_143ce8564)
    
    rdx_1 = &data_143ce8560
else
    void* rcx_5 = *(arg4 + 0xe8)
    
    if ((rcx_5.b & 1) != 0)
        rcx_5 = (rcx_5 s>> 1) + arg4 + 0xe8
    
    result = sx.q(result_1)
    rdx_1 = rcx_5 + (result << 1)

int16_t r10_2 = *rdx_1

if (r10_2 != 0xffff)
    result = *arg7
    int64_t r9_1 = *result
    
    if ((r9_1.b & 1) != 0)
        r9_1 = (r9_1 s>> 1) + result
    
    int32_t rcx_4 = 0
    int32_t r8_1 = *(result + 8) - 1
    
    if (r8_1 s> 0)
        do
            int32_t temp0_1
            int32_t temp1_1
            temp0_1:temp1_1 = sx.q(r8_1 + rcx_4)
            result = zx.q((temp1_1 - temp0_1) s>> 1)
            int64_t rdx_3 = sx.q(result.d)
            
            if (*(r9_1 + (rdx_3 << 2)) u>= r10_2)
                r8_1 = rdx_3.d
            else if (rcx_4 != rdx_3.d)
                rcx_4 = rdx_3.d
            else
                rcx_4 += 1
        while (rcx_4 s< r8_1)
    
    if (rcx_4 == r8_1)
        int64_t rdx_4 = sx.q(rcx_4)
        
        if (*(r9_1 + (rdx_4 << 2)) == r10_2 && rcx_4 s>= 0)
            result = arg7[1]
            *(result + (rdx_4 << 3)) = r14

if (arg5 s>= 3)
    int32_t r10_3 = *(arg1 + 0x4c)
    int64_t rbp_1 = *(arg6 + 0x2b8)
    result = zx.q(r10_3 u>> 0x10)
    
    if (result.w != 0)
        uint64_t rsi_1 = *arg7
        int64_t r9_3 = *(rsi_1 + 0x20)
        result = rsi_1 + 0x20
        
        if ((r9_3.b & 1) != 0)
            r9_3 = (r9_3 s>> 1) + result
        
        int32_t r8_3 = *(result + 8) - 1
        
        if (r8_3 s> 0)
            do
                int32_t temp2_1
                int32_t temp3_1
                temp2_1:temp3_1 = sx.q(r8_3 + rbx)
                result = zx.q((temp3_1 - temp2_1) s>> 1)
                int64_t rcx_7 = sx.q(result.d)
                
                if (*(r9_3 + (rcx_7 << 2)) u>= r10_3.w)
                    r8_3 = rcx_7.d
                else if (rbx != rcx_7.d)
                    rbx = rcx_7.d
                else
                    rbx += 1
            while (rbx s< r8_3)
        
        if (rbx == r8_3)
            int64_t r11_2 = sx.q(rbx)
            
            if (*(r9_3 + (r11_2 << 2)) == r10_3.w && rbx s>= 0)
                int32_t temp4_1
                int32_t temp5_1
                temp4_1:temp5_1 = sx.q(rbx)
                int32_t rdx_7 = temp4_1 & 7
                int32_t rax_12 = temp5_1 + rdx_7
                uint64_t r8_8 = zx.q((*(rsi_1 + 0x28) + *(rsi_1 + 0x18) + *(rsi_1 + 8)) << 3)
                    + zx.q(rax_12 s>> 3)
                int64_t rdx_9 = arg7[1]
                *(r8_8 + rdx_9) |= (1 << (((rax_12 & 7) - rdx_7) u% 0x20)).b
                uint64_t rax_15 = *arg7
                result = arg7[1]
                *(zx.q((*(rax_15 + 0x18) + *(rax_15 + 8)) << 3) + (r11_2 << 3) + result) = rbp_1

return result
