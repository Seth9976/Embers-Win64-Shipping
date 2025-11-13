// 函数: sub_141027b40
// 地址: 0x141027b40
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* rax = *(arg1 + 0x1d0)

if (rax == 0)
    rax = sub_141027590(arg1 + 0x1e0)
    *(arg1 + 0x1d0) = rax

void* rcx_1 = *(arg1 + 0x138)
void* rcx_2

if (*(arg1 + 0x136) == 0)
    rcx_2 = *(rcx_1 + 0x38)
else
    rcx_2 = *(rcx_1 + 0x48)

void** var_28
void*** rax_1 = sub_141027760(rcx_2, &var_28, rax)
void* rcx_3 = *(arg1 + 0x1c8)

if (rcx_3 != rax_1[1])
    if (rcx_3 != 0)
        int32_t rax_2 = *(rcx_3 + 0x14)
        *(rcx_3 + 0x14) -= 1
        
        if (rax_2 == 1)
            int64_t* rcx_4 = *(arg1 + 0x1c8)
            
            if (rcx_4 != 0)
                sub_141011360(rcx_4, rax_2.b)
    
    *(arg1 + 0x1c8) = rax_1[1]
    rax_1[1] = 0

var_28 = &data_142efcd90
int64_t* var_20

if (var_20 != 0)
    int32_t rbx_1 = *(var_20 + 0x14)
    *(var_20 + 0x14) -= 1
    
    if (rbx_1 == 1 && var_20 != 0)
        sub_141011360(var_20, rbx_1.b)

*(*(arg1 + 0x1c8) + 0x20) = arg1
*(arg1 + 0x32b0) = 0
*(arg1 + 0x32b8) = 0
sub_141035290(arg1 + 0x3270)
int64_t* rcx_7 = *(arg1 + 0x32c0)
(*(*rcx_7 + 0x10))(rcx_7, arg1 + 0x1c0)
(*(*(arg1 + 0x32e0) + 0x10))(arg1 + 0x32e0, arg1 + 0x1c0)
int64_t result = sub_141049ca0(arg1 + 0x250)
__builtin_memset(arg1 + 0x3b80, 0, 0x18)
return result
