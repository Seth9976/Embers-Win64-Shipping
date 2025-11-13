// 函数: sub_1408c0080
// 地址: 0x1408c0080
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

*(arg1 + 0x2a8) = 0

if (arg2 == 0)
    return 

void* rcx = *(arg1 + 0x2b0)
int128_t zmm6

if (rcx == 0)
    void*** rax_1 = j_sub_140a82f30(0x2b0)
    void*** rdi_1 = rax_1
    
    if (rax_1 == 0)
        rdi_1 = nullptr
    else
        sub_1408b9020(rax_1)
        rdi_1[0x55].b = 0
        *rdi_1 = &data_142e040e8
        rdi_1[0x50].b = 1
    
    int64_t* rax_2 = j_sub_140a82f30(0x18)
    int64_t* rbx_1 = rax_2
    
    if (rax_2 == 0)
        rbx_1 = nullptr
    else
        rax_2[1].d = 1
        *(rax_2 + 0xc) = 1
        *rbx_1 = &data_142d83c20
        rbx_1[2] = rdi_1
    
    void*** var_28 = rdi_1
    int64_t* var_20 = rbx_1
    
    if (arg1 + 0x2b0 != &var_28)
        *(arg1 + 0x2b0) = rdi_1
        var_28 = nullptr
        sub_1405aeff0(arg1 + 0x2b8, &var_20)
        rbx_1 = var_20
    
    if (rbx_1 != 0)
        rbx_1[1].d -= 1
        
        if (rbx_1[1].d == 1)
            (**rbx_1)(rbx_1)
            int32_t rdi_2 = *(rbx_1 + 0xc)
            *(rbx_1 + 0xc) -= 1
            
            if (rdi_2 == 1)
                (*(*rbx_1 + 8))(rbx_1, zx.q(rdi_2))
    
    int64_t var_18 = *(arg1 + 0x2b0)
    void* rax_7 = *(arg1 + 0x2b8)
    void* var_10_1 = rax_7
    
    if (rax_7 != 0)
        *(rax_7 + 8) += 1
    
    void*** rax_8 = data_143ceb928
    
    if (rax_8 == 0)
        rax_8 = j_sub_140a82f30(zx.q((&rax_8[6]).d))
        
        if (rax_8 != 0)
            rax_8, zmm6 = sub_1408b9380(rax_8)
        
        data_143ceb928 = rax_8
    
    sub_1408c2040(rax_8, &var_18)
    rcx = *(arg1 + 0x2b0)

sub_1408bf440(rcx, arg2, zx.o(0), 0, zmm6)
