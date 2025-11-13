// 函数: sub_141be1ef0
// 地址: 0x141be1ef0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int128_t* result = sub_140693390(arg1 + 0x488, arg2)
int64_t* rcx_1 = *(arg1 + 0x508)

if (rcx_1 != 0)
    char var_38_1 = *(arg1 + 0x498)
    int64_t var_30_1 = *(arg1 + 0x4a0)
    int64_t* rax_2 = *(arg1 + 0x4a8)
    int128_t var_48 = *(arg1 + 0x488)
    
    if (rax_2 != 0)
        rax_2[1].d += 1
        rcx_1 = *(arg1 + 0x508)
    
    char var_20_1 = 1
    int64_t var_18 = 0
    int32_t var_10_1 = 0
    sub_140dd5630(rcx_1, &rcx_1[0x6a], &var_48, 2)
    result = sub_140745b20(&var_18)
    
    if (rax_2 != 0)
        rax_2[1].d -= 1
        
        if (rax_2[1].d == 1)
            result = (**rax_2)(rax_2)
            int32_t temp3_1 = *(rax_2 + 0xc)
            *(rax_2 + 0xc) -= 1
            
            if (temp3_1 == 1)
                result = (*(*rax_2 + 8))(rax_2, 1)

int64_t* rbx_2 = arg2[2].q

if (rbx_2 != 0)
    rbx_2[1].d -= 1
    
    if (rbx_2[1].d == 1)
        result = (**rbx_2)(rbx_2)
        int32_t temp1_1 = *(rbx_2 + 0xc)
        *(rbx_2 + 0xc) -= 1
        
        if (temp1_1 == 1)
            return (*(*rbx_2 + 8))(rbx_2, 1)

return result
