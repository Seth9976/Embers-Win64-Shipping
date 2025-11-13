// 函数: sub_142991270
// 地址: 0x142991270
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t var_18 = -2
int64_t** result = arg1
*arg1 = 0
arg1[1] = 0
int64_t* rax = sub_1429783c0()
*result = rax
rax[1] = sub_142977910(result, *(*arg2 + 8), rax, arg1.b)
result[1] = arg2[1]
int64_t* r8_1 = *result
int64_t* rdx_2 = r8_1[1]

if (*(rdx_2 + 0x19) != 0)
    *r8_1 = r8_1
    int64_t* rax_5 = *result
    rax_5[2] = rax_5
else
    int64_t* rcx_1 = *rdx_2
    
    if (*(rcx_1 + 0x19) == 0)
        int64_t* rax_3
        
        do
            rdx_2 = rcx_1
            rax_3 = *rcx_1
            rcx_1 = rax_3
        while (*(rax_3 + 0x19) == 0)
    
    *r8_1 = rdx_2
    int64_t* rdx_3 = *result
    void* rcx_2 = rdx_3[1]
    void* rax_4 = *(rcx_2 + 0x10)
    
    while (*(rax_4 + 0x19) == 0)
        rcx_2 = rax_4
        rax_4 = *(rax_4 + 0x10)
    
    rdx_3[2] = rcx_2

return result
