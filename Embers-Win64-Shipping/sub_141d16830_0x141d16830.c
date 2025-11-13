// 函数: sub_141d16830
// 地址: 0x141d16830
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
    sub_1405a5310(arg2, rdx_2)
    rdx_2 = arg_8

int512_t zmm1 = sub_141d289b0(arg2, rdx_2, 1)
int32_t rsi = 0

if (arg_8 s> 0)
    int64_t r14_1 = 0
    
    do
        int64_t* rbx_2 = *arg2 + r14_1
        zmm1 = sub_141964790(arg1, rbx_2, zmm1)
        
        if ((arg1[5].b & 1) != 0)
            int64_t rcx_5 = rbx_2[8]
            
            if (rcx_5 != 0)
                rbx_2[8] = sub_140a84c80(rcx_5, 0, 0)
            
            rbx_2[9].d = 0
            zmm1 = sub_14090a260(rbx_2, rbx_2[1].d - *(rbx_2 + 0x34), 0)
        
        rsi += 1
        r14_1 += 0x50
    while (rsi s< arg_8)

return arg1
