// 函数: sub_1426ba430
// 地址: 0x1426ba430
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

sub_140ce3290(arg1)
int64_t* rcx = arg1[6]

if (rcx != 0)
    sub_140cd85e0(rcx)

sub_1426c2c70(arg1)
int64_t rax = arg1[6]
int32_t r8 = 0
int64_t result

if (rax != 0)
    result = 1

if (rax == 0 || (*(rax + 0x48) & 1) == 0)
    result = 0

int32_t r10 = arg1[8].d
int32_t rdx_2 = (arg1[9].d & 0xfffffffe) | result.d
arg1[9].d = rdx_2

if (r10 s> 0)
    int64_t r9_1 = 0
    
    while ((rdx_2.b & 1) == 0)
        result = arg1[7]
        r8 += 1
        int32_t rcx_2 = *(r9_1 + result + 0x10)
        r9_1 += 0x18
        int32_t rcx_6 = (((rcx_2 | rdx_2) ^ rdx_2) & 1) ^ rdx_2
        arg1[9].d = rcx_6
        rdx_2 = rcx_6
        
        if (r8 s>= r10)
            break

return result
