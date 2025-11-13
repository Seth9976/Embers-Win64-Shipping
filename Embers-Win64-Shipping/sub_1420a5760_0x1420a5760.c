// 函数: sub_1420a5760
// 地址: 0x1420a5760
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* const* result = &__return_addr
void* rcx = arg1[0x4f]

if (rcx != 0)
    char var_90_1 = 1
    int512_t zmm2
    zmm2.o = zx.o(0)
    int32_t rbx_1 = 0
    int64_t var_98_1 = 0
    int128_t var_68 = data_1432bc220
    int512_t zmm3
    zmm3.o = *(rcx + 0x30)
    int128_t* var_a0_1 = &var_68
    int32_t var_c0_1 = 0
    sub_14240b0a0(*(rcx + 0x260), arg2.d, arg3.d, arg4, (*(rcx + 0x34)).d, 0, nullptr, 0, 0)
    int64_t rsi_1 = sx.q(arg1[0x4b].d)
    int64_t r14_1 = arg1[0x4a]
    uint64_t var_58 = 0
    int32_t var_50_1 = rsi_1.d
    
    if (rsi_1.d != 0)
        sub_1405c4a00(&var_58, rsi_1.d, 0)
        memcpy(var_58, r14_1, (rsi_1 << 3).d)
    else
        int32_t var_4c_1 = 0
    
    int64_t rsi_2 = sx.q(arg1[0x4d].d)
    int64_t r14_2 = arg1[0x4c]
    uint64_t var_48 = 0
    int32_t var_40_1 = rsi_2.d
    
    if (rsi_2.d != 0)
        sub_1405c4a00(&var_48, rsi_2.d, 0)
        memcpy(var_48, r14_2, (rsi_2 << 3).d)
    else
        int32_t var_3c_1 = 0
    
    int64_t rax_1 = (*(*arg1 + 0x690))(arg1)
    void* rsi_3 = arg1[0x4f]
    int128_t zmm0_1 = data_142d8c9b0
    arg1[0x53] = rax_1
    int128_t var_78 = zmm0_1
    (*(*(rsi_3 + 0x98) + 0x20))(rsi_3 + 0x98, &var_78)
    void* rax_3 = arg1[0x53]
    int32_t arg_8 = 0
    uint64_t var_88
    int32_t var_80
    int64_t arg_20
    
    if (rax_3 != 0)
        arg_20 = *(rax_3 + 0x18)
        sub_140b63b70(&arg_20, &var_88)
    else
        var_88 = 0
        var_80 = 0
        sub_1405947f0(&var_88, (rax_3 + 5).d)
        int32_t rax_4 = var_80 + 5
        var_80 = rax_4
        
        if (rax_4 s> 0)
            sub_140594770(&var_88)
        
        UnDecorator::getReferenceType(var_88, u"None", 0xa)
    
    uint64_t r8_4 = &data_142d40450
    
    if (var_80 != 0)
        r8_4 = var_88
    
    sub_140a2e390(&var_78, 
        Showing Debug for %s, Press [PageUp] and [PageDown] to cycle between targets.", r8_4)
    sub_142409af0(rsi_3 + 0x98, &var_78, &arg_8)
    int64_t rcx_14 = var_78.q
    
    if (rcx_14 != 0)
        sub_140a74f90(rcx_14)
    
    uint64_t rcx_15 = var_88
    
    if (rcx_15 != 0)
        sub_140a74f90(rcx_15)
    
    int64_t* r10_1 = arg1[0x53]
    int32_t var_c8_1
    
    if (r10_1 != 0)
        int32_t rax_6 = *(r10_1 + 0xc)
        void* const rax_13
        
        if (rax_6 s>= data_143e1d9b4)
            rax_13 = nullptr
        else
            int16_t temp0_1
            int32_t temp1_1
            temp0_1:temp1_1 = sx.q(rax_6)
            uint32_t rdx_10 = zx.d(temp0_1)
            int32_t rax_8 = temp1_1 + rdx_10
            rax_13 = *(data_143e1d9a0 + (sx.q(rax_8 s>> 0x10) << 3))
                + sx.q(zx.d(rax_8.w) - rdx_10) * 0x18
        
        if (((*(rax_13 + 8) u>> 0x1d).b & 1) == 0)
            var_c8_1.q = arg3
            (*(*r10_1 + 0x620))(r10_1, arg1[0x4f], &var_58, arg2, var_c8_1)
            
            if ((arg1[0x46].b & 8) == 0 && *(arg1[0x53] + 0xf0) == 1)
                int64_t* rcx_21 = arg1[0x44]
                var_c8_1.q = arg3
                (*(*rcx_21 + 0x620))(rcx_21, arg1[0x4f], &var_58, arg2, var_c8_1)
    
    arg_20.d = *sub_140b5e500(&arg_8, 0xdd)
    arg_20:4.d = 0
    result = (*(*arg1 + 0x680))(arg1, &arg_20)
    
    if (result.b != 0)
        result = (*(*arg1 + 0x150))(arg1)
        int64_t* rcx_26 = result[0x25]
        
        if (rcx_26 != 0)
            var_c8_1.q = arg3
            result = (*(*rcx_26 + 0x620))(rcx_26, arg1[0x4f], &var_58, arg2, var_c8_1)
    
    if ((arg1[0x45].b & 4) != 0)
        int32_t rdx_16 = data_143a2e3d0
        int32_t rcx_28 = data_143a2e3dc + 1
        int64_t r15
        r15.b = 0
        arg_8.q = arg1[0x4f]
        data_143a2e3dc = rcx_28
        result = zx.q(rdx_16 - 1)
        int64_t r14_3 = sx.q(result.d)
        
        if (result.d s>= 0)
            int64_t rbx_2 = arg_8.q
            int64_t rsi_5 = r14_3 << 4
            int64_t temp2_1
            
            do
                int64_t rcx_29 = data_143a2e3c8
                
                if (*(rsi_5 + rcx_29 + 8) == 0)
                    r15.b = 1
                else
                    int64_t* rcx_30 = *(rsi_5 + rcx_29)
                    
                    if (rcx_30 == 0)
                        r15.b = 1
                    else
                        var_c0_1.q = arg3
                        var_c8_1.q = arg2
                        result =
                            (*(*rcx_30 + 0x50))(rcx_30, arg1, rbx_2, &var_58, var_c8_1, var_c0_1)
                        
                        if (result.b == 0)
                            r15.b = 1
                
                rsi_5 -= 0x10
                temp2_1 = r14_3
                r14_3 -= 1
            while (temp2_1 - 1 s>= 0)
            rcx_28 = data_143a2e3dc
            rbx_1 = 0
            rdx_16 = data_143a2e3d0
        
        data_143a2e3dc = rcx_28 - 1
        
        if (r15.b != 0 && rcx_28 - 1 s<= 0)
            int32_t rsi_6 = rdx_16
            
            if (rdx_16 s> 0)
                int64_t* rdi_1 = nullptr
                
                do
                    int64_t rcx_32 = data_143a2e3c8
                    
                    if (*(rdi_1 + rcx_32 + 8) == 0)
                        sub_1405a4880(&data_143a2e3c8, rbx_1, 1, 1)
                    else
                        int64_t* rcx_33 = *(rdi_1 + rcx_32)
                        
                        if (rcx_33 == 0)
                            sub_1405a4880(&data_143a2e3c8, rbx_1, 1, 1)
                        else if ((*(*rcx_33 + 0x20))(rcx_33) != 0)
                            sub_1405a4880(&data_143a2e3c8, rbx_1, 1, 1)
                        else
                            rbx_1 += 1
                            rdi_1 = &rdi_1[2]
                    
                    rdx_16 = data_143a2e3d0
                while (rbx_1 s< rdx_16)
            
            result = zx.q(rdx_16 * 2)
            
            if (result.d s<= 2)
                result = 2
            
            data_143a2e3d8 = result.d
            
            if (rsi_6 s> result.d && data_143a2e3d4 != rdx_16)
                result = sub_1405a5410(&data_143a2e3c8, rdx_16)
    
    uint64_t rcx_34 = var_48
    
    if (rcx_34 != 0)
        result = sub_140a74f90(rcx_34)
    
    uint64_t rcx_35 = var_58
    
    if (rcx_35 != 0)
        return sub_140a74f90(rcx_35)

return result
