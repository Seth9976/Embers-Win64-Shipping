// 函数: sub_14265a960
// 地址: 0x14265a960
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t arg_8 = 0

if ((arg1[8].b & 2) == 0 || arg4 == 0)
label_14265aa2d:
    int64_t* var_c0
    int128_t var_a0
    int128_t* rcx_3
    int32_t rsi_1
    int64_t r14_1
    
    if ((arg1[8].b & 1) == 0)
        void* const rbx_2 = arg1[2]
        void* const var_48_1 = rbx_2
        
        if (rbx_2 == 0)
            rbx_2 = nullptr
        else
            void* rax_6 = sub_14269cf80()
            
            if (rax_6 == 0)
                rbx_2 = nullptr
            else
                int64_t rax_7 = sx.q(*(rax_6 + 0x38))
                
                if (rax_7.d s> *(rbx_2 + 0x38) || *(*(rbx_2 + 0x30) + (rax_7 << 3)) != rax_6 + 0x30)
                    rbx_2 = nullptr
        
        sub_1405ba560(arg3 + 0x348, &arg_8, rbx_2)
        int64_t rax_9 = sx.q(arg_8)
        int64_t rcx_7
        void* rcx_8
        
        if (rax_9.d != 0xffffffff)
            rcx_7 = rax_9 << 5
            rcx_8 = rcx_7 + *(arg3 + 0x348)
        
        int128_t var_c8
        
        if (rax_9.d == 0xffffffff || rcx_7 == neg.q(*(arg3 + 0x348)))
            r14_1 = 0
            var_c8 = zx.o(0)
        else
            int64_t* rax_10 = *(rcx_8 + 0x10)
            r14_1 = *(rcx_8 + 8)
            var_c8.q = r14_1
            var_c0 = rax_10
            
            if (rax_10 != 0)
                rax_10[1].d += 1
        
        rcx_3 = &var_c8
        rsi_1 = 2
    else
        rcx_3 = &var_a0
        var_a0 = zx.o(0)
        rsi_1 = 1
        r14_1 = 0
    
    void* var_d0 = *(rcx_3 + 8)
    *(rcx_3 + 8) = 0
    int64_t var_d8_1 = r14_1
    *rcx_3 = 0
    
    if ((rsi_1.b & 2) != 0)
        rsi_1 &= 0xfffffffd
        
        if (var_c0 != 0)
            var_c0[1].d -= 1
            
            if (var_c0[1].d == 1)
                (**var_c0)(var_c0)
                int32_t rax_14 = *(var_c0 + 0xc)
                *(var_c0 + 0xc) -= 1
                
                if (rax_14 == 1)
                    (*(*var_c0 + 8))(var_c0, 1)
    
    if ((rsi_1.b & 1) != 0)
        void* rcx_12 = var_a0:8.q
        
        if (rcx_12 != 0)
            int32_t rax_16 = *(rcx_12 + 8)
            *(rcx_12 + 8) -= 1
            
            if (rax_16 == 1)
                int64_t* rbx_4 = var_a0:8.q
                (**rbx_4)(rbx_4)
                int32_t rax_18 = *(rbx_4 + 0xc)
                *(rbx_4 + 0xc) -= 1
                
                if (rax_18 == 1)
                    int64_t* rcx_14 = var_a0:8.q
                    (*(*rcx_14 + 8))(rcx_14, 1)
    
    if (r14_1 == 0)
        int64_t* rbx_5 = *(arg3 + 0x340)
        
        if (rbx_5 != 0)
            rbx_5[1].d += 1
        
        int64_t var_78
        sub_141deb5f0(*(arg3 + 0x338), &var_78)
        
        if (rbx_5 != 0)
            rbx_5[1].d -= 1
            
            if (rbx_5[1].d == 1)
                (**rbx_5)(rbx_5)
                int32_t rax_22 = *(rbx_5 + 0xc)
                *(rbx_5 + 0xc) -= 1
                
                if (rax_22 == 1)
                    (*(*rbx_5 + 8))(rbx_5, 1)
        
        (*(*arg1 + 0x260))(arg1, arg3, arg4, var_78, var_d8_1)
        uint128_t zmm0_1 = var_78.o
        uint128_t var_b8 = zmm0_1
        void* rax_25 = _mm_bsrli_si128(zmm0_1, 8).q
        
        if (rax_25 != 0)
            *(rax_25 + 8) += 1
        
        var_d8_1 = var_b8.q
        var_b8.q = 0
        sub_1405aeff0(&var_d0, &var_b8:8)
        void* rcx_20 = var_b8:8.q
        
        if (rcx_20 != 0)
            int32_t rax_27 = *(rcx_20 + 8)
            *(rcx_20 + 8) -= 1
            
            if (rax_27 == 1)
                int64_t* rbx_6 = var_b8:8.q
                (**rbx_6)(rbx_6)
                int32_t rax_29 = *(rbx_6 + 0xc)
                *(rbx_6 + 0xc) -= 1
                
                if (rax_29 == 1)
                    int64_t* rcx_22 = var_b8:8.q
                    (*(*rcx_22 + 8))(rcx_22, 1)
        
        if ((arg1[8].b & 1) == 0)
            zmm0_1 = var_d8_1.o
            uint128_t var_58 = zmm0_1
            void* rax_31 = _mm_bsrli_si128(zmm0_1, 8).q
            var_d0 = rax_31
            
            if (rax_31 != 0)
                *(rax_31 + 8) += 1
            
            void* const rbx_7 = arg1[2]
            void* const var_40_1 = rbx_7
            
            if (rbx_7 == 0)
                rbx_7 = nullptr
            else
                void* rax_32 = sub_14269cf80()
                
                if (rax_32 == 0)
                    rbx_7 = nullptr
                else
                    int64_t rax_33 = sx.q(*(rax_32 + 0x38))
                    
                    if (rax_33.d s> *(rbx_7 + 0x38)
                            || *(*(rbx_7 + 0x30) + (rax_33 << 3)) != rax_32 + 0x30)
                        rbx_7 = nullptr
            
            void* const var_88 = rbx_7
            void** var_68 = &var_88
            uint128_t* var_60_1 = &var_58
            void var_90
            sub_14263f830(arg3 + 0x348, &var_90, &var_68, nullptr)
            int64_t* rbx_8 = var_58:8.q
            
            if (rbx_8 != 0)
                rbx_8[1].d -= 1
                
                if (rbx_8[1].d == 1)
                    (**rbx_8)(rbx_8)
                    int32_t rax_37 = *(rbx_8 + 0xc)
                    *(rbx_8 + 0xc) -= 1
                    
                    if (rax_37 == 1)
                        (*(*rbx_8 + 8))(rbx_8, 1)
        
        int64_t* var_70
        
        if (var_70 != 0)
            var_70[1].d -= 1
            
            if (var_70[1].d == 1)
                (**var_70)(var_70)
                int32_t rdi_1 = *(var_70 + 0xc)
                *(var_70 + 0xc) -= 1
                
                if (rdi_1 == 1)
                    (*(*var_70 + 8))(var_70, zx.q(rdi_1))
    
    *arg2 = var_d8_1
    arg2[1] = var_d0
else
    int64_t* var_a8
    (*(*arg1 + 0x268))(arg1, &var_a8, arg4)
    
    if (var_a8 == 0)
        goto label_14265aa2d
    
    void* rax_2 = sub_14269cf80()
    
    if (rax_2 == 0)
        goto label_14265aa2d
    
    int64_t* rbx_1 = var_a8
    int64_t rax_3 = sx.q(*(rax_2 + 0x38))
    
    if (rax_3.d s> rbx_1[7].d || *(rbx_1[6] + (rax_3 << 3)) != rax_2 + 0x30 || rbx_1 == 0)
        goto label_14265aa2d
    
    void* rcx_1 = rbx_1[0x23]
    
    if (rcx_1 == 0)
        (*(*rbx_1 + 0x390))(rbx_1)
        rcx_1 = rbx_1[0x23]
    
    if ((*(rcx_1 + 0x40) & 2) != 0)
        goto label_14265aa2d
    
    sub_14265a960(rcx_1, arg2, arg3, arg4)

return arg2
