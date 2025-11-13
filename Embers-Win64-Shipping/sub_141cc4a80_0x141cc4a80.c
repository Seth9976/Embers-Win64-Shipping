// 函数: sub_141cc4a80
// 地址: 0x141cc4a80
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* rsi = data_143f35848
char* rbx = arg4

if (rsi == 0)
    sub_141cc3750()
    rsi = data_143f35848

if (*(rsi + 0x181) == 0)
    (*(*arg2 + 0x140))(arg2, arg1)
    *rbx = 1
else
    uint16_t var_78 = 0xffff
    int64_t var_70
    
    if (arg3 == 0)
    label_141cc4e75:
        
        if ((arg2[5].b & 2) == 0)
            sub_141cc7040(arg2, &var_78, *(rsi + 0x2c), *(rsi + 0x28))
            uint32_t rcx_33 = zx.d(var_78)
            
            if (rcx_33 s< *(rsi + 0x1a0))
                void* rax_33 = *(*(rsi + 0x198) + zx.q(rcx_33.w) * 0x10)
                
                if (*(rax_33 + 0x10) s<= 0)
                    *arg1 = data_143f35860
                else
                    *arg1 = **(rax_33 + 8)
            else
                var_70 = 0
                rbx = arg4
                *arg1 = 0
            
            *rbx = 1
        else
            uint16_t rax_31 = sub_141cc2e50(rsi, arg1)
            int32_t r9 = *(rsi + 0x28)
            int32_t r8_5 = *(rsi + 0x2c)
            var_78 = rax_31
            sub_141cc7040(arg2, &var_78, r8_5, r9)
            *rbx = 1
    else
        void* rax_1 = sub_14254d5d0()
        void* rdx = *(arg3 + 0x10)
        int64_t rax_2 = sx.q(*(rax_1 + 0x38))
        
        if (rax_2.d s> *(rdx + 0x38) || *(*(rdx + 0x30) + (rax_2 << 3)) != rax_1 + 0x30)
            goto label_141cc4e75
        
        void* rax_4 = *(arg3 + 0x130)
        
        if (rax_4 == 0 || ((*(rax_4 + 0xa4) u>> 1).b & 1) == 0)
            goto label_141cc4e75
        
        var_70 = 0
        int128_t var_58 = zx.o(0)
        int32_t var_68_1 = 0
        sub_1405947f0(&var_70, 0x1c)
        int32_t rax_7 = var_68_1 + 0x1c
        var_68_1 = rax_7
        
        if (rax_7 s> 0)
            sub_140594770(&var_70)
        
        UnDecorator::getReferenceType(var_70, u"NetworkGameplayTagNodeIndex", 0x38)
        int128_t var_48
        int64_t* rax_8 = sub_142168720(arg3, &var_48, &var_70)
        int64_t* rdi_1
        void* r15_1
        
        if (&var_58 == rax_8)
            r15_1 = var_58.q
            rdi_1 = var_58:8.q
        else
            r15_1 = *rax_8
            *rax_8 = 0
            rdi_1 = rax_8[1]
            var_58.q = r15_1
            
            if (rdi_1 == 0)
                rdi_1 = var_58:8.q
            else
                rax_8[1] = 0
                var_58:8.q = rdi_1
        
        int64_t* var_40
        
        if (var_40 != 0)
            var_40[1].d -= 1
            
            if (var_40[1].d == 1)
                (**var_40)(var_40)
                int32_t temp1_1 = *(var_40 + 0xc)
                *(var_40 + 0xc) -= 1
                
                if (temp1_1 == 1)
                    (*(*var_40 + 8))(var_40, 1)
        
        int64_t rcx_7 = var_70
        
        if (rcx_7 != 0)
            sub_140a74f90(rcx_7)
        
        if ((arg2[5].b & 2) != 0)
            void* r14_4
            
            if (r15_1 != 0)
                r14_4 = arg3
            else
                int64_t* rax_11 = sub_141cc15e0(&var_48, rsi, u"NetworkGameplayTagNodeIndex")
                
                if (&var_58 != rax_11)
                    r15_1 = *rax_11
                    int64_t* r14_2 = rdi_1
                    *rax_11 = 0
                    int64_t* rcx_9 = rax_11[1]
                    var_58.q = r15_1
                    
                    if (rcx_9 != rdi_1)
                        rax_11[1] = 0
                        rdi_1 = rcx_9
                        var_58:8.q = rcx_9
                        
                        if (r14_2 != 0)
                            r14_2[1].d -= 1
                            
                            if (r14_2[1].d == 1)
                                (**r14_2)(r14_2)
                                int32_t temp7_1 = *(r14_2 + 0xc)
                                *(r14_2 + 0xc) -= 1
                                
                                if (temp7_1 == 1)
                                    (*(*r14_2 + 8))(r14_2, 1)
                
                if (var_40 != 0)
                    var_40[1].d -= 1
                    
                    if (var_40[1].d == 1)
                        (**var_40)(var_40)
                        int32_t temp5_1 = *(var_40 + 0xc)
                        *(var_40 + 0xc) -= 1
                        
                        if (temp5_1 == 1)
                            (*(*var_40 + 8))(var_40, 1)
                
                var_70 = 0
                int32_t var_68_2 = 0
                sub_1405947f0(&var_70, 0x1c)
                int32_t rax_16 = var_68_2 + 0x1c
                var_68_2 = rax_16
                
                if (rax_16 s> 0)
                    sub_140594770(&var_70)
                
                UnDecorator::getReferenceType(var_70, u"NetworkGameplayTagNodeIndex", 0x38)
                var_48 = var_58
                
                if (rdi_1 != 0)
                    rdi_1[1].d += 1
                
                r14_4 = arg3
                sub_14215f5f0(r14_4, &var_70, &var_48)
                int64_t rcx_18 = var_70
                
                if (rcx_18 != 0)
                    sub_140a74f90(rcx_18)
            
            uint16_t rax_17 = sub_141cc2e50(rsi, arg1)
            bool cond:1_1 = rax_17 == *(rsi + 0x34)
            var_78 = rax_17
            
            if (cond:1_1 || rax_17 == 0xffff)
                var_78 = 0xffff
            else
                sub_14217e090(r14_4, r15_1, zx.d(rax_17))
        
        uint32_t var_74 = zx.d(var_78)
        (*(*arg2 + 0x168))(arg2, &var_74)
        bool cond:0_1 = (arg2[5].b & 1) == 0
        uint16_t rcx_22 = var_74.w
        var_78 = rcx_22
        
        if (not(cond:0_1))
            if (rcx_22 == 0xffff || r15_1 == 0 || zx.d(rcx_22) s>= *(r15_1 + 0x20))
                var_70 = 0
                *arg1 = 0
            else
                *arg1 = *(*(r15_1 + 0x18) + zx.q(rcx_22) * 0x14 + 8)
                void* rcx_25 = data_143f35848
                
                if (rcx_25 == 0)
                    sub_141cc3750()
                    rcx_25 = data_143f35848
                
                sub_141cc6810(rcx_25, &var_70, *arg1, 0)
                int64_t rbx_1 = var_70
                int32_t rcx_26
                rcx_26.b = sub_140b5b8a0(rbx_1.d, 0) == 0
                rcx_26.b |= var_70:4.d != 0
                
                if (rcx_26.b == 0)
                    uint64_t rcx_27 = zx.q(var_78) * 5
                    int64_t rax_25 = *(r15_1 + 0x18)
                    
                    if (*(rax_25 + (rcx_27 << 2) + 0x12) == 0)
                        *(rax_25 + (rcx_27 << 2) + 0x12) = 1
                
                *arg1 = rbx_1
        
        *arg4 = 1
        
        if (rdi_1 != 0)
            rdi_1[1].d -= 1
            
            if (rdi_1[1].d == 1)
                (**rdi_1)(rdi_1)
                int32_t temp4_1 = *(rdi_1 + 0xc)
                *(rdi_1 + 0xc) -= 1
                
                if (temp4_1 == 1)
                    (*(*rdi_1 + 8))(rdi_1, 1)
                    int64_t rax_30
                    rax_30.b = 1
                    return rax_30

char* rax_28
rax_28.b = 1
return rax_28
