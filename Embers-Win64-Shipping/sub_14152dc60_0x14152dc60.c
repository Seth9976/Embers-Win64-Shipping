// 函数: sub_14152dc60
// 地址: 0x14152dc60
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

int32_t rax_4 = arg_8

if (rax_4 s> *(arg2 + 0xc))
    sub_1405947f0(arg2, rax_4)
    rax_4 = arg_8

int64_t rdi = sx.q(arg2[1].d)

if (rax_4 s> rdi.d)
    arg2[1].d = rax_4
    
    if (rax_4 s> *(arg2 + 0xc))
        sub_140594770(arg2)
    
    memset(*arg2 + (rdi << 1), 0, sx.q(rax_4 - rdi.d) * 2)
    rax_4 = arg_8
else if (rax_4 s< rdi.d)
    int32_t rcx_5 = rdi.d
    
    if (rcx_5 != rax_4)
        arg2[1].d = rdi.d - (rcx_5 - rax_4)
        sub_1405a50a0(arg2)
        rax_4 = arg_8

int32_t rdi_2 = 0

if (rax_4 s> 0)
    int64_t rsi_3 = 0
    
    do
        int64_t* rcx_8 = arg1[1]
        int16_t* rdx_5 = *arg2 + rsi_3
        int16_t* r8_3 = *rcx_8
        
        if (&r8_3[1] u<= rcx_8[1])
            *rdx_5 = *r8_3
            int64_t* rax_8 = arg1[1]
            *rax_8 += 2
        else if ((*(arg1 + 0x29) & 0x20) != 0)
            sub_140b54000(arg1, rdx_5, arg3)
        else
            (*(*arg1 + 0x150))(arg1, rdx_5, 2)
        
        rdi_2 += 1
        rsi_3 += 2
    while (rdi_2 s< arg_8)

return arg1
