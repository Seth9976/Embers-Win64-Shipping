// 函数: sub_14219ae80
// 地址: 0x14219ae80
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* const* result = &__return_addr

if (*(arg1 + 0x28) != 0)
    void** var_d8
    sub_140b4c4f0(&var_d8, sx.q(*(arg1 + 0xe8) + 0xe4), 0)
    int64_t rcx_1 = sx.q(*(arg1 + 0xe8))
    int64_t arg_8 = -0x4010000000000000
    
    if (rcx_1.d s> 0)
        void* rdx_2 = arg1 + 0xd0
        void* rax_2 = *(rdx_2 + 0x10)
        
        if (rax_2 != 0)
            rdx_2 = rax_2
        
        sub_140b53d10(&var_d8, rdx_2, rcx_1)
    
    sub_140b560b0(&var_d8, 1)
    sub_140b560b0(&var_d8, 0)
    sub_140b560b0(&var_d8, 1)
    int64_t* var_d0
    int64_t* rdx_4 = *var_d0
    
    if (&rdx_4[1] u> var_d0[1])
        int64_t* rdx_5 = &arg_8
        void*** rcx_7 = &var_d8
        char var_af
        
        if ((var_af & 0x20) != 0)
            sub_140b540d0(rcx_7, rdx_5, arg4)
        else
            var_d8[0x2a](rcx_7, rdx_5, 8)
    else
        arg_8 = *rdx_4
        *var_d0 += 8
    
    sub_140b53380(&var_d8, arg3, 0x14)
    int64_t var_f8 = 0
    int32_t var_f0_1 = 0
    sub_1405947f0(&var_f8, 0x12)
    int32_t rax_6 = var_f0_1 + 0x12
    var_f0_1 = rax_6
    
    if (rax_6 s> 0)
        sub_140594770(&var_f8)
    
    int64_t rbx_1 = var_f8
    UnDecorator::getReferenceType(rbx_1, u"PostPacketHandler", 0x24)
    
    if (rbx_1 != 0)
        sub_140a74f90(rbx_1)
    
    sub_140b560b0(&var_d8, 1)
    int64_t* rcx_14 = *(arg1 + 0x28)
    void* rbx_2 = rcx_14[0x21]
    
    if (rbx_2 != 0)
        *(rbx_2 + 0x290) = 1
        rcx_14 = *(arg1 + 0x28)
    
    int64_t var_48
    
    if ((*(*rcx_14 + 0x388))(rcx_14) != 0)
        int64_t var_e8 = *arg2
        void* rax_10 = arg2[1]
        var_f8.b = 1
        var_f8 = 0
        var_f0_1:4.w = 0
        void* var_e0_1 = rax_10
        
        if (rax_10 != 0)
            *(rax_10 + 8) += 1
        
        int64_t* rcx_15 = *(arg1 + 0x28)
        int32_t var_38
        (*(*rcx_15 + 0x308))(rcx_15, &var_e8, var_48, zx.q(var_38), &var_f8)
    
    if (rbx_2 != 0)
        *(rbx_2 + 0x290) = 0
    
    if (var_48 != 0)
        sub_140a74f90(var_48)
    
    result = sub_140b4cb40(&var_d8)

int64_t* rbx_3 = arg2[1]

if (rbx_3 != 0)
    rbx_3[1].d -= 1
    
    if (rbx_3[1].d == 1)
        result = (**rbx_3)(rbx_3)
        int32_t temp1_1 = *(rbx_3 + 0xc)
        *(rbx_3 + 0xc) -= 1
        
        if (temp1_1 == 1)
            return (*(*rbx_3 + 8))(rbx_3, 1)

return result
