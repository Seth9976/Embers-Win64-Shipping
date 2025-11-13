// 函数: sub_141d59ec0
// 地址: 0x141d59ec0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

sub_141d54070(arg1)
void* r15 = *(arg1 + 0xc8)

if (arg2[1].d s> 1)
    int16_t* var_38
    sub_140b18720(&var_38, arg2, 1)
    int16_t* const rbx_1 = &data_142d40450
    int32_t var_30
    
    if (var_30 != 0)
        rbx_1 = var_38
    
    void* rax = sub_141d5e170()
    void arg_18
    int64_t* rax_1 = sub_140b58260(&arg_18, rbx_1, 1)
    int64_t** arg_8
    sub_140d25240(&arg_8, sub_140cde0b0(), rax, *rax_1)
    int64_t** rbx_3 = arg_8
    void* rax_3 = sub_140cde0b0()
    int32_t rcx_3
    rcx_3.b = rbx_3:4.d == 0
    
    if ((rcx_3.b & sub_140b5b8a0(rbx_3.d, 0)) != 0)
        sub_140d19010(rax_3, 
            NewObject with empty name can't be used to create default subobjects (inside of UObject "
        "derived class constructor) as it produces incon")
    
    void* rax_6 = sub_140d2dfc0(sub_141d5e170(), rax_3, rbx_3, 0x48, 0, 0, 0, 0, 0)
    sub_141d5bf10(rax_6, arg2)
    
    if (rax_6 != 0)
        int64_t rdi_3 = sx.q(*(r15 + 0x30))
        int32_t rax_7 = (rdi_3 + 1).d
        *(r15 + 0x30) = rax_7
        
        if (rax_7 s> *(r15 + 0x34))
            sub_1405a4d70(r15 + 0x28)
        
        rbx_3.b = 1
        (*(r15 + 0x28))[rdi_3] = rax_6
    else
        rbx_3.b = 0
    
    int16_t* rcx_8 = var_38
    
    if (rcx_8 != 0)
        sub_140a74f90(rcx_8)
    
    if (rbx_3.b != 0)
        return sub_141d59710(arg1) __tailcall

int64_t* result
result.b = 0
return result
