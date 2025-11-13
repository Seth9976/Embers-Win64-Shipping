// 函数: sub_1423a8920
// 地址: 0x1423a8920
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* arg_10 = arg2
int32_t arg_8
int32_t* result

if (*sub_1423af520(arg1 + 0x10, &arg_8, &arg_10) == 0xffffffff)
    if (arg2 == 0 || (*(arg2 + 0xcc) & 1) != 0)
        result.b = 0
        return result
    
    if ((*(*arg2 + 0x308))(arg2) != arg2)
        result.b = 0
        return result
    
    int64_t* rcx_2 = arg2[0x23]
    
    if (rcx_2 == 0)
        (*(*arg2 + 0x390))(arg2)
        rcx_2 = arg2[0x23]
    
    if ((*(*rcx_2 + 0x260))(rcx_2, *(arg1 + 0xb8)).b == 0)
        result.b = 0
        return result
    
    int64_t* arg_18 = &arg_10
    arg_10 = arg2
    sub_14239d8e0(arg1 + 0x10, &arg_8, &arg_18, nullptr)
    void* rbp_1 = *(arg1 + 0xb8)
    arg_8.q = 0
    void* r14_1 = *(arg1 + 0x10) + sx.q(arg_8) * 0x18
    
    if ((1 & sub_140b5b8a0(0, 0)) != 0)
        sub_140d19010(rbp_1, 
            NewObject with empty name can't be used to create default subobjects (inside of UObject "
        "derived class constructor) as it produces incon")
    
    void* rax_6 = sub_140d2dfc0(arg2, rbp_1, 0, 0, 0, 0, 0, 0, 0)
    *(r14_1 + 8) = rax_6
    *(rax_6 + 0x28) = arg1
    int64_t* rcx_8 = *(r14_1 + 8)
    (*(*rcx_8 + 0x268))(rcx_8, arg1)

result.b = 1
return result
