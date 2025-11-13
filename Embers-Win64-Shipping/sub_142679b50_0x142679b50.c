// 函数: sub_142679b50
// 地址: 0x142679b50
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t rdi = arg2[1].d
void* var_48 = nullptr
uint32_t result_1 = 0
float var_38[0x2][0x4]
sub_14267ca60(arg1, &var_48, arg3, arg4, &var_38, arg5, rdi)
sub_142680550(arg1, &var_48, arg3, arg4, &var_38, arg5, rdi)
sub_14267f940(arg1, &var_48, arg3, arg4, &var_38, arg5, rdi)
int32_t temp0
int32_t temp1
temp0:temp1 = muls.dp.d(0x55555556, result_1)
uint32_t result = temp0 u>> 0x1f
int32_t rdx_5 = result_1 s/ 3 + arg2[1].d

if (rdx_5 s> *(arg2 + 0xc))
    result = sub_140638cc0(arg2, rdx_5)

void* rbp_1 = var_48

if (result_1 s> 0)
    void* rbx_1 = rbp_1 + 8
    uint64_t i_1 = zx.q((result_1 - 1) u/ 3 + 1)
    uint64_t i
    
    do
        int64_t rdi_2 = sx.q(arg2[1].d)
        var_48.d = (*(rbx_1 - 8)).d
        int32_t rax_2 = (rdi_2 + 1).d
        var_48:4.d = *(rbx_1 - 4)
        result_1 = (*rbx_1).d
        arg2[1].d = rax_2
        
        if (rax_2 s> *(arg2 + 0xc))
            sub_140638a00(arg2)
        
        int64_t rdx_9 = *arg2
        int64_t r8_2 = rdi_2 * 3
        rbx_1 += 0xc
        result = result_1
        *(rdx_9 + (r8_2 << 2)) = var_48
        *(rdx_9 + (r8_2 << 2) + 8) = result
        i = i_1
        i_1 -= 1
    while (i != 1)

if (rbp_1 == 0)
    return result

return sub_140a74f90(rbp_1)
