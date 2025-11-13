// 函数: sub_141a501c0
// 地址: 0x141a501c0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t i

do
    i = *arg1
    *arg1 = 1
while (i != 0)
int64_t* rbp = *(arg1 + 0x18)
int64_t* rbx = rbp
void* rsi_2 = &rbp[sx.q(arg1[8]) * 2]
int32_t rbx_4

if (rbp != rsi_2)
    while (true)
        int16_t* rdx
        
        if (arg3[1].d == 0)
            rdx = &data_142d40450
        else
            rdx = *arg3
        
        int16_t* const rcx
        
        if (rbx[1].d == 0)
            rcx = &data_142d40450
        else
            rcx = *rbx
        
        if (sub_140a54510(rcx, rdx) == 0)
            break
        
        rbx = &rbx[2]
        
        if (rbx == rsi_2)
            goto label_141a5024d
    
    rbx_4 = ((rbx - rbp) s>> 4).d

if (rbp == rsi_2 || rbx_4 == 0xffffffff)
label_141a5024d:
    int64_t rbx_1 = sx.q(arg1[8])
    int32_t rax_3 = (rbx_1 + 1).d
    arg1[8] = rax_3
    
    if (rax_3 s> arg1[9])
        sub_1405a4f90(&arg1[6])
    
    sub_140596d10((rbx_1 << 4) + *(arg1 + 0x18), arg3)
    int64_t rax_4 = sub_141a4fae0(arg1, arg1[4])
    int64_t rbp_1 = sx.q(arg1[4])
    int32_t rax_5 = (rbp_1 + 1).d
    arg1[4] = rax_5
    
    if (rax_5 s> arg1[5])
        sub_1405a4d70(&arg1[2])
    
    *(*(arg1 + 8) + (rbp_1 << 3)) = rax_4
    *arg1
    *arg1 = 0
    *arg2 = rax_4
else
    int64_t rax_9 = *(*(arg1 + 8) + (sx.q(rbx_4) << 3))
    *arg1
    *arg1 = 0
    *arg2 = rax_9

return arg2
