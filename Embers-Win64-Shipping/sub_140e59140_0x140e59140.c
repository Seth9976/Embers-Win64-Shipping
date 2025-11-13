// 函数: sub_140e59140
// 地址: 0x140e59140
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t rbx = sx.q(arg1[1].d)
int64_t rsi = sx.q(arg3)
void* result

if (rsi.d != 0xffffffff)
    if (rsi.d s>= rbx.d)
        int32_t rdx_1 = (rsi + 1).d
        
        if (rdx_1 s> rbx.d)
            arg1[1].d = rdx_1
            
            if (rdx_1 s> *(arg1 + 0xc))
                sub_1405a4f90(arg1)
            
            memset((rbx << 4) + *arg1, 0, sx.q(rdx_1 - rbx.d) << 4)
        else if (rdx_1 s< rbx.d)
            sub_140dbae50(arg1, rdx_1, rbx.d - rdx_1, 1)
    
    int32_t rbp_3 = arg1[1].d
    arg1[1].d = rbp_3 + 1
    
    if (rbp_3 + 1 s> *(arg1 + 0xc))
        sub_1405a4f90(arg1)
    
    int64_t rdx_5 = *arg1 + (rsi << 4)
    memmove(rdx_5 + 0x10, rdx_5, (rbp_3 - rsi.d) << 4)
    int64_t* rcx_8 = *arg1
    rcx_8[rsi * 2] = *arg2
    result = arg2[1]
    rcx_8[rsi * 2 + 1] = result
else
    int32_t rax = (rbx + 1).d
    arg1[1].d = rax
    
    if (rax s> *(arg1 + 0xc))
        sub_1405a4f90(arg1)
    
    int64_t* rcx_2 = (rbx << 4) + *arg1
    *rcx_2 = *arg2
    result = arg2[1]
    rcx_2[1] = result

if (result != 0)
    *(result + 8) += 1

int64_t* rbx_4 = arg2[1]

if (rbx_4 != 0)
    rbx_4[1].d -= 1
    
    if (rbx_4[1].d == 1)
        result = (**rbx_4)(rbx_4)
        int32_t temp1_1 = *(rbx_4 + 0xc)
        *(rbx_4 + 0xc) -= 1
        
        if (temp1_1 == 1)
            jump(*(*rbx_4 + 8))

return result
