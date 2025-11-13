// 函数: sub_140cd0ad0
// 地址: 0x140cd0ad0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t rbx = sx.q(arg2)
int64_t var_108 = 0
int32_t* r14_1 = rbx * 0x38 + *(arg1 + 8)
int64_t var_100 = 0
sub_140cd0eb0(arg1, rbx.d, arg3, arg4)
int32_t r15 = 1

if (*(r14_1 + 0x28) != 0 && r14_1[0xc] == 0xffffffff && *(r14_1 + 0x20) == 0 && r14_1[2] != 0)
    int32_t rcx
    rcx.b = sub_140b5b8a0(*r14_1, 0x67) == 0
    
    if ((r14_1[1] != 0 | rcx.b) != 0)
        void* rax_2 = sub_140baa940()
        uint128_t zmm0 = *r14_1
        uint128_t var_e0_1 = zmm0
        uint128_t var_80_1 = zmm0
        zmm0 = *(r14_1 + 0x10)
        int96_t var_70_1 = zmm0.12
        uint128_t var_c0_1 = *(r14_1 + 0x20)
        uint64_t var_e8_1 = *(r14_1 + 0x30)
        int32_t arg_24 = 0
        void arg_8
        *(r14_1 + 0x14) = (*sub_140b5e500(&arg_8, 0x67)).q
        int64_t var_f8
        int512_t zmm0_1
        int512_t zmm1
        zmm0_1, zmm1 = sub_140b63580(&data_143de5770, &var_f8)
        *(r14_1 + 0xc) = var_f8
        double zmm2_1[0x2] = sub_140cd0eb0(arg1, rbx.d, zmm0_1, zmm1)
        int64_t rdi_1 = var_70_1:4.q
        
        if (r14_1[0xc] != 0xffffffff)
            void var_b0
            int64_t* rax_7 = sub_140ac6680(_vfprintf_p_l(&var_b0, u" [redirection]", u"LinkerLoad"))
            int32_t r8_1 = rax_7[1].d
            int32_t r8_2
            
            if (r8_1 == 0)
                r8_2 = 0
            else
                r8_2 = r8_1 - 1
            
            sub_140a20ba0(&var_108, *rax_7, r8_2)
            int64_t* var_a8
            
            if (var_a8 != 0)
                var_a8[1].d -= 1
                
                if (var_a8[1].d == 1)
                    (**var_a8)(var_a8)
                    int32_t rax_10 = *(var_a8 + 0xc)
                    *(var_a8 + 0xc) -= 1
                    
                    if (rax_10 == 1)
                        (*(*var_a8 + 8))(var_a8, 1)
            
            uint64_t rax_12 = sub_140cb4600(*(r14_1 + 0x28), r14_1[0xc], zmm2_1)
            
            if (rax_12 == 0)
                r15 = 0
            else
                void* rax_13 = sub_140cdddf0()
                void* rdx_5 = *(rax_12 + 0x10)
                int64_t r8_3 = sx.q(*(rax_13 + 0x38))
                
                if (r8_3.d s> *(rdx_5 + 0x38) || *(*(rdx_5 + 0x30) + (r8_3 << 3)) != rax_13 + 0x30)
                    r15 = 0
                else
                    *(rax_12 + 8) |= 0x400
                    sub_140cc45a0(arg1 + 0x200, rax_12)
                    void* rcx_12 = *(rax_12 + 0x28)
                    
                    if (rcx_12 == 0)
                        r15 = 0
                    else
                        void* i_1 = *(rcx_12 + 0x10)
                        void* i = i_1
                        
                        if (((*(rcx_12 + 8) u>> 4).b & 1) != 0)
                        label_140cd0da6:
                            *(r14_1 + 0x20) = rcx_12
                            r15 = 2
                            *(rax_2 + 4) += 1
                            void* var_f0 = arg1
                            void* rax_23 = sub_140cdbb20()
                            EnterCriticalSection(rax_23 + 0xd0)
                            void arg_18
                            sub_140ca9be0(rax_23 + 0x80, &arg_18, &var_f0, nullptr)
                            
                            if (rax_23 != -0xd0)
                                LeaveCriticalSection(rax_23 + 0xd0)
                        else
                            for (; i != 0; i = *(i + 0x40))
                                if (*(i + 0x18) == rdi_1)
                                    goto label_140cd0da6
                            
                            r15 = 0
                            
                            if (i_1 == sub_140cdddf0())
                                void var_98
                                int64_t* rax_19 = sub_140ac6680(
                                    _vfprintf_p_l(&var_98,  [circular redirection]", LinkerLoad"))
                                int32_t rcx_15 = rax_19[1].d
                                int32_t r8_4 = rcx_15 - 1
                                
                                if (rcx_15 == 0)
                                    r8_4 = 0
                                
                                sub_140a20ba0(&var_108, *rax_19, r8_4)
                                int64_t* var_90
                                
                                if (var_90 != 0)
                                    var_90[1].d -= 1
                                    
                                    if (var_90[1].d == 1)
                                        (**var_90)(var_90)
                                        int32_t rsi_1 = *(var_90 + 0xc)
                                        *(var_90 + 0xc) -= 1
                                        
                                        if (rsi_1 == 1)
                                            (*(*var_90 + 8))(var_90, zx.q(rsi_1))
        else
            r15 = 0
        
        *(r14_1 + 0x14) = rdi_1
        *(r14_1 + 0xc) = var_80_1:0xc.q
        
        if (r15 == 0)
            *r14_1 = var_e0_1
            *(r14_1 + 0x10) = zmm0
            *(r14_1 + 0x20) = var_c0_1
            *(r14_1 + 0x30) = var_e8_1
        else
            int32_t rax_25 = sub_140d3cbe0(*(r14_1 + 0x20))
            void* rcx_23 = *(r14_1 + 0x20)
            r14_1[0xc] = rax_25
            *(r14_1 + 0x28) = sub_140d3cb50(rcx_23)

int64_t rcx_24 = var_108

if (rcx_24 != 0)
    sub_140a74f90(rcx_24)

return zx.q(r15)
