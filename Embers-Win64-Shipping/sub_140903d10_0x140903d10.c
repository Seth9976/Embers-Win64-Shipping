// 函数: sub_140903d10
// 地址: 0x140903d10
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int16_t* const rdx

if (arg2[1].d == 0)
    rdx = &data_142d40450
else
    rdx = *arg2

if (sub_140b1f040(arg4, rdx, 0) == 0)
    *arg1 = 0
    arg1[1] = 0
    return arg1

int16_t* var_58
int64_t var_38
sub_140a35790(sub_140b19c30(&var_38, arg2, 0), &var_58)
int64_t rcx_3 = var_38

if (rcx_3 != 0)
    sub_140a74f90(rcx_3)

int16_t* const rcx_4 = &data_142d40450
int32_t var_50

if (var_50 != 0)
    rcx_4 = var_58

int64_t rbp
int64_t* rdi_1

if (sub_140a54510(rcx_4, &data_142e1b180) == 0)
    rdi_1 = arg5
    rbp.b = 3
    
    if (rdi_1[3] != &data_142e1b188)
        int32_t rdx_3 = 0
        rdi_1[4].d = 0
        
        if (*(rdi_1 + 0x24) != 4)
            sub_1405947f0(&rdi_1[3], 4)
            rdx_3 = rdi_1[4].d
        
        rdi_1[4].d = rdx_3 + 4
        
        if (rdx_3 + 4 s> *(rdi_1 + 0x24))
            sub_140594770(&rdi_1[3])
        
        *rdi_1[3] = 0x50004d0042
    
    goto label_140903f65

int16_t* rcx_7 = &data_142d40450

if (var_50 != 0)
    rcx_7 = var_58

int32_t rax_6 = sub_140a54510(rcx_7, &data_142d8ad88)
int32_t rax_7

if (rax_6 != 0)
    int16_t* rcx_8 = &data_142d40450
    
    if (var_50 != 0)
        rcx_8 = var_58
    
    rax_7 = sub_140a54510(rcx_8, u"jpeg")

if (rax_6 == 0 || rax_7 == 0)
    rdi_1 = arg5
    rbp.b = 1
    
    if (rdi_1[3] != u"JPEG")
        int32_t rdx_5 = 0
        rdi_1[4].d = 0
        
        if (*(rdi_1 + 0x24) != 5)
            sub_1405947f0(&rdi_1[3], 5)
            rdx_5 = rdi_1[4].d
        
        rdi_1[4].d = rdx_5 + 5
        
        if (rdx_5 + 5 s> *(rdi_1 + 0x24))
            sub_140594770(&rdi_1[3])
        
        __builtin_wcscpy(rdi_1[3], u"JPEG")
    
label_140903f65:
    int64_t* var_48
    (*(*arg3 + 0x40))(arg3, &var_48, zx.q(rbp.b))
    int64_t* rcx_16 = var_48
    char rax_14
    
    if (rcx_16 != 0)
        rax_14 = (**rcx_16)(rcx_16, *arg4, arg4[1])
    
    int64_t* var_40
    
    if (rcx_16 == 0 || rax_14 == 0)
        *arg1 = 0
        arg1[1] = 0
        
        if (var_40 != 0)
            var_40[1].d -= 1
            
            if (var_40[1].d == 1)
                (**var_40)(var_40)
                int32_t temp1_1 = *(var_40 + 0xc)
                *(var_40 + 0xc) -= 1
                
                if (temp1_1 == 1)
                    (*(*var_40 + 8))(var_40, 1)
    else
        if (*rdi_1 != &data_142d40450)
            int32_t rdx_8 = 0
            rdi_1[1].d = 0
            
            if (*(rdi_1 + 0xc) != 0)
                sub_1405947f0(rdi_1, 0)
                rdx_8 = rdi_1[1].d
            
            rdi_1[1].d = rdx_8
            
            if (rdx_8 s> *(rdi_1 + 0xc))
                sub_140594770(rdi_1)
        
        int64_t* rcx_19 = var_48
        int32_t rax_16 = (*(*rcx_19 + 0x28))(rcx_19)
        int64_t* rcx_20 = var_48
        rdi_1[2].d = rax_16
        int32_t rax_18 = (*(*rcx_20 + 0x30))(rcx_20)
        *(rdi_1 + 0x14) = rax_18
        rdi_1[5] = data_143988978
        int64_t* rax_20 = var_48
        rdi_1[6].b = 1
        rdi_1[7] = (sx.q(rax_18) * sx.q(rdi_1[2].d)) << 2
        *arg1 = rax_20
        arg1[1] = var_40
        int64_t var_40_1 = 0
        var_48 = nullptr
else
    int16_t* rcx_9 = &data_142d40450
    
    if (var_50 != 0)
        rcx_9 = var_58
    
    if (sub_140a54510(rcx_9, &data_142d8ad90) == 0)
        rdi_1 = arg5
        rbp.b = 0
        
        if (rdi_1[3] != &data_142e1b1b0)
            int32_t rdx_4 = 0
            rdi_1[4].d = 0
            
            if (*(rdi_1 + 0x24) != 4)
                sub_1405947f0(&rdi_1[3], 4)
                rdx_4 = rdi_1[4].d
            
            rdi_1[4].d = rdx_4 + 4
            
            if (rdx_4 + 4 s> *(rdi_1 + 0x24))
                sub_140594770(&rdi_1[3])
            
            *rdi_1[3] = 0x47004e0050
        
        goto label_140903f65
    
    *arg1 = 0
    arg1[1] = 0

int16_t* rcx_27 = var_58

if (rcx_27 != 0)
    sub_140a74f90(rcx_27)

return arg1
