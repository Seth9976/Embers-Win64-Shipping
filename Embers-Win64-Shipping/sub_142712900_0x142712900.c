// 函数: sub_142712900
// 地址: 0x142712900
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* r8 = arg2 + 0x258

if (arg2 == 0)
    r8 = nullptr

int32_t arg_8
sub_140ba6bd0(arg1 + 0x78, &arg_8, r8)
int64_t rax = sx.q(arg_8)
void* result

if (rax.d == 0xffffffff)
    result = nullptr
else
    result = rax * 0x38 + *(arg1 + 0x78)

void* const rbx = result + 8

if (result == 0)
    rbx = nullptr

if (rbx != 0 && (*(rbx + 0x20) & 1) != 0)
    int32_t rdx_1 = *(rbx + 0x18)
    
    if (rdx_1 s>= 0)
        int32_t* rcx_1 = *(arg1 + 0xd8)
        
        if (rcx_1 != 0)
            float zmm0_1 = sub_1426177f0(rcx_1, rdx_1, 0)
            (*(*(arg2 + 0x258) + 0x28))(arg2 + 0x258)
            float zmm1_1 = zmm0_1 * *arg3
            float zmm2_1 = zmm0_1
            zmm0_1 = zmm0_1 * arg3[2]
            zmm2_1 = zmm2_1 * arg3[1]
            float var_38 = zmm1_1
            float var_30_1 = zmm0_1
            float var_34_1 = zmm2_1
            int32_t var_28[0x4]
            sub_142697e10(&var_28, &var_38)
            return sub_142616090(*(arg1 + 0xd8), *(rbx + 0x18), &var_28)

result.b = 0
return result
