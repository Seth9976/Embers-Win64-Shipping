// 函数: sub_142b7e370
// 地址: 0x142b7e370
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t var_70 = -2
void var_b8
int64_t rax_1 = __security_cookie ^ &var_b8
uint64_t rdi = zx.q(arg2)

if (arg2.b u>= 0xc0)
    int32_t rax_6 = rdi.d & 0xf
    char var_98
    uint64_t i_3
    void* var_78
    int64_t* rcx_13
    
    if (rax_6 == 5)
        uint64_t i_4 = *(*arg1 + 0x40) + (rdi u>> 0xd << 2)
        i_3 = i_4
        int32_t rdi_2 = rdi.d u>> 8 & 0x1f
        uint64_t r8_2 = zx.q(rdi_2)
        uint64_t var_80_1 = r8_2
        uint64_t rcx_2
        rcx_2.b = 0
        var_98 = 0
        int64_t rsi_1 = 0
        
        if (rdi_2 == 0)
            rdi = zx.q(sub_142b7f200(arg1[1], i_4, r8_2.d, &arg1[0x22]))
        else
            void* rdx_4 = &arg1[3]
            void* var_90_1 = rdx_4
            
            do
                uint64_t rbx_1 = zx.q(*(i_4 + (rsi_1 << 2)))
                uint32_t rdi_3 = zx.d(rbx_1.b)
                
                if (rdi_3 u>= 0xc0)
                    goto label_142b7e4f2
                
                int64_t* rcx_3 = arg1[2]
                int64_t rax_9 = (*(*rcx_3 + 0x10))(rcx_3, zx.q(rbx_1.d))
                rcx_2 = zx.q(var_98)
                
                if (rax_9 == 0x101000100)
                    rdx_4 = var_90_1
                    r8_2 = var_80_1
                label_142b7e4f2:
                    
                    if (rcx_2.b != 0)
                        int64_t rcx_11
                        
                        if (rdi_3 u>= 0xc0)
                            int32_t rbx_2 = rbx_1.d - rdi_3
                            rdi_3.b &= 0xf
                            rcx_11 = zx.q(rbx_2)
                            
                            if (rdi_3.b == 1)
                                rcx_11 = rcx_11 << 0x20 | 0x5000500
                        else
                            rcx_11 = zx.q(((rbx_1.d & 0xffffff00) << 8 | rdi_3) << 8)
                                | (rbx_1 & 0xffffffffffff0000) << 0x20
                        
                        *rdx_4 = rcx_11
                        rcx_2 = zx.q(var_98)
                else
                    if (rcx_2.b == 0)
                        int64_t r8_3 = 0
                        
                        if (rsi_1 s> 0)
                            void* r9_1 = &arg1[3]
                            
                            do
                                uint64_t rcx_4 = zx.q(*(i_3 + (r8_3 << 2)))
                                uint32_t rdx_6 = zx.d(rcx_4.b)
                                uint64_t rax_15
                                
                                if (rdx_6 u>= 0xc0)
                                    rcx_2 = zx.q(rcx_4.d - rdx_6)
                                    rdx_6.b &= 0xf
                                    rax_15 = zx.q(rcx_2.d)
                                    
                                    if (rdx_6.b == 1)
                                        rax_15 = rax_15 << 0x20 | 0x5000500
                                else
                                    rax_15 = zx.q(((rcx_4.d & 0xffffff00) << 8 | rdx_6) << 8)
                                        | (rcx_4 & 0xffffffffffff0000) << 0x20
                                
                                *r9_1 = rax_15
                                r8_3 += 1
                                r9_1 += 8
                            while (r8_3 s< rsi_1)
                        
                        rcx_2.b = 1
                        var_98 = 1
                    
                    rdx_4 = var_90_1
                    *rdx_4 = rax_9
                    r8_2 = var_80_1
                
                rsi_1 += 1
                rdx_4 += 8
                var_90_1 = rdx_4
                i_4 = i_3
            while (rsi_1 s< r8_2)
            
            if (rcx_2.b == 0)
                rdi = zx.q(sub_142b7f200(arg1[1], i_4, r8_2.d, &arg1[0x22]))
            else
                rcx_13 = arg1[1]
                rdi = zx.q((*(*rcx_13 + 0x18))(rcx_13, &arg1[3], arg3, &arg1[0x22], var_98, 
                    var_90_1, i_3, var_80_1, var_78, var_70))
    else if (rax_6 == 6)
        uint64_t rdx_11 = *(*arg1 + 0x60) + (rdi u>> 0xd << 3)
        void* r8_4 = zx.q(rdi.d u>> 8) & 0x1f
        int32_t rdi_5
        rdi_5.b = 0
        i_3 = 0
        
        if (r8_4 == 0)
            rdi = zx.q(sub_142b7f3c0(arg1[1], rdx_11, r8_4.d, &arg1[0x22]))
        else
            void* rbx_3 = &arg1[3]
            void* rax_26 = rdx_11 - arg1 - 0x18
            var_78 = rax_26
            uint64_t i_5
            
            do
                int64_t rsi_2 = *(rax_26 + rbx_3)
                int64_t* rcx_16 = arg1[2]
                int64_t rax_28 = (*(*rcx_16 + 0x18))(rcx_16, rsi_2)
                
                if (rax_28 != 0x101000100)
                    if (rdi_5.b == 0)
                        if (i_3 s> 0)
                            uint64_t rcx_17 = rdx_11
                            void* r8_6 = arg1 - rcx_17
                            uint64_t i_2 = i_3
                            uint64_t i
                            
                            do
                                *(r8_6 + rcx_17 + 0x18) = *rcx_17
                                rcx_17 += 8
                                i = i_2
                                i_2 -= 1
                            while (i != 1)
                        
                        rdi_5.b = 1
                    
                    *rbx_3 = rax_28
                else if (rdi_5.b != 0)
                    *rbx_3 = rsi_2
                
                i_5 = i_3 + 1
                i_3 = i_5
                rbx_3 += 8
                rax_26 = var_78
            while (i_5 s< r8_4)
            
            if (rdi_5.b != 0)
                rcx_13 = arg1[1]
                rdi = zx.q((*(*rcx_13 + 0x18))(rcx_13, &arg1[3], arg3, &arg1[0x22], var_98, r8_4, 
                    i_3, rdx_11, var_78, var_70))
            else
                rdi = zx.q(sub_142b7f3c0(arg1[1], rdx_11, r8_4.d, &arg1[0x22]))
    else if (rax_6 == 7)
        void* rax_32 = sub_142ae72d0(*arg1 + 0x68, rdi.d u>> 0xd)
        int32_t rax_33 = sub_142b7e370(arg1, zx.q(*(rax_32 + 0x40)))
        int32_t rax_34 = sub_142b7d330(arg1[1], rax_32, rax_33, &arg1[0x22])
        int32_t rsi_3 = rax_34
        rdi = zx.q(rax_34 << 0xd) | 0xc7
        int32_t var_90 = rdi.d
        int32_t i_1 = *(rax_32 + 0x4c)
        
        if (i_1 s>= 0)
            do
                void* rax_35 = sub_142ae72d0(*arg1 + 0x68, i_1)
                void* rax_36 = sub_142ae72d0(arg1[1] + 0x68, rsi_3)
                int32_t rax_37 = sub_142b7e370(arg1, zx.q(*(rax_35 + 0x40)))
                rsi_3 = sub_142b7d330(arg1[1], rax_35, rax_37, &arg1[0x22])
                int16_t rdx_19 = *(rax_35 + 8)
                int32_t rcx_30
                
                if (rdx_19 s< 0)
                    rcx_30 = *(rax_35 + 0xc)
                else
                    rcx_30 = sx.d(rdx_19) s>> 5
                
                int16_t rcx_31
                
                if (rcx_30 == 0)
                    rcx_31 = -1
                else
                    void* rax_39 = rax_35 + 0xa
                    
                    if ((rdx_19.b & 2) == 0)
                        rax_39 = *(rax_35 + 0x18)
                    
                    rcx_31 = *rax_39
                
                struct icu_64::Replaceable::icu_64::UnicodeString::VTable* var_68
                struct icu_64::Replaceable::icu_64::UnicodeString::VTable** rax_40 =
                    sub_142a4ad20(rax_35, &var_68, zx.d(rcx_31) + 1, 0x7fffffff)
                sub_142a9eb60(arg1[1] + 0x198, rax_40)
                sub_142a47ff0(&var_68)
                *(rax_36 + 0x4c) = rsi_3
                i_1 = *(rax_35 + 0x4c)
            while (i_1 s>= 0)
            
            rdi = zx.q(var_90)
else
    int64_t* rcx = arg1[2]
    int64_t rax_3 = (*(*rcx + 0x10))(rcx, zx.q(rdi.d))
    
    if (rax_3 != 0x101000100)
        rdi = zx.q(sub_142b7f570(arg1[1], rax_3, &arg1[0x22]))

__security_check_cookie(rax_1 ^ &var_b8)
return zx.q(rdi.d)
