// 函数: sub_1403dd460
// 地址: 0x1403dd460
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t __saved_rbp_1
int64_t __saved_rbp = __saved_rbp_1
int64_t __saved_rsi_1
int64_t __saved_rsi = __saved_rsi_1
int64_t __saved_rdi_1
int64_t __saved_rdi = __saved_rdi_1
int64_t __saved_r12_1
int64_t __saved_r12 = __saved_r12_1
int64_t __saved_r13_1
int64_t __saved_r13 = __saved_r13_1
int64_t __saved_r14_1
int64_t __saved_r14 = __saved_r14_1
int64_t __saved_r15_1
int64_t __saved_r15 = __saved_r15_1
int64_t __saved_rbx_1
int64_t __saved_rbx = __saved_rbx_1
int32_t result_2
int64_t rax_1 = __security_cookie ^ &result_2
int64_t* rsi = arg5
int32_t i_9 = 0
void* var_560 = arg6
int32_t rdi = arg3
void* r15 = arg1
int64_t* var_598 = rsi
int32_t var_5a0 = 0
result_2 = 0
int64_t var_588 = 0

if (arg4 != 0)
    int32_t i = 0
    
    if (arg2[1] s> 0)
        int32_t* rax_4 = r15 + 0x960
        
        do
            *rax_4 = 0
            i += 1
            rax_4 = &rax_4[0x430]
        while (i s< arg2[1])

if (arg2[1] s> *(r15 + 0x2190))
    sub_1403dfb60(r15 + 0x10c0)
    result_2 = 0

int32_t rdx = arg2[1]
int32_t var_580_1

if (rdx == 1 && *(r15 + 0x2190) == 2)
    var_580_1 = rdx

if (rdx != 1 || *(r15 + 0x2190) != 2 || arg2[3] != *(r15 + 0x90c) * 0x3e8)
    var_580_1 = 0

void* r13 = r15 + 0x960

if (*r13 != 0)
    goto label_1403dd643

int32_t rdi_1 = 0
uint64_t result

if (rdx s<= 0)
label_1403dd619:
    rdi = arg3
label_1403dd643:
    
    if (*arg2 == 2 && arg2[1] == 2 && (*(r15 + 0x218c) == 1 || *(r15 + 0x2190) == 1))
        void* rdx_4 = r15 + 0x990
        void* rcx_6 = r15 + 0x1a50
        *(r15 + 0x2180) = 0
        *(r15 + 0x2188) = 0
        
        if (((rdx_4.d | rcx_6.d) & 0xf) != 0)
            memcpy(rcx_6, rdx_4, 0x130)
        else
            int64_t i_10 = 2
            int128_t zmm0
            int128_t zmm1
            int64_t i_1
            
            do
                zmm0 = *rdx_4
                zmm1 = *(rdx_4 + 0x10)
                rcx_6 += 0x80
                rdx_4 += 0x80
                *(rcx_6 - 0x80) = zmm0
                zmm0 = *(rdx_4 - 0x60)
                *(rcx_6 - 0x70) = zmm1
                zmm1 = *(rdx_4 - 0x50)
                *(rcx_6 - 0x60) = zmm0
                zmm0 = *(rdx_4 - 0x40)
                *(rcx_6 - 0x50) = zmm1
                zmm1 = *(rdx_4 - 0x30)
                *(rcx_6 - 0x40) = zmm0
                zmm0 = *(rdx_4 - 0x20)
                *(rcx_6 - 0x30) = zmm1
                zmm1 = *(rdx_4 - 0x10)
                *(rcx_6 - 0x20) = zmm0
                *(rcx_6 - 0x10) = zmm1
                i_1 = i_10
                i_10 -= 1
            while (i_1 != 1)
            zmm1 = *(rdx_4 + 0x10)
            *rcx_6 = *rdx_4
            zmm0 = *(rdx_4 + 0x20)
            *(rcx_6 + 0x10) = zmm1
            *(rcx_6 + 0x20) = zmm0
    
    *(r15 + 0x218c) = *arg2
    *(r15 + 0x2190) = arg2[1]
    
    if (arg2[2] - 0x1f40 u> 0x9c40)
        result = 0xffffff38
    else
        if (rdi != 1 && *r13 == 0)
            int32_t i_2 = 0
            
            if (arg2[1] s> 0)
                void* rsi_1 = r15 + 0x964
                
                do
                    int32_t j = 0
                    
                    if (*rsi_1 s> 0)
                        void* rbx_1 = rsi_1 + 0xc
                        
                        do
                            j += 1
                            rbx_1 += 4
                            *(rbx_1 - 4) = sub_1403f72f0(var_598, 1)
                        while (j s< *rsi_1)
                    
                    i_2 += 1
                    rsi_1 += 0x10c0
                    *(rsi_1 - 0x10a8) = sub_1403f72f0(var_598, 1)
                while (i_2 s< arg2[1])
                
                r15 = arg1
                rsi = var_598
            
            int32_t i_3 = 0
            
            if (arg2[1] s> 0)
                void* rbx_2 = r15 + 0x964
                
                do
                    int64_t rax_19 = sx.q(i_3) * 0x10c0
                    *(rax_19 + r15 + 0x980) = 0
                    *(rax_19 + r15 + 0x988) = 0
                    
                    if (*(rbx_2 + 0x18) != 0)
                        int64_t rax_20 = sx.q(*rbx_2)
                        
                        if (rax_20.d != 1)
                            int32_t rax_21 = sub_1403f73c0(rsi, *((rax_20 << 3) + 0x1436fc8b0), 8)
                            int32_t j_1 = 0
                            
                            if (*rbx_2 s> 0)
                                void* r8_1 = rbx_2 + 0x1c
                                
                                do
                                    r8_1 += 4
                                    int32_t rdx_7 = (rax_21 + 1) s>> j_1.b
                                    j_1 += 1
                                    *(r8_1 - 4) = rdx_7 & 1
                                while (j_1 s< *rbx_2)
                        else
                            *(rbx_2 + 0x1c) = rax_20.d
                    
                    i_3 += 1
                    rbx_2 += 0x10c0
                while (i_3 s< arg2[1])
            
            rdi = arg3
            
            if (rdi == 0)
                int32_t i_4 = 0
                
                if (*(r15 + 0x964) s> 0)
                    void* rax_22 = r15 + 0x1a40
                    void* var_590_1 = rax_22
                    
                    do
                        int32_t j_2 = 0
                        
                        if (arg2[1] s> 0)
                            void* rsi_2 = r15 + 0xae6
                            void* rdi_2 = rax_22 - 0x10c4
                            
                            do
                                if (*(rdi_2 + 4) != 0)
                                    if (arg2[1] == 2 && j_2 == 0)
                                        sub_1403dfa20(var_598, &var_588)
                                        
                                        if (*var_590_1 == 0)
                                            sub_1403df9f0(var_598, &var_5a0)
                                    
                                    int32_t rax_24
                                    
                                    if (i_4 s> 0)
                                        rax_24 = 2
                                    
                                    if (i_4 s<= 0 || *rdi_2 == 0)
                                        rax_24 = 0
                                    
                                    sub_1403dff50(sx.q(j_2) * 0x10c0 + r15, var_598, i_4, 1, rax_24)
                                    void var_548
                                    sub_1403e0340(var_598, &var_548, sx.d(*(rsi_2 - 1)), 
                                        sx.w(*rsi_2), *(rsi_2 - 0x1ce))
                                
                                j_2 += 1
                                rdi_2 += 0x10c0
                                rsi_2 += 0x10c0
                            while (j_2 s< arg2[1])
                            
                            rax_22 = var_590_1
                        
                        rax_22 += 4
                        i_4 += 1
                        var_590_1 = rax_22
                    while (i_4 s< *(r15 + 0x964))
                    
                    rdi = arg3
            
            r13 = r15 + 0x960
        
        if (arg2[1] == 2)
            if (rdi == 0 || (rdi == 2 && *(r15 + (sx.q(*r13) << 2) + 0x980) == 1))
                sub_1403dfa20(var_598, &var_588)
                
                if (rdi != 0)
                    if (rdi != 2 || *(r15 + (sx.q(*r13) << 2) + 0x1a40) != 0)
                        var_5a0 = 0
                    else
                        sub_1403df9f0(var_598, &var_5a0)
                else if (*(r15 + (sx.q(*r13) << 2) + 0x1a30) == 0)
                    sub_1403df9f0(var_598, &var_5a0)
                else
                    var_5a0 = 0
            else
                var_588.d = sx.d(*(r15 + 0x2180))
                var_588:4.d = sx.d(*(r15 + 0x2182))
            
            if (arg2[1] == 2 && var_5a0 == 0 && *(r15 + 0x2194) == 1)
                memset(r15 + 0x1604, 0, 0x3c0)
                memset(r15 + 0x15c4, 0, 0x40)
                *(r15 + 0x19c4) = 0x64
                *(r15 + 0x19c8) = 0xa
                *(r15 + 0x211c) = 0
                *(r15 + 0x1a08) = 1
        
        int64_t rdx_14 = sx.q(*(r15 + 0x918))
        int32_t r8_4 = arg2[1]
        int64_t rcx_20 = sx.q((rdx_14 + 2).d * r8_4) * 2
        int64_t rax_32 = rcx_20 + 0xf
        
        if (rax_32 u<= rcx_20)
            rax_32 = 0xffffffffffffff0
        
        int64_t rax_33 = rax_32 & 0xfffffffffffffff0
        __chkstk(rax_33)
        int32_t r9_1 = arg3
        void var_5d8
        void* rsp_1 = &var_5d8 - rax_33
        void* r10_1 = rsp_1 + 0x30
        void* rdx_16 = r10_1 + ((rdx_14 + 2) << 1)
        void* var_570 = r10_1
        int32_t rax_34
        
        if (r9_1 == 0)
            rax_34.b = var_5a0 == 0
        else if (*(r15 + 0x2194) == 0 ||
                (r8_4 == 2 && r9_1 == r8_4 && *(r15 + (sx.q(*(r15 + 0x1a20)) << 2) + 0x1a40) == 1))
            rax_34 = 1
        else
            rax_34 = 0
        
        int64_t rax_37 = sx.q(rax_34)
        int32_t i_5 = 0
        int64_t var_590_2 = rax_37
        int32_t var_59c
        
        if (r8_4 s> 0)
            void* rcx_22 = r15 + 0x960
            int64_t r13_1 = 0
            void** rsi_3 = &var_570
            void* rdi_3 = rcx_22
            
            do
                if (i_5 == 0 || rax_37 != 0)
                    int32_t rax_39 = *rcx_22 - i_5
                    int32_t rax_40
                    
                    if (rax_39 s<= 0)
                        rax_40 = 0
                    else if (r9_1 != 2)
                        if (i_5 s> 0)
                            rax_40 = 1
                        
                        if (i_5 s<= 0 || *(r15 + 0x2194) == 0)
                            rax_40 = 2
                    else
                        int32_t rax_43 = *(r15 + ((sx.q(rax_39) + r13_1) << 2) + 0x97c)
                        int32_t rax_44 = neg.d(rax_43)
                        rax_40 = sbb.d(rax_44, rax_44, rax_43 != 0) & r9_1
                    
                    void* r8_7 = *rsi_3
                    *(rsp_1 + 0x28) = rax_40
                    *(rsp_1 + 0x20) = r9_1
                    __crtGetStringTypeA_stat(sx.q(i_5) * 0x10c0 + r15, var_598, r8_7 + 4, &var_59c)
                    result_2 = result_2
                else
                    memset(*rsi_3 + 4, 0, sx.q(var_59c) * 2)
                
                *rdi_3 += 1
                rax_37 = var_590_2
                r9_1 = arg3
                i_5 += 1
                r13_1 += 0x430
                rsi_3 = &rsi_3[1]
                rdi_3 += 0x10c0
                rcx_22 = r15 + 0x960
            while (i_5 s< arg2[1])
            
            r10_1 = var_570
        
        uint64_t r9_4
        
        if (*arg2 != 2 || arg2[1] != 2)
            *r10_1 = *(r15 + 0x2184)
            r9_4 = sx.q(var_59c)
            *(r15 + 0x2184) = *(r10_1 + (r9_4 << 1))
        else
            *(rsp_1 + 0x28) = var_59c
            *(rsp_1 + 0x20) = *(r15 + 0x90c)
            objf::ImageImpl::FExportRvaByName(r15 + 0x2180, r10_1, rdx_16, &var_588)
            r9_4 = zx.q(var_59c)
        
        int32_t temp0_1 = divs.dp.d(sx.q(r9_4.d * arg2[2]), sx.d(*(r15 + 0x90c)) * 0x3e8)
        *arg7 = temp0_1
        int32_t rdx_21 = *arg2
        int32_t rcx_33 = 0
        
        if (rdx_21 == 2)
            rcx_33 = temp0_1
        
        int64_t rax_54 = sx.q(rcx_33) * 2
        int64_t rcx_34 = rax_54 + 0xf
        
        if (rcx_34 u<= rax_54)
            rcx_34 = 0xffffffffffffff0
        
        int64_t rcx_35 = rcx_34 & 0xfffffffffffffff0
        __chkstk(rcx_35)
        int16_t* rbx_4 = var_560
        void* rsi_4 = var_560
        int32_t result_1 = result_2
        int32_t rdi_4 = 0
        void** r13_2 = &var_570
        
        if (rdx_21 == 2)
            rbx_4 = rsp_1 - rcx_35 + 0x30
        
        int32_t rax_57
        
        while (true)
            int32_t rcx_36 = arg2[1]
            rax_57 = *arg2
            
            if (rax_57 s< rcx_36)
                rcx_36 = rax_57
            
            if (rdi_4 s>= rcx_36)
                break
            
            sub_1403df180(sx.q(rdi_4) * 0x10c0 + 0x990 + r15, rbx_4, *r13_2 + 2, r9_4.d)
            result_1 = result_2
            bool cond:1_1 = *arg2 != 2
            result_2 = result_1
            
            if (not(cond:1_1))
                int32_t i_6 = 0
                
                if (*arg7 s> 0)
                    int16_t* rcx_41 = rbx_4
                    void* rdx_23 = rsi_4
                    
                    do
                        i_6 += 1
                        rdx_23 += 4
                        *(rdx_23 - 4) = *rcx_41
                        rcx_41 = &rcx_41[1]
                    while (i_6 s< *arg7)
            
            r9_4 = zx.q(var_59c)
            rdi_4 += 1
            r13_2 = &r13_2[1]
            rsi_4 += 2
        
        if (rax_57 == 2 && arg2[1] == 1)
            if (var_580_1 == 0)
                int32_t i_7 = 0
                
                if (*arg7 s> 0)
                    void* r8_15 = var_560
                    
                    do
                        int16_t rax_60 = *r8_15
                        i_7 += 1
                        r8_15 += 4
                        *(r8_15 - 2) = rax_60
                    while (i_7 s< *arg7)
            else
                sub_1403df180(r15 + 0x1a50, rbx_4, var_570 + 2, r9_4.d)
                int32_t i_8 = 0
                result_1 = result_2
                
                if (*arg7 s> 0)
                    int16_t* rcx_44 = var_560 + 2
                    
                    do
                        int16_t rax_59 = *rbx_4
                        i_8 += 1
                        rbx_4 = &rbx_4[1]
                        *rcx_44 = rax_59
                        rcx_44 = &rcx_44[2]
                    while (i_8 s< *arg7)
        
        if (*(r15 + 0x105c) != 2)
            arg2[5] = 0
        else
            var_560.d = 6
            var_560:4.d = 4
            int32_t var_558_1 = 3
            arg2[5] = *(&var_560 + (sx.q(*(r15 + 0x90c) - 8) s>> 2 << 2)) * *(r15 + 0x904)
        
        if (arg3 != 1)
            *(r15 + 0x2194) = var_5a0
            result = zx.q(result_1)
        else if (*(r15 + 0x2190) s<= 0)
            result = zx.q(result_1)
        else
            void* rax_65 = r15 + 0x908
            
            do
                *rax_65 = 0xa
                i_9 += 1
                rax_65 += 0x10c0
            while (i_9 s< *(r15 + 0x2190))
            
            result = zx.q(result_1)
else
    void* rbx = r15 + 0x914
    
    while (true)
        int32_t rax_6 = arg2[4]
        
        if (rax_6 == 0)
            *(rbx + 0x50) = 1
            *rbx = 2
        else if (rax_6 != 0xa)
            if (rax_6 == 0x14)
                *(rbx + 0x50) = 1
            else if (rax_6 != 0x28)
                if (rax_6 != 0x3c)
                    result = 0xffffff35
                    goto label_1403dde49
                
                *(rbx + 0x50) = 3
            else
                *(rbx + 0x50) = 2
            
            *rbx = 4
        else
            *(rbx + 0x50) = 1
            *rbx = 2
        
        int32_t rdx_3 = (arg2[3] s>> 0xa) + 1
        
        if (((rdx_3 - 8) & 0xfffffff3) != 0)
            break
        
        if (rdx_3 == 0x14)
            break
        
        int32_t rax_8 = sub_1403dfba0(sx.q(rdi_1) * 0x10c0 + r15, rdx_3, arg2[2])
        rdi_1 += 1
        rbx += 0x10c0
        result_2 += rax_8
        
        if (rdi_1 s>= arg2[1])
            goto label_1403dd619
    
    result = 0xffffff38

label_1403dde49:
__security_check_cookie(rax_1 ^ &result_2)
return result
