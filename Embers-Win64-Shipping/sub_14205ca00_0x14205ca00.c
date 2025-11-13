// 函数: sub_14205ca00
// 地址: 0x14205ca00
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* rdi_1 = arg6 + 0x130
int64_t rbx

if (arg5 s> 1)
label_14205cb81:
    
    if (*(arg1 + 0xc) u> 0)
        sub_14088d770(arg7, *(arg1 + 0xa), *(rdi_1 + zx.q(*(rdi_1 + 0x30)) * 0x10 + 0x18))
    
    rbx = 0
    
    if (*(arg1 + 0x10) u> 0)
        uint64_t rcx_10 = zx.q(*(rdi_1 + 0x30))
        rbx.b = *(rdi_1 + 0x38) - *(rdi_1 + 0x34) u<= 1
        void* rbx_4 = (((rbx ^ rcx_10) + 1) << 4) + rdi_1
        
        if (*rbx_4 == 0)
            rbx_4 = ((rcx_10 + 1) << 4) + rdi_1
        
        sub_14088d770(arg7, *(arg1 + 0xe), *(rbx_4 + 8))
        rbx = 1
else
    int64_t rax_1 = sx.q(data_143f0f1a0)
    
    if (rax_1.d u<= 0x30 && test_bit(0x1000030320000, rax_1))
        goto label_14205cb81
    
    int64_t rcx_1 = *(&data_143f025f0 + rax_1 * 0x14)
    
    if (rcx_1 == data_143f025c0)
        goto label_14205cb81
    
    if (rax_1.d u> 0x1f)
        if (rcx_1 == data_143f025b0)
            goto label_14205cb81
    else if (test_bit(0xc8451800, rax_1.d) || rcx_1 == data_143f025b0)
        goto label_14205cb81
    
    int64_t r10_1 = sx.q(*(arg4 + 0xe0))
    rbx = 0
    int64_t r12_1 = *(rdi_1 + 0x40)
    int32_t r8 = 0
    
    if (r10_1 s> 0)
        int64_t rdx = 0
        
        while (true)
            void* rcx_3 = *(arg4 + 0xd8)
            
            if ((*(arg4 + 0xd8) & 1) != 0)
                rcx_3 = (rcx_3 s>> 1) + arg4 + 0xd8
            
            if (*(rcx_3 + (rdx << 3)) == data_143f41310)
                break
            
            r8 += 1
            rdx += 1
            
            if (rdx s>= r10_1)
                goto label_14205cb1a
    
    int16_t* rdx_1
    
    if (r10_1 s<= 0 || r8 == 0xffffffff)
    label_14205cb1a:
        TEB* gsbase
        
        if (data_143ce8564
                s> *(0x14 + *(gsbase->ThreadLocalStoragePointer + (zx.q(data_14401b1a0) << 3))))
            _Init_thread_header(&data_143ce8564)
            
            if (data_143ce8564 == 0xffffffff)
                data_143ce8560 = 0xffff
                _Init_thread_footer(&data_143ce8564)
        
        rdx_1 = &data_143ce8560
    else
        void* rcx_7 = *(arg4 + 0xe8)
        
        if ((rcx_7.b & 1) != 0)
            rcx_7 = (rcx_7 s>> 1) + arg4 + 0xe8
        
        rdx_1 = rcx_7 + (sx.q(r8) << 1)
    
    int16_t rax_5 = *rdx_1
    
    if (rax_5 != 0xffff)
        sub_140891ab0(arg7, r12_1, zx.d(rax_5))

arg6.d = *(arg1 + 4)
arg6:4.w = *(arg1 + 8)
arg5 = rbx.d
sub_14088bf20(arg7, &arg6, &arg5)
arg6.d = *(arg1 + 0x12)
arg6:4.w = *(arg1 + 0x16)
uint64_t result = sub_14088bf20(arg7, &arg6, rdi_1)

if (*(arg1 + 0x1a) u<= 0)
    return result

return sub_14088d770(arg7, *(arg1 + 0x18), *(rdi_1 + 8))
