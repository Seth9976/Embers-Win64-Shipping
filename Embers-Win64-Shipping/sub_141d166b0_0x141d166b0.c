// 函数: sub_141d166b0
// 地址: 0x141d166b0
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
    sub_1405c5570(arg2, rax_4)
    rax_4 = arg_8

int64_t rdi = sx.q(arg2[1].d)

if (rax_4 s> rdi.d)
    arg2[1].d = rax_4
    
    if (rax_4 s> *(arg2 + 0xc))
        sub_1405a4d70(arg2)
    
    memset(*arg2 + (rdi << 3), 0, sx.q(rax_4 - rdi.d) << 3)
    rax_4 = arg_8
else if (rax_4 s< rdi.d)
    sub_14174d450(arg2, rax_4, rdi.d - rax_4, 1)
    rax_4 = arg_8

int32_t rdi_2 = 0

if (rax_4 s> 0)
    int64_t r14_1 = 0
    
    do
        int64_t* rcx_6 = arg1[0x12]
        int64_t* rsi_3 = *arg2
        (*(*rcx_6 + 0x1d8))(rcx_6, &data_1439a9528)
        int32_t rax_7
        int512_t zmm1
        rax_7, zmm1 = sub_140b4e7c0(arg1[0x12], &data_1439a9528)
        
        if (rax_7 s>= 5)
            int64_t arg_10 = *(rsi_3 + r14_1)
            sub_1416f2970(arg1, &arg_10, zmm1)
            
            if ((*(arg1[0x12] + 0x28) & 1) != 0)
                int64_t* rcx_9 = *(rsi_3 + r14_1)
                int64_t rax_10 = arg_10
                
                if (rcx_9 != rax_10)
                    *(rsi_3 + r14_1) = rax_10
                    
                    if (rcx_9 != 0)
                        (**rcx_9)(rcx_9, 1)
        
        rdi_2 += 1
        r14_1 += 8
    while (rdi_2 s< arg_8)

return arg1
