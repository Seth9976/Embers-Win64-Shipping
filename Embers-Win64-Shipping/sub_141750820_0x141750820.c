// 函数: sub_141750820
// 地址: 0x141750820
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
    int32_t var_10_2 = 0
    char var_c_1 = 0
    arg1[4].d = 0
    arg1[1] = 0
    *(arg1 + 0x10) = 0.o
    *(arg1 + 0x24) = 0
    return 

int64_t rcx_2 = sx.q(i) * 2
int64_t* rax_6 = *(*r9 + (rcx_2 << 3) + 8)
arg1[1] = rax_6
void* var_18
char rax_9

if (rax_6 == 0)
    int32_t var_10_1 = 0
    void* rcx_4 = *(*r9 + (rcx_2 << 3))
    
    if (rcx_4 == 0)
        rax_9 = 0
    else
        rax_9 = *(rcx_4 + 0x40)
    
    var_18 = rcx_4
else
    int64_t* rcx_3 = **rax_6
    void* rdx = *rcx_3
    int32_t var_10 = rcx_3[1].d
    
    if (rdx == 0)
        rax_9 = 0
        var_18 = rdx
    else
        rax_9 = *(rdx + 0x40)
        var_18 = rdx

char var_c = rax_9
*(arg1 + 0x10) = var_18.o
*(arg1 + 0x24) = *(arg1[2] + 0x18)
