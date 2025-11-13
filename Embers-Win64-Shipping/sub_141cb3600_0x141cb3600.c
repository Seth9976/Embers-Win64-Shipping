// 函数: sub_141cb3600
// 地址: 0x141cb3600
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* r8 = arg2[1]
int64_t* rcx = *r8

if (&rcx[1] u<= r8[1])
    *arg1 = *rcx
    int64_t* rax_2 = arg2[1]
    *rax_2 += 8
else if ((*(arg2 + 0x29) & 0x20) != 0)
    sub_140b540d0(arg2, arg1, arg3)
else
    (*(*arg2 + 0x150))(arg2, arg1, 8)

int64_t* rcx_2 = arg2[1]
int32_t arg_8 = arg1[2].d
int32_t* rdx_2 = *rcx_2

if (&rdx_2[1] u> rcx_2[1])
    int32_t* rdx_3 = &arg_8
    
    if ((*(arg2 + 0x29) & 0x20) != 0)
        sub_140b54070(arg2, rdx_3, arg3)
    else
        (*(*arg2 + 0x150))(arg2, rdx_3, 4)
else
    arg_8 = *rdx_2
    *rcx_2 += 4

int32_t rdx_5 = arg_8
int32_t rbx = 0

if ((arg2[5].b & 1) != 0)
    int64_t rbp_1 = sx.q(arg1[2].d)
    
    if (rdx_5 s> rbp_1.d)
        arg1[2].d = rdx_5
        int32_t i_1 = rdx_5 - rbp_1.d
        
        if (rdx_5 s> *(arg1 + 0x14))
            sub_1405c5060(&arg1[1])
            rdx_5 = arg_8
        
        int32_t* rcx_8 = rbp_1 * 0x50 + arg1[1]
        
        if (i_1 != 0)
            void* rax_8 = &rcx_8[5]
            int32_t i
            
            do
                *rcx_8 = 0
                rcx_8 = &rcx_8[0x14]
                *(rax_8 - 0x10) = 0
                *(rax_8 - 8) = 0
                __builtin_memset(rax_8, 0, 0x34)
                rax_8 += 0x50
                i = i_1
                i_1 -= 1
            while (i != 1)
            rdx_5 = arg_8
    else if (rdx_5 s< rbp_1.d)
        arg3 = sub_141caaa70(&arg1[1], rdx_5, rbp_1.d - rdx_5, 1)
        rdx_5 = arg_8

if (rdx_5 s> 0)
    do
        arg3 = sub_141cb31a0(sx.q(rbx) * 0x50 + arg1[1], arg2, arg3)
        rbx += 1
    while (rbx s< arg_8)

(*(*arg2 + 0x140))(arg2, &arg1[0x15])
sub_140cae270(arg2, &arg1[3], arg3)
sub_1409ad9b0(arg2, &arg1[9], arg3)
return sub_141cb3520(&arg1[0x16], arg2, sub_141c958a0(arg2, &arg1[0xb], arg3))
