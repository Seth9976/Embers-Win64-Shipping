// 函数: sub_14152e3c0
// 地址: 0x14152e3c0
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

int32_t rcx_3 = arg_8

if (rcx_3 s> *(arg2 + 0xc))
    sub_141750500(arg2, rcx_3)
    rcx_3 = arg_8

int64_t rbp = sx.q(arg2[1].d)
int32_t rbx = 0

if (rcx_3 s> rbp.d)
    arg2[1].d = rcx_3
    int32_t i_1 = rcx_3 - rbp.d
    
    if (rcx_3 s> *(arg2 + 0xc))
        sub_141750030(arg2)
        rcx_3 = arg_8
    
    void* rdx_5 = rbp * 0x3c + *arg2
    
    if (i_1 != 0)
        void* rcx_5 = rdx_5 + 0x14
        int32_t i
        
        do
            uint128_t zmm2 = data_142e1c900
            rdx_5 += 0x3c
            *(rcx_5 - 0x10) = 0x7f7fffff
            *(rcx_5 - 0xc) = 0x7f7fffff
            *(rcx_5 + 0x1c) = 0
            *(rcx_5 + 0x24) = 0
            rcx_5 += 0x3c
            *(rdx_5 - 0x3c) = zmm2.q
            int32_t var_28_1 = 0xff7fffff
            int32_t var_24_1 = 0xff7fffff
            int32_t var_24_2 = 0xff7fffff
            *(rcx_5 - 0x44) = zmm2:0xc.q
            *(rcx_5 - 0x3c) = 0xff7fffff
            *(rdx_5 - 0x34) = _mm_bsrli_si128(zmm2, 8).d
            zmm2 = data_142e1c900
            *(rcx_5 - 0x38) = zmm2.q
            int32_t var_28_2 = 0xff7fffff
            *(rcx_5 - 0x2c) = zmm2:0xc.q
            zmm2 = _mm_bsrli_si128(zmm2, 8)
            *(rcx_5 - 0x24) = 0xff7fffff
            *(rcx_5 - 0x30) = zmm2.d
            i = i_1
            i_1 -= 1
        while (i != 1)
        rcx_3 = arg_8
else if (rcx_3 s< rbp.d)
    int32_t rax_4 = rbp.d
    
    if (rax_4 != rcx_3)
        arg2[1].d = rbp.d - (rax_4 - rcx_3)
        sub_141750310(arg2)
        rcx_3 = arg_8

if (rcx_3 s> 0)
    do
        arg3 = sub_141752140(sx.q(rbx) * 0x3c + *arg2, arg1, arg3)
        rbx += 1
    while (rbx s< arg_8)

return arg1
