// 函数: sub_1408fe390
// 地址: 0x1408fe390
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (*(arg1 + 8) == 0)
    sub_140903880(arg1)

if (*(arg1 + 0x18) == 0)
    void*** rax_1 = sub_1408ff490()
    void*** var_30_1 = rax_1
    void* var_38 = &rax_1[2]
    sub_1408ff2f0(&var_38, &rax_1[2])
    void* var_78 = &rax_1[2]
    void*** rcx_1 = rax_1
    void*** var_70 = rcx_1
    
    if (rax_1 != 0)
        rax_1[1].d += 1
        rcx_1 = var_70
    
    if (arg1 + 0x18 != &var_78)
        *(arg1 + 0x18) = &rax_1[2]
        var_78 = nullptr
        sub_1405aeff0(arg1 + 0x20, &var_70)
        rcx_1 = var_70
    
    if (rcx_1 != 0)
        rcx_1[1].d -= 1
        
        if (rcx_1[1].d == 1)
            void*** rbx_2 = var_70
            (**rbx_2)(rbx_2)
            int32_t rax_4 = *(rbx_2 + 0xc)
            *(rbx_2 + 0xc) -= 1
            
            if (rax_4 == 1)
                void*** rcx_4 = var_70
                (*rcx_4)[1](rcx_4, 1)
    
    if (rax_1 != 0)
        rax_1[1].d -= 1
        
        if (rax_1[1].d == 1)
            (**rax_1)(rax_1)
            int32_t rax_8 = *(rax_1 + 0xc)
            *(rax_1 + 0xc) -= 1
            
            if (rax_8 == 1)
                (*rax_1)[1](rax_1, 1)
    
    void* rdi_2 = *(arg1 + 0x18)
    int64_t* rax_10 = sub_140908320()
    void* rax_11 = rax_10[0x23]
    
    if (rax_11 == 0)
        int64_t rdx_2 = *rax_10
        (*(rdx_2 + 0x390))(rax_10, rdx_2)
        rax_11 = rax_10[0x23]
    
    int64_t rdx_3 = 0
    float zmm0_1 = *(rax_11 + 0x40) * 1.07374182e+09f
    
    if (not(zmm0_1 < 9.22337204e+18f))
        zmm0_1 = zmm0_1 - 9.22337204e+18f
        
        if (not(zmm0_1 >= 9.22337204e+18f))
            rdx_3 = -0x8000000000000000
    
    *(rdi_2 + 0x118) = int.q(zmm0_1) + rdx_3
    sub_140901860(rdi_2, 0)

int64_t var_48 = *(arg1 + 0x18)
int64_t* rax_15 = *(arg1 + 0x20)

if (rax_15 != 0)
    rax_15[1].d += 1

int64_t var_58 = *(arg1 + 8)
int64_t* rax_17 = *(arg1 + 0x10)

if (rax_17 != 0)
    rax_17[1].d += 1

void*** rax_18 = sub_1408ff600(arg3, &var_58, &var_48)
*arg2 = &rax_18[2]
arg2[1] = rax_18

if (rax_18 != 0)
    rax_18[1].d += 1
    
    if (rax_18 != 0)
        rax_18[1].d -= 1
        
        if (rax_18[1].d == 1)
            (**rax_18)(rax_18)
            int32_t rax_23 = *(rax_18 + 0xc)
            *(rax_18 + 0xc) -= 1
            
            if (rax_23 == 1)
                (*rax_18)[1](rax_18, 1)

if (rax_17 != 0)
    rax_17[1].d -= 1
    
    if (rax_17[1].d == 1)
        (**rax_17)(rax_17)
        int32_t rax_27 = *(rax_17 + 0xc)
        *(rax_17 + 0xc) -= 1
        
        if (rax_27 == 1)
            (*(*rax_17 + 8))(rax_17, 1)

if (rax_15 != 0)
    rax_15[1].d -= 1
    
    if (rax_15[1].d == 1)
        (**rax_15)(rax_15)
        int32_t rsi_1 = *(rax_15 + 0xc)
        *(rax_15 + 0xc) -= 1
        
        if (rsi_1 == 1)
            (*(*rax_15 + 8))(rax_15, zx.q(rsi_1))

return arg2
