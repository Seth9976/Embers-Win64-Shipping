// 函数: sub_1408e1670
// 地址: 0x1408e1670
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t rbx = sx.q(*(arg1 + 0x30))
int64_t rdi = *(arg1 + 0x28)
uint64_t var_f0 = 0
int32_t var_e8 = rbx.d
uint64_t rdi_1

if (rbx.d != 0)
    sub_140638750(&var_f0, rbx.d, 0)
    rdi_1 = var_f0
    memcpy(rdi_1, rdi, (rbx << 2).d)
else
    rdi_1 = 0

int32_t arg_8 = 0
void*** rax
int512_t zmm1
rax, zmm1 = sub_1408e4100()
int64_t rax_1 = (*rax)[0x1b](rax, *(*arg2 + 0x18), zx.q(arg2[2].d), &arg_8, &data_142e0f110)

if (rax_1 != 0)
    rbx = zx.q(arg_8)
    void** const var_d8
    sub_140b4c2a0(&var_d8)
    var_d8 = &data_142d84578
    int64_t var_40_1 = 0
    int64_t var_38_1 = rbx
    char var_30_1 = 0
    sub_140b55290(&var_d8, 1)
    var_d8[0x1b](&var_d8, 1)
    int64_t* rdx_4 = arg2[3]
    var_d8 = &data_142d847a8
    sub_1408db750(&var_d8, rdx_4, zmm1)
    void*** rax_3 = sub_1408e4100()
    void** r9_1 = *rax_3
    r9_1[0x1c](rax_3, *(*arg2 + 0x18), zx.q(arg2[2].d), r9_1)
    var_d8 = &data_142d84578
    
    if (var_30_1 != 0)
        sub_140a74f90(rax_1)
        int64_t var_48_2 = 0
    
    sub_140b4cb40(&var_d8)
    rbx.b = 1
else
    rbx.b = 0

if (rdi_1 != 0)
    sub_140a74f90(rdi_1)

return zx.q(rbx.b)
