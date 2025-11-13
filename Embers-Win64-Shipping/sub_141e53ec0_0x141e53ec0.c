// 函数: sub_141e53ec0
// 地址: 0x141e53ec0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t i = *arg2
void* r14 = nullptr
int64_t arg_10 = 0

if (i == 0)
    i.b = 0
else
    int32_t rcx
    rcx.b = sub_140b5b8a0(arg2[1].d, 0).b == 0
    i.b = *(arg2 + 0xc) != 0
    i.b |= rcx.b
    
    if (i.b == 0)
        i.b = 0
    else
        i.b = 1

if (i.b == 0)
    i.b = 0
else
    if (*arg3 != 0)
        i.b = arg3[2].d s<= 1
    
    if (*arg3 != 0 && i.b == 0)
        i.b = 0
    else
        int64_t rbx_1 = *arg2
        int32_t rax = *(arg1 + 0x3e0)
        int64_t var_a8 = rbx_1
        int64_t* var_a0
        uint128_t var_78
        
        if (rax == *(arg1 + 0x40c))
        label_141e53fc5:
            int64_t* rax_5 = j_sub_140a82f30(0xe8)
            int64_t* rbx_2 = rax_5
            
            if (rax_5 == 0)
                rbx_2 = r14
            else
                sub_141e4faa0(rax_5)
                rbx_2[0x11] = r14
                void* rcx_4 = &rbx_2[0x13]
                rbx_2[0x12] = 0
                *(rcx_4 + 0x10) = r14
                *(rcx_4 + 0x18) = r14.d
                *(rcx_4 + 0x1c) = 0x80
                void* rax_6 = *(rcx_4 + 0x10)
                
                if (rax_6 != 0)
                    rcx_4 = rax_6
                
                *rcx_4 = 0
                *(rcx_4 + 8) = 0
                rbx_2[0x17].d = 0xffffffff
                *(rbx_2 + 0xbc) = r14.d
                rbx_2[0x19] = r14
                rbx_2[0x1a].d = r14.d
                rbx_2[0x1b] = r14
                rbx_2[0x1c] = 0
            
            void* rax_7 = j_sub_140a82f30(0x18)
            
            if (rax_7 == 0)
                rax_7 = r14
            else
                *(rax_7 + 8) = 1
                *rax_7 = &data_14324d050
                *(rax_7 + 0xc) = 1
                *(rax_7 + 0x10) = rbx_2
            
            *rbx_2 = var_a8
            rbx_2[0x10].b = 1
            uint128_t zmm0_1 = rbx_2.o
            var_78 = zmm0_1
            void* rax_10 = _mm_bsrli_si128(zmm0_1, 8).q
            
            if (rax_10 != 0)
                *(rax_10 + 8) += 1
            
            var_a0 = &var_a8
            uint128_t* var_98_1 = &var_78
            sub_141e4ca70(arg1 + 0x3d8, &arg_10, &var_a0, nullptr)
            int64_t* rbx_3 = var_78:8.q
            r14 = *(arg1 + 0x3d8) + (sx.q(arg_10.d) << 5) + 8
            
            if (rbx_3 != 0)
                rbx_3[1].d -= 1
                
                if (rbx_3[1].d == 1)
                    (**rbx_3)(rbx_3)
                    int32_t temp2_1 = *(rbx_3 + 0xc)
                    *(rbx_3 + 0xc) -= 1
                    
                    if (temp2_1 == 1)
                        (*(*rbx_3 + 8))(rbx_3, 1)
            
            if (rax_7 != 0)
                int32_t temp1_1 = *(rax_7 + 8)
                *(rax_7 + 8) -= 1
                
                if (temp1_1 == 1)
                    (**rax_7)(rax_7)
                    int32_t temp3_1 = *(rax_7 + 0xc)
                    *(rax_7 + 0xc) -= 1
                    
                    if (temp3_1 == 1)
                        (*(*rax_7 + 8))(rax_7, 1)
        else
            arg_10 = rbx_1
            int32_t rax_2 = sub_140b5ead0(rbx_1.d) + arg_10:4.d
            void* r8 = arg1 + 0x410
            void* rcx_2 = *(r8 + 8)
            
            if (rcx_2 != 0)
                r8 = rcx_2
            
            int32_t rax_4 = *(r8 + (((sx.q(*(arg1 + 0x420)) - 1) & sx.q(rax_2)) << 2))
            
            if (rax_4 == 0xffffffff)
                goto label_141e53fc5
            
            int64_t* rdx_5
            
            while (true)
                rdx_5 = (sx.q(rax_4) << 5) + *(arg1 + 0x3d8)
                
                if (*rdx_5 == rbx_1)
                    break
                
                rax_4 = rdx_5[3].d
                
                if (rax_4 == 0xffffffff)
                    goto label_141e53fc5
            
            if (rax_4 == 0xffffffff || rdx_5 == 0)
                goto label_141e53fc5
            
            r14 = &rdx_5[1]
            
            if (r14 == 0)
                goto label_141e53fc5
        
        i = *r14
        
        if (*(i + 0x80) == 0)
            i.b = 0
        else
            sub_141e5d130(i + 0x88, &arg_10, arg2[1])
            int64_t rax_18 = sx.q(arg_10.d)
            int64_t rax_20
            
            if (rax_18.d != 0xffffffff)
                rax_20 = rax_18 * 0x90
            
            void* r14_2
            
            if (rax_18.d == 0xffffffff || rax_20 == neg.q(*(i + 0x88)))
                r14_2 = nullptr
            else
                r14_2 = rax_20 + *(i + 0x88) + 8
            
            int64_t rax_22 = arg2[1]
            arg_10 = rax_22
            void* rax_25 = sub_141e4d120(i + 0x88, sub_140b5ead0(rax_22.d) + arg_10:4.d, &arg2[1])
            
            if (r14_2 != 0)
                sub_140d16af0(r14_2 + 0x18, arg3)
            
            int64_t rcx_15 = *arg3
            int32_t var_68 = 0xffffffff
            int64_t var_64_1 = 0
            int64_t var_50
            sub_140596d10(&var_50, &arg3[1])
            *(rax_25 + 8) = var_68.q
            *(rax_25 + 0x10) = var_64_1:4.d
            *(rax_25 + 0x18) = rcx_15
            sub_140597df0(rax_25 + 0x20, &var_50)
            int64_t rcx_18 = var_50
            
            if (rcx_18 != 0)
                sub_140a74f90(rcx_18)
            
            if (*(arg1 + 0x2d6) != 0)
                int64_t rbx_7 = *arg3
                
                if (rbx_7 != 0)
                    sub_140a696e0(arg1 + 0x28, &var_78)
                    int64_t* rdi_2 = var_78:8.q
                    *rdi_2 = rbx_7
                    *(rdi_2 + 8) = *arg2
                    rdi_2[3].d = 0xffffffff
                    sub_140e0e970(arg1 + 0x28, &arg_10, 
                        (rbx_7 u>> 0x20).d + sub_140b5ead0(rbx_7.d), rdi_2, var_78.d, nullptr)
            
            if (r14_2 != 0)
                sub_141e690b0(arg1 + 0x118, arg2)
            
            int64_t* rax_32 = sub_141e4d070(arg1 + 0x118, sub_140cde1f0(arg2), arg2)
            int64_t* rsi_1 = rax_32
            var_a0 = rax_32
            void* r14_3 = *arg4
            i = r14_3 + sx.q(arg4[1].d) * 0x28
            
            if (r14_3 != i)
                int64_t* r14_4 = r14_3 + 0x10
                
                do
                    int32_t j_1 = r14_4[2].d
                    void* r15_1 = r14_4[1]
                    int64_t var_58_2 = *r14_4
                    var_50 = 0
                    int32_t j_2 = j_1
                    var_68.o = *(r14_4 - 0x10)
                    
                    if (j_1 != 0)
                        sub_140808f70(&var_50, j_1, 0)
                        int64_t* rbx_9 = r15_1 + 8
                        void* rsi_3 = var_50 - r15_1
                        int32_t j
                        
                        do
                            *(rsi_3 + rbx_9 - 8) = rbx_9[-1]
                            sub_140596d10(rbx_9 + rsi_3, rbx_9)
                            rbx_9 = &rbx_9[3]
                            j = j_1
                            j_1 -= 1
                        while (j != 1)
                        rsi_1 = var_a0
                    else
                        int32_t j_3 = j_1
                    
                    var_68.q = *arg2
                    var_64_1 = arg2[1]
                    sub_140783a30(rsi_1, &var_78)
                    int64_t* rdi_3 = var_78:8.q
                    *rdi_3 = *r14_4
                    sub_141e4f110(&rdi_3[1], &var_68)
                    rdi_3[6].d = 0xffffffff
                    int64_t rbx_10 = *rdi_3
                    sub_141e5aff0(rsi_1, &arg_10, (rbx_10 u>> 0x20).d + sub_140b5ead0(rbx_10.d), 
                        rdi_3, var_78.d, nullptr)
                    sub_1408464b0(&var_50)
                    r14_4 = &r14_4[5]
                while (&r14_4[-2] != i)
            
            i.b = 1

return i
