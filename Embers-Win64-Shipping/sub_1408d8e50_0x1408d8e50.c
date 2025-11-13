// 函数: sub_1408d8e50
// 地址: 0x1408d8e50
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* const* result = &__return_addr
int128_t zmm6 = *(arg1 + 0x20)
char arg_8
int32_t zmm0

if (arg2[1].d == 0)
    *(arg1 + 0x20) = 0
    zmm0 = (zx.o(0)).d
else if (arg3 == 0)
    zmm0 = 0xff7fffff
    *(arg1 + 0x20) = 0xff7fffff
    int64_t i = *arg2
    result = sx.q(arg2[1].d)
    
    for (int64_t rsi_6 = result * 0x30 + i; i != rsi_6; i += 0x30)
        void* rax_3 = *(arg1 + 0x40)
        void* rcx_2 = arg1 + 0x50
        arg_8.q = arg1
        
        if (rax_3 != 0)
            rcx_2 = rax_3
        
        result = (*(arg1 + 0x30))((*(*rcx_2 + 8))(rcx_2), &arg_8, i)
        arg4 = *(arg1 + 0x20)
        
        if (zmm0 f<= arg4)
            zmm0 = arg4
        else
            *(arg1 + 0x20) = zmm0
else
    zmm0 = 0x7f7fffff
    *(arg1 + 0x20) = 0x7f7fffff
    int64_t i_1 = *arg2
    result = sx.q(arg2[1].d)
    
    for (int64_t rsi_3 = result * 0x30 + i_1; i_1 != rsi_3; i_1 += 0x30)
        void* rax = *(arg1 + 0x40)
        void* rcx = arg1 + 0x50
        arg_8.q = arg1
        
        if (rax != 0)
            rcx = rax
        
        result = (*(arg1 + 0x30))((*(*rcx + 8))(rcx), &arg_8, i_1)
        arg4 = *(arg1 + 0x20)
        
        if (zmm0 f>= arg4)
            zmm0 = arg4
        else
            *(arg1 + 0x20) = zmm0

if (*(arg1 + 0x24) != 1)
    return result

void* rax_6 = *(arg1 + 0x80)
void* rcx_4 = arg1 + 0x90
int32_t arg_10 = zmm0
int32_t arg_20 = zmm6.d

if (rax_6 != 0)
    rcx_4 = rax_6

arg_8 = 0
void* var_38 = arg1
return (*(arg1 + 0x70))((*(*rcx_4 + 8))(rcx_4, arg4), &var_38, &arg_20, &arg_10, &arg_8)
