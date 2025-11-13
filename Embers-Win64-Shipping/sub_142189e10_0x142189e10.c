// 函数: sub_142189e10
// 地址: 0x142189e10
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t rdx = *(arg2 + 8)
int64_t* rdi_1

if (rdx == 1)
    int64_t* rax_56 = sub_1421ab380(0x1a0)
    rdi_1 = rax_56
    
    if (rax_56 == 0)
        rdi_1 = nullptr
    else
        *(*(arg1 + 0x28) + 0x30)
        sub_1421a88a0(rax_56)
        rdi_1[5].d &= 0xfffffffe
        *rdi_1 = &data_1432e42a8
        rdi_1[4] = 0
        sub_1421a88d0(&rdi_1[6])
        rdi_1[6] = &data_1432e4298
        rdi_1[0x20] = 0
        rdi_1[0x21].d = 0
        *(rdi_1 + 0x10c) = 0x3f800000
        *(rdi_1 + 0x114) = 0
        *(rdi_1 + 0x11c) = 0x3f800000
        *(rdi_1 + 0x124) = 0
        *(rdi_1 + 0x12c) = 0x3f800000
        *(rdi_1 + 0x134) = 0
        *(rdi_1 + 0x13c) = 0x3f800000
        *(rdi_1 + 0x144) = 0
        *(rdi_1 + 0x14c) = 0x3f800000
        *(rdi_1 + 0x154) = 0
        *(rdi_1 + 0x15c) = 0x3f800000
        rdi_1[0x2e] = 0
        rdi_1[0x2f].d = 0
        *(rdi_1 + 0x17c) = 0x3f800000
    
    sub_142183080(&rdi_1[6], arg2)
    sub_1421f5ef0(rdi_1, arg3)
else if (rdx == 2)
    void*** rax_44 = j_sub_140a82f30(0x180)
    
    if (rax_44 == 0)
        rdi_1 = nullptr
    else
        *(*(arg1 + 0x28) + 0x30)
        rdi_1 = sub_1421d6b50(rax_44)
    
    sub_142183080(&rdi_1[6], arg2)
    rdi_1[0x20].d = *(arg2 + 0xd0)
    *(rdi_1 + 0x104) = *(arg2 + 0xd4)
    rdi_1[0x21].d = *(arg2 + 0xd8)
    *(rdi_1 + 0x10c) = *(arg2 + 0xdc)
    rdi_1[0x22].b = *(arg2 + 0xe0)
    *(rdi_1 + 0x114) = *(arg2 + 0xe4)
    rdi_1[0x23].d = *(arg2 + 0xe8)
    *(rdi_1 + 0x11c) = *(arg2 + 0xec)
    *(rdi_1 + 0x11d) = *(arg2 + 0xed)
    rdi_1[0x24] = *(arg2 + 0xf0)
    rdi_1[0x25].d = *(arg2 + 0xf8)
    
    if (arg1 == 0)
        return nullptr
    
    void* r9 = *(arg1 + 0x1d0)
    sub_1421f5a80(rdi_1, zx.q(arg3), arg1, *(r9 + 0x30), *(r9 + 0x44) & 1, (*(r9 + 0x40)).d, arg4)
else
    if (rdx == 3)
        void*** rax_10 = sub_1421ab380(0x198)
        int64_t* r15_1
        
        if (rax_10 == 0)
            r15_1 = nullptr
        else
            *(*(arg1 + 0x28) + 0x30)
            r15_1 = sub_142180a40(rax_10)
        
        sub_142183080(&r15_1[6], arg2)
        r15_1[0x20].d = *(arg2 + 0xd0)
        *(r15_1 + 0x104) = *(arg2 + 0xd4)
        r15_1[0x21].d = *(arg2 + 0xd8)
        
        if (&r15_1[0x22] != arg2 + 0xe0)
            int64_t rbp_1 = sx.q(*(arg2 + 0xe8))
            int32_t r8_1 = *(r15_1 + 0x11c)
            int64_t r12_1 = *(arg2 + 0xe0)
            r15_1[0x23].d = rbp_1.d
            
            if (rbp_1.d != 0 || r8_1 != 0)
                sub_140638750(&r15_1[0x22], rbp_1.d, r8_1)
                memcpy(r15_1[0x22], r12_1, (rbp_1 << 2).d)
            else
                *(r15_1 + 0x11c) = 0
        
        r15_1[0x24].d = *(arg2 + 0xf0)
        *(r15_1 + 0x124) = *(arg2 + 0xf4)
        r15_1[0x25].d = *(arg2 + 0xf8)
        *(r15_1 + 0x12c) = *(arg2 + 0xfc)
        r15_1[0x26].d = *(arg2 + 0x100)
        *(r15_1 + 0x134) = *(arg2 + 0x104)
        r15_1[0x27].d = *(arg2 + 0x108)
        *(r15_1 + 0x13c) = *(arg2 + 0x10c)
        r15_1[0x28].d = *(arg2 + 0x110)
        *(r15_1 + 0x144) = *(arg2 + 0x114)
        *(r15_1 + 0x145) = *(arg2 + 0x115)
        *(r15_1 + 0x146) = *(arg2 + 0x116)
        *(r15_1 + 0x147) = *(arg2 + 0x117)
        r15_1[0x29].b = *(arg2 + 0x118)
        *(r15_1 + 0x149) = *(arg2 + 0x119)
        *(r15_1 + 0x14c) = *(arg2 + 0x11c)
        r15_1[0x2a].d = *(arg2 + 0x120)
        *(r15_1 + 0x154) = *(arg2 + 0x124)
        r15_1[0x2b].d = *(arg2 + 0x128)
        *(r15_1 + 0x15c) = *(arg2 + 0x12c)
        r15_1[0x2c] = *(arg2 + 0x130)
        r15_1[0x2d].d = *(arg2 + 0x138)
        *(r15_1 + 0x16c) = *(arg2 + 0x13c)
        r15_1[0x2e].d = *(arg2 + 0x140)
        *(r15_1 + 0x174) = *(arg2 + 0x144)
        r15_1[0x2f].d = *(arg2 + 0x148)
        *(r15_1 + 0x17c) = *(arg2 + 0x14c)
        r15_1[0x30].b = *(arg2 + 0x150)
        *(r15_1 + 0x184) = *(arg2 + 0x154)
        r15_1[0x31].b = *(arg2 + 0x158)
        *(r15_1 + 0x189) = *(arg2 + 0x159)
        *(r15_1 + 0x18a) = *(arg2 + 0x15a)
        *(r15_1 + 0x18b) = *(arg2 + 0x15b)
        sub_1421f5a40(r15_1, arg3)
        return r15_1
    
    if (rdx == 4)
        int64_t* rax_6 = sub_1421ab380(0x150)
        rdi_1 = rax_6
        
        if (rax_6 == 0)
            rdi_1 = nullptr
        else
            *(*(arg1 + 0x28) + 0x30)
            sub_1421a88a0(rax_6)
            int32_t rax_7 = *(rdi_1 + 0x3c)
            rdi_1[5].d &= 0xfffffffe
            rdi_1[4] = 0
            *(rdi_1 + 0x3c) = (rax_7 & 0xffffffc2) | 2
            *rdi_1 = &data_1432e43f8
            rdi_1[7].d = 0xffffffff
            rdi_1[8].d = 0x41480000
            *(rdi_1 + 0x44) = 0x41c80000
            sub_1421a88d0(&rdi_1[0xa])
            rdi_1[0x24] = 0
            rdi_1[0xa] = &data_1432e43e8
            rdi_1[0x25] = 0
            rdi_1[0x26].d = 0xffffffff
            *(rdi_1 + 0x134) = 0
            rdi_1[0x27].d = 1
            *(rdi_1 + 0x13c) = 1
        
        sub_142183200(&rdi_1[0xa], arg2)
        rdi_1[0x28].d = *(arg2 + 0xf0)
        int64_t r8 = *rdi_1
        (*(r8 + 0x80))(rdi_1, zx.q(arg3), r8)
    else
        if (rdx != 5)
            return nullptr
        
        int64_t* rax_1 = sub_1421ab380(0x140)
        rdi_1 = rax_1
        
        if (rax_1 == 0)
            rdi_1 = nullptr
        else
            *(*(arg1 + 0x28) + 0x30)
            sub_1421a88a0(rax_1)
            int32_t rax_2 = *(rdi_1 + 0x3c)
            rdi_1[5].d &= 0xfffffffe
            rdi_1[4] = 0
            *(rdi_1 + 0x3c) = (rax_2 & 0xffffffc2) | 2
            *rdi_1 = &data_1432e4490
            rdi_1[7].d = 0xffffffff
            rdi_1[8].d = 0x41480000
            *(rdi_1 + 0x44) = 0x41c80000
            sub_1421a88d0(&rdi_1[0xa])
            rdi_1[0x24] = 0
            rdi_1[0xa] = &data_1432e43d8
            rdi_1[0x25] = 0
            rdi_1[0x26].d = 0xffffffff
            *(rdi_1 + 0x134) = 0
            rdi_1[0x27].d = 1
            *(rdi_1 + 0x13c) = 1
        
        sub_142183200(&rdi_1[0xa], arg2)
        (*(*rdi_1 + 0x80))(rdi_1, zx.q(arg3))

return rdi_1
