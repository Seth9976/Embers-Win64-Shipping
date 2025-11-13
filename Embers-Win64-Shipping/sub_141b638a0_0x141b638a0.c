// 函数: sub_141b638a0
// 地址: 0x141b638a0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

uint64_t result

if (*(arg2 + 0x48) != 0 || (*(arg2 + 0x80) & 2) != 0)
    result.b = 1
else
    result.b = 0

if (result.b != 0 || (*(arg2 + 0x80) & 1) != 0)
    uint64_t* r12_1 = nullptr
    uint64_t* var_58
    
    if (arg2 + 0x70 != &var_58)
        *(arg2 + 0x70) = 0
        int64_t* rbx_1 = *(arg2 + 0x78)
        
        if (rbx_1 != 0)
            *(arg2 + 0x78) = 0
            rbx_1[1].d -= 1
            
            if (rbx_1[1].d == 1)
                (**rbx_1)(rbx_1)
                int32_t temp1_1 = *(rbx_1 + 0xc)
                *(rbx_1 + 0xc) -= 1
                
                if (temp1_1 == 1)
                    (*(*rbx_1 + 8))(rbx_1, 1)
    
    bool rax_3 = sub_140b5b8a0(*(arg2 + 0x50), 0)
    void* rbx_2 = *(arg2 + 0x48)
    int32_t rcx_2
    rcx_2.b = rax_3 == 0
    int64_t rbp_1
    
    if ((*(arg2 + 0x54) != 0 | rcx_2.b) != 0 || rbx_2 == 0)
        rbp_1 = *(arg2 + 0x50)
    else
        rbp_1 = *(rbx_2 + 0x18)
    
    int64_t* var_50
    
    if (rbx_2 == 0)
        result = sub_141b5f6a0(arg1 + 0x98, &var_58, rbp_1)
        uint64_t* rdi_3 = var_58
        
        if (rdi_3 == 0)
            goto label_141b63cff
        
        result = *rdi_3
        
        if (result != 0)
            void* rcx_22 = *(result + 0x28)
            
            if (rcx_22 == 0)
                if (*(result + 0x20) != 0)
                    goto label_141b63cff
                
                goto label_141b63c9b
            
            if (*(rcx_22 + 8) == 1 || *(result + 0x20) == 0)
                goto label_141b63c9b
            
            goto label_141b63cff
        
    label_141b63c9b:
        void* rax_28 = rdi_3[1]
        int64_t* rcx_23 = rax_28 + 0x20
        
        if (rax_28 == 0)
            rcx_23 = nullptr
        
        sub_141997f50(rcx_23)
        sub_140d2a2a0(arg1 + 0x98, rbp_1)
        int64_t rbp_6 = sx.q(*(arg1 + 0x1f0))
        int32_t rax_29 = (rbp_6 + 1).d
        *(arg1 + 0x1f0) = rax_29
        
        if (rax_29 s> *(arg1 + 0x1f4))
            sub_1405a4f90(arg1 + 0x1e8)
        
        result = (rbp_6 << 4) + *(arg1 + 0x1e8)
        *result = rdi_3
        *(result + 8) = var_50
        
        if (var_50 != 0)
            var_50[1].d += 1
        label_141b63cff:
            
            if (var_50 != 0)
                var_50[1].d -= 1
                
                if (var_50[1].d == 1)
                    result = (**var_50)(var_50)
                    int32_t temp5_1 = *(var_50 + 0xc)
                    *(var_50 + 0xc) -= 1
                    
                    if (temp5_1 == 1)
                        return (*(*var_50 + 8))(var_50, 1)
    else
        int32_t rax_6 = *(arg1 + 0x140) - *(arg1 + 0x16c) - *(arg1 + 0x11c)
        result = zx.q(rax_6 + *(arg1 + 0xf0))
        
        if (rax_6 != neg.d(*(arg1 + 0xf0)))
            void* rax_7 = sub_1425b3bb0()
            void* rdx = *(rbx_2 + 0x10)
            int64_t rax_8 = sx.q(*(rax_7 + 0x38))
            void* const r8_2
            
            if (rax_8.d s<= *(rdx + 0x38))
                r8_2 = rbx_2
            
            if (rax_8.d s> *(rdx + 0x38) || *(*(rdx + 0x30) + (rax_8 << 3)) != rax_7 + 0x30)
                r8_2 = nullptr
            
            sub_141b602d0(arg1 + 0x98, &var_58, r8_2)
            uint64_t* rbp_2 = var_58
            
            if (rbp_2 == 0)
                void* rax_13 = sub_142543940()
                void* rdx_5 = *(rbx_2 + 0x10)
                int64_t rax_14 = sx.q(*(rax_13 + 0x38))
                
                if (rax_14.d s> *(rdx_5 + 0x38)
                        || *(*(rdx_5 + 0x30) + (rax_14 << 3)) != rax_13 + 0x30)
                    rbx_2 = nullptr
                
                void var_48
                sub_140d3a3a0(&var_48, rbx_2)
                uint64_t var_40_1 = *(arg2 + 8)
                int32_t var_38_1 = 0
                int64_t* rbx_4
                uint64_t* rbp_5
                
                if (*(arg1 + 0x140) == *(arg1 + 0x16c))
                label_141b63b57:
                    var_58.o = zx.o(0)
                    rbx_4 = var_50
                    rbp_5 = var_58
                else
                    int32_t rax_17 = sub_141b601a0(&var_48)
                    void* rcx_12 = *(arg1 + 0x178)
                    void* r8_4 = arg1 + 0x170
                    
                    if (rcx_12 != 0)
                        r8_4 = rcx_12
                    
                    int32_t rbx_3 = *(r8_4 + (((sx.q(*(arg1 + 0x180)) - 1) & sx.q(rax_17)) << 2))
                    
                    if (rbx_3 == 0xffffffff)
                        goto label_141b63b57
                    
                    int64_t rax_19 = *(arg1 + 0x138)
                    int64_t r15_1
                    
                    while (true)
                        r15_1 = sx.q(rbx_3)
                        int64_t rbp_4 = r15_1 * 6
                        int32_t* rdi_2 = rax_19 + (rbp_4 << 3)
                        int32_t rax_20
                        
                        if (sub_14077a170(rdi_2, &var_48).b == 0)
                            rax_20.b = 0
                        else
                            if (var_40_1.d.d f!= rdi_2[2] || var_40_1:4.d.d f!= rdi_2[3])
                                rax_20.b = 0
                            else
                                rax_20.b = 1
                            
                            if (rax_20.b == 0 || rdi_2[4] != var_38_1)
                                rax_20.b = 0
                            else
                                rax_20.b = 1
                        
                        if (rax_20.b != 0)
                            break
                        
                        rax_19 = *(arg1 + 0x138)
                        rbx_3 = *(rax_19 + (rbp_4 << 3) + 0x28)
                        
                        if (rbx_3 == 0xffffffff)
                            goto label_141b63b57
                    
                    if (rbx_3 == 0xffffffff)
                        goto label_141b63b57
                    
                    int64_t rbx_6 = r15_1 * 0x30
                    void* rbx_7 = rbx_6 + *(arg1 + 0x138)
                    
                    if (rbx_6 == neg.q(*(arg1 + 0x138)))
                        goto label_141b63b57
                    
                    rbp_5 = *(rbx_7 + 0x18)
                    rbx_4 = *(rbx_7 + 0x20)
                    
                    if (rbx_4 != 0)
                        rbx_4[1].d += 1
                    
                    r12_1 = rbp_5
                
                result = sub_141b644b0(arg1 + 0x138, &var_48)
                
                if (r12_1 == 0)
                    goto label_141b63bcd
                
                sub_141b65000(rbp_5)
                int64_t r14_2 = sx.q(*(arg1 + 0x200))
                int32_t rax_21 = (r14_2 + 1).d
                *(arg1 + 0x200) = rax_21
                
                if (rax_21 s> *(arg1 + 0x204))
                    sub_1405a4f90(arg1 + 0x1f8)
                
                result = (r14_2 << 4) + *(arg1 + 0x1f8)
                *result = rbp_5
                *(result + 8) = rbx_4
                
                if (rbx_4 != 0)
                    rbx_4[1].d += 1
                label_141b63bcd:
                    
                    if (rbx_4 != 0)
                        rbx_4[1].d -= 1
                        
                        if (rbx_4[1].d == 1)
                            result = (**rbx_4)(rbx_4)
                            int32_t temp9_1 = *(rbx_4 + 0xc)
                            *(rbx_4 + 0xc) -= 1
                            
                            if (temp9_1 == 1)
                                result = (*(*rbx_4 + 8))(rbx_4, 1)
                
                goto label_141b63bf9
            
            void* rdx_2 = rbp_2[1]
            
            if (rdx_2 != 0)
                int64_t arg_10
                sub_140d3a3a0(&arg_10, rdx_2)
                sub_141b64260(arg1 + 0xe8, arg_10)
            
            sub_141b65090(rbp_2)
            int64_t rdi_1 = sx.q(*(arg1 + 0x1e0))
            int32_t rax_10 = (rdi_1 + 1).d
            *(arg1 + 0x1e0) = rax_10
            
            if (rax_10 s> *(arg1 + 0x1e4))
                sub_1405a4f90(arg1 + 0x1d8)
            
            result = (rdi_1 << 4) + *(arg1 + 0x1d8)
            *result = rbp_2
            *(result + 8) = var_50
            
            if (var_50 != 0)
                var_50[1].d += 1
            label_141b63bf9:
                
                if (var_50 != 0)
                    var_50[1].d -= 1
                    
                    if (var_50[1].d == 1)
                        result = (**var_50)(var_50)
                        int32_t temp8_1 = *(var_50 + 0xc)
                        *(var_50 + 0xc) -= 1
                        
                        if (temp8_1 == 1)
                            return (*(*var_50 + 8))(var_50, 1)

return result
