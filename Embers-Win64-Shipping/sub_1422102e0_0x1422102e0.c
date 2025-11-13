// 函数: sub_1422102e0
// 地址: 0x1422102e0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* rdx = arg1[3]
void* rdi = *arg1
int64_t var_58 = *rdx
void* rbp = rdi
int32_t var_50 = rdx[1].d
int64_t r14 = arg1[2]
int64_t arg_8 = *arg1[1]
void* rax_3 = *(rdi + 0xa0)

if (rax_3 != 0)
    rbp = rax_3

uint64_t var_68 = 0
int32_t result_1 = 0
sub_142259140(rbp + 0xf0, &var_68)
uint64_t rbx = var_68
int64_t result = sx.q(result_1)
int64_t rsi = rbx + (result << 3)

if (rbx != rsi)
    do
        result = sub_142217ac0(rdi, rbx)
        
        if (result == rdi)
            int64_t var_30_1 = r14
            int64_t* var_38 = &arg_8
            int64_t (* var_48)(int64_t* arg1, int64_t* arg2) = j_sub_14220cac0
            int64_t* var_28_1 = &var_58
            int64_t** var_40_1 = &var_38
            result = sub_14226a000(rbp, rbx, &var_48)
        
        rbx += 8
    while (rbx != rsi)
    
    rbx = var_68

if (rbx == 0)
    return result

return sub_140a74f90(rbx)
