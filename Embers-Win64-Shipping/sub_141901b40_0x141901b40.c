// 函数: sub_141901b40
// 地址: 0x141901b40
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_b8
int64_t rax_1 = __security_cookie ^ &var_b8
int32_t result

if (arg3 != 0)
    int32_t rcx_6 = *(arg2 + 0x18)
    *(arg2 + 0x18) = *(arg3 + 0x18)
    *(arg3 + 0x18) = rcx_6
    int32_t rcx_7 = *(arg2 + 0x1c)
    result = *(arg3 + 0x1c)
    *(arg2 + 0x1c) = result
    *(arg3 + 0x1c) = rcx_7
    sub_1418c8ab0(arg2 + 0x20, arg3 + 0x20)
else
    char rcx = (data_1439c7a34).b
    int128_t var_68 = zx.o(0)
    int32_t var_58_1 = 1
    int128_t var_54_1 = data_143dbb1e0
    int32_t var_44_1 = (1 << rcx) - 1
    char var_40_1 = arg3.b
    int64_t var_38_1 = 0
    int32_t var_30_1 = 0
    void*** rax_4 = j_sub_140a82f30(0xa0)
    void*** rdi_1 = rax_4
    
    if (rax_4 == 0)
        rdi_1 = nullptr
    else
        void* rdx = *(arg2 + 0x28)
        *rdi_1 = &data_142d3ff08
        rdi_1[1].d = 0
        *rdi_1 = &data_142ef2940
        int64_t var_88_1 = 0
        int128_t* var_90_1 = &var_68
        int32_t var_98_1 = 0
        *(rdi_1 + 0xc) = 0
        rdi_1[2].w = 0x100
        rdi_1[3] = 0
        sub_1418b91b0(&rdi_1[4], rdx, 0x80, 0, var_98_1, var_90_1, var_88_1)
        *rdi_1 = &data_142ff1be8
        rdi_1[4] = &data_142ff1bf0
    
    void*** var_78 = rdi_1
    
    if (rdi_1 != 0)
        rdi_1[1].d += 1
    
    int32_t rcx_2 = *(arg2 + 0x18)
    *(arg2 + 0x18) = rdi_1[3].d
    rdi_1[3].d = rcx_2
    int32_t rcx_3 = *(arg2 + 0x1c)
    *(arg2 + 0x1c) = *(rdi_1 + 0x1c)
    *(rdi_1 + 0x1c) = rcx_3
    sub_1418c8ab0(arg2 + 0x20, &rdi_1[4])
    result = sub_1405d1550(&var_78)

__security_check_cookie(rax_1 ^ &var_b8)
return result
