// 函数: sub_140d30e80
// 地址: 0x140d30e80
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_128
int64_t rax_1 = __security_cookie ^ &var_128
void* result
int16_t* var_f8
int16_t* var_e8

if (arg5 != 0)
    int32_t var_7c_1 = 0x80
    int64_t var_a8
    __builtin_memset(&var_a8, 0, 0x2c)
    int64_t rsi_1 = -1
    int32_t var_78_1 = 0xffffffff
    int32_t var_74_1 = 0
    int64_t var_68_1 = 0
    int32_t var_60_1 = 0
    int64_t var_b8 = arg1
    int64_t var_b0_1 = arg2
    
    if (arg7 != 0)
        arg7(&var_a8)
    
    int64_t* rax_6 = sub_140b58260(&var_f8, arg6, 1)
    sub_140d214f0()
    sub_140d14280(&data_1439aac90, rax_6, &var_b8)
    var_e8 = nullptr
    int32_t rdx_12 = 0
    int32_t var_e0_3 = 0
    int32_t rcx_16 = 0
    int32_t var_dc_2 = 0
    
    if (arg6 != 0 && *arg6 != 0)
        int64_t rbx_5 = -1
        
        do
            rbx_5 += 1
        while (arg6[rbx_5] != 0)
        
        if (rbx_5.d + 1 s> 0)
            sub_1405947f0(&var_e8, rbx_5.d + 1)
            rcx_16 = var_dc_2
            rdx_12 = var_e0_3
        
        int32_t rax_7 = rbx_5.d + 1 + rdx_12
        var_e0_3 = rax_7
        
        if (rax_7 s> rcx_16)
            sub_140594770(&var_e8)
        
        UnDecorator::getReferenceType(var_e8, arg6, (rbx_5.d + 1) * 2)
    
    var_f8 = nullptr
    int32_t rdx_15 = 0
    int32_t var_f0_1 = 0
    int32_t rcx_20 = 0
    int32_t var_ec_1 = 0
    
    if (arg3 != 0 && *arg3 != 0)
        int64_t rbx_7 = -1
        
        do
            rbx_7 += 1
        while (arg3[rbx_7] != 0)
        
        if (rbx_7.d + 1 s> 0)
            sub_1405947f0(&var_f8, rbx_7.d + 1)
            rcx_20 = var_ec_1
            rdx_15 = var_f0_1
        
        int32_t rax_8 = rdx_15 + rbx_7.d + 1
        var_f0_1 = rax_8
        
        if (rax_8 s> rcx_20)
            sub_140594770(&var_f8)
        
        UnDecorator::getReferenceType(var_f8, arg3, (rbx_7.d + 1) * 2)
    
    sub_140a2f8e0(&var_e8, &var_f8, 1)
    int16_t* rcx_25 = var_f8
    
    if (rcx_25 != 0)
        sub_140a74f90(rcx_25)
    
    var_f8 = nullptr
    var_f0_1.q = 0
    sub_1405947f0(&var_f8, 2)
    int32_t var_f0_2 = var_f0_1 + 2
    
    if (var_f0_1 + 2 s> var_ec_1)
        sub_140594770(&var_f8)
    
    UnDecorator::getReferenceType(var_f8, &data_142d404c4, 4)
    sub_140a2f8e0(&var_e8, &var_f8, 1)
    int16_t* rcx_30 = var_f8
    
    if (rcx_30 != 0)
        sub_140a74f90(rcx_30)
    
    int16_t* r12_1 = &data_142d40450
    int16_t* rcx_31 = &data_142d40450
    
    if (var_e0_3 != 0)
        rcx_31 = var_e8
    
    sub_140bcc090(rcx_31, arg3, 0, 0, arg1, 1)
    var_f8 = nullptr
    var_f0_2.q = 0
    sub_1405947f0(&var_f8, 0xa)
    int32_t r13_1 = var_ec_1
    int32_t rbx_9 = var_f0_2 + 0xa
    
    if (rbx_9 s> r13_1)
        sub_140594770(&var_f8)
        r13_1 = var_ec_1
    
    int16_t* r15_2 = var_f8
    UnDecorator::getReferenceType(r15_2, u"Default__", 0x14)
    
    if (arg3 != 0 && *arg3 != 0)
        do
            rsi_1 += 1
        while (arg3[rsi_1] != 0)
        
        int32_t rax_11
        
        if (rbx_9 == 0)
            rax_11 = rbx_9 + 1
        
        if (rbx_9 != 0 || rsi_1.d == 0)
            rax_11 = 0
        
        var_f8 = r15_2
        int32_t rdx_24 = rax_11 + rbx_9 + rsi_1.d
        int32_t var_ec_2 = r13_1
        
        if (rdx_24 s> r13_1)
            sub_1405947f0(&var_f8, rdx_24)
        
        sub_140a20ba0(&var_f8, arg3, rsi_1.d)
        r15_2 = var_f8
        var_f8 = nullptr
        int32_t var_f0_4
        var_f0_4.q = 0
    
    int16_t* rdx_26 = &data_142d40450
    
    if (rbx_9 != 0)
        rdx_26 = r15_2
    
    if (var_e0_3 != 0)
        r12_1 = var_e8
    
    sub_140bcc090(r12_1, rdx_26, 1, 0, arg1, 1)
    
    if (r15_2 != 0)
        sub_140a74f90(r15_2)
    
    int16_t* rcx_39 = var_e8
    
    if (rcx_39 != 0)
        sub_140a74f90(rcx_39)
    
    result = sub_1405ae080(&var_a8)
else
    std::vector<class std::_Work_stealing_deque<struct std::_Sort_work_item_impl<int64_t> >,struct std::_Parallelism_allocator<class std::_Work_stealing_deque<struct std::_Sort_work_item_impl<int64_t> > > >::vector<class std::_Work_stealing_deque<struct std::_Sort_work_item_impl<int64_t> >,struct std::_Parallelism_allocator<class std::_Work_stealing_deque<struct std::_Sort_work_item_impl<int64_t> > > >(
        &var_f8, arg3)
    int16_t* const r12 = &data_142d40450
    int16_t* const rdx_1 = &data_142d40450
    int32_t var_f0
    
    if (var_f0 != 0)
        rdx_1 = var_f8
    
    sub_140bcc090(arg4, rdx_1, 0, 0, arg1, 0)
    uint64_t rdi_1 = 0
    var_e8 = nullptr
    int32_t var_e0
    var_e0.q = 0
    sub_1405947f0(&var_e8, 0xa)
    int32_t var_dc
    int32_t r15_1 = var_dc
    int32_t rbx_1 = var_e0 + 0xa
    
    if (rbx_1 s> r15_1)
        sub_140594770(&var_e8)
        r15_1 = var_dc
    
    int16_t* rsi = var_e8
    UnDecorator::getReferenceType(rsi, u"Default__", 0x14)
    bool cond:2_1
    
    if (rbx_1 s> 1)
        int32_t r14_2 = var_f0 - 1
        
        if (var_f0 == 0)
            r14_2 = 0
        
        int32_t rax_4
        
        if (rbx_1 == 0)
            rax_4 = rbx_1 + 1
        
        if (rbx_1 != 0 || r14_2 == 0)
            rax_4 = 0
        
        var_e8 = rsi
        int32_t rdx_6 = rbx_1 + rax_4 + r14_2
        int32_t var_dc_1 = r15_1
        rsi = nullptr
        
        if (rdx_6 s> r15_1)
            sub_1405947f0(&var_e8, rdx_6)
        
        sub_140a20ba0(&var_e8, var_f8, r14_2)
        uint64_t rax_5 = var_e8
        var_e8 = nullptr
        int32_t var_e0_2
        var_e0_2.q = 0
        rdi_1 = rax_5
        cond:2_1 = rbx_1 != 0
    else
        int16_t* r14_1 = var_f8
        uint64_t var_d0 = 0
        cond:2_1 = var_f0 != 0
        
        if (var_f0 != 0)
            sub_1405a4c70(&var_d0, var_f0, 0)
            rdi_1 = var_d0
            memcpy(rdi_1, r14_1, var_f0 * 2)
            cond:2_1 = var_f0 != 0
    
    if (cond:2_1)
        r12 = rdi_1
    
    sub_140bcc090(arg4, r12, 1, 0, arg1, 0)
    
    if (rdi_1 != 0)
        sub_140a74f90(rdi_1)
    
    if (rsi != 0)
        sub_140a74f90(rsi)
    
    sub_140d21410()
    int64_t rdi_2 = sx.q(data_143e1d900)
    int32_t rcx_12 = (rdi_2 + 1).d
    data_143e1d900 = rcx_12
    
    if (rcx_12 s> data_143e1d904)
        sub_1405a4d70(&data_143e1d8f8)
    
    result = data_143e1d8f8
    *(result + (rdi_2 << 3)) = arg1
    int16_t* rcx_13 = var_f8
    
    if (rcx_13 != 0)
        result = sub_140a74f90(rcx_13)
__security_check_cookie(rax_1 ^ &var_128)
return result
