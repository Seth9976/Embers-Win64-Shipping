// 函数: sub_1422cccc0
// 地址: 0x1422cccc0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t result = *(arg1 + 0x30)

if (result != 0)
    int32_t i = 0
    
    if (result s> 0)
        int64_t rsi_1 = 0
        
        do
            int64_t* rcx_1 = *(arg1 + 0x28) + rsi_1
            
            if (rcx_1[2].d == 0 && ((*(rcx_1 + 0x2c) u>> 6).b & 1) == 0)
                int64_t* rcx_2 = *rcx_1
                void* r9_1 = sx.q(*(rcx_1 + 0x14)) + arg6
                
                if (not(test_bit(zx.q(rcx_2[8].d), 9)))
                    (*(*rcx_2 + 0xf0))(rcx_2, r9_1)
                else
                    memset(r9_1, 0, sx.q(*(rcx_2 + 0x3c) * rcx_2[7].d))
            
            i += 1
            rsi_1 += 0x30
        while (i s< *(arg1 + 0x30))
    
    void* r14_1 = arg5[0x16]
    char arg_8
    
    if (((*(*(arg4 + 0x28) + 0xa4) u>> 1).b & 1) == 0)
        sub_14084eee0(r14_1 + 0x30, 0)
        int512_t zmm0_1
        int512_t zmm1_2
        zmm0_1, zmm1_2 = sub_14084eee0(r14_1 + 0x80, 0)
        TEB* gsbase
        void* ThreadLocalStoragePointer = gsbase->ThreadLocalStoragePointer
        uint64_t rcx_19 = zx.q(data_14401b1a0)
        *(r14_1 + 0x29) = 1
        
        if (data_143f54410 s> *(0x14 + *(ThreadLocalStoragePointer + (rcx_19 << 3))))
            zmm0_1 = _Init_thread_header(&data_143f54410)
            
            if (data_143f54410 == 0xffffffff)
                void*** rax_27 = j_sub_140a82f30(0xc0)
                void*** rax_26
                
                if (rax_27 == 0)
                    rax_26 = nullptr
                else
                    rax_26 = sub_140bd5be0(rax_27, 0)
                
                data_143f54400 = rax_26
                data_143f54408 = 0
                atexit(sub_142d0b810)
                zmm0_1 = _Init_thread_footer(&data_143f54410)
        
        int32_t i_1 = 0
        
        if (*(arg1 + 0x30) s> 0)
            int64_t* r14_3 = nullptr
            
            do
                void* rax_17 = *(r14_3 + *(arg1 + 0x28))
                
                if (rax_17 != 0 && ((zx.q(*(*(rax_17 + 8) + 0x10)) u>> 0x11).b & 1) != 0)
                label_1422ccfae:
                    int64_t rax_23 = *(arg1 + 0x28)
                    int64_t r8_4 = arg5[0x16]
                    int64_t var_78
                    var_78.d = 0
                    arg_8 = 0
                    int64_t var_80
                    var_80.d = 0
                    int32_t var_90
                    var_90.q = arg6
                    result, zmm0_1 = sub_1422d1b10(arg1, arg5, r8_4, 
                        zx.d(*(r14_3 + rax_23 + 0x1c)), zmm0_1, zmm1_2, 
                        zx.d(*(r14_3 + rax_23 + 0x1e)), var_90, &arg_8, 0, 0, &data_143f543f0, 0)
                    
                    if ((*(arg5 + 0x29) & 1) != 0)
                        return result
                else if ((*(arg5 + 0x29) & 1) == 0)
                    int64_t rdx_5 = arg5[0x15]
                    
                    if (rdx_5 s< arg5[0x14])
                        char r8_3 = *(sx.q((rdx_5 s>> 3).d) + arg5[0x12])
                        arg5[0x15] = rdx_5 + 1
                        
                        if ((r8_3 & 1 << (rdx_5.b & 7)) != 0)
                            goto label_1422ccfae
                    else
                        sub_140b55370(arg5)
                
                i_1 += 1
                r14_3 = &r14_3[6]
            while (i_1 s< *(arg1 + 0x30))
        
        void* rbx_3 = arg5[0x16]
        
        if (*(rbx_3 + 0x38) - *(rbx_3 + 0x64) s> 0)
            sub_140780cc0(arg7, rbx_3 + 0x30)
            rbx_3 = arg5[0x16]
        
        sub_14084eee0(rbx_3 + 0x30, 0)
        result = sub_14084eee0(rbx_3 + 0x80, 0)
        *(rbx_3 + 0x29) = 0
    else
        char var_58 = 0
        sub_14084eee0(r14_1 + 0x30, 0)
        sub_14084eee0(r14_1 + 0x80, 0)
        *(r14_1 + 0x29) = 1
        void* r14_2 = *(arg4 + 0x28)
        
        if ((*(arg5 + 0x29) & 1) == 0)
            int64_t rax_7 = arg5[0x15]
            
            if (rax_7 s< arg5[0x14])
                arg5[0x15] = rax_7 + 1
            else
                sub_140b55370(arg5)
        
        void* rcx_9 = *(arg1 + 0x60)
        arg_8 = 0
        int64_t var_40
        int512_t zmm1_1 = sub_140d21e10(rcx_9, &var_40, 0)
        void* var_50
        sub_142168720(*(r14_2 + 0x68), &var_50, &var_40)
        sub_1422cd260(arg1, nullptr, var_50, arg5, zmm1_1, 0, *(arg1 + 0x40) - 1, 0, arg6.d, arg6, 
            nullptr, &arg_8, &var_58)
        int64_t* var_48
        
        if (var_48 != 0)
            var_48[1].d -= 1
            
            if (var_48[1].d == 1)
                (**var_48)(var_48)
                int32_t temp1_1 = *(var_48 + 0xc)
                *(var_48 + 0xc) -= 1
                
                if (temp1_1 == 1)
                    (*(*var_48 + 8))(var_48, 1)
        
        int64_t rcx_14 = var_40
        
        if (rcx_14 != 0)
            sub_140a74f90(rcx_14)
        
        void* rbx_2 = arg5[0x16]
        
        if (*(rbx_2 + 0x38) - *(rbx_2 + 0x64) s> 0)
            arg_8 = 1
            sub_140780cc0(arg7, rbx_2 + 0x30)
            rbx_2 = arg5[0x16]
        
        sub_14084eee0(rbx_2 + 0x30, 0)
        result = sub_14084eee0(rbx_2 + 0x80, 0)
        *(rbx_2 + 0x29) = 0

return result
