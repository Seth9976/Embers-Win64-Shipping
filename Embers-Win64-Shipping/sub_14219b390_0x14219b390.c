// 函数: sub_14219b390
// 地址: 0x14219b390
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_158
void** result = __security_cookie ^ &var_158
void** result_1 = result

if (*(arg1 + 0x28) != 0)
    void** var_f8
    sub_140b4c4f0(&var_f8, sx.q(*(arg1 + 0xe8) + 0xe4), 0)
    int64_t zmm3 = *(*(arg1 + 0x28) + 0x218)
    int64_t var_128 = *arg2
    void* rax_5 = arg2[1]
    int64_t var_118 = zmm3
    void* var_120_1 = rax_5
    
    if (rax_5 != 0)
        *(rax_5 + 8) += 1
        zmm3 = var_118
    
    void var_38
    int512_t zmm1 = sub_14218f7c0(arg1, &var_128, *(arg1 + 0x50), zmm3, arg3, &var_38)
    int64_t rcx_2 = sx.q(*(arg1 + 0xe8))
    
    if (rcx_2.d s> 0)
        char* rdx_3 = arg1 + 0xd0
        char* rax_6 = *(rdx_3 + 0x10)
        
        if (rax_6 != 0)
            rdx_3 = rax_6
        
        sub_140b53d10(&var_f8, rdx_3, rcx_2)
    
    sub_140b560b0(&var_f8, 1)
    sub_140b560b0(&var_f8, 0)
    sub_140b560b0(&var_f8, *(arg1 + 0x50))
    int64_t* var_f0
    int64_t* rdx_5 = *var_f0
    
    if (&rdx_5[1] u> var_f0[1])
        int64_t* rdx_6 = &var_118
        void*** rcx_8 = &var_f8
        char var_cf
        
        if ((var_cf & 0x20) != 0)
            sub_140b540d0(rcx_8, rdx_6, zmm1)
        else
            var_f8[0x2a](rcx_8, rdx_6, 8)
    else
        var_118 = *rdx_5
        *var_f0 += 8
    
    sub_140b53380(&var_f8, &var_38, 0x14)
    var_128 = 0
    int32_t var_120_2 = 0
    sub_1405947f0(&var_128, 0x12)
    int32_t rax_10 = var_120_2 + 0x12
    var_120_2 = rax_10
    
    if (rax_10 s> 0)
        sub_140594770(&var_128)
    
    int64_t rdi_1 = var_128
    UnDecorator::getReferenceType(rdi_1, u"PostPacketHandler", 0x24)
    
    if (rdi_1 != 0)
        sub_140a74f90(rdi_1)
    
    sub_140b560b0(&var_f8, 1)
    int64_t* rcx_15 = *(arg1 + 0x28)
    void* rdi_2 = rcx_15[0x21]
    
    if (rdi_2 != 0)
        *(rdi_2 + 0x290) = 1
        rcx_15 = *(arg1 + 0x28)
    
    int64_t var_68
    
    if ((*(*rcx_15 + 0x388))(rcx_15) != 0)
        int64_t var_110 = *arg2
        void* rax_14 = arg2[1]
        var_128.b = 1
        var_128 = 0
        var_120_2:4.w = 0
        void* var_108_1 = rax_14
        
        if (rax_14 != 0)
            *(rax_14 + 8) += 1
        
        int64_t* rcx_16 = *(arg1 + 0x28)
        int32_t var_58
        (*(*rcx_16 + 0x308))(rcx_16, &var_110, var_68, zx.q(var_58), &var_128)
    
    if (rdi_2 != 0)
        *(rdi_2 + 0x290) = 0
    
    if (var_68 != 0)
        sub_140a74f90(var_68)
    
    result = sub_140b4cb40(&var_f8)

int64_t* rbx_1 = arg2[1]

if (rbx_1 != 0)
    rbx_1[1].d -= 1
    
    if (rbx_1[1].d == 1)
        result = (**rbx_1)(rbx_1)
        int32_t temp1_1 = *(rbx_1 + 0xc)
        *(rbx_1 + 0xc) -= 1
        
        if (temp1_1 == 1)
            result = (*(*rbx_1 + 8))(rbx_1, 1)

__security_check_cookie(result_1 ^ &var_158)
return result
