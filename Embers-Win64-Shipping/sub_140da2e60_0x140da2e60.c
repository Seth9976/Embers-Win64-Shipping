// 函数: sub_140da2e60
// 地址: 0x140da2e60
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* rbx = *(arg1 + 0x30)
int64_t* rax
int512_t zmm1
rax, zmm1 = sub_140da5fb0(*(rbx + 0x18), arg2)
void** var_38
float zmm6_1 = sub_140da70c0(rbx, &var_38, rax, 0, zmm1, *(arg2 + 0x4c))
void** rbx_1 = var_38
int64_t* var_30

if (rbx_1 == 0)
    if (var_30 != 0)
        var_30[1].d -= 1
        
        if (var_30[1].d == 1)
            (**var_30)(var_30)
            int32_t temp1_1 = *(var_30 + 0xc)
            *(var_30 + 0xc) -= 1
            
            if (temp1_1 == 1)
                (*(*var_30 + 8))(var_30, 1)
    
    return 0

sub_140d9a4a0(*rbx_1, zx.q(arg2[9].d), zmm6_1)
void* rax_1 = *rbx_1
char rcx_3 = (*(rax_1 + 8)).b
int32_t rax_3

if ((rcx_3 & 1) == 0)
    if ((rcx_3 & 2) == 0)
        rax_3 = 0
    else
        void* rax_5 = *(rax_1 + 0x80)
        rax_3 = sub_142b93e80(*(rax_5 + 0x28), *(rax_5 + 0x20))
else if (rbx_1[0x20].b != 0)
    rax_3 = sub_142b93e80(*(rax_1 + 0x5c), *(*(rax_1 + 0x80) + 0x20))
else
    rax_3 = sub_142b93e80(sx.d(*(rax_1 + 0x6c)), *(*(rax_1 + 0x80) + 0x20))

if (var_30 != 0)
    var_30[1].d -= 1
    
    if (var_30[1].d == 1)
        int64_t rdx_5 = *var_30
        (*rdx_5)(var_30, rdx_5)
        int32_t temp3_1 = *(var_30 + 0xc)
        *(var_30 + 0xc) -= 1
        
        if (temp3_1 == 1)
            int64_t r8_2 = *var_30
            (*(r8_2 + 8))(var_30, 1, r8_2)

return zx.q(((rax_3 + 0x20) s>> 6).w)
