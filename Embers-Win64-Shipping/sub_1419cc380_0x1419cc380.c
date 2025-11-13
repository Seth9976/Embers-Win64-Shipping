// 函数: sub_1419cc380
// 地址: 0x1419cc380
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t rbx = sx.q(arg3)
int32_t var_98
int64_t var_78
void*** (* var_68)()
char arg_8
int32_t arg_20

if (sub_1419c6780(data_143f0f1a0, *(arg1 + 0x38)) != 0)
    char* var_60_1 = &arg_8
    var_68 = j_sub_140597fc0
    arg_8 = 0
    void* rax_5 = sub_140a756e0(&var_68, &data_143958018)
    int64_t rdx_5 = rbx * 3
    var_78 = rbx
    int64_t r9_1 = rbx
    int64_t rcx_8 = *(*(arg1 + 0x40) + 0x38)
    char* rdi_1 = *(rcx_8 + (rdx_5 << 3))
    void* r12_1 = rcx_8 + (rdx_5 << 3)
    int64_t* var_58 = rax_5 + 0x10
    int64_t rax_7 = *(rax_5 + 0x10)
    int64_t rax_8 = *(rax_5 + 0x20)
    char var_40_1 = 0
    int64_t rax_9 = *(rax_5 + 0x28)
    *(rax_5 + 0x28) = &var_58
    int64_t* rax_10 = var_58
    rax_10[4].d += 1
    int64_t rcx_9 = sx.q(*(r12_1 + 0x10))
    arg_20 = rcx_9.d
    int32_t var_90
    int32_t var_88
    
    if (*(r12_1 + 8) != rcx_9.d)
        char* rbx_4 = (*(rax_5 + 0x10) + 0xf) & 0xfffffffffffffff0
        void* rax_11 = &rbx_4[rcx_9]
        
        if (rax_11 u> *(rax_5 + 0x18))
            sub_140b0e3d0(rax_5 + 0x10, (rcx_9 + 0x10).d)
            rbx_4 = (*(rax_5 + 0x10) + 0xf) & 0xfffffffffffffff0
            rax_11 = &rbx_4[sx.q(arg_20)]
        
        *(rax_5 + 0x10) = rax_11
        var_88 = 0
        var_90 = 0
        sub_140b02330(data_143f203d0.q, rbx_4, *(r12_1 + 0x10), rdi_1, *(r12_1 + 8), 0)
        r9_1 = var_78
        rdi_1 = rbx_4
    
    uint32_t r9_3 = zx.d(*(r12_1 + 0x14))
    int32_t r8_1 = *(r12_1 + 0x10)
    void* rax_15 = nullptr
    arg_8.q = 0
    int128_t* rbx_7 = *(*(arg1 + 0x40) + 0x28) + r9_1 * 0x14
    
    switch (r9_3)
        case 0
            int64_t* rcx_14 = data_143f0f180
            var_60_1.d = r8_1
            var_68 = rdi_1
            var_68.o = var_68.o
            var_98.q = rbx_7
            (*(*rcx_14 + 0x4e0))(rcx_14, &arg_20, &data_143f02b98, &var_68, var_98, var_90, var_88)
            sub_1405d16e0(&arg_8, arg_20.q)
            sub_141962470(&arg_20)
        label_1419cc7cf:
            rax_15 = arg_8.q
            
            if (rax_15 != 0)
                *(rax_15 + 0x18) = *rbx_7
                *(rax_15 + 0x28) = rbx_7[1].d
        case 1
            int64_t* rcx_20 = data_143f0f180
            var_60_1.d = r8_1
            var_68 = rdi_1
            var_68.o = var_68.o
            var_98.q = rbx_7
            (*(*rcx_20 + 0x500))(rcx_20, &arg_20, &data_143f02b98, &var_68, var_98, var_90, var_88)
            sub_1405d16e0(&arg_8, arg_20.q)
            sub_141962470(&arg_20)
            goto label_1419cc7cf
        case 2
            int64_t* rcx_23 = data_143f0f180
            var_60_1.d = r8_1
            var_68 = rdi_1
            var_68.o = var_68.o
            var_98.q = rbx_7
            (*(*rcx_23 + 0x508))(rcx_23, &arg_20, &data_143f02b98, &var_68, var_98, var_90, var_88)
            sub_1405d16e0(&arg_8, arg_20.q)
            sub_141962470(&arg_20)
            goto label_1419cc7cf
        case 3
            int64_t* rcx_17 = data_143f0f180
            var_60_1.d = r8_1
            var_68 = rdi_1
            var_68.o = var_68.o
            var_98.q = rbx_7
            (*(*rcx_17 + 0x4e8))(rcx_17, &arg_20, &data_143f02b98, &var_68, var_98, var_90, var_88)
            sub_1405d16e0(&arg_8, arg_20.q)
            sub_141962470(&arg_20)
            goto label_1419cc7cf
        case 4
            int64_t* rcx_26 = data_143f0f180
            var_60_1.d = r8_1
            var_68 = rdi_1
            var_68.o = var_68.o
            var_98.q = rbx_7
            (*(*rcx_26 + 0x4f0))(rcx_26, &arg_20, &data_143f02b98, &var_68, var_98, var_90, var_88)
            sub_1405d16e0(&arg_8, arg_20.q)
            sub_141962470(&arg_20)
            goto label_1419cc7cf
        case 5
            int64_t* rcx_29 = data_143f0f180
            var_60_1.d = r8_1
            var_68 = rdi_1
            var_68.o = var_68.o
            var_98.q = rbx_7
            (*(*rcx_29 + 0x4f8))(rcx_29, &arg_20, &data_143f02b98, &var_68, var_98, var_90, var_88)
            sub_1405d16e0(&arg_8, arg_20.q)
            sub_1405d1550(&arg_20)
            goto label_1419cc7cf
        case 6, 7, 8, 9
            if (data_143f0f21f != 0)
                int64_t* rcx_32 = data_143f0f180
                var_60_1.d = r8_1
                var_68 = rdi_1
                int128_t zmm0_1 = var_68.o
                var_98.b = r9_3.b
                var_68.o = zmm0_1
                (*(*rcx_32 + 0x700))(zmm0_1, &arg_20, &var_68, rbx_7, var_98, var_90, var_88)
                sub_1405d16e0(&arg_8, arg_20.q)
                sub_1405d1550(&arg_20)
                goto label_1419cc7cf
    
    *arg2 = rax_15
    arg_8.q = 0
    sub_1405d1550(&arg_8)
    
    if (var_40_1 == 0)
        int64_t* rax_23 = var_58
        char var_40_2 = 1
        rax_23[4].d -= 1
        int64_t* rcx_37 = var_58
        
        if (rax_8 != rcx_37[2])
            sub_140b16b40(rcx_37, rax_8)
            rcx_37 = var_58
        
        *rcx_37 = rax_7
        var_58[3] = rax_9
else
    int64_t* rax_2 = sub_140b63b70(sub_141976940(&arg_8, data_143f0f1a0), &var_78)
    int16_t* const rbx_1 = &data_142d40450
    int16_t* const rdi
    
    if (rax_2[1].d == 0)
        rdi = &data_142d40450
    else
        rdi = *rax_2
    
    int16_t** rax_4 = sub_140b63b70(sub_141976940(&arg_20, *(arg1 + 0x38)), &var_68)
    
    if (rax_4[1].d != 0)
        rbx_1 = *rax_4
    
    var_98.q = rdi
    sub_140af98a0("Unknown", 0x164, 
        FShaderMapResource_InlineCode::InitRHI got platform %s but it is not compatible with %s", rbx_1)
    void*** (* rcx_5)() = var_68
    
    if (rcx_5 != 0)
        sub_140a74f90(rcx_5)
    
    int64_t rcx_6 = var_78
    
    if (rcx_6 != 0)
        sub_140a74f90(rcx_6)
    
    sub_140afbb40()
    *arg2 = 0
return arg2
