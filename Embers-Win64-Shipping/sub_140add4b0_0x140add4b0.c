// 函数: sub_140add4b0
// 地址: 0x140add4b0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_28
int64_t* rax_1 = sub_140ac6680(_vfprintf_p_l(&var_28, u"Open Log", u"MessageLog"))
int16_t* const rax_2

if (rax_1[1].d == 0)
    rax_2 = &data_142d40450
else
    rax_2 = *rax_1

int16_t* const var_30 = rax_2
int32_t result = 0x42d40c4c
void* const var_38 = &data_142d40c4c
int64_t* var_20

if (var_20 != 0)
    result = var_20[1].d
    var_20[1].d -= 1
    
    if (result == 1)
        result = (**var_20)(var_20)
        int32_t rdi_1 = *(var_20 + 0xc)
        *(var_20 + 0xc) -= 1
        
        if (rdi_1 == 1)
            return (*(*var_20 + 8))(var_20, zx.q(rdi_1))

return result
