// 函数: sub_140ca2650
// 地址: 0x140ca2650
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* rax = sub_140bd32b0(&data_1439a9b40, *arg1, arg1)
int32_t rax_1 = *arg1
int64_t rbx

if (test_bit(rax_1, 0x12))
    TEB* gsbase
    
    if (data_143e1abc0
            s> *(0x14 + *(gsbase->ThreadLocalStoragePointer + (zx.q(data_14401b1a0) << 3))))
        _Init_thread_header(&data_143e1abc0)
        
        if (data_143e1abc0 == 0xffffffff)
            sub_140b58260(&data_143e1abb8, u"*SUBSTRING*", 1)
            _Init_thread_footer(&data_143e1abc0)
    
    rbx = data_143e1abb8
else if ((rax_1.b & 0x40) == 0)
    rbx = *(arg1 + 4)
else
    rbx = *(arg1 + 0x14)

int64_t arg_8 = rbx
int32_t r9_1 = sub_140b5ead0(rbx.d) + arg_8:4.d
uint64_t rax_5
void** r11

if (*(rax + 8) == *(rax + 0x34))
label_140ca272b:
    r11 = sub_140bd30c0(rax, r9_1, &arg_8)
else
    void* rcx_3 = *(rax + 0x40)
    void* r8_1 = rax + 0x38
    
    if (rcx_3 != 0)
        r8_1 = rcx_3
    
    rax_5 = zx.q(*(r8_1 + (((sx.q(*(rax + 0x48)) - 1) & sx.q(r9_1)) << 2)))
    
    if (rax_5.d == 0xffffffff)
    label_140ca272b_1:
        r11 = sub_140bd30c0(rax, r9_1, &arg_8)
    else
        int64_t* rdx_8
        
        while (true)
            rdx_8 = (sx.q(rax_5.d) << 5) + *rax
            
            if (*rdx_8 == rbx)
                break
            
            rax_5 = zx.q(rdx_8[3].d)
            
            if (rax_5.d == 0xffffffff)
                goto label_140ca272b_2
        
        if (rax_5.d == 0xffffffff || rdx_8 == 0)
        label_140ca272b_2:
            r11 = sub_140bd30c0(rax, r9_1, &arg_8)
        else
            r11 = &rdx_8[1]

int64_t rcx_5 = sx.q(r11[1].d)
int32_t r10 = 0

if (rcx_5.d s> 0)
    void* rdx_10 = *r11
    int64_t r8_4 = 0
    int64_t* rcx_6 = rdx_10 + 0x14
    
    do
        if (*rdx_10 == *arg1 && rcx_6[-2] == *(arg1 + 4) && rcx_6[-1] == *(arg1 + 0xc)
                && *rcx_6 == *(arg1 + 0x14) && rcx_6[1] == *(arg1 + 0x1c)
                && rcx_6[2] == *(arg1 + 0x24) && rcx_6[3] == *(arg1 + 0x2c))
            int32_t r9_2
            r9_2.b = 1
            sub_140ca21a0(r11, r10, 1, r9_2.b)
            int64_t rax_6
            rax_6.b = 1
            return rax_6
        
        r10 += 1
        r8_4 += 1
        rdx_10 += 0xa0
        rcx_6 = &rcx_6[0x14]
    while (r8_4 s< rcx_5)

rax_5.b = 0
return rax_5
