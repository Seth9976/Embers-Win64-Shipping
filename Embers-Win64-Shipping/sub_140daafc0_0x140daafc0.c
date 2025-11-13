// 函数: sub_140daafc0
// 地址: 0x140daafc0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* rbx = *(arg1 + 0x30)
int64_t* rax
int512_t zmm1
rax, zmm1 = sub_140da5fb0(*(rbx + 0x18), arg2)
int64_t* var_28
float zmm6_1 = sub_140da6800(*(rbx + 0x18), &var_28, rax, zmm1)
int64_t* rdi = var_28
void* const rdi_1

if (rdi == 0)
    rdi_1 = nullptr
else
    rdi_1 = *rdi

int64_t* var_20

if (var_20 != 0)
    var_20[1].d -= 1
    
    if (var_20[1].d == 1)
        (**var_20)(var_20)
        int32_t temp1_1 = *(var_20 + 0xc)
        *(var_20 + 0xc) -= 1
        
        if (temp1_1 == 1)
            (*(*var_20 + 8))(var_20, 1)

uint64_t result

if (rdi_1 == 0 || (*(rdi_1 + 8) & 1) == 0)
    result = arg5
    *arg4 = 0
    *result = 0
else
    sub_140d9a4a0(rdi_1, zx.q(arg2[9].d), zmm6_1)
    *arg4 = ((sub_142b93e80(sx.d(*(rdi_1 + 0x74)), *(*(rdi_1 + 0x80) + 0x20)) + 0x20) s>> 6).w
    result = zx.q((sub_142b93e80(sx.d(*(rdi_1 + 0x76)), *(*(rdi_1 + 0x80) + 0x20)) + 0x20) s>> 6)
    *arg5 = result.w

return result
