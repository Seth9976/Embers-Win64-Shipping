// 函数: sub_142b237d0
// 地址: 0x142b237d0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t* r12 = arg7
uint32_t r14 = arg4
int64_t* rbp = arg2

if (*r12 s> 0)
    return 0

void* r8 = arg2[6]
int64_t r9 = sx.q(arg6)
char var_34

if (r9.d s>= zx.d(*(r8 + 8)))
    uint8_t rdx
    
    if (r9.d s<= 0xffff)
        rdx = *((r9 s>> 8) + *(r8 + 0x38))
    
    if (r9.d s<= 0xffff && (rdx == 0 || (rdx u>> ((r9.d s>> 5).b & 7) & 1) == 0))
        var_34 = 0
    else
        var_34 = sub_142b1def0(r8, r9.d)
else
    var_34 = 0

int32_t rax_4 = sub_142b23e00(arg1)
int64_t rbx = sx.q(rax_4)

if (rax_4 s< 0)
    sub_142b22ec0(arg1, 1, r12)
    return zx.q(r14)

void* r8_2 = rbp[6]

if (rbx.d s< zx.d(*(r8_2 + 8)))
    sub_142b22ec0(arg1, 2, r12)
else
    uint8_t rdx_3
    
    if (rbx.d s<= 0xffff)
        rdx_3 = *((rbx s>> 8) + *(r8_2 + 0x38))
    
    if (rbx.d s<= 0xffff && (rdx_3 == 0 || (rdx_3 u>> ((rbx.d s>> 5).b & 7) & 1) == 0))
        sub_142b22ec0(arg1, 2, r12)
    else
        uint16_t i_1 = sub_142b1def0(r8_2, rbx.d)
        
        if (i_1 u<= 0xff)
            sub_142b22ec0(arg1, 2, r12)
        else
            void* rcx_12 = arg1[0x2f]
            
            if (rcx_12 == 0)
            label_142b2396d:
                uint64_t result = j_sub_142a7dd00(0xa0)
                uint64_t result_1 = result
                
                if (result != 0)
                    *result = &icu_64::UnicodeString::`vftable'{for `icu_64::Replaceable'}
                    *(result + 8) = 2
                    *(result + 0x40) = &icu_64::UnicodeString::`vftable'{for `icu_64::Replaceable'}
                    *(result + 0x48) = 2
                    *(result + 0x80) = 0
                    *(result + 0x88) = 0
                
                arg1[0x2f] = result
                
                if (result != 0)
                    goto label_142b239c4
                
                *r12 = 7
                return result
            
            if ((*(rcx_12 + 8) & 0xffe0) == 0)
                if (rcx_12 == 0)
                    goto label_142b2396d
                
            label_142b239c4:
                *(arg3 + 0x10) = *(arg3 + 8)
                *(arg3 + 0x18) = 0xffffffff
                
                if (arg5 + 1 s> 2)
                    (*(*arg1 + 0x60))(arg1, zx.q(arg5 + 1), r12)
                    sub_142b10540(arg3, (*(*arg1 + 0x28))(arg1, r12))
                    
                    if (arg5 + 1 s> 3)
                        uint64_t i_2 = zx.q(arg5 - 2)
                        uint64_t i
                        
                        do
                            sub_142b107e0(arg3, (*(*arg1 + 0x28))(arg1, r12))
                            i = i_2
                            i_2 -= 1
                        while (i != 1)
                    
                    (*(*arg1 + 0x58))(arg1, 2, r12)
                
                void* rcx_19 = arg1[0x2f]
                *(rcx_19 + 0x88) = *(arg3 + 8)
                *(rcx_19 + 0x90) = *(arg3 + 0x10)
                *(rcx_19 + 0x98) = *(arg3 + 0x18)
            else
                int64_t rax_9 = *(arg3 + 8)
                
                if (rax_9 == *(rcx_12 + 0x88) && rax_9 != 0)
                    *(arg3 + 0x10) = *(rcx_12 + 0x90)
                    *(arg3 + 0x18) = *(rcx_12 + 0x98)
            
            void* rax_22 = arg1[0x2f]
            *(rax_22 + 0x84) = 0
            sub_142a4afe0(rax_22 + 0x40)
            int16_t rax_23 = *(rax_22 + 0x48)
            int32_t r8_6
            
            if (rax_23 s< 0)
                r8_6 = *(rax_22 + 0x4c)
            else
                r8_6 = sx.d(rax_23) s>> 5
            
            sub_142a4a6b0(rax_22 + 0x40, 0, r8_6, arg6)
            int32_t r13_3 = 2
            
            do
                if (zx.w(var_34) u>= i_1 u>> 8)
                    goto label_142b23b56
                
                int32_t rax_25 = sub_142b107e0(arg3, rbx.d)
                
                if (rax_25 s< 2)
                    r12 = arg7
                label_142b23b56:
                    sub_142a48580(arg1[0x2f] + 0x40, rbx.d)
                    void* rcx_31 = arg1[0x2f]
                    int64_t rax_30 = *(arg3 + 8)
                    
                    if (rax_30 == *(rcx_31 + 0x88) && rax_30 != 0)
                        *(arg3 + 0x10) = *(rcx_31 + 0x90)
                        *(arg3 + 0x18) = *(rcx_31 + 0x98)
                    
                    var_34 = i_1.b
                else
                    uint32_t rax_26 = sub_142a98bf0(arg3)
                    void* rdx_11 = arg1[0x2f]
                    r13_3 = 0
                    r14 = rax_26
                    int16_t rcx_25 = *(rdx_11 + 0x48)
                    int32_t rcx_27
                    
                    if (rcx_25 s< 0)
                        rcx_27 = *(rdx_11 + 0x4c)
                    else
                        rcx_27 = sx.d(rcx_25) s>> 5
                    
                    *(rdx_11 + 0x84) = rcx_27
                    r12 = arg7
                    
                    if ((rax_25.b & 1) == 0)
                        break
                    
                    void* rcx_28 = arg1[0x2f]
                    *(rcx_28 + 0x88) = *(arg3 + 8)
                    *(rcx_28 + 0x90) = *(arg3 + 0x10)
                    *(rcx_28 + 0x98) = *(arg3 + 0x18)
                
                int32_t rax_33 = sub_142b23e00(arg1)
                rbx = sx.q(rax_33)
                
                if (rax_33 s< 0)
                    break
                
                void* r8_7 = rbp[6]
                r13_3 += 1
                
                if (rbx.d s< zx.d(*(r8_7 + 8)))
                    break
                
                if (rbx.d s<= 0xffff)
                    uint8_t rdx_14 = *((rbx s>> 8) + *(r8_7 + 0x38))
                    
                    if (rdx_14 == 0)
                        break
                    
                    if ((rdx_14 u>> ((rbx.d s>> 5).b & 7) & 1) == 0)
                        break
                
                i_1 = sub_142b1def0(r8_7, rbx.d)
            while (i_1 u> 0xff)
            
            void* rcx_38 = arg1[0x2f]
            
            if (rcx_38 != 0 && (*(rcx_38 + 8) & 0xffe0) != 0)
                r13_3 = sub_142b22e30(rcx_38, r13_3)
            
            int64_t r9_2 = *arg1
            (*(r9_2 + 0x60))(arg1, zx.q(r13_3), r12, r9_2)
            int32_t rax_38 = arg1[0x30].d
            
            if (rax_38 s>= 0)
                arg1[0x30].d = rax_38 + r13_3
            
            void* rdi_1 = arg1[0x2f]
            int16_t rbx_1 = *(rdi_1 + 8) s>> 5
            int32_t var_48_1 = 0
            sub_142a49310(rdi_1, 0, *(rdi_1 + 0x80), rdi_1 + 0x40, 0, *(rdi_1 + 0x84))
            *(rdi_1 + 0x80) = 0
            
            if (rbx_1 == 0 && (*(arg1[0x2f] + 8) & 0xffe0) != 0)
                int32_t rdi_2 = -1
                void* rbx_2
                
                while (true)
                    int32_t var_40_1
                    var_40_1.q = r12
                    var_48_1.b = 1
                    sub_142b22160(arg1, rbp, rdi_2, r14, 1, var_40_1)
                    rbx_2 = arg1[0x2f]
                    int16_t rax_42 = *(rbx_2 + 8)
                    int32_t rax_44
                    
                    if (rax_42 s< 0)
                        rax_44 = *(rbx_2 + 0xc)
                    else
                        rax_44 = sx.d(rax_42) s>> 5
                    
                    if (*(rbx_2 + 0x80) s>= rax_44)
                        break
                    
                    rdi_2 = sub_142a486d0(rbx_2, *(rbx_2 + 0x80))
                    int32_t rax_46
                    rax_46.b = rdi_2 u> 0xffff
                    *(rbx_2 + 0x80) += rax_46 + 1
                    uint32_t rax_49 = (*(*arg1 + 0x68))(arg1, zx.q(rdi_2))
                    r14 = rax_49
                    
                    if (rax_49 != 0xc0)
                        rbp = arg1[2]
                    else
                        rbp = *(arg1[2] + 0x20)
                        r14 = sub_142aa3ce0(rbp, rdi_2)
                
                if ((*(rbx_2 + 8) & 1) == 0)
                    *(rbx_2 + 8) &= 0x1f
                    r14 = 1
                    *(rbx_2 + 0x80) = 0
                else
                    *(rbx_2 + 8) = 2
                    *(rbx_2 + 0x80) = 0
                    r14 = 1

return zx.q(r14)
