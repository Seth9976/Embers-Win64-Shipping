// 函数: sub_14226c7d0
// 地址: 0x14226c7d0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* rax_1 = (*(*arg1 + 0x150))()

if (rax_1 != 0)
    return sub_142436950(rax_1) __tailcall

int64_t* rax_3
int512_t zmm0_1
rax_3, zmm0_1 = sub_142565030()
void* result = rax_3[0x23]

if (result == 0)
    int64_t rdx_2 = *rax_3
    (*(rdx_2 + 0x390))(rax_3, rdx_2)
    result = rax_3[0x23]

zmm0_1.o = *(result + 0x38)
return result
