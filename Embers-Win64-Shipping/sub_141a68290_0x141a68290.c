// 函数: sub_141a68290
// 地址: 0x141a68290
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t zmm1 = arg2[1].q
int128_t var_68 = *arg2

if (sub_141a2da50(arg1 + 0x28, &var_68) != 0)
    *(arg1 + 0x38) = 1

int64_t* rbx = *arg3
int64_t rsi = 0
void* result = &rbx[arg3[1]]
uint64_t r15_1 = sx.q(arg3[1].d) << 3 u>> 3

if (rbx u> result)
    r15_1 = 0

if (r15_1 != 0)
    do
        void* rbp_1 = *rbx
        
        if (rbp_1 != 0)
            int32_t arg_8 = *(arg1 + 0x30)
            sub_141a28a60(arg1 + 0x40, arg2 + 8, &arg_8)
            var_68.d = *arg2
            char rax_4 = *(arg2 + 4)
            var_68 = *(arg2 + 8)
            var_68:4.b = rax_4
            int32_t var_50 = 0xffffffff
            int32_t var_4c_1 = 0
            char var_48_1 = 1
            sub_140d3a3a0(&var_50, rbp_1)
            int64_t rdi_1 = sx.q(*(arg1 + 0x30))
            int32_t rax_6 = (rdi_1 + 1).d
            *(arg1 + 0x30) = rax_6
            
            if (rax_6 s> *(arg1 + 0x34))
                sub_140adefe0(arg1 + 0x28)
            
            int128_t* rdx_4 = *(arg1 + 0x28) + rdi_1 * 0x24
            *rdx_4 = var_68
            rdx_4[1] = zmm1.o
            result = zx.q((arg4 ^ 1).d)
            rdx_4[2].d = result.d
        
        rbx = &rbx[1]
        rsi += 1
    while (rsi != r15_1)

return result
