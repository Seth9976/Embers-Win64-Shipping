// 函数: sub_14152f500
// 地址: 0x14152f500
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* rcx = arg1[1]
int32_t arg_8 = arg2[1].d
int32_t* rdx = *rcx

if (&rdx[1] u> rcx[1])
    int32_t* rdx_1 = &arg_8
    
    if ((*(arg1 + 0x29) & 0x20) != 0)
        sub_140b54070(arg1, rdx_1, arg3)
    else
        (*(*arg1 + 0x150))(arg1, rdx_1, 4)
else
    arg_8 = *rdx
    *rcx += 4

int32_t rdx_2 = arg_8

if (rdx_2 s> *(arg2 + 0xc))
    sub_1405c5660(arg2, rdx_2)
    rdx_2 = arg_8

int64_t rsi = sx.q(arg2[1].d)

if (rdx_2 s> rsi.d)
    arg2[1].d = rdx_2
    int32_t i_2 = rdx_2 - rsi.d
    
    if (rdx_2 s> *(arg2 + 0xc))
        sub_1405c4ec0(arg2)
        rdx_2 = arg_8
    
    void*** r8_1 = *arg2 + rsi * 0x28
    
    if (i_2 != 0)
        void* rax_5 = r8_1 + 0x24
        int32_t i
        
        do
            *(rax_5 - 0x1c) = 0x1010101
            *(rax_5 - 0x18) = 1
            rax_5 += 0x28
            *r8_1 = &data_142fc4870
            r8_1 = &r8_1[5]
            __builtin_memcpy(rax_5 - 0x3c, 
                "\xff\xff\x7f\x7f\xff\xff\x7f\x7f\xff\xff\x7f\x7f\xff\xff\x7f\xff\xff\xff\x7f\xff", 
                0x14)
            *(rax_5 - 0x28) = 0xff7fffff
            i = i_2
            i_2 -= 1
        while (i != 1)
        rdx_2 = arg_8
else if (rdx_2 s< rsi.d)
    int32_t rdi_2 = rsi.d
    int32_t i_4 = rdi_2 - rdx_2
    
    if (rdi_2 != rdx_2)
        int32_t i_3 = i_4
        int64_t r10_1 = sx.q(rdx_2) * 5
        void*** rcx_5 = *arg2 + (r10_1 << 3)
        int32_t i_1
        
        do
            *rcx_5 = &data_142fc3cd0
            rcx_5 = &rcx_5[5]
            i_1 = i_3
            i_3 -= 1
        while (i_1 != 1)
        int32_t rax_8 = arg2[1].d
        int32_t rcx_7 = rax_8 - i_4
        
        if (rcx_7 != rdx_2)
            int64_t r9_1 = *arg2
            memmove(r9_1 + (r10_1 << 3), r9_1 + rsi * 0x28, (rcx_7 - rdx_2) * 0x28)
            rax_8 = arg2[1].d
        
        arg2[1].d = rax_8 - i_4
        sub_1409da680(arg2)
        rdx_2 = arg_8

int32_t rdi_3 = 0

if (rdx_2 s> 0)
    int64_t rsi_1 = 0
    
    do
        int64_t* rcx_13 = *arg2 + rsi_1
        (*(*rcx_13 + 0x88))(rcx_13, arg1)
        rdi_3 += 1
        rsi_1 += 0x28
    while (rdi_3 s< arg_8)

return arg1
