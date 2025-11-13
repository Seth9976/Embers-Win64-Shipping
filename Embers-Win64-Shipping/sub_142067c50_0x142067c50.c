// 函数: sub_142067c50
// 地址: 0x142067c50
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

(*(*arg2 + 0x1d8))(arg2, &data_1439a4b70)

if ((arg1[0xbc].b & 1) != 0 && (arg2[5].b & 2) != 0 && arg2[0xe] != 0)
    int32_t rdi_1 = 0x64
    
    while (arg1[0xc5].d s> 0)
        int64_t* rax_1 = sub_140a242a0()
        int64_t r9_1 = *rax_1
        (*(r9_1 + 0x48))(rax_1, &arg1[0xc0], 0xff, r9_1)
        int32_t temp1_1 = rdi_1
        rdi_1 -= 1
        
        if (temp1_1 == 1)
            break

int512_t zmm1 = sub_1420a1770(arg1, arg2)

if ((arg2[5].b & 1) != 0)
    int64_t* rax_2 = j_sub_140a82f30(0x10)
    int64_t* r14_1 = rax_2
    
    if (rax_2 == 0)
        r14_1 = nullptr
    else
        *rax_2 = 0
        rax_2[1] = 0
    
    void*** rax_3 = j_sub_140a82f30(0x18)
    void*** rdi_2 = rax_3
    
    if (rax_3 == 0)
        rdi_2 = nullptr
    else
        rax_3[1].d = 1
        *(rax_3 + 0xc) = 1
        *rdi_2 = &data_142ee2130
        rdi_2[2] = r14_1
    
    int64_t* var_78 = r14_1
    void*** var_70 = rdi_2
    
    if (&arg1[0xa8] != &var_78)
        arg1[0xa8] = r14_1
        var_78 = nullptr
        sub_1405aeff0(&arg1[0xa9], &var_70)
        rdi_2 = var_70
    
    if (rdi_2 != 0)
        rdi_2[1].d -= 1
        
        if (rdi_2[1].d == 1)
            (**rdi_2)(rdi_2)
            int32_t r14_2 = *(rdi_2 + 0xc)
            *(rdi_2 + 0xc) -= 1
            
            if (r14_2 == 1)
                (*rdi_2)[1](rdi_2, zx.q(r14_2))

int32_t rax_7

if ((arg2[5].b & 1) != 0)
    rax_7, zmm1 = sub_140b4e7c0(arg2, &data_1439a4b70)

int32_t result

if ((arg2[5].b & 1) == 0 || rax_7 s>= 0xe)
    result = sub_142051a90(arg1[0xa8], arg2, 0, zmm1)
else
    int64_t var_68 = 0
    int64_t var_60_1 = 0
    result = sub_142051c80(&var_68, arg2, 0, zmm1)
    int64_t rcx_8 = var_68
    
    if (rcx_8 != 0)
        result, zmm1 = sub_140a74f90(rcx_8)

if ((arg2[5].b & 1) != 0 && arg1[0xb0].b == 0)
    int64_t* rcx_10 = arg1[0xa8]
    uint64_t* rax_10
    
    if (rcx_10[1].d s<= 0)
        int32_t rax_11 = data_143dbb200
        uint128_t zmm0_1 = zx.o(data_143dbb1f8.q)
        int32_t var_28_1 = rax_11
        int32_t var_34_1 = rax_11
        uint64_t var_3c
        rax_10 = &var_3c
        uint64_t var_30_1 = zmm0_1.q
        var_3c = zmm0_1.q
        char var_24_1 = 0
    else
        int64_t* rcx_11 = *rcx_10
        char var_40_1 = 1
        int32_t var_50_1 = rcx_11[1].d
        int32_t rax_9 = rcx_11[3].d
        uint64_t var_58 = *rcx_11
        int32_t var_44_1 = rax_9
        rax_10 = &var_58
        uint64_t var_4c_1 = rcx_11[2]
    
    zmm1.o = zx.o(rax_10[2])
    result = rax_10[3].d
    *(arg1 + 0x568) = *rax_10
    arg1[0xaf] = (zmm1.o).q
    arg1[0xb0].d = result

return result
