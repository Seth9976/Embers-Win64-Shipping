// 函数: sub_140bd87f0
// 地址: 0x140bd87f0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* rax = sub_140bd32b0(&data_1439a9b40, *arg1, arg1)
int32_t rax_1 = *arg1
int64_t rbx

if (test_bit(rax_1, 0x12))
    TEB* gsbase
    
    if (data_143e1abc0
            s> *(0x14 + *(gsbase->ThreadLocalStoragePointer + (zx.q(data_14401b1a0) << 3))))
        _Init_thread_header(&data_143e1abc0)
    
    if (data_143e1abc0
            s<= *(0x14 + *(gsbase->ThreadLocalStoragePointer + (zx.q(data_14401b1a0) << 3)))
            || data_143e1abc0 != 0xffffffff)
        rbx = data_143e1abb8
    else
        sub_140b58260(&data_143e1abb8, u"*SUBSTRING*", 1)
        _Init_thread_footer(&data_143e1abc0)
        rbx = data_143e1abb8
else if ((rax_1.b & 0x40) == 0)
    rbx = *(arg1 + 4)
else
    rbx = *(arg1 + 0x14)

int64_t arg_8 = rbx
int32_t r9_1 = sub_140b5ead0(rbx.d) + arg_8:4.d
void* rbx_1

if (*(rax + 8) == *(rax + 0x34))
label_140bd88cb:
    rbx_1 = sub_140bd30c0(rax, r9_1, &arg_8)
else
    void* rcx_3 = *(rax + 0x40)
    void* r8_1 = rax + 0x38
    
    if (rcx_3 != 0)
        r8_1 = rcx_3
    
    int32_t rax_5 = *(r8_1 + (((sx.q(*(rax + 0x48)) - 1) & sx.q(r9_1)) << 2))
    
    if (rax_5 == 0xffffffff)
    label_140bd88cb_1:
        rbx_1 = sub_140bd30c0(rax, r9_1, &arg_8)
    else
        int64_t* rdx_8
        
        while (true)
            rdx_8 = (sx.q(rax_5) << 5) + *rax
            
            if (*rdx_8 == rbx)
                break
            
            rax_5 = rdx_8[3].d
            
            if (rax_5 == 0xffffffff)
                goto label_140bd88cb_2
        
        if (rax_5 == 0xffffffff || rdx_8 == 0)
        label_140bd88cb_2:
            rbx_1 = sub_140bd30c0(rax, r9_1, &arg_8)
        else
            rbx_1 = &rdx_8[1]

void* rdx_10 = *rbx_1
int64_t r10 = sx.q(*(rbx_1 + 8))
int64_t rsi_2 = r10 * 0xa0
void* r8_4 = rsi_2 + rdx_10

if (rdx_10 != r8_4)
    void* rcx_5 = rdx_10 + 0x14
    
    do
        if (*rdx_10 == *arg1 && *(rcx_5 - 0x10) == *(arg1 + 4) && *(rcx_5 - 8) == *(arg1 + 0xc)
                && *rcx_5 == *(arg1 + 0x14))
            if (*(rdx_10 + 0x1c) == *(arg1 + 0x1c) && *(rdx_10 + 0x24) == *(arg1 + 0x24)
                    && *(rdx_10 + 0x2c) == *(arg1 + 0x2c) && arg1[0x16] - arg1[0x21] s> 0)
                sub_140bd2420(rdx_10 + 0x50, &arg1[0x14])
            
            int64_t rax_13
            rax_13.b = 0
            return rax_13
        
        rdx_10 += 0xa0
        rcx_5 += 0xa0
    while (rdx_10 != r8_4)

int32_t rax_10 = (r10 + 1).d
*(rbx_1 + 8) = rax_10

if (rax_10 s> *(rbx_1 + 0xc))
    sub_140775640(rbx_1)

sub_140bd5710(rsi_2 + *rbx_1, arg1)
int32_t* rax_12
rax_12.b = 1
return rax_12
