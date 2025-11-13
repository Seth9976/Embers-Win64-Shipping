// 函数: sub_142743880
// 地址: 0x142743880
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* rcx = arg1[1]

if (**arg1 != 0)
    jump(*(**(rcx + 0x680) + 0x138))

int32_t rbx = 0
int64_t arg_10 = 0
int32_t arg_8 = 0
int64_t* rcx_2 = *(rcx + 0x680)
char result = (*(*rcx_2 + 0xc0))(rcx_2, &arg_10, &arg_8, 7)

if (result == 0)
    return result

int32_t r8_1 = arg_8

if (r8_1 != 0)
    do
        int32_t* rax_4 = *(*(arg_10 + (zx.q(rbx) << 3)) + 0x10)
        
        if (rax_4 != 0 && *rax_4 == 7)
            void* rdx_2 = *(rax_4 + 8)
            
            if (rdx_2 != 0)
                int64_t* rcx_5 = *(arg1[1] + 0x680)
                (*(*rcx_5 + 0x160))(rcx_5, zx.q(*(rdx_2 + 0x10)), 0)
                r8_1 = arg_8
        
        rbx += 1
    while (rbx u< r8_1)

int64_t* rcx_6 = *(arg1[1] + 0x680)
return (*(*rcx_6 + 0xc8))(rcx_6)
