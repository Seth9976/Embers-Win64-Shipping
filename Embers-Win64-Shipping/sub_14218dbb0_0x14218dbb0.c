// 函数: sub_14218dbb0
// 地址: 0x14218dbb0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void** rax

if (*(arg1 + 0x118) s> 0)
    int512_t zmm1_1
    rax, zmm1_1 = sub_1421b3590(arg1, arg2)
    
    if (rax.b != 0)
        rax = *(arg1 + 0x28)
        
        if (rax != 0 && (*(rax + 0x2c) & 1) != 0)
            *(arg2 + 8) = 3
            int64_t* rbx = *(arg1 + 0x1a0)
            char rax_2
            
            if (rbx != 0)
                rax_2 = (*(*rbx + 0x2d8))(rbx, 2)
            
            if (rbx == 0 || rax_2 == 0)
                int64_t* rax_3
                rax_3, zmm1_1 = sub_14210f630(0)
                rbx = rax_3
            
            *(arg1 + 0x1a0) = rbx
            *(arg2 + 0x60) = rbx
            *(arg2 + 0xb0) = 0
            sub_14218bc90(arg1)
            int32_t i_2 = 0
            *(arg2 + 0xf0) = *(*(arg1 + 0x1d0) + 0x50)
            int32_t rdx = *(arg1 + 0x308)
            *(arg2 + 0xe8) = 0
            
            if (*(arg2 + 0xec) != rdx)
                sub_1405dadb0(arg2 + 0xe0, rdx)
            
            sub_142186ae0(arg2 + 0xe0, *(arg1 + 0x308))
            int32_t i = 0
            
            if (*(arg1 + 0x308) s> 0)
                int64_t rdx_2 = 0
                
                do
                    rdx_2 += 4
                    i += 1
                    *(rdx_2 + *(arg2 + 0xe0) - 4) = *(rdx_2 + *(arg1 + 0x300) - 4)
                while (i s< *(arg1 + 0x308))
            
            int64_t* rcx_6 = *(arg1 + 0x1d0)
            int32_t arg_8 = 0
            (*(*rcx_6 + 0x390))(rcx_6, arg1, 0, arg1 + 0x30, arg2 + 0xf4, arg2 + 0xf8, arg2 + 0xfc, 
                arg2 + 0x100, arg2 + 0x104, arg2 + 0x108, &arg_8, arg2 + 0x10c, arg2 + 0x110)
            *(arg2 + 0xd0) = *(arg1 + 0x2f8)
            int32_t rax_8
            rax_8.b = *(arg1 + 0x1d8) != 0
            *(arg2 + 0x117) = rax_8.b
            rax_8.b = *(arg1 + 0x1e0) != 0
            *(arg2 + 0x118) = rax_8.b
            void* rax_9 = *(arg1 + 0x1e8)
            char rcx_7
            
            if (rax_9 == 0)
                *(arg2 + 0x114) = 0
                rcx_7 = 0
            else
                char rax_10 = *(rax_9 + 0x30) & 1
                *(arg2 + 0x115) = 0
                *(arg2 + 0x114) = rax_10
                rcx_7 = *(*(arg1 + 0x1e8) + 0x108) & 1
            
            *(arg2 + 0x116) = rcx_7
            int32_t r8_1 = 1
            int32_t rdx_5 = 1
            int32_t rcx_8 = *(*(arg1 + 0x1d0) + 0x3c)
            int32_t rax_13 = 1
            
            if (rcx_8 s> 0)
                rdx_5 = rcx_8
            
            if (rdx_5 s>= 1)
                rax_13 = rdx_5
            
            *(arg2 + 0x11c) = rax_13
            *(arg2 + 0x148) = *(*(arg1 + 0x1d0) + 0x34)
            *(arg2 + 0x14c) = *(*(arg1 + 0x1d0) + 0x38)
            *(arg2 + 0x150) = *(*(arg1 + 0x1d0) + 0x90)
            *(arg2 + 0x154) = *(*(arg1 + 0x1d0) + 0x48)
            *(arg2 + 0x120) = 1
            *(arg2 + 0x128) = 0x3f800000
            *(arg2 + 0x12c) = 0x3f800000
            void* rax_18 = *(arg1 + 0x1e8)
            int64_t var_48
            
            if (rax_18 != 0 && (*(rax_18 + 0x30) & 1) != 0)
                int32_t rax_19 = *(rax_18 + 0x34)
                int32_t rcx_13 = 1
                
                if (rax_19 s> 0)
                    rcx_13 = rax_19
                
                int32_t rax_20 = 1
                
                if (rcx_13 s>= 1)
                    rax_20 = rcx_13
                
                *(arg2 + 0x120) = rax_20
                int32_t rcx_14 = *(*(arg1 + 0x1e8) + 0x150)
                
                if (rcx_14 s> 0)
                    r8_1 = rcx_14
                
                *(arg2 + 0x124) = r8_1
                zmm1_1.o = *(arg1 + 0x12c)
                int32_t zmm0_1
                int512_t zmm1_2
                zmm0_1, zmm1_2 = sub_141fe5610(*(arg1 + 0x1e8) + 0x120, zmm1_1, 0, nullptr)
                *(arg2 + 0x12c) = zmm0_1
                zmm1_2.o = *(arg1 + 0x12c)
                int32_t zmm0_2
                int128_t zmm1_3
                zmm0_2, zmm1_3 =
                    sub_141fe5610(*(arg1 + 0x1e8) + 0x88, zmm1_2, *(arg1 + 0x18), nullptr)
                *(arg2 + 0x128) = zmm0_2
                int64_t var_d0_1 = 0
                int64_t* rax_22 = sub_141fe56b0(*(arg1 + 0x1e8) + 0xc0, &var_48, *(arg1 + 0x12c), 
                    zmm1_3, 0, nullptr)
                *(arg2 + 0x130) = *rax_22
                *(arg2 + 0x138) = rax_22[1].d
                *(arg2 + 0x13c) = *(*(arg1 + 0x1e8) + 0x114)
                *(arg2 + 0x140) = *(*(arg1 + 0x1e8) + 0x10c)
                *(arg2 + 0x119) = *(*(arg1 + 0x1e8) + 0x154) & 1
                *(arg2 + 0x144) = *(*(arg1 + 0x1e8) + 0x118)
            
            *(arg2 + 0xd4) = 0
            int32_t i_1 = 0
            int32_t rcx_25 = 0
            
            if (*(arg1 + 0x118) s> 0)
                int64_t rbx_2 = 0
                
                do
                    int64_t* rcx_28 = *(arg1 + 0x1d0)
                    int64_t r8_4 = sx.q(zx.d(*(*(arg1 + 0xf8) + (rbx_2 << 1))) * *(arg1 + 0x114))
                        + *(arg1 + 0xf0)
                    int32_t arg_18 = *(arg1 + 0x30)
                    void* arg_20 = nullptr
                    int64_t var_88
                    __builtin_memset(&var_88, 0, 0x48)
                    int64_t var_80
                    int64_t var_78
                    int64_t var_70
                    int64_t var_68
                    int64_t var_60
                    int64_t var_58
                    int64_t var_50
                    (*(*rcx_28 + 0x388))(rcx_28, arg1, r8_4, &arg_18, &arg_20, &var_48, &var_50, 
                        &var_58, &var_60, &var_68, &var_70, &var_78, &var_80, &var_88, var_88, 
                        var_80, var_78, var_70, var_68, var_60, var_58, var_50, var_48)
                    void* rdx_8 = arg_20
                    int32_t rcx_29 = *(rdx_8 + 0x58)
                    
                    if (rcx_29 s> 0)
                        int32_t rax_31 = *(arg2 + 0xd4)
                        
                        if (rax_31 == 0)
                            rax_31 = 2
                            *(arg2 + 0xd4) = 2
                            rcx_29 = *(rdx_8 + 0x58)
                        
                        int32_t rcx_32 = (rcx_29 + 4) * *(arg2 + 0x11c) + rax_31
                        int32_t rax_32 = rcx_32 - 4
                        
                        if (rbx_2 s> 0)
                            rax_32 = rcx_32
                        
                        *(arg2 + 0xd4) = rax_32
                    
                    i_1 += 1
                    rbx_2 += 1
                while (i_1 s< *(arg1 + 0x118))
                
                rcx_25 = *(arg2 + 0xd4)
            
            int32_t rax_33 = 4
            
            if (rcx_25 s<= 0x3a98)
                rax_33 = 2
            
            *(arg2 + 0xd8) = rax_33
            int64_t rbx_3 = *(arg2 + 0x28)
            
            if (*(arg2 + 0xc) s> 0)
                int64_t rdx_9 = sx.q(*(arg1 + 0x114))
                void* rdi_1 = nullptr
                uint32_t count = rdx_9.d
                
                do
                    memcpy(rbx_3, sx.q(zx.d(*(rdi_1 + *(arg1 + 0xf8))) * rdx_9.d) + *(arg1 + 0xf0), 
                        count)
                    rdx_9 = sx.q(*(arg1 + 0x114))
                    rdi_1 += 2
                    rbx_3 += rdx_9
                    i_2 += 1
                    count = rdx_9.d
                while (i_2 s< *(arg2 + 0xc))
            
            *(arg2 + 0x158) = *(*(arg1 + 0x1d0) + 0xf8) & 1
            *(arg2 + 0x159) = (*(*(arg1 + 0x1d0) + 0xf8) u>> 1).b & 1
            *(arg2 + 0x15a) = (*(*(arg1 + 0x1d0) + 0xf8) u>> 2).b & 1
            void* rax_38
            rax_38.b = 1
            *(arg2 + 0x15b) = (*(*(arg1 + 0x1d0) + 0xf8) u>> 3).b & 1
            return rax_38

rax.b = 0
return rax
