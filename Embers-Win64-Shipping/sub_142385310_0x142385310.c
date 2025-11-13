// 函数: sub_142385310
// 地址: 0x142385310
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (arg1[0x13] != 0)
    int64_t var_28 = *arg2
    int64_t var_20
    sub_140596d10(&var_20, &arg2[1])
    void* rbp_1 = arg1[0x13]
    int64_t** rax
    int512_t zmm1_1
    rax, zmm1_1 = sub_14238cd90(rbp_1, &var_28)
    
    if (rax != 0)
        if (rax[1].b != 0)
            rax[1].b = 0
            
            if (*rax == 0)
                zmm1_1 = sub_14238cc40(rbp_1, &var_28, rax)
            
            sub_1423864d0(rbp_1, zmm1_1, rax)
        
        if (*rax == 0)
            *(rax + 9) = 1
    
    int64_t rcx_4 = var_20
    
    if (rcx_4 != 0)
        sub_140a74f90(rcx_4)
    
    if (arg1[2].b == 0)
        sub_142385bf0(arg1)

int64_t rcx_6 = arg2[1]

if (rcx_6 == 0)
    return 

return sub_140a74f90(rcx_6) __tailcall
