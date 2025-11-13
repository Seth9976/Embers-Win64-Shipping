// 函数: sub_141bb18b0
// 地址: 0x141bb18b0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* rax = sub_140d3c6e0(arg1 + 0x28)
void** var_b8
int64_t var_78
int64_t* var_40
void*** rdx_1

if (rax == 0)
label_141bb1ac1:
    rdx_1 = sub_140ddaa70(&var_b8, &data_143dbb1f0)
label_141bb1ac7:
    sub_14068e310(arg2, rdx_1)
    var_b8 = &data_142d8ad18
    
    if (var_40 != 0)
        var_40[1].d -= 1
        
        if (var_40[1].d == 1)
            (**var_40)(var_40)
            int32_t temp2_1 = *(var_40 + 0xc)
            *(var_40 + 0xc) -= 1
            
            if (temp2_1 == 1)
                (*(*var_40 + 8))(var_40, 1)
    
    if (var_78 != 0)
        int32_t temp1_1 = *(var_78 + 8)
        *(var_78 + 8) -= 1
        
        if (temp1_1 == 1)
            (**var_78)(var_78)
            int32_t temp4_1 = *(var_78 + 0xc)
            *(var_78 + 0xc) -= 1
            
            if (temp4_1 == 1)
                (*(*var_78 + 8))(var_78, 1)
else
    bool cond:0_1 = *(arg1 + 0x61) == 0
    char arg_8 = 0
    
    if (cond:0_1 || *(arg1 + 0x60) == 0)
        int128_t zmm0 = data_14399f5c0
        char var_38
        char var_38_1 = var_38 & 0xfc
        var_b8 = &data_142d8ad18
        int128_t var_98_1 = zmm0
        int32_t var_b0_1 = 0x42000000
        var_78 = (zx.o(0)).q
        int128_t var_a8_1 = zx.o(0)
        int64_t zmm1 = data_143dbb1f0
        arg_8.q = zmm1
        zmm0 = arg3
        int32_t var_54_1 = zmm0.d
        int32_t var_5c_1 = zmm0.d
        int128_t var_48_1 = zx.o(0)
        int32_t var_58_1 = zmm1.d
        int32_t var_60_1 = zmm1.d
        int32_t var_ac_1 = 0x42000000
        char var_88_1 = 0
        int64_t var_80_1 = 0
        int64_t var_68_1 = 0
        char var_50_1 = 0
        int32_t var_4c_1 = 3
        
        if (sub_141b72940(rax, arg1 + 0x30, &var_b8, &arg_8) != 0)
            if (&arg_8 != arg1 + 0x60)
                *(arg1 + 0x60) = 0x100
            
            rdx_1 = &var_b8
            goto label_141bb1ac7
        
        var_b8 = &data_142d8ad18
        
        if (var_40 != 0)
            var_40[1].d -= 1
            
            if (var_40[1].d == 1)
                (**var_40)(var_40)
                int32_t temp6_1 = *(var_40 + 0xc)
                *(var_40 + 0xc) -= 1
                
                if (temp6_1 == 1)
                    (*(*var_40 + 8))(var_40, 1)
        
        if (var_78 != 0)
            int32_t temp5_1 = *(var_78 + 8)
            *(var_78 + 8) -= 1
            
            if (temp5_1 == 1)
                (**var_78)(var_78)
                int32_t temp7_1 = *(var_78 + 0xc)
                *(var_78 + 0xc) -= 1
                
                if (temp7_1 == 1)
                    (*(*var_78 + 8))(var_78, 1)
        
        goto label_141bb1a08
    
label_141bb1a08:
    bool cond:1_1 = *(arg1 + 0x61) == 0
    arg_8 = 1
    
    if (not(cond:1_1) && *(arg1 + 0x60) != 1)
        goto label_141bb1ac1
    
    void* arg_18
    
    if (sub_141b72680(rax, arg1 + 0x30, &arg_18, &arg_8) == 0)
        goto label_141bb1ac1
    
    void* rdi_3 = arg_18
    
    if (rdi_3 == 0)
        goto label_141bb1ac1
    
    void* rax_7 = sub_1425b3af0()
    void* rdx_3 = *(rdi_3 + 0x10)
    int64_t rax_8 = sx.q(*(rax_7 + 0x38))
    
    if (rax_8.d s> *(rdx_3 + 0x38) || *(*(rdx_3 + 0x30) + (rax_8 << 3)) != rax_7 + 0x30)
        goto label_141bb1ac1
    
    if (&arg_8 != arg1 + 0x60)
        *(arg1 + 0x60) = 0x101
    
    int64_t* rax_10 = sub_141c1b300()
    
    if (rax_10[0x23] == 0)
        (*(*rax_10 + 0x390))(rax_10)
    
    sub_14068e310(arg2, sub_141bb9d10(&var_b8, rdi_3, 0, 0))
    sub_140691a20(&var_b8)
return arg2
