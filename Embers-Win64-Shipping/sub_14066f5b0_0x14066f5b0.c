// 函数: sub_14066f5b0
// 地址: 0x14066f5b0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_70
uint64_t rbx = *sub_140b58170(&var_70, "VaRestSettings", 1)
void* rax_1 = sub_140cde0b0()
uint32_t rcx_3
rcx_3.b = (rbx u>> 0x20).d == 0

if ((rcx_3.b & sub_140b5b8a0(rbx.d, 0)) != 0)
    sub_140d19010(rax_1, 
        NewObject with empty name can't be used to create default subobjects (inside of UObject derived "
    "class constructor) as it produces incon")

char var_98 = 0
int32_t var_a8 = 0
*(arg1 + 0x80) = sub_140d2dfc0(sub_140680bb0(), rax_1, rbx, 2, 0, 0, 0, 0, 0)
void var_68
uint64_t result = sub_140b3dbe0(*sub_140b58170(&var_68, "Settings", 1))
int64_t* result_1 = result

if (result != 0)
    void arg_8
    sub_140d3a3a0(&arg_8, *(arg1 + 0x80))
    void arg_18
    sub_140b58170(&arg_18, "VaRest", 1)
    void arg_20
    sub_140b58170(&arg_20, "Plugins", 1)
    void var_78
    sub_140b58170(&var_78, "Project", 1)
    int64_t rdi_1 = *result_1
    void var_38
    var_98.q = _vfprintf_p_l(&var_38, u"Configure VaRest plugin settings", u"FVaRest")
    var_a8.q = &arg_18
    void var_60
    void var_50
    result = (*(rdi_1 + 0x58))(result_1, &var_60, &var_78, &arg_20, var_a8, 
        _vfprintf_p_l(&var_50, VaRest", FVaRest"), 0, &arg_8)
    int64_t* var_58
    
    if (var_58 != 0)
        var_58[1].d -= 1
        
        if (var_58[1].d == 1)
            result = (**var_58)(var_58)
            int32_t temp2_1 = *(var_58 + 0xc)
            *(var_58 + 0xc) -= 1
            
            if (temp2_1 == 1)
                result = (*(*var_58 + 8))(var_58, 1)
    
    int64_t* var_48
    
    if (var_48 != 0)
        result = zx.q(var_48[1].d)
        var_48[1].d -= 1
        
        if (result.d == 1)
            (**var_48)(var_48)
            result = zx.q(*(var_48 + 0xc))
            *(var_48 + 0xc) -= 1
            
            if (result.d == 1)
                result = (*(*var_48 + 8))(var_48, 1)
    
    int64_t* var_30
    
    if (var_30 != 0)
        result = zx.q(var_30[1].d)
        var_30[1].d -= 1
        
        if (result.d == 1)
            result = (**var_30)(var_30)
            int32_t rdi_2 = *(var_30 + 0xc)
            *(var_30 + 0xc) -= 1
            
            if (rdi_2 == 1)
                return (*(*var_30 + 8))(var_30, zx.q(rdi_2))

return result
