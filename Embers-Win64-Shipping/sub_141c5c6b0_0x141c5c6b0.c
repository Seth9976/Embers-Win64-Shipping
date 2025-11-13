// 函数: sub_141c5c6b0
// 地址: 0x141c5c6b0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* rbx = *(arg1 + 0x90)

if (rbx != 0)
    int64_t* rcx = *(rbx + 0x30)
    
    if (rcx != 0)
        (*(*rcx + 0x18))(rcx)
        int64_t* rcx_1 = *(rbx + 0x30)
        
        if (rcx_1 != 0)
            (**rcx_1)(rcx_1, 1)
        
        *(rbx + 0x30) = 0

if (*(arg1 + 0xa8) != 0)
    *(arg1 + 0x198) = 1
    int64_t* rcx_2 = *(arg1 + 0xa8)
    void* rbx_1 = *rcx_2
    int64_t rbp_1 = sx.q(*(rcx_2 + 0x8c))
    *(rbx_1 + 0x1a8) -= 1
    *(rbp_1 + *(rbx_1 + 0x168)) = 0
    int64_t r14_1 = sx.q(*(rbx_1 + 0x160))
    int32_t rax_4 = (r14_1 + 1).d
    *(rbx_1 + 0x160) = rax_4
    
    if (rax_4 s> *(rbx_1 + 0x164))
        sub_1405a4cf0(rbx_1 + 0x158)
    
    *(*(rbx_1 + 0x158) + (r14_1 << 2)) = rbp_1.d
    int64_t* rcx_4 = *(*(rbx_1 + 0x28) + 0x60)
    
    if (rcx_4 != 0)
        (*(*rcx_4 + 0x28))(rcx_4, zx.q(rbp_1.d))
    
    void** const var_38_1 = &data_142d42ed8
    int32_t var_60_1 = rbp_1.d
    int64_t (* var_58)(int64_t* arg1) = sub_141c56be0
    int64_t var_48_1 = 0
    int128_t var_30_1 = rbx_1.o
    sub_141c56770(rbx_1, &var_58)
    *(arg1 + 0xa8) = 0

int64_t* var_70 = nullptr
int64_t var_78

if (arg1 + 0x98 != &var_78)
    *(arg1 + 0x98) = 0
    var_78 = 0
    sub_1405aeff0(arg1 + 0xa0, &var_70)
    int64_t* rcx_8 = var_70
    
    if (rcx_8 != 0)
        rcx_8[1].d -= 1
        
        if (rcx_8[1].d == 1)
            int64_t* rbx_2 = var_70
            (**rbx_2)(rbx_2)
            int32_t rsi_1 = *(rbx_2 + 0xc)
            *(rbx_2 + 0xc) -= 1
            
            if (rsi_1 == 1)
                int64_t* rcx_10 = var_70
                (*(*rcx_10 + 8))(rcx_10, zx.q(rsi_1))

*(arg1 + 0x18) = 0
int32_t result_1 = *(arg1 + 0x170)
*(arg1 + 0x170) = 0
int32_t result = result_1
int64_t* rcx_11 = *(arg1 + 0x90)
*(arg1 + 0x64) = 0

if (rcx_11 != 0)
    result = rcx_11[8].d - 2
    
    if (result u<= 1)
        result = (**rcx_11)(rcx_11, 1)
    
    *(arg1 + 0x90) = 0

*(arg1 + 0xb8) = 0

if (*(arg1 + 0xbc) s<= 0xffffffff)
    result = sub_140775b10(arg1 + 0xb0, 0)

*(arg1 + 0x160) = 0
return result
