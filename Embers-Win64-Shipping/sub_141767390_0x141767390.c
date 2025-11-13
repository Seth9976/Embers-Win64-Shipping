// 函数: sub_141767390
// 地址: 0x141767390
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* rdi = *(arg1 + 0x10)
int128_t zmm6 = arg2
int32_t r15 = arg3.d
void* const* result

if (*(rdi + 0xc0) != 0)
    int32_t arg_8 = zmm6.d
    void* rcx = rdi + 0xe0
    void* rax = *(rdi + 0xd0)
    
    if (rax != 0)
        rcx = rax
    
    result, arg3 = (*(rdi + 0xc0))((*(*rcx + 8))(rcx), &arg_8, rdi + 0xa0)

int32_t rbx = 0
int32_t rbp = 0

if (*(rdi + 8) s> 0)
    int32_t i = 0
    
    if (*(rdi + 0x88) s> 0)
        do
            int32_t r9
            int32_t var_48_1 = r9
            int32_t var_50_1 = r15
            int512_t zmm2
            zmm2.o = zmm6
            void var_30
            result, arg3, zmm2, zmm6 = sub_1417804d0(rdi, &var_30, arg3, i, *(rdi + 8))
            i += 1
            rbx += *result
            rbp = rbx
        while (i s< *(rdi + 0x88))

if (*(rdi + 0x100) != 0)
    void* rax_4 = *(rdi + 0x110)
    void* rcx_3 = rdi + 0x120
    int32_t var_38 = zmm6.d
    
    if (rax_4 != 0)
        rcx_3 = rax_4
    
    (*(rdi + 0x100))((*(*rcx_3 + 8))(rcx_3), &var_38, rdi + 0xa0)

result.b = rbp s> 0
return result
