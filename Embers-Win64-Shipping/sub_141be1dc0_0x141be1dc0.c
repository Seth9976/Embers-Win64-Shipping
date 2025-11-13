// 函数: sub_141be1dc0
// 地址: 0x141be1dc0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* result = sub_140d962e0(arg1 + 0x188, arg2)
int64_t* rcx_1 = *(arg1 + 0x290)

if (rcx_1 != 0)
    int128_t zmm0_1 = *(arg1 + 0x198)
    int64_t var_78 = *(arg1 + 0x188)
    int64_t var_70_1 = *(arg1 + 0x190)
    int64_t var_48_1 = *(arg1 + 0x1b8)
    int64_t* rax_3 = *(arg1 + 0x1c0)
    int128_t var_68_1 = zmm0_1
    int128_t var_58_1 = *(arg1 + 0x1a8)
    
    if (rax_3 != 0)
        rax_3[1].d += 1
        rcx_1 = *(arg1 + 0x290)
    
    int64_t var_38_1 = *(arg1 + 0x1c8)
    int32_t var_30_1 = *(arg1 + 0x1d0)
    char var_2c_1 = *(arg1 + 0x1d4)
    int64_t var_20 = 0
    int32_t var_18_1 = 0
    char var_28_1 = 1
    sub_140f8bb00(rcx_1, &var_78)
    result = sub_140745b20(&var_20)
    
    if (rax_3 != 0)
        rax_3[1].d -= 1
        
        if (rax_3[1].d == 1)
            result = (**rax_3)(rax_3)
            int32_t temp3_1 = *(rax_3 + 0xc)
            *(rax_3 + 0xc) -= 1
            
            if (temp3_1 == 1)
                result = (*(*rax_3 + 8))(rax_3, 1)

int64_t* rbx_2 = arg2[7]

if (rbx_2 != 0)
    rbx_2[1].d -= 1
    
    if (rbx_2[1].d == 1)
        result = (**rbx_2)(rbx_2)
        int32_t temp1_1 = *(rbx_2 + 0xc)
        *(rbx_2 + 0xc) -= 1
        
        if (temp1_1 == 1)
            return (*(*rbx_2 + 8))(rbx_2, 1)

return result
