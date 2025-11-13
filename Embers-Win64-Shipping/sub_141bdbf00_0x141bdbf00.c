// 函数: sub_141bdbf00
// 地址: 0x141bdbf00
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_168
int64_t rax_1 = __security_cookie ^ &var_168
(*(*arg1 + 0x308))()
uint64_t rax_3 = sub_140d3c6e0(arg2)
int64_t* rdi = nullptr
uint64_t rbx = rax_3

if (rax_3 != 0)
label_141bdbfa9:
    void* rax_7 = sub_140d41340()
    void* rdx_1 = *(rbx + 0x10)
    int64_t rax_8 = sx.q(*(rax_7 + 0x38))
    
    if (rax_8.d s> *(rdx_1 + 0x38) || *(*(rdx_1 + 0x30) + (rax_8 << 3)) != rax_7 + 0x30)
        goto label_141bdc02e
    
    int64_t rax_9
    
    if (arg3[1].d == 0)
        rax_9.b = 0
    else
        int64_t* rcx_5 = *arg3
        
        if (rcx_5 == 0)
            rax_9.b = 0
        else if ((*(*rcx_5 + 0x28))(rcx_5).b == 0)
            rax_9.b = 0
        else
            rax_9.b = 1
    
    if (rax_9.b != 0)
        if (arg3[1].d != 0)
            rdi = *arg3
        
        (*(*rdi + 0x50))(rdi)
else
    if (*(arg2 + 0x10) != 0)
        if (rax_3.d == data_1439aaa30)
            data_1439aaa30 = 0
        else
            rax_3 = zx.q(data_1439aaa30)
        
        if (rax_3.d == arg2[2] && *arg2 == 0xffffffff)
            goto label_141bdc02e
        
        void* rax_4 = sub_140d2bce0(&arg2[4])
        sub_140d3a3a0(arg2, rax_4)
        
        if (rax_4 != 0 || data_143e1d7b4 == 0)
            int32_t rax_5 = 0
            
            if (0 == data_1439aaa30)
                data_1439aaa30 = 0
            else
                rax_5 = data_1439aaa30
            
            arg2[2] = rax_5
        
        uint64_t rax_6 = sub_140d3c6e0(arg2)
        rbx = rax_6
        
        if (rax_6 == 0)
            goto label_141bdc02e
        
        goto label_141bdbfa9
    
label_141bdc02e:
    void var_b8
    (*(*arg1 + 0x310))(arg1, sub_141b79880(&var_b8, arg2))
    int64_t var_110
    sub_140d3a3a0(&var_110, arg1)
    arg1[0x3f] = *(arg2 + 0x10)
    sub_140597df0(&arg1[0x40], &arg2[6])
    int64_t rax_14 = var_110
    int64_t var_100 = 0
    int32_t var_f8_1 = 0
    sub_1407473e0(&var_100, arg3)
    int64_t var_f0
    sub_141b79880(&var_f0, arg2)
    void*** rax_15 = sub_140a82f30(0x48, 8)
    *rax_15 = &data_143084418
    rax_15[1] = rax_14
    rax_15[2] = 0
    rax_15[3].d = 0
    sub_1407473e0(&rax_15[2], &var_100)
    void* rcx_16 = &rax_15[7]
    rax_15[4].d = 0xffffffff
    *(rax_15 + 0x24) = 0
    __builtin_memset(&rax_15[6], 0, 0x18)
    int64_t var_118_1 = 0
    
    if (*(rax_15 + 0x44) s<= 0xffffffff)
        sub_1405947f0(&rax_15[7], 0)
        rcx_16 = &rax_15[7]
    
    int16_t* rax_16 = rax_15[7]
    
    if (rax_16 != 0)
        *rax_16 = 0
    
    rax_15[5].d = 0
    rax_15[4] = var_f0
    int32_t var_e8
    rax_15[5].d = var_e8
    int64_t var_e0
    rax_15[6] = var_e0
    int64_t var_d8
    sub_140597df0(rcx_16, &var_d8)
    *rax_15 = &data_143084438
    uint64_t (* var_88)(int32_t* arg1)
    uint64_t (* rax_20)(int32_t* arg1) = var_88
    
    if (rax_15 != -8)
        rax_20 = sub_141b97060
    
    var_88 = rax_20
    int64_t var_128 = 0
    int32_t var_120_1 = 0
    sub_1405947f0(&var_128, 0x1e)
    int32_t rax_21 = var_120_1 + 0x1e
    var_120_1 = rax_21
    
    if (rax_21 s> 0)
        sub_140594770(&var_128)
    
    UnDecorator::getReferenceType(var_128, u"RequestAsyncLoad SingleLambda", 0x3c)
    int64_t* var_c8
    int64_t** rax_23 =
        sub_142395e00(sub_141e5df80() + 0x178, &var_c8, &arg1[0x3f], &var_88, 0x64, 0, 0, &var_128)
    
    if (&arg1[0x3d] != rax_23)
        arg1[0x3d] = *rax_23
        *rax_23 = nullptr
        int64_t rcx_23 = rax_23[1]
        int64_t* rbx_4 = arg1[0x3e]
        
        if (rcx_23 != rbx_4)
            rax_23[1] = 0
            arg1[0x3e] = rcx_23
            
            if (rbx_4 != 0)
                rbx_4[1].d -= 1
                
                if (rbx_4[1].d == 1)
                    (**rbx_4)(rbx_4)
                    int32_t temp3_1 = *(rbx_4 + 0xc)
                    *(rbx_4 + 0xc) -= 1
                    
                    if (temp3_1 == 1)
                        (*(*rbx_4 + 8))(rbx_4, 1)
    
    int64_t* var_c0
    
    if (var_c0 != 0)
        var_c0[1].d -= 1
        
        if (var_c0[1].d == 1)
            (**var_c0)(var_c0)
            int32_t temp1_1 = *(var_c0 + 0xc)
            *(var_c0 + 0xc) -= 1
            
            if (temp1_1 == 1)
                (*(*var_c0 + 8))(var_c0, 1)
    
    if (var_88 != 0)
        void var_68
        void*** rcx_28 = &var_68
        
        if (rax_15 != 0)
            rcx_28 = rax_15
        
        (*rcx_28)[2](rcx_28)
    
    int64_t rcx_29 = var_d8
    
    if (rcx_29 != 0)
        sub_140a74f90(rcx_29)
    
    sub_140745b20(&var_100)

int64_t rcx_31 = *(arg2 + 0x18)

if (rcx_31 != 0)
    sub_140a74f90(rcx_31)

uint64_t result = sub_140745b20(arg3)
__security_check_cookie(rax_1 ^ &var_168)
return result
