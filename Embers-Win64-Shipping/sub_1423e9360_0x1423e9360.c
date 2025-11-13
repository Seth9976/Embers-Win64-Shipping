// 函数: sub_1423e9360
// 地址: 0x1423e9360
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

uint64_t arg_8

if (*(arg1 + 0x838) != 0)
    int64_t var_28
    int64_t* rax_1 = sub_140d30800(arg1 + 0x838, &var_28)
    int16_t* rbx_1
    
    if (rax_1[1].d == 0)
        rbx_1 = &data_142d40450
    else
        rbx_1 = *rax_1
    
    void* rax = sub_140d2f240(sub_1425b6fc0(), 0, rbx_1, 0, 0, 0)
    int64_t rcx_2 = var_28
    
    if (rcx_2 != 0)
        sub_140a74f90(rcx_2)
    
    if (rax == 0)
        int64_t* rcx_6 = *(arg1 + 0x810)
        
        if (rcx_6 != 0)
            if (*(arg1 + 0x830) != 0)
                (*(*rcx_6 + 0x278))(rcx_6, arg1)
            
            *(arg1 + 0x830) = 0
            *(arg1 + 0x810) = 0
            return sub_140599090(arg1 + 0x818) __tailcall
    else
        arg_8 = 0
        
        if ((1 & sub_140b5b8a0(0, 0)) != 0)
            sub_140d19010(arg1, 
                NewObject with empty name can't be used to create default subobjects (inside of UObject "
            "derived class constructor) as it produces incon")
        
        sub_1423f09f0(arg1, sub_140d2dfc0(rax, arg1, 0, 0, 0, 0, 0, 0, 0))
else if (*(arg1 + 0x850) != 0)
    uint64_t arg_10
    sub_140d25240(&arg_8, arg1, sub_1425b2ab0(), 
        *sub_140b58170(&arg_10, "DefaultTimecodeProvider", 1))
    uint64_t rbx_3 = arg_8
    arg_10 = rbx_3
    char rax_9 = sub_140b5b8a0(rbx_3.d, 0)
    int32_t rcx_11
    rcx_11.b = arg_10:4.d == 0
    
    if ((rcx_11.b & rax_9) != 0)
        sub_140d19010(arg1, 
            NewObject with empty name can't be used to create default subobjects (inside of UObject "
        "derived class constructor) as it produces incon")
    
    int64_t* rax_11 = sub_140d2dfc0(sub_1425b2ab0(), arg1, rbx_3, 0, 0, 0, 0, 0, 0)
    rax_11[6] = *(arg1 + 0x854)
    rax_11[5].d = *(arg1 + 0x85c)
    rax_11[7].w = 0
    sub_1423f09f0(arg1, rax_11)
