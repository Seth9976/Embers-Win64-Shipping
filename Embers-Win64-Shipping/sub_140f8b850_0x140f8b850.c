// 函数: sub_140f8b850
// 地址: 0x140f8b850
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t rbx = *(arg2 + 8)
int32_t arg_8 = 0
int64_t r14
r14.b = rbx s> 1
int64_t* rcx_1 = *(arg1 + 0x18) + 0x4b8
(*(*rcx_1 + 8))(rcx_1)
int64_t* var_40
int64_t* rdx
int32_t rsi

if (rbx s<= 1)
    sub_1405d9400()
    int64_t var_48 = data_143cd6fd8
    int64_t* rcx_4 = data_143cd6fe0
    var_40 = rcx_4
    
    if (rcx_4 != 0)
        rcx_4[1].d += 1
    
    rdx = &var_48
    int32_t var_38_1 = data_143cd6fe8
    rsi = 2
else
    void var_30
    rdx = _vfprintf_p_l(&var_30, &data_142e5e898, u"UnrealEd")
    rsi = 1

int64_t* rcx_6 = *(arg1 + 8) + 0x4b8
(**rcx_6)(rcx_6, rdx)

if ((rsi.b & 2) != 0)
    rsi &= 0xfffffffd
    
    if (var_40 != 0)
        var_40[1].d -= 1
        
        if (var_40[1].d == 1)
            (**var_40)(var_40)
            int32_t rax_6 = *(var_40 + 0xc)
            *(var_40 + 0xc) -= 1
            
            if (rax_6 == 1)
                (*(*var_40 + 8))(var_40, 1)

int64_t* var_28

if ((rsi.b & 1) != 0 && var_28 != 0)
    var_28[1].d -= 1
    
    if (var_28[1].d == 1)
        (**var_28)(var_28)
        int32_t rdi_1 = *(var_28 + 0xc)
        *(var_28 + 0xc) -= 1
        
        if (rdi_1 == 1)
            (*(*var_28 + 8))(var_28, zx.q(rdi_1))

jump(*(*(arg1 - 0x3f8) + 0x248))
