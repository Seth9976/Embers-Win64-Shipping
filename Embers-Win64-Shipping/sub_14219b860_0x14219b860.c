// 函数: sub_14219b860
// 地址: 0x14219b860
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* const* result = &__return_addr

if (*(arg1 + 0x28) != 0)
    void** var_c8
    sub_140b4c4f0(&var_c8, sx.q(*(arg1 + 0xe8) + 3), 0)
    int64_t rcx_1 = sx.q(*(arg1 + 0xe8))
    
    if (rcx_1.d s> 0)
        void* rdx_2 = arg1 + 0xd0
        void* rax_2 = *(rdx_2 + 0x10)
        
        if (rax_2 != 0)
            rdx_2 = rax_2
        
        sub_140b53d10(&var_c8, rdx_2, rcx_1)
    
    sub_140b560b0(&var_c8, 1)
    sub_140b560b0(&var_c8, 1)
    int64_t var_e8 = 0
    int32_t var_e0_1 = 0
    sub_1405947f0(&var_e8, 0x12)
    int32_t rax_3 = var_e0_1 + 0x12
    var_e0_1 = rax_3
    
    if (rax_3 s> 0)
        sub_140594770(&var_e8)
    
    int64_t rdi_1 = var_e8
    UnDecorator::getReferenceType(rdi_1, u"PostPacketHandler", 0x24)
    
    if (rdi_1 != 0)
        sub_140a74f90(rdi_1)
    
    sub_140b560b0(&var_c8, 1)
    int64_t* rcx_10 = *(arg1 + 0x28)
    void* rdi_2 = rcx_10[0x21]
    
    if (rdi_2 != 0)
        *(rdi_2 + 0x290) = 1
        rcx_10 = *(arg1 + 0x28)
    
    int64_t var_38
    
    if ((*(*rcx_10 + 0x388))(rcx_10) != 0)
        int64_t var_d8 = *arg2
        void* rax_7 = arg2[1]
        var_e8.b = 1
        var_e8 = 0
        var_e0_1:4.w = 0
        void* var_d0_1 = rax_7
        
        if (rax_7 != 0)
            *(rax_7 + 8) += 1
        
        int64_t* rcx_11 = *(arg1 + 0x28)
        int32_t var_28
        (*(*rcx_11 + 0x308))(rcx_11, &var_d8, var_38, zx.q(var_28), &var_e8)
    
    if (rdi_2 != 0)
        *(rdi_2 + 0x290) = 0
    
    if (var_38 != 0)
        sub_140a74f90(var_38)
    
    result = sub_140b4cb40(&var_c8)

int64_t* rbx_1 = arg2[1]

if (rbx_1 != 0)
    rbx_1[1].d -= 1
    
    if (rbx_1[1].d == 1)
        result = (**rbx_1)(rbx_1)
        int32_t temp1_1 = *(rbx_1 + 0xc)
        *(rbx_1 + 0xc) -= 1
        
        if (temp1_1 == 1)
            return (*(*rbx_1 + 8))(rbx_1, 1)

return result
