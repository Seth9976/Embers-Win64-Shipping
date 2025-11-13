// 函数: sub_1424116a0
// 地址: 0x1424116a0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* rbp = *(arg5 + 0x20)

if (rbp == 0)
    return arg5

int64_t r10_1 = sx.q(*(arg4 + 0xe0))
int32_t rbx_1 = 0
int32_t r8 = 0
int64_t r15_1 = data_14395fa10

if (r10_1 s> 0)
    int64_t rdx = 0
    
    while (true)
        void* rcx_1 = *(arg4 + 0xd8)
        
        if ((*(arg4 + 0xd8) & 1) != 0)
            rcx_1 = (rcx_1 s>> 1) + arg4 + 0xd8
        
        if (*(rcx_1 + (rdx << 3)) == data_143f5c000)
            break
        
        r8 += 1
        rdx += 1
        
        if (rdx s>= r10_1)
            goto label_14241174f

void* rdx_1

if (r10_1 s<= 0 || r8 == 0xffffffff)
label_14241174f:
    TEB* gsbase
    
    if (data_143ce8564
            s> *(0x14 + *(gsbase->ThreadLocalStoragePointer + (zx.q(data_14401b1a0) << 3))))
        _Init_thread_header(&data_143ce8564)
        
        if (data_143ce8564 == 0xffffffff)
            data_143ce8560 = 0xffff
            _Init_thread_footer(&data_143ce8564)
    
    rdx_1 = &data_143ce8560
else
    void* rcx_5 = *(arg4 + 0xe8)
    
    if ((rcx_5.b & 1) != 0)
        rcx_5 = (rcx_5 s>> 1) + arg4 + 0xe8
    
    rdx_1 = rcx_5 + (sx.q(r8) << 1)

int16_t r10_2 = *rdx_1

if (r10_2 != 0xffff)
    int64_t* rax_4 = *arg6
    void* r9_1 = *rax_4
    
    if ((r9_1.b & 1) != 0)
        r9_1 = (r9_1 s>> 1) + rax_4
    
    int32_t r8_2 = rax_4[1].d - 1
    
    if (r8_2 s> 0)
        do
            int32_t temp0_1
            int32_t temp1_1
            temp0_1:temp1_1 = sx.q(r8_2 + rbx_1)
            int32_t rax_8 = (temp1_1 - temp0_1) s>> 1
            
            if (*(r9_1 + (sx.q(rax_8) << 2)) u>= r10_2)
                r8_2 = rax_8
            else if (rbx_1 != rax_8)
                rbx_1 = rax_8
            else
                rbx_1 += 1
        while (rbx_1 s< r8_2)
    
    if (rbx_1 == r8_2)
        int64_t rdx_3 = sx.q(rbx_1)
        
        if (*(r9_1 + (rdx_3 << 2)) == r10_2 && rbx_1 s>= 0)
            *(arg6[1] + (rdx_3 << 3)) = *(rbp + 8)

return sub_1421ad5f0(arg6, *(arg1 + 4), *(arg1 + 8), r15_1, *(rbp + 0x10))
