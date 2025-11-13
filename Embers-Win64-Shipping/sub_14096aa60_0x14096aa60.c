// 函数: sub_14096aa60
// 地址: 0x14096aa60
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t rax = *(arg1 + 0x68)
int32_t zmm0 = *(arg1 + 0x70)
int32_t rcx = *(arg1 + 0x74)
int64_t* rcx_1
int64_t* rdx

if (arg3 == 0)
    int32_t var_c_1 = rcx
    int64_t var_18
    rdx = &var_18
    rcx_1 = arg1 + 0x40
    int32_t var_10_1 = zmm0
    var_18 = rax
else
    int32_t var_1c_1 = rcx
    int64_t var_28
    rdx = &var_28
    rcx_1 = arg1 + 0x30
    int32_t var_20_1 = zmm0
    var_28 = rax

sub_1405a9f90(rcx_1, rdx)
int64_t var_38
int32_t result = &var_38
int64_t* var_30 = nullptr

if (arg1 + 0x58 != &var_38)
    *(arg1 + 0x58) = 0
    var_38 = 0
    result = sub_1405aeff0(arg1 + 0x60, &var_30)
    int64_t* rcx_4 = var_30
    
    if (rcx_4 != 0)
        result = rcx_4[1].d
        rcx_4[1].d -= 1
        
        if (result == 1)
            int64_t* rbx_1 = var_30
            result = (**rbx_1)(rbx_1)
            int32_t rdi_1 = *(rbx_1 + 0xc)
            *(rbx_1 + 0xc) -= 1
            
            if (rdi_1 == 1)
                int64_t* rcx_6 = var_30
                return (*(*rcx_6 + 8))(rcx_6, zx.q(rdi_1))

return result
