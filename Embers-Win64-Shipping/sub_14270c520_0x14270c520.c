// 函数: sub_14270c520
// 地址: 0x14270c520
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

*(arg1 + 0x20c) = 0xffffffff
*(arg1 + 0x1e0) = 0
*(arg1 + 0x1e8) = 0
*(arg1 + 0x1f0) = 0
*(arg1 + 0x1d8) = 0

if (*(arg1 + 0x1dc) s<= 0xffffffff)
    sub_1408cf3a0(arg1 + 0x1d0, 0)

*(arg1 + 0x1c8) = 0
int64_t* var_20 = nullptr
int64_t var_28

if (arg1 + 0x100 != &var_28)
    *(arg1 + 0x100) = 0
    var_28 = 0
    sub_1405aeff0(arg1 + 0x108, &var_20)
    int64_t* rcx_3 = var_20
    
    if (rcx_3 != 0)
        rcx_3[1].d -= 1
        
        if (rcx_3[1].d == 1)
            int64_t* rbx_1 = var_20
            (**rbx_1)(rbx_1)
            int32_t rax_3 = *(rbx_1 + 0xc)
            *(rbx_1 + 0xc) -= 1
            
            if (rax_3 == 1)
                int64_t* rcx_5 = var_20
                (*(*rcx_5 + 8))(rcx_5, 1)

int64_t* var_10 = nullptr
int64_t var_18

if (arg1 + 0x128 != &var_18)
    *(arg1 + 0x128) = 0
    var_18 = 0
    sub_1405aeff0(arg1 + 0x130, &var_10)
    int64_t* rcx_8 = var_10
    
    if (rcx_8 != 0)
        rcx_8[1].d -= 1
        
        if (rcx_8[1].d == 1)
            int64_t* rbx_2 = var_10
            (**rbx_2)(rbx_2)
            int32_t rax_7 = *(rbx_2 + 0xc)
            *(rbx_2 + 0xc) -= 1
            
            if (rax_7 == 1)
                int64_t* rcx_10 = var_10
                (*(*rcx_10 + 8))(rcx_10, 1)

*(arg1 + 0x138) = 0xffffffff
*(arg1 + 0x13c) = 0
sub_141e97b20(arg1 + 0x148)
*(arg1 + 0x1ba) &= 0xfe
*(arg1 + 0x114) = *(arg1 + 0x110)
char rax_10 = *(arg1 + 0x1b9) & 0x6c
*(arg1 + 0x1b4) = 0xffffffff
*(arg1 + 0x1b9) = rax_10 | 3
*(arg1 + 0x1a4) = data_143b580a8
*(arg1 + 0x1ac) = data_143b580b0
void* result = zx.q(data_143b57f9c)
*(arg1 + 0x238) = result.d
*(arg1 + 0x1b8) = 0

if (*(arg1 + 0x230) != 0)
    void* rax_12 = *(arg1 + 0xa8)
    
    if (rax_12 == 0)
        rax_12 = sub_141ee69e0(arg1)
    
    void* rbx_3 = *(rax_12 + 0x188)
    void* rbx_4
    
    if (rbx_3 == 0)
        rbx_4 = *(rax_12 + 0x300)
    else
        rbx_4 = *(rbx_3 + 0xc0)
    
    result = sub_1423dce10(rbx_4, arg1 + 0x230)
    
    if (result != 0)
        result = sub_1423e60e0(rbx_4, *(arg1 + 0x230))
    
    *(arg1 + 0x230) = 0

return result
