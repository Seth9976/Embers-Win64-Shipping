// 函数: sub_140f75fe0
// 地址: 0x140f75fe0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* rbx = *(arg1 + 0x3a0)
int64_t* rdi = nullptr

if (*(rbx + 0x338) != 0)
    int64_t* rcx = *(rbx + 0x330)
    
    if (rcx != 0 && (*(*rcx + 0x28))(rcx) != 0)
        int64_t* rcx_1
        
        if (*(rbx + 0x338) == 0)
            rcx_1 = nullptr
        else
            rcx_1 = *(rbx + 0x330)
        
        *(rbx + 0x328) = (*(*rcx_1 + 0x48))(rcx_1)

int32_t var_28
float zmm0 = sub_140f75e60(rbx, &var_28, arg1 + 0x434, *(rbx + 0x328), arg3)
void* rbx_1 = *(arg1 + 0x3a0)

if (*(rbx_1 + 0x338) != 0)
    int64_t* rcx_3 = *(rbx_1 + 0x330)
    
    if (rcx_3 != 0 && (*(*rcx_3 + 0x28))(rcx_3) != 0)
        if (*(rbx_1 + 0x338) != 0)
            rdi = *(rbx_1 + 0x330)
        
        *(rbx_1 + 0x328) = (*(*rdi + 0x48))(rdi)

float var_20
float zmm1 = var_20 f+ sub_140f75da0(rbx_1, arg1 + 0x434, *(rbx_1 + 0x328), zmm0).d
int32_t var_24
int64_t zmm0_1 = var_24
float arg_8
float arg_c

if (var_28 != 1)
    arg_8 = zmm0_1.d
    arg_c = zmm1
else
    arg_8 = zmm1
    arg_c = zmm0_1.d
*arg2 = arg_8.q
return arg2
