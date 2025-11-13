// 函数: sub_141f94690
// 地址: 0x141f94690
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* rbx = arg2
int64_t* rcx = *(arg1 + 0x28)

if (rcx != 0 && *(arg1 + 0x70) != 0)
    arg2 = *(arg2 + 0x90)
    
    if (((rbx[0x14] + 7) & 0xfffffffffffffff8) s< 0x10 || *arg2 != 0)
        return sub_14213f9e0(rcx) __tailcall
    
    char rax_4 = *(rbx + 0x29)
    
    if (arg2[1] == 1)
        *(rbx + 0x29) = rax_4 & 0xdf
        *(*(arg1 + 0x28) + 0x158) = 0
    else
        *(rbx + 0x29) = rax_4 | 0x20
        *(*(arg1 + 0x28) + 0x158) = 1
    
    *(arg1 + 0x70) = 0

int64_t* result = (*(*rbx + 0x30))(rbx, arg2)

while (result.b == 0)
    result = *(arg1 + 0x28)
    
    if (result == 0)
        break
    
    if (*(result + 0x134) == 1)
        break
    
    int64_t* rcx_2 = rbx[1]
    char result_1 = 0
    char* rdx = *rcx_2
    
    if (&rdx[1] u> rcx_2[1])
        result = (*(*rbx + 0x150))(rbx, &result_1, 1)
    else
        result = zx.q(*rdx)
        result_1 = result.b
        *rcx_2 += 1
    
    char rdx_3 = *(rbx + 0x29)
    
    if ((rdx_3 & 1) != 0)
        break
    
    int32_t result_2 = (rbx[0x15]).d
    
    if (result_1 != 0x10)
        if (result_1 == 0x14)
            int64_t* rcx_13 = rbx[1]
            uint64_t var_b8 = 0
            int64_t var_b0_1 = 0
            char* rdx_8 = *rcx_13
            char arg_18
            
            if (&rdx_8[1] u> rcx_13[1])
                (*(*rbx + 0x150))(rbx, &arg_18, 1)
            else
                arg_18 = *rdx_8
                *rcx_13 += 1
            
            arg3 = sub_140a1d9d0(rbx, &var_b8, arg3)
            
            if ((not.b(*(rbx + 0x29)) & 1) != 0)
                void* r10_2 = *(arg1 + 0x28)
                void* rdx_11 = *(r10_2 + 0x58)
                void* rax_26 = *(rdx_11 + 0x140)
                int64_t* rcx_16
                
                if (rax_26 != 0)
                    rcx_16 = *(rax_26 + 0x188)
                
                if (rax_26 == 0 || rcx_16 == 0)
                    void* rax_27 = sub_1423de470(data_143f5b298, rdx_11)
                    
                    if (rax_27 != 0)
                        rcx_16 = *(rax_27 + 0x218)
                        
                        if (rcx_16 != 0)
                            (*(*rcx_16 + 0x310))(rcx_16, *(arg1 + 0x28), zx.q(arg_18), &var_b8)
                else
                    (*(*rcx_16 + 0x310))(rcx_16, r10_2, zx.q(arg_18), &var_b8)
            
            uint64_t rcx_18 = var_b8
            
            if (rcx_18 != 0)
                arg3 = sub_140a74f90(rcx_18)
        else if (result_1 != 0x13)
            void* rdx_14 = *(arg1 + 0x28)
            int64_t* rcx_21 = *(*(rdx_14 + 0x58) + 0x208)
            (*(*rcx_21 + 0x18))(rcx_21, rdx_14, zx.q(result_1), rbx)
        else
            uint64_t var_a8 = 0
            int64_t var_a0_1 = 0
            arg3 = sub_140a1d9d0(rbx, &var_a8, arg3)
            uint64_t rcx_20 = var_a8
            result.b = not.b(*(rbx + 0x29))
            
            if ((result.b & 1) != 0)
                if (rcx_20 != 0)
                    result = sub_140a74f90(rcx_20)
                
                break
            
            if (rcx_20 != 0)
                arg3 = sub_140a74f90(rcx_20)
    else if (*(*(*(arg1 + 0x28) + 0x58) + 0x88) == 0)
        int64_t* rcx_6 = rbx[1]
        int32_t* r8_2 = *rcx_6
        int32_t arg_20
        
        if (&r8_2[1] u> rcx_6[1])
            int32_t* rdx_4 = &arg_20
            
            if ((rdx_3 & 0x20) != 0)
                sub_140b54070(rbx, rdx_4, arg3)
            else
                (*(*rbx + 0x150))(rbx, rdx_4, 4)
        else
            arg_20 = *r8_2
            *rcx_6 += 4
        
        if ((not.b(*(rbx + 0x29)) & 1) != 0)
            int64_t rax_16 = sx.q(arg_20)
            
            if (rax_16.d s>= 0)
                void* rcx_8 = *(arg1 + 0x28)
                
                if (rax_16.d s< *(rcx_8 + 0x1318))
                    void* rdi_1 = *(*(rcx_8 + 0x1310) + (rax_16 << 3))
                    
                    if (rdi_1 != 0)
                        void* rax_17 = sub_142458ee0()
                        void* rdx_5 = *(rdi_1 + 0x10)
                        int64_t rax_18 = sx.q(*(rax_17 + 0x38))
                        
                        if (rax_18.d s<= *(rdx_5 + 0x38)
                                && *(*(rdx_5 + 0x30) + (rax_18 << 3)) == rax_17 + 0x30)
                            int64_t rax_20 = *(rdi_1 + 0x70)
                            
                            if (rax_20 != 0)
                                int64_t* rdx_6 = *(arg1 + 0x28)
                                int64_t* rcx_11 = rdx_6[6]
                                
                                if (rax_20 == rcx_11)
                                    sub_14213f9e0(rdx_6)
                                else if (rcx_11 != 0)
                                    (*(*rcx_11 + 0xc28))(rcx_11, rdi_1)
    
    result = sx.q(result_2)
    
    if (result == rbx[0x15])
        char rdx_15 = *(rbx + 0x29)
        
        if ((rdx_15 & 1) == 0)
            result = zx.q(result_1)
            
            if (result.d u> 0x1c)
                return sub_14213f9e0(*(arg1 + 0x28))
            
            int32_t var_128
            char var_118
            uint64_t var_110
            uint64_t var_108
            uint64_t var_f8
            uint64_t rcx_29
            
            switch (result)
                case nullptr
                    int64_t* rcx_24 = rbx[1]
                    var_118 = 0
                    int32_t var_114
                    __builtin_memset(&var_114, 0, 0x14)
                    char* rdx_16 = *rcx_24
                    
                    if (&rdx_16[1] u> rcx_24[1])
                        (*(*rbx + 0x150))(rbx, &var_118, 1)
                    else
                        var_118 = *rdx_16
                        *rcx_24 += 1
                    
                    int64_t* rcx_26 = rbx[1]
                    int32_t* rdx_18 = *rcx_26
                    
                    if (&rdx_18[1] u> rcx_26[1])
                        int32_t* rdx_19 = &var_114
                        
                        if ((*(rbx + 0x29) & 0x20) != 0)
                            sub_140b54070(rbx, rdx_19, arg3)
                        else
                            (*(*rbx + 0x150))(rbx, rdx_19, 4)
                    else
                        var_114 = *rdx_18
                        *rcx_26 += 4
                    
                    goto label_141f94aba
                case 1
                    __builtin_memset(&var_118, 0, 0x30)
                    result, arg3 = sub_140a1d9d0(rbx, &var_f8, 
                        sub_140a1d9d0(rbx, &var_108, sub_140a1d9d0(rbx, &var_118, arg3)))
                    uint64_t rcx_33 = var_f8
                    
                    if (rcx_33 != 0)
                        result, arg3 = sub_140a74f90(rcx_33)
                    
                label_141f94b2e:
                    uint64_t rcx_34 = var_108
                    
                    if (rcx_34 != 0)
                        result, arg3 = sub_140a74f90(rcx_34)
                    
                    rcx_29 = var_118.q
                    goto label_141f94da4
                case 2, 4, 0xf, 0x10
                    int64_t* rcx_35 = rbx[1]
                    var_128 = 0
                    int32_t* r8_6 = *rcx_35
                    
                    if (&r8_6[1] u> rcx_35[1])
                        int32_t* rdx_24 = &var_128
                        
                        if ((rdx_15 & 0x20) != 0)
                            result = sub_140b54070(rbx, rdx_24, arg3)
                        else
                            result = (*(*rbx + 0x150))(rbx, rdx_24, 4)
                    else
                        result = zx.q(*r8_6)
                        var_128 = result.d
                        *rcx_35 += 4
                case 3
                    uint64_t var_98 = 0
                    int64_t var_90_1 = 0
                    result, arg3 = sub_140a1d9d0(rbx, &var_98, arg3)
                    rcx_29 = var_98
                label_141f94da4:
                    
                    if (rcx_29 != 0)
                        result, arg3 = sub_140a74f90(rcx_29)
                case 5
                    __builtin_memset(&var_118, 0, 0x20)
                    int64_t var_f0
                    __builtin_memset(&var_f0, 0, 0x30)
                    var_f8 = &data_142e259e0
                    int512_t zmm1_4 = sub_14215ddd0(rbx, &var_f8, 
                        sub_140a1d9d0(rbx, &var_108, sub_140a1d9d0(rbx, &var_118, arg3)))
                    int64_t var_d4
                    result, arg3 = sub_140a1d9d0(rbx, &var_d4:4, zmm1_4)
                    int64_t rcx_42 = var_d4
                    
                    if (rcx_42 != 0)
                        result, arg3 = sub_140a74f90(rcx_42)
                    
                    var_f8 = &data_142e259e0
                    int64_t var_e0
                    
                    if (var_e0 != 0)
                        result, arg3 = sub_140a74f90(var_e0)
                    
                    int64_t* var_e8
                    
                    if (var_e8 != 0)
                        var_e8[1].d -= 1
                        
                        if (var_e8[1].d == 1)
                            result = (**var_e8)(var_e8)
                            int32_t temp1_1 = *(var_e8 + 0xc)
                            *(var_e8 + 0xc) -= 1
                            
                            if (temp1_1 == 1)
                                result = (*(*var_e8 + 8))(var_e8, 1)
                    
                    goto label_141f94b2e
                case 6
                    uint64_t var_88 = 0
                    int64_t var_80_1 = 0
                    result, arg3 = sub_140a1d9d0(rbx, &var_88, arg3)
                    rcx_29 = var_88
                    goto label_141f94da4
                case 7, 8, 0xb, 0xe, 0x13, 0x14, 0x16, 0x17, 0x18
                    return sub_14213f9e0(*(arg1 + 0x28))
                case 0xa, 0x1a
                    var_118.q = 0
                    var_110 = 0
                    var_108 = &data_142e259e0
                    int64_t var_100
                    __builtin_memset(&var_100, 0, 0x20)
                    sub_14215ddd0(rbx, &var_108, sub_140a1d9d0(rbx, &var_118, arg3))
                    result, arg3 = sub_141f7ba80(&var_118)
                case 0xc
                    int64_t var_78 = 0
                    int64_t var_70_1 = 0
                    result = sub_1409ac860(rbx, &var_78, arg3)
                case 0xd
                    int64_t var_68 = 0
                    int64_t var_60_1 = 0
                    result = sub_1409ac860(rbx, &var_68, arg3)
                case 0x11
                    uint64_t var_58 = 0
                    int64_t var_50_1 = 0
                    result, arg3 = sub_140a1d9d0(rbx, &var_58, arg3)
                    rcx_29 = var_58
                    goto label_141f94da4
                case 0x12
                    int64_t rax_41 = *rbx
                    var_118.d = 0
                    var_110 = 0
                    var_108 = 0
                    (*(rax_41 + 0x168))(rbx, &var_118)
                label_141f94aba:
                    result, arg3 = sub_140a1d9d0(rbx, &var_110, arg3)
                    rcx_29 = var_110
                    goto label_141f94da4
                case 0x1b
                    int64_t rax_42 = *rbx
                    var_128 = 0
                    result = (*(rax_42 + 0x168))(rbx, &var_128)
                case 0x1c
                    uint64_t var_48 = 0
                    int64_t var_40_1 = 0
                    result, arg3 = sub_140a1d9d0(rbx, &var_48, arg3)
                    rcx_29 = var_48
                    goto label_141f94da4
    
    if ((*(rbx + 0x29) & 1) != 0)
        goto label_141f94dcb
    
    result = (*(*rbx + 0x30))(rbx)

if ((*(rbx + 0x29) & 1) != 0)
label_141f94dcb:
    int64_t* rcx_57 = *(arg1 + 0x28)
    
    if (rcx_57 != 0)
        return sub_14213f9e0(rcx_57)

return result
