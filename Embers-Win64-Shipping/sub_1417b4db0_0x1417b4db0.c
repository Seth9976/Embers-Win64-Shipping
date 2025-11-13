// 函数: sub_1417b4db0
// 地址: 0x1417b4db0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* r9 = *arg1
int32_t i = arg1[4].d

if (i s< r9[1].d)
    int32_t i_1 = i
    
    do
        int64_t* rax_3 = (sx.q(i_1) << 4) + *r9
        void* rcx = rax_3[1]
        int32_t rax
        
        if (rcx == 0)
            rax = *(*rax_3 + 0x18)
        else
            rax = *(rcx + 8)
        
        if (rax != 0)
            break
        
        i = i_1 + 1
        arg1[4].d = i
        i_1 = i
    while (i s< r9[1].d)

arg1[5].d = 0

if (i s>= r9[1].d)
    int32_t var_10_2 = 0xffffffff
    arg1[4].d = 0
    arg1[1] = 0
    *(arg1 + 0x10) = 0.o
    *(arg1 + 0x24) = 0
    return 

int64_t rcx_2 = sx.q(i) * 2
int64_t* rax_6 = *(*r9 + (rcx_2 << 3) + 8)
arg1[1] = rax_6
int64_t var_18

if (rax_6 == 0)
    int32_t var_10_1 = 0
    var_18 = *(*r9 + (rcx_2 << 3))
else
    int64_t* rcx_3 = **rax_6
    var_18 = *rcx_3
    int32_t var_10 = rcx_3[1].d

*(arg1 + 0x10) = var_18.o
*(arg1 + 0x24) = *(arg1[2] + 0x18)
