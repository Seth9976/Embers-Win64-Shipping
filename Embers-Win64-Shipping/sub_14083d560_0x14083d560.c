// 函数: sub_14083d560
// 地址: 0x14083d560
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void arg_8
int32_t i_1
sub_140801190(arg2, arg3, &i_1, &arg_8)
int16_t rax_1 = *(arg3 + 0x12)

if (rax_1 == 0xffff)
    if (arg3[1] == 0 || arg3[2].w == 1)
        rax_1 = 0
    else
        void* rax_2 = sub_140761a70(&arg3[1])
        int16_t rcx_2 = *(rax_2 + 0x5c)
        rax_1 = (*(rax_2 + 0x58) - 1 + rcx_2) & neg.w(rcx_2)
    
    *(arg3 + 0x12) = rax_1

int32_t i = i_1
int32_t i_2 = -1
char r10 = 1
uint32_t r9_2 = (sx.q(rax_1) u>> 2).d

if (i != 0xffffffff)
    void* rax_3 = *(arg1 + 0x1b0)
    void* rdx_1 = arg1 + 0xb0
    
    if (rax_3 != 0)
        rdx_1 = rax_3
    
    void* rax_6 = (sx.q(*(arg1 + 0x1b8)) << 4) + rdx_1
    
    if (rdx_1 == rax_6)
    label_14083d625:
        int32_t i_4 = *(arg1 + 0x1c0)
        i_2 = i_4
        
        if (*(arg1 + 0xa4) != 0)
            i_2 = i
        
        *(arg1 + 0x1c0) = i_4 + r9_2
    else
        while (*rdx_1 != i)
            rdx_1 += 0x10
            
            if (rdx_1 == rax_6)
                goto label_14083d625
        
        i_2 = *(rdx_1 + 4)
        r10 = 0

void* rax_8 = *(arg1 + 0x1b0)
int32_t i_3 = i_2
void* rcx_3 = arg1 + 0xb0

if (rax_8 != 0)
    rcx_3 = rax_8

uint32_t var_10 = r9_2
char var_c = r10
*(rcx_3 + sx.q(arg4) * 0x10) = i.o
int64_t result
result.b = i_1 != 0xffffffff
return result
