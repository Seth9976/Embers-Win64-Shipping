// 函数: sub_14176cc80
// 地址: 0x14176cc80
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* rdi = *(arg1 + 0x10)
int32_t rbx = 0
int32_t rbp = 0
int128_t zmm6 = arg2
int32_t r15 = arg3.d
void* const* result

if (*(rdi + 0xc) s> 0)
    int32_t i = 0
    
    if (*(rdi + 0x88) s> 0)
        do
            int32_t r9
            int32_t var_48_1 = r9
            int32_t var_50_1 = r15
            int512_t zmm2
            zmm2.o = zmm6
            void var_38
            result, arg3, zmm2, zmm6 = sub_14177d3e0(rdi, &var_38, arg3, i, *(rdi + 0xc))
            i += 1
            rbx += *result
            rbp = rbx
        while (i s< *(rdi + 0x88))

if (*(rdi + 0x140) != 0)
    void* rax_1 = *(rdi + 0x150)
    void* rcx_1 = rdi + 0x160
    int32_t arg_8 = zmm6.d
    
    if (rax_1 != 0)
        rcx_1 = rax_1
    
    (*(rdi + 0x140))((*(*rcx_1 + 8))(rcx_1), &arg_8, rdi + 0xa0)

result.b = rbp s> 0
return result
