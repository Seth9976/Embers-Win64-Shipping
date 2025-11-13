// 函数: sub_140749bb0
// 地址: 0x140749bb0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* arg_10 = arg2
int64_t* rdx = &arg_10

if (arg3 == 0)
    return sub_1405a7050(arg1, rdx)

sub_1405a7050(&arg1[2], rdx)
int64_t* r8 = arg1[4]
int64_t rdx_1 = sx.q(arg1[5].d)
int64_t* rax = r8
int64_t i = *(arg2 + 0x408)
void* rcx_1 = &r8[rdx_1]
int64_t result

if (r8 != rcx_1)
    while (*rax != i)
        rax = &rax[1]
        
        if (rax == rcx_1)
            goto label_140749c1c
    
    result = (rax - r8) s>> 3

if (r8 == rcx_1 || result.d == 0xffffffff)
label_140749c1c:
    int32_t rax_2 = (rdx_1 + 1).d
    arg1[5].d = rax_2
    
    if (rax_2 s> *(arg1 + 0x2c))
        sub_1405a4d70(&arg1[4])
    
    result = arg1[4]
    *((rdx_1 << 3) + result) = i

return result
