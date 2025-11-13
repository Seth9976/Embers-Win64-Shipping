// 函数: sub_142192930
// 地址: 0x142192930
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* rbx_1 = *(arg5 + 0x150)
arg5 = rbx_1

if (rbx_1 != 0)
    *(rbx_1 + 8) += 1
    rbx_1 = arg5

int64_t r10 = sx.q(*(arg4 + 0xe0))
int32_t rdi = 0
int32_t r8 = 0

if (r10 s> 0)
    int64_t rdx = 0
    
    while (true)
        void* rcx_1 = *(arg4 + 0xd8)
        
        if ((*(arg4 + 0xd8) & 1) != 0)
            rcx_1 = (rcx_1 s>> 1) + arg4 + 0xd8
        
        if (*(rcx_1 + (rdx << 3)) == data_143f4d4e0)
            break
        
        r8 += 1
        rdx += 1
        
        if (rdx s>= r10)
            goto label_1421929de

void* rdx_1

if (r10 s<= 0 || r8 == 0xffffffff)
label_1421929de:
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

int16_t r10_1 = *rdx_1

if (r10_1 != 0xffff)
    int64_t* rax_3 = *arg6
    void* r9_1 = *rax_3
    
    if ((r9_1.b & 1) != 0)
        r9_1 = (r9_1 s>> 1) + rax_3
    
    int32_t r8_2 = rax_3[1].d - 1
    
    if (r8_2 s> 0)
        do
            int32_t temp0_1
            int32_t temp1_1
            temp0_1:temp1_1 = sx.q(r8_2 + rdi)
            rdx_1 = zx.q(temp0_1)
            int32_t rax_7 = (temp1_1 - rdx_1.d) s>> 1
            
            if (*(r9_1 + (sx.q(rax_7) << 2)) u>= r10_1)
                r8_2 = rax_7
            else if (rdi != rax_7)
                rdi = rax_7
            else
                rdi += 1
        while (rdi s< r8_2)
    
    if (rdi == r8_2)
        int64_t rcx_7 = sx.q(rdi)
        
        if (*(r9_1 + (rcx_7 << 2)) == r10_1 && rdi s>= 0)
            *(arg6[1] + (rcx_7 << 3)) = rbx_1

return sub_1405d1550(&arg5, rdx_1)
