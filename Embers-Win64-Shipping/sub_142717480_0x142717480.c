// 函数: sub_142717480
// 地址: 0x142717480
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t rax = *(arg2 + 0xc)
int64_t rdi = 0
void* const rax_6

if (rax s>= data_143e1d9b4)
    rax_6 = nullptr
else
    int16_t temp0_1
    int32_t temp1_1
    temp0_1:temp1_1 = sx.q(rax)
    uint32_t rdx_1 = zx.d(temp0_1)
    int32_t rax_2 = temp1_1 + rdx_1
    rax_6 = *(data_143e1d9a0 + (sx.q(rax_2 s>> 0x10) << 3)) + sx.q(zx.d(rax_2.w) - rdx_1) * 0x18

if (((*(rax_6 + 8) u>> 0x1d).b & 1) != 0)
    return sub_142715e20(arg1, arg2) __tailcall

int64_t rbx = sx.q(*(arg2 + 0xe4))
TEB* gsbase

if (data_143f724b0 s> *(0x14 + *(gsbase->ThreadLocalStoragePointer + (zx.q(data_14401b1a0) << 3))))
    _Init_thread_header(&data_143f724b0)
    
    if (data_143f724b0 == 0xffffffff)
        data_143f724ac = 0xffffffff
        _Init_thread_footer(&data_143f724b0)

void* result

if (rbx.d == data_143f724ac)
    int32_t rcx_13 = data_143f72528
    int32_t arg_10 = rcx_13
    data_143f72528 = rcx_13 + 1
    *(arg2 + 0xe4) = rcx_13
    int32_t* var_68 = &arg_10
    void var_58
    int32_t* var_60_1 = sub_14271a370(&var_58, arg2)
    int32_t arg_18
    sub_1426f0720(arg1 + 0x38, &arg_18, &var_68, nullptr)
    sub_14271bca0(sx.q(arg_18) * 0x3c + 4 + *(arg1 + 0x38))
    int32_t* rdx_15
    
    if (*(arg1 + 0x40) == *(arg1 + 0x6c))
    label_1427176bd:
        rdx_15 = nullptr
    else
        void* rdx_12 = *(arg1 + 0x78)
        void* r9_2 = arg1 + 0x70
        int64_t rcx_19 = sx.q(arg_10)
        
        if (rdx_12 != 0)
            r9_2 = rdx_12
        
        int32_t rax_19 = *(r9_2 + (((sx.q(*(arg1 + 0x80)) - 1) & rcx_19) << 2))
        
        if (rax_19 == 0xffffffff)
        label_1427176bd_1:
            rdx_15 = nullptr
        else
            while (true)
                rdx_15 = sx.q(rax_19) * 0x3c + *(arg1 + 0x38)
                
                if (*rdx_15 == rcx_19.d)
                    break
                
                rax_19 = rdx_15[0xd]
                
                if (rax_19 == 0xffffffff)
                    goto label_1427176bd_2
            
            if (rax_19 == 0xffffffff)
            label_1427176bd_2:
                rdx_15 = nullptr
    
    void** rbx_2 = *(arg1 + 0x88)
    result = &rbx_2[sx.q(*(arg1 + 0x90))]
    uint64_t r14_2 = sx.q(*(arg1 + 0x90)) << 3 u>> 3
    
    if (rbx_2 u> result)
        r14_2 = 0
    
    if (r14_2 != 0)
        do
            void* rdx_16 = *rbx_2
            
            if (rdx_16 != 0)
                result = zx.q(rdx_15[3])
                
                if (test_bit(result.d, zx.d(*(rdx_16 + 0x44))))
                    result = sub_140926420(rdx_16 + 0x50, &rdx_15[1])
            
            rbx_2 = &rbx_2[1]
            rdi += 1
        while (rdi != r14_2)
else
    int32_t* rcx_9
    
    if (*(arg1 + 0x40) == *(arg1 + 0x6c))
    label_14271758d:
        rcx_9 = nullptr
    else
        void* rcx_6 = *(arg1 + 0x78)
        void* r8_5 = arg1 + 0x70
        
        if (rcx_6 != 0)
            r8_5 = rcx_6
        
        int32_t rax_13 = *(r8_5 + (((sx.q(*(arg1 + 0x80)) - 1) & rbx) << 2))
        
        if (rax_13 == 0xffffffff)
        label_14271758d_1:
            rcx_9 = nullptr
        else
            while (true)
                rcx_9 = sx.q(rax_13) * 0x3c + *(arg1 + 0x38)
                
                if (*rcx_9 == rbx.d)
                    break
                
                rax_13 = rcx_9[0xd]
                
                if (rax_13 == 0xffffffff)
                    goto label_14271758d_2
            
            if (rax_13 == 0xffffffff)
            label_14271758d_2:
                rcx_9 = nullptr
    
    sub_1427247c0(&rcx_9[1], arg2)
    int64_t* rbx_1 = *(arg1 + 0x88)
    result = &rbx_1[sx.q(*(arg1 + 0x90))]
    uint64_t rsi_1 = sx.q(*(arg1 + 0x90)) << 3 u>> 3
    
    if (rbx_1 u> result)
        rsi_1 = 0
    
    if (rsi_1 != 0)
        do
            void* rcx_11 = *rbx_1
            
            if (rcx_11 != 0)
                result = sub_140926420(rcx_11 + 0x60, &rcx_9[1])
            
            rbx_1 = &rbx_1[1]
            rdi += 1
        while (rdi != rsi_1)

return result
