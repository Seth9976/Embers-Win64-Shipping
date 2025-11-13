// 函数: sub_1429aca60
// 地址: 0x1429aca60
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* arg_8 = arg1
int64_t var_58 = -2
void* r9 = *(arg1 + 0x18)
void* r8 = *(arg1 + 0x10)
int32_t var_48
sub_1429bd3c0(&var_48, r8 + 0x68, *(r8 + 0x94), *(r8 + 0x98), *(r8 + 0x9c), *(r8 + 0xa0), 
    *(r9 + 0x24), *(r9 + 0x28), *(r9 + 0x2c), *(r9 + 0x30))
int32_t var_40
int32_t r15_1 = var_40 - var_48
void* rax_7 = *(arg1 + 0x18)
int64_t* rcx_5 = *(rax_7 + 0x18)
int32_t var_88
int32_t i_2
int32_t var_3c

if (rcx_5 == 0 || *(rax_7 + 0x10) s>= *(*(arg1 + 0x10) + 0x108) * (var_3c - i_2 + 1) * (r15_1 + 1))
    *(rax_7 + 0x20) = 1
    int64_t* rcx_9 = *(arg1 + 0x18)
    *rcx_9 = rcx_9[1]
else
    *(*(arg1 + 0x18) + 0x20) = (*(*rcx_5 + 0x10))(rcx_5)
    uint128_t var_38 = var_48.o
    void* rdx_3 = *(arg1 + 0x18)
    int64_t* rcx_7 = *(rdx_3 + 0x18)
    var_88.q = rdx_3
    *(*(arg1 + 0x18) + 0x10) =
        (*(*rcx_7 + 0x30))(rcx_7, *(rdx_3 + 8), zx.q(*(rdx_3 + 0x10)), &var_38, var_88)

int64_t* result = *(arg1 + 0x18)
void* arg_10 = *result
int32_t i_1 = i_2

for (int32_t i = i_1; i s<= var_3c; i += 1)
    int32_t result_1 = 0
    
    while (true)
        void* rcx_11 = *(arg1 + 0x10)
        int64_t r8_3 = *(rcx_11 + 0xf0)
        int64_t rax_13
        int64_t rdx_5
        rdx_5:rax_13 = muls.dp.q(0x4924924924924925, *(rcx_11 + 0xf8) - r8_3)
        int64_t rdx_6 = rdx_5 s>> 4
        result = zx.q(result_1)
        
        if (result u>= rdx_6 + (rdx_6 u>> 0x3f))
            break
        
        int32_t* r10_2 = result * 0x38 + r8_3
        int32_t r8_4 = var_48
        
        if (*(r10_2 + 0x21) == 0)
            int64_t r9_3 = *(r10_2 + 0x10)
            int32_t* rdx_14 = sx.q(i - r10_2[0xd] * i_1) * *(r10_2 + 0x18)
                + sx.q(r8_4 - r10_2[0xc] * r8_4) * r9_3 + *(r10_2 + 8)
            int32_t var_80
            var_80.q = *(r10_2 + 0x28)
            var_88.b = r10_2[8].b
            sub_1429a5710(&arg_10, rdx_14, sx.q(r15_1) * r9_3 + rdx_14, r9_3, var_88.b, var_80, 
                *(*(arg1 + 0x18) + 0x20), *r10_2, r10_2[1])
            result_1 += 1
            i_1 = i_2
        else
            sub_1429a6610(&arg_10, r10_2[1], sx.q(r15_1 + 1))
            result_1 += 1
            i_1 = i_2

return result
