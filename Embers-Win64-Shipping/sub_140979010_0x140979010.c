// 函数: sub_140979010
// 地址: 0x140979010
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

sub_14095cd40(arg1 + 0xd8, 0)
*(arg1 + 0x58) = 0

if (*(arg1 + 0x5c) != 0)
    sub_14083ad30(arg1 + 0x50, 0)

sub_14095cca0(arg1 + 0x60, 0)
int64_t* var_10 = nullptr
int64_t var_18
int32_t result = &var_18

if (arg1 + 0x38 != &var_18)
    *(arg1 + 0x38) = 0
    var_18 = 0
    result = sub_1405aeff0(arg1 + 0x40, &var_10)
    int64_t* rcx_5 = var_10
    
    if (rcx_5 != 0)
        result = rcx_5[1].d
        rcx_5[1].d -= 1
        
        if (result == 1)
            int64_t* rbx_1 = var_10
            result = (**rbx_1)(rbx_1)
            int32_t rsi_1 = *(rbx_1 + 0xc)
            *(rbx_1 + 0xc) -= 1
            
            if (rsi_1 == 1)
                int64_t* rcx_7 = var_10
                result = (*(*rcx_7 + 8))(rcx_7, zx.q(rsi_1))

*(arg1 + 0x28) = 0
*(arg1 + 0x30) = 0
return result
