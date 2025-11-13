// 函数: sub_142c86b70
// 地址: 0x142c86b70
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* arg_8 = arg1
void* r12 = *arg1
*arg2 = 1
int64_t* r13 = arg1
int64_t var_88 = 0
int64_t var_60 = 0
void* var_80 = r12
int32_t arg_20 = 3
int32_t rbx = 0
char* var_78 = nullptr
int64_t var_70 = 0
int64_t rdi = 0
int64_t r15 = 0
int64_t r14 = 0
int512_t zmm2 = sub_142c64850(r12, "LDAP local: LDAP Vendor = %s ; LDAP Version = %d\n", 
    "Microsoft Corporation.", arg3)
int512_t zmm2_1 = sub_142c64850(r12, "LDAP local: %s\n", *(r12 + 0x880), zmm2)
int64_t* rax = data_143ccb8b8(1, 0x40)
int64_t* rsi = rax
int64_t* var_58 = nullptr
int64_t rsi_1
int32_t r14_1
int32_t r15_1
int512_t zmm2_2

if (rax != 0)
    int32_t rax_1 = sub_142c87360(r13, rsi)
    int32_t arg_10 = rax_1
    
    if (rax_1 != 0)
        sub_142c872e0(rsi)
        rax_1 = arg_10
        rsi = nullptr
    
    var_58 = rsi
    
    if (rax_1 != 0)
        r14_1 = arg_10
        goto label_142c86c52
    
    char const* const r8_2 = "cleartext"
    int32_t r12_2 = *(r13[0x88] + 0x80) & 1
    
    if (r12_2 != 0)
        r8_2 = "encrypted"
    
    zmm2_2 = sub_142c64850(var_80, "LDAP local: trying to establish %s connection\n", r8_2, zmm2_1)
    int64_t r13_1 = r13[0x1a]
    
    if (r13_1 != 0)
        int64_t* rax_6 = arg_8
        
        if (rax_6[0x7f].b != 0)
            r15 = rax_6[0x3e]
            r14 = rax_6[0x3f]
        
        Ordinal_WLDAP32_211(0, 0x11, &arg_20)
        int64_t rax_8
        
        if (r12_2 != 0)
            rax_8 = 0
        label_142c86de2:
            Ordinal_WLDAP32_211(rax_8, 0x11, &arg_20)
            r13 = arg_8
            int32_t rax_9 = 0x31
            arg_10 = 0x31
            
            if (r15 != 0 && r14 != 0)
                if ((*(*r13 + 0x29c) & 1) == 0)
                    rax_9 = 0x31
                else
                    rax_9 = Ordinal_WLDAP32_60(var_88, r15, r14)
                    arg_10 = rax_9
            
            if (r12_2 != 0)
            label_142c86e7d:
                r14_1 = arg_10
                
                if (r14_1 == 0)
                    goto label_142c86ecf
                
                r12 = var_80
                zmm2_2 = sub_142c64760(r12, "LDAP local: ldap_simple_bind_s %s", 
                    Ordinal_WLDAP32_22(zx.q(r14_1)), zmm2_2)
                rsi_1 = var_88
                rbx = 0x26
                r15_1 = 0
            else
                if (rax_9 != 0)
                    arg_20 = 2
                    Ordinal_WLDAP32_211(var_88, zx.q(r12_2 + 0x11), &arg_20)
                    arg_10 = 0x31
                    
                    if (r15 != 0 && r14 != 0 && (*(*r13 + 0x29c) & 1) != 0)
                        arg_10 = Ordinal_WLDAP32_60(var_88, r15, r14)
                    
                    goto label_142c86e7d
                
            label_142c86ecf:
                rsi_1 = var_88
                int32_t rax_15 =
                    Ordinal_WLDAP32_50(rsi_1, rsi[2], zx.q(rsi[4].d), rsi[5], rsi[3], 0, &var_60)
                arg_10 = rax_15
                r14_1 = rax_15
                
                if ((rax_15 & 0xfffffffb) == 0)
                    r15_1 = 0
                    int32_t arg_18 = 0
                    int64_t rax_17 = Ordinal_WLDAP32_26(rsi_1, var_60)
                    int64_t var_68_1 = rax_17
                    
                    if (rax_17 == 0)
                        r12 = var_80
                    else
                        while (true)
                            arg_8 = nullptr
                            int64_t rax_18 = Ordinal_WLDAP32_30(rsi_1, rax_17)
                            
                            if (rax_18 == 0)
                                Ordinal_WLDAP32_200(0)
                                rbx = 0x1b
                                goto label_142c86cb6
                            
                            int64_t rsi_2 = -1
                            
                            do
                                rsi_2 += 1
                            while (*(rax_18 + rsi_2) != 0)
                            
                            int32_t rax_19
                            rax_19, zmm2_2 = sub_142c645e0(r13, 1, "DN: ", 4, zmm2_2)
                            rbx = rax_19
                            int32_t rax_20
                            
                            if (rax_19 == 0)
                                rax_20, zmm2_2 =
                                    sub_142c645e0(r13, rax_19 + 1, rax_18, rsi_2, zmm2_2)
                                rbx = rax_20
                            
                            int64_t rcx_29
                            
                            if (rax_19 != 0 || rax_20 != 0)
                                rcx_29 = rax_18
                            else
                                int32_t rax_21
                                rax_21, zmm2_2 = sub_142c645e0(r13, 1, U"\n", 1, zmm2_2)
                                rbx = rax_21
                                rcx_29 = rax_18
                                
                                if (rax_21 == 0)
                                    rdi += rsi_2 + 5
                                    Ordinal_WLDAP32_200(rcx_29)
                                    int64_t r14_3 = var_68_1
                                    rsi_1 = var_88
                                    int64_t rax_22 = Ordinal_WLDAP32_32(rsi_1, r14_3, &arg_8)
                                    r12 = var_80
                                    int64_t r15_2 = rax_22
                                    
                                    if (rax_22 != 0)
                                        while (true)
                                            if (r15_2 == 0)
                                                int64_t* rcx_52 = arg_8
                                                
                                                if (rcx_52 != 0)
                                                    Ordinal_WLDAP32_301(rcx_52, 0)
                                                
                                                r14_1 = arg_10
                                                rbx = 0x1b
                                                r15_1 = arg_18
                                                goto label_142c86cbe
                                            
                                            int64_t rsi_4 = -1
                                            
                                            do
                                                rsi_4 += 1
                                            while (*(r15_2 + rsi_4) != 0)
                                            
                                            int64_t rax_23 =
                                                Ordinal_WLDAP32_35(var_88, r14_3, r15_2)
                                            
                                            if (rax_23 != 0)
                                                if (*rax_23 != 0)
                                                    int32_t** r14_4 = rax_23
                                                    
                                                    while (true)
                                                        int32_t rax_24
                                                        rax_24, zmm2_2 =
                                                            sub_142c645e0(r13, 1, \t", 1, zmm2_2)
                                                        rbx = rax_24
                                                        
                                                        if (rax_24 == 0)
                                                            int32_t rax_25
                                                            rax_25, zmm2_2 = sub_142c645e0(r13, 
                                                                rax_24 + 1, r15_2, rsi_4, zmm2_2)
                                                            rbx = rax_25
                                                            
                                                            if (rax_25 == 0)
                                                                int32_t rax_26
                                                                rax_26, zmm2_2 = sub_142c645e0(r13, 
                                                                    rax_25 + 1, ": ", zx.q(rax_25 + 2), 
                                                                    zmm2_2)
                                                                rbx = rax_26
                                                                
                                                                if (rax_26 == 0)
                                                                    int64_t rdi_2 = rdi + 3 + rsi_4
                                                                    
                                                                    if (rsi_4 u<= 7)
                                                                    label_142c87146:
                                                                        int32_t* r8_19 = *r14_4
                                                                        int32_t rax_29
                                                                        rax_29, zmm2_2 = sub_142c645e0(r13, 1, 
                                                                            *(r8_19 + 8), zx.q(*r8_19), zmm2_2)
                                                                        rbx = rax_29
                                                                        
                                                                        if (rax_29 == 0)
                                                                            rdi_2 += zx.q(**r14_4)
                                                                        label_142c87182:
                                                                            int32_t rax_31
                                                                            rax_31, zmm2_2 =
                                                                                sub_142c645e0(r13, 1, \n", 1, zmm2_2)
                                                                            rbx = rax_31
                                                                            
                                                                            if (rax_31 == 0)
                                                                                r14_4 = &r14_4[1]
                                                                                rdi = rdi_2 + 1
                                                                                
                                                                                if (*r14_4 != 0)
                                                                                    continue
                                                                                
                                                                                r14_3 = var_68_1
                                                                                break
                                                                    else
                                                                        for (int64_t i = 0; i != 8; )
                                                                            char rcx_35 = (*";binary")[i]
                                                                            i += 1
                                                                            
                                                                            if (rcx_35 != *(rsi_4 + r15_2 + i - 8))
                                                                                goto label_142c87146
                                                                        
                                                                        int32_t* rdx_14 = *r14_4
                                                                        int32_t rax_27
                                                                        rax_27, zmm2_2 = sub_142c75c90(var_80, 
                                                                            *(rdx_14 + 8), zx.q(*rdx_14), &var_78, 
                                                                            zmm2_2, &var_70)
                                                                        rbx = rax_27
                                                                        
                                                                        if (rax_27 == 0)
                                                                            int64_t r9_7 = var_70
                                                                            
                                                                            if (r9_7 == 0)
                                                                                goto label_142c87182
                                                                            
                                                                            int32_t rax_28
                                                                            rax_28, zmm2_2 = sub_142c645e0(r13, 
                                                                                rax_27 + 1, var_78, r9_7, zmm2_2)
                                                                            rbx = rax_28
                                                                            data_143ccb8a0(var_78)
                                                                            
                                                                            if (rbx == 0)
                                                                                rdi_2 += var_70
                                                                                goto label_142c87182
                                                        
                                                        Ordinal_WLDAP32_79(rax_23)
                                                        Ordinal_WLDAP32_200(r15_2)
                                                        int64_t* rcx_51 = arg_8
                                                        
                                                        if (rcx_51 != 0)
                                                            Ordinal_WLDAP32_301(rcx_51, 0)
                                                        
                                                        rsi_1 = var_88
                                                        r15_1 = arg_18
                                                        goto label_142c86cb6
                                                
                                                Ordinal_WLDAP32_79(rax_23)
                                            
                                            Ordinal_WLDAP32_200(r15_2)
                                            int32_t rax_32
                                            rax_32, zmm2_2 = sub_142c645e0(r13, 1, U"\n", 1, zmm2_2)
                                            r12 = var_80
                                            rbx = rax_32
                                            
                                            if (rax_32 != 0)
                                                rsi_1 = var_88
                                                r14_1 = arg_10
                                                r15_1 = arg_18
                                                goto label_142c86cbe
                                            
                                            rdi += 1
                                            sub_142c6f0c0(r12, rdi)
                                            rsi_1 = var_88
                                            int64_t rax_33 = Ordinal_WLDAP32_33(rsi_1, r14_3, arg_8)
                                            r15_2 = rax_33
                                            
                                            if (rax_33 == 0)
                                                break
                                    
                                    int64_t* rcx_47 = arg_8
                                    
                                    if (rcx_47 != 0)
                                        Ordinal_WLDAP32_301(rcx_47, 0)
                                    
                                    rax_17 = Ordinal_WLDAP32_27(rsi_1, r14_3)
                                    r15_1 = arg_18 + 1
                                    var_68_1 = rax_17
                                    arg_18 = r15_1
                                    
                                    if (rax_17 != 0)
                                        continue
                                    
                                    r14_1 = arg_10
                                    break
                            
                            Ordinal_WLDAP32_200(rcx_29)
                            rsi_1 = var_88
                            goto label_142c86cb6
                else
                    r12 = var_80
                    zmm2_2 = sub_142c64760(r12, "LDAP remote: %s", 
                        Ordinal_WLDAP32_22(zx.q(rax_15)), zmm2_2)
                    rbx = 0x27
                    r15_1 = 0
        else
            rax_8 = Ordinal_WLDAP32_143(r13_1, zx.q(arg_8[0x2f].d))
            var_88 = rax_8
            
            if (rax_8 != 0)
                goto label_142c86de2
            
            r13 = arg_8
            r12 = var_80
            r13[0x2f].d
            zmm2_2 = sub_142c64760(r12, "LDAP local: Cannot connect to %s:%ld", r13[0x1b], zmm2_2)
            rsi_1 = var_88
            rbx = 7
            r14_1 = arg_10
            r15_1 = 0
    else
        rsi_1 = 0
        rbx = (r13_1 + 0x1b).d
        r13 = arg_8
        r15_1 = 0
    label_142c86cb6:
        r14_1 = arg_10
        r12 = var_80
else
    r14_1 = 0x5a
label_142c86c52:
    zmm2_2 = sub_142c64760(r12, "LDAP local: %s", Ordinal_WLDAP32_22(zx.q(r14_1)), zmm2_1)
    rsi_1 = 0
    rbx = 0x3e
    r15_1 = 0

label_142c86cbe:
int64_t rcx_7 = var_60

if (rcx_7 != 0)
    Ordinal_WLDAP32_41(rcx_7)

if (r14_1 == 4)
    zmm2_2 = sub_142c64850(r12, "There are more than %d entries\n", zx.q(r15_1), zmm2_2)

if (var_58 != 0)
    sub_142c872e0(var_58)

if (rsi_1 != 0)
    Ordinal_WLDAP32_46(rsi_1)

sub_142c68d40(r13, 0xffffffff, -1, 0, zmm2_2, 0, 0xffffffff, nullptr)
sub_142c65340(r13, 1)
return zx.q(rbx)
