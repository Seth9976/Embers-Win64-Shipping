// 函数: sub_142c40550
// 地址: 0x142c40550
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_c8
int64_t rax_1 = __security_cookie ^ &var_c8
int64_t* r14 = *(arg1 + 0x98)
bool cond:0 = *(arg3 + 0x3c) != 0x4b6e6461
uint64_t r10 = arg2
int64_t rsi = *(arg3 + 0x70)
int32_t i_1 = arg5
uint64_t r15 = zx.q(arg4)
int64_t* var_90 = r14
int128_t zmm0

if (not(cond:0))
    int32_t r8 = (r15 + 3).d
    
    if (r8 u<= i_1)
        uint64_t rcx = r15 * 5
        
        if ((1 & *(rsi + (rcx << 2) + 0xc) u>> 5) == 0)
            char rcx_1 = *(rsi + (rcx << 2) + 0x12)
            int32_t rax_3
            
            if (rcx_1 u>= 0x20)
                rax_3 = 0
            else
                rax_3 = 1 << rcx_1
            
            if (((rax_3 u>> 0x10).b & 1) != 0)
                uint64_t rdx = zx.q((r15 + 1).d)
                uint64_t rcx_2 = rdx * 5
                int128_t* rdi_1 = rsi + (rcx_2 << 2)
                
                if ((*(rsi + (rcx_2 << 2) + 0xc) u>> 5 & 1) == 0)
                    char rcx_3 = *(rdi_1 + 0x12)
                    int32_t rax_6
                    
                    if (rcx_3 u>= 0x20)
                        rax_6 = 0
                    else
                        rax_6 = 1 << rcx_3
                    
                    if (((rax_6 u>> 4).b & 1) != 0)
                        uint64_t rax_9 = zx.q((r15 + 2).d) * 5
                        int128_t* rbx_1 = rsi + (rax_9 << 2)
                        
                        if ((*(rsi + (rax_9 << 2) + 0xc) u>> 5 & 1) == 0)
                            char rcx_5 = *(rbx_1 + 0x12)
                            int32_t rax_11
                            
                            if (rcx_5 u>= 0x20)
                                rax_11 = 0
                            else
                                rax_11 = 1 << rcx_5
                            
                            if (((rax_11 u>> 6).b & 1) != 0)
                                if (r8 - rdx.d u>= 2)
                                    sub_142bf5140(arg3, rdx.d, r8)
                                    r10 = arg2
                                
                                int32_t rcx_7 = rdi_1[1].d
                                zmm0 = *rbx_1
                                int32_t rax_15 = rbx_1[1].d
                                *rbx_1 = *rdi_1
                                rbx_1[1].d = rcx_7
                                *rdi_1 = zmm0
                                rdi_1[1].d = rax_15

int32_t i_14 = i_1
char var_94 = 0
uint64_t rbx_2 = zx.q(r15.d)
uint32_t r9_1 = 3
int32_t var_60

if (r14[0xb].d == 0 || (r15 + 3).d u> i_1)
label_142c408bd:
    
    if (*(*r14 + 0x14) != 2 || *(rsi + r15 * 0x14 + 0x12) != 0xf)
    label_142c407f3:
        r10 = zx.q(var_94.d)
    else
        rbx_2 = zx.q((r15 + 1).d)
        
        if (rbx_2.d u< i_1)
            void* rdx_8 = rsi + 0x12 + rbx_2 * 0x14
            
            while ((*(rdx_8 - 6) u>> 5 & 1) == 0)
                char rcx_24 = *rdx_8
                char rax_35
                
                if (rcx_24 u>= 0x20)
                    rax_35 = 0
                else
                    rax_35 = (1 << rcx_24).b
                
                if ((rax_35 & 0x60) == 0)
                    break
                
                rbx_2 = zx.q(rbx_2.d + 1)
                rdx_8 += 0x14
                
                if (rbx_2.d u>= i_1)
                    break
        
        i_14 = r15.d
        r10.b = 1
else
    int32_t r8_1 = *(*r14 + 0x14)
    int32_t* rdx_1
    uint64_t r12_1
    
    if (r8_1 != 0)
    label_142c406fc:
        
        if (r8_1 != 1)
            goto label_142c408bd
        
        r12_1 = zx.q((r15 + 2).d)
        uint64_t rcx_10 = r12_1 * 5
        rdx_1 = rsi + (rcx_10 << 2)
        
        if (*(rsi + (rcx_10 << 2) + 0x12) != 6)
            goto label_142c408bd
        
        goto label_142c40724
    
    r12_1 = zx.q((r15 + 2).d)
    uint64_t rcx_8 = r12_1 * 5
    rdx_1 = rsi + (rcx_8 << 2)
    
    if ((*(rsi + (rcx_8 << 2) + 0xc) u>> 5 & 1) == 0)
        char rcx_9 = *(rdx_1 + 0x12)
        char rax_19
        
        if (rcx_9 u>= 0x20)
            rax_19 = 0
        else
            rax_19 = (1 << rcx_9).b
        
        if ((rax_19 & 0x60) == 0)
            goto label_142c40724
        
        goto label_142c406fc
    
label_142c40724:
    var_60 = *(rsi + r15 * 0x14)
    int32_t var_5c_1 = *(rsi + zx.q((r15 + 1).d) * 0x14)
    
    if (r8_1 != 1)
        int32_t var_58_2 = 0
    else
        int32_t var_58_1 = *rdx_1
    
    int32_t i = 0
    
    if (r14[3].d u> 0)
        int32_t rax_25
        
        do
            rax_25, r9_1, r10 = sub_142c2ae00(r10, zx.d(*(r14[2] + (zx.q(i) << 3))), &var_60, 2, 
                zx.d(*(r14 + 0x1c)))
            
            if (rax_25 != 0)
                goto label_142c40858
            
            r10 = arg2
            i += 1
        while (i u< r14[3].d)
        
        r9_1 = rax_25 + 3
    
    if (*(*r14 + 0x14) != 1)
    label_142c407f3_1:
        r10 = zx.q(var_94.d)
    else
        int32_t rdi_2 = 0
        
        if (r14[3].d u<= 0)
        label_142c407f3_2:
            r10 = zx.q(var_94.d)
        else
            while (true)
                int32_t rax_28
                rax_28, r9_1, r10 = sub_142c2ae00(arg2, zx.d(*(r14[2] + (zx.q(rdi_2) << 3))), 
                    &var_60, r9_1, zx.d(*(r14 + 0x1c)))
                
                if (rax_28 != 0)
                    break
                
                rdi_2 += 1
                r9_1 = rax_28 + 3
                
                if (rdi_2 u>= r14[3].d)
                    goto label_142c407f3_2
            
        label_142c40858:
            rbx_2 = zx.q(r12_1.d)
            
            if (r12_1.d u>= i_1)
            label_142c408af:
                i_14 = r15.d
                r10.b = 1
            else
                void* rdx_6 = rsi + 0x12 + r12_1 * 0x14
                
                do
                    if ((1 & *(rdx_6 - 6) u>> 5) != 0)
                        goto label_142c408af
                    
                    char rcx_21 = *rdx_6
                    char rax_32
                    
                    if (rcx_21 u>= 0x20)
                        rax_32 = 0
                    else
                        rax_32 = (1 << rcx_21).b
                    
                    if ((rax_32 & 0x60) == 0)
                        goto label_142c408af
                    
                    rbx_2 = zx.q(rbx_2.d + 1)
                    rdx_6 += 0x14
                while (rbx_2.d u< i_1)
                
                i_14 = r15.d
                r10.b = 1

int32_t rdx_4 = *(*r14 + 0xc)

if (rdx_4 == 0)
    int32_t i_16 = rbx_2.d
    
    if (r10.b == 0)
        i_14 = rbx_2.d
    
    if (rbx_2.d u< i_1)
        char* r8_8 = rsi + 0x12 + zx.q(rbx_2.d) * 0x14
        
        do
            if ((r8_8[-6] u>> 5 & 1) == 0)
                char rcx_26 = *r8_8
                int32_t rax_41
                
                if (rcx_26 u>= 0x20)
                    rax_41 = 0
                else
                    rax_41 = 1 << rcx_26
                
                if ((rax_41 & 0xb1806) != 0)
                    if (rbx_2.d u< i_16 && *(rsi + zx.q(i_16 - 1) * 0x14 + 0x12) == 6)
                        break
                    
                    i_14 = i_16
            
            i_16 += 1
            r8_8 = &r8_8[0x14]
        while (i_16 u< i_1)
    
    uint64_t r8_9 = zx.q(i_14 + 1)
    
    if (r8_9.d u< i_1)
        uint64_t i_15 = zx.q(i_1 - r8_9.d)
        char* rdx_10 = rsi + 0x12 + r8_9 * 0x14
        uint64_t i_2
        
        do
            if ((rdx_10[-6] u>> 5 & 1) == 0)
                char rcx_29 = *rdx_10
                int32_t rax_47
                
                if (rcx_29 u>= 0x20)
                    rax_47 = 0
                else
                    rax_47 = 1 << rcx_29
                
                if ((rax_47 & 0xb1806) != 0)
                    rdx_10[1] = 8
            
            rdx_10 = &rdx_10[0x14]
            i_2 = i_15
            i_15 -= 1
        while (i_2 != 1)
else if (rdx_4 == 1)
    uint64_t i_11 = zx.q(i_1)
    r9_1.b = 0
    
    do
        i_11 = zx.q(i_11.d - 1)
        uint64_t rcx_18 = i_11 * 5
        void* r8_6 = rsi + (rcx_18 << 2)
        int32_t rax_30
        
        if ((*(rsi + (rcx_18 << 2) + 0xc) u>> 5 & 1) == 0)
            char rcx_19 = *(r8_6 + 0x12)
            
            if (rcx_19 u>= 0x20)
                rax_30 = 0
            else
                rax_30 = 1 << rcx_19
        
        if ((*(rsi + (rcx_18 << 2) + 0xc) u>> 5 & 1) == 0 && (rax_30 & 0xb1806) != 0)
            char rax_36 = *(r8_6 + 0x13)
            
            if (rax_36 != 8 && (rax_36 != 0xb || r9_1.b != 0))
                i_14 = i_11.d
                break
            
            r9_1 = zx.d(r9_1.b)
            i_14 = i_11.d
            
            if (rax_36 == 8)
                r9_1 = 1
        else if (r15.d u< i_11.d && *(r8_6 + 0x12) == 6
                && *(rsi + zx.q((i_11 - 1).d) * 0x14 + 0x12) == 4)
            break
    while (i_11.d u> rbx_2.d)

if (r10.b != 0 && i_14 == r15.d)
    r10 = zx.q(r10.b)
    
    if (rbx_2.d - i_14 u<= 2)
        r10 = 0

if (r15.d u< i_14)
    char* rdx_12 = rsi + 0x13 + r15 * 0x14
    uint64_t i_9 = zx.q(i_14 - r15.d)
    uint64_t i_3
    
    do
        uint32_t rax_48 = zx.d(*rdx_12)
        rdx_12 = &rdx_12[0x14]
        
        if (rax_48 u> 3)
            rax_48 = 3
        
        rdx_12[-0x14] = rax_48.b
        i_3 = i_9
        i_9 -= 1
    while (i_3 != 1)

if (i_14 u< i_1)
    *(rsi + zx.q(i_14) * 0x14 + 0x13) = 4

uint64_t rdi_3 = zx.q(i_14 + 1)
int32_t rdx_13 = rdi_3.d

if (rdi_3.d u< i_1)
    char* rax_51 = rsi + 0x12 + rdi_3 * 0x14
    
    do
        if (*rax_51 == 7)
            uint64_t r8_10 = zx.q(rdx_13 + 1)
            
            if (r8_10.d u< i_1)
                char* rdx_15 = rsi + 0x12 + r8_10 * 0x14
                
                do
                    if ((rdx_15[-6] u>> 5 & 1) == 0)
                        char rcx_35 = *rdx_15
                        int32_t rax_53
                        
                        if (rcx_35 u>= 0x20)
                            rax_53 = 0
                        else
                            rax_53 = 1 << rcx_35
                        
                        if ((rax_53 & 0xb1806) != 0)
                            *(rsi + r8_10 * 0x14 + 0x13) = 0xd
                            break
                    
                    r8_10 = zx.q(r8_10.d + 1)
                    rdx_15 = &rdx_15[0x14]
                while (r8_10.d u< i_1)
            
            break
        
        rdx_13 += 1
        rax_51 = &rax_51[0x14]
    while (rdx_13 u< i_1)

if (r10.b != 0)
    *(rsi + r15 * 0x14 + 0x13) = 1

if (r14[1].b != 0)
    uint64_t r9_2 = zx.q(rdi_3.d)
    
    if (rdi_3.d u< i_1)
        char* rax_56 = rsi + 0x12 + rdi_3 * 0x14
        
        do
            if (*rax_56 == 4)
                uint64_t r8_11 = zx.q(i_1 - 1)
                
                if (r8_11.d u> r9_2.d)
                    char* rdx_17 = rsi + 0x12 + r8_11 * 0x14
                    
                    do
                        if ((rdx_17[-6] u>> 5 & 1) == 0)
                            char rcx_40 = *rdx_17
                            int32_t rax_58
                            
                            if (rcx_40 u>= 0x20)
                                rax_58 = 0
                            else
                                rax_58 = 1 << rcx_40
                            
                            if ((rax_58 & 0xb1806) != 0)
                                break
                        
                        if (*(arg3 + 0x3c) == 0x4b6e6461 && *rdx_17 == 4)
                            break
                        
                        r8_11 = zx.q(r8_11.d - 1)
                        rdx_17 -= 0x14
                    while (r8_11.d u> r9_2.d)
                
                uint64_t rcx_41 = r8_11 * 5
                int128_t* r12_2 = rsi + (rcx_41 << 2)
                
                if (*(rsi + (rcx_41 << 2) + 0x12) != 4 && r8_11.d u> r9_2.d)
                    uint64_t rcx_42 = r9_2 * 5
                    int32_t rbx_4 = *(rsi + (rcx_42 << 2) + 0x10)
                    var_60.o = *(rsi + (rcx_42 << 2))
                    memmove(rsi + (rcx_42 << 2), rsi + zx.q((r9_2 + 1).d) * 0x14, 
                        (r8_11.d - r9_2.d) * 0x14)
                    *r12_2 = var_60.o
                    r12_2[1].d = rbx_4
                
                break
            
            r9_2 = zx.q(r9_2.d + 1)
            rax_56 = &rax_56[0x14]
        while (r9_2.d u< i_1)

int32_t r10_2 = r15.d
char r11 = 0

if (r15.d u< i_1)
    char* r9_4 = rsi + 0x13 + r15 * 0x14
    
    do
        char rcx_45 = r9_4[-1]
        int32_t rax_61
        
        if (rcx_45 u>= 0x20)
            rax_61 = 0
        else
            rax_61 = 1 << rcx_45
        
        if ((rax_61 & 0x22078) == 0)
            char rax_66 = *r9_4
            
            if (rax_66 != 0xe)
                r11 = rax_66
        else
            *r9_4 = r11
            
            if (rcx_45 == 4 && r11 == 2)
                int32_t rdx_19 = r10_2
                
                if (r10_2 u> r15.d)
                    uint64_t r8_15
                    
                    do
                        r8_15 = zx.q(rdx_19 - 1)
                        
                        if (*(rsi + r8_15 * 0x14 + 0x13) != 2)
                            *r9_4 = *(rsi + zx.q(rdx_19 - 1) * 0x14 + 0x13)
                            break
                        
                        rdx_19 = r8_15.d
                    while (r8_15.d u> r15.d)
        
        r10_2 += 1
        r9_4 = &r9_4[0x14]
    while (r10_2 u< i_1)
    
    r14 = var_90

if (rdi_3.d u< i_1)
    char* r8_17 = rsi + 0x12 + rdi_3 * 0x14
    
    do
        int32_t rax_63
        
        if ((1 & r8_17[-6] u>> 5) == 0)
            char rcx_48 = *r8_17
            
            if (rcx_48 u>= 0x20)
                rax_63 = 0
            else
                rax_63 = 1 << rcx_48
        
        if ((1 & r8_17[-6] u>> 5) == 0 && (rax_63 & 0xb1806) != 0)
            uint64_t r9_5 = zx.q(i_14 + 1)
            
            if (r9_5.d u< rdi_3.d)
                char* rdx_21 = rsi + 0x13 + r9_5 * 0x14
                uint64_t j_1 = zx.q(rdi_3.d - r9_5.d)
                uint64_t j
                
                do
                    if (*rdx_21 u< 0xe)
                        *rdx_21 = r8_17[1]
                    
                    rdx_21 = &rdx_21[0x14]
                    j = j_1
                    j_1 -= 1
                while (j != 1)
            
            i_14 = rdi_3.d
        else if (*r8_17 == 7)
            i_14 = rdi_3.d
        
        rdi_3 = zx.q(rdi_3.d + 1)
        r8_17 = &r8_17[0x14]
    while (rdi_3.d u< i_1)
    
    r14 = var_90

int64_t* r11_1 = rsi + r15 * 0x14
int32_t rcx_53 = r15.d
char rax_68 = *(r11_1 + 0xf)
void* r12_3 = r11_1 + 0xf
var_90 = r11_1
var_60.q = r12_3

if (r15.d u< i_1)
    void* rdx_22 = r12_3
    
    do
        rdx_22 += 0x14
        char rax_69 = rcx_53.b - r15.b
        rcx_53 += 1
        *(rdx_22 - 0x14) = rax_69
    while (rcx_53 u< i_1)

int32_t rbp = 1
int32_t result_1 = i_1 - r15.d
var_94.d = result_1

if (result_1 u> 1)
    void* r12_4 = r11_1 + 0x14
    
    do
        int32_t rdx_23 = rbp
        
        if (rbp != 0)
            uint32_t r10_3 = zx.d(*(r12_4 + 0x13))
            uint64_t r9_6
            
            do
                r9_6 = zx.q(rdx_23 - 1)
                uint32_t r8_18 = zx.d(*(r11_1 + r9_6 * 0x14 + 0x13))
                
                if (r8_18 u< r10_3)
                    break
                
                int32_t rax_70
                rax_70.b = r8_18 != r10_3
                
                if (rax_70 s<= 0)
                    break
                
                rdx_23 = r9_6.d
            while (r9_6.d != 0)
            
            if (rbp != rdx_23)
                zmm0 = *r12_4
                int32_t rdi_4 = *(r12_4 + 0x10)
                void* rbx_6 = r11_1 + zx.q(rdx_23) * 0x14
                memmove(r11_1 + zx.q(rdx_23 + 1) * 0x14, rbx_6, (rbp - rdx_23) * 0x14)
                r11_1 = var_90
                *rbx_6 = zmm0
                *(rbx_6 + 0x10) = rdi_4
                result_1 = var_94.d
        
        rbp += 1
        r12_4 += 0x14
    while (rbp u< result_1)
    
    i_1 = arg5
    r12_3 = r11_1 + 0xf

int32_t i_8 = i_1
uint64_t result = zx.q(r15.d)

if (r15.d u< i_1)
    void* rcx_57 = r11_1 + 0x13
    
    do
        if (*rcx_57 == 4)
            i_8 = result.d
            break
        
        result = zx.q(result.d + 1)
        rcx_57 += 0x14
    while (result.d u< i_1)

if (r14[1].b != 0 || result_1 u> 0x7f)
    result = zx.q(i_1 - i_8)
    
    if (result.d u>= 2)
        result = sub_142bf5140(arg3, i_8, i_1)
else
    int32_t i_4 = i_8
    
    if (i_8 u< i_1)
        char* rbp_2 = rsi + 0xf + zx.q(i_8) * 0x14
        
        do
            result = zx.q(*rbp_2)
            
            if (result.b != 0xff)
                int32_t i_12 = i_4
                result = zx.q(zx.d(result.b) + r15.d)
                
                if (result.d != i_4)
                    do
                        uint64_t rcx_59 = result * 5
                        
                        if (i_12 u<= result.d)
                            i_12 = result.d
                        
                        result = zx.q(zx.d(*(rsi + (rcx_59 << 2) + 0xf)) + r15.d)
                        *(rsi + (rcx_59 << 2) + 0xf) = 0xff
                    while (result.d != i_4)
                    
                    if (i_4 != i_12)
                        result = zx.q(i_12 + 1 - i_4)
                        
                        if (result.d u>= 2)
                            result = sub_142bf5140(arg3, i_4, i_12 + 1)
            
            i_4 += 1
            rbp_2 = &rbp_2[0x14]
        while (i_4 u< i_1)
        
        r12_3 = var_60.q
    
    result_1 = var_94.d

if (r15.d u< i_1)
    result = zx.q(result_1)
    uint64_t i_5
    
    do
        *r12_3 = rax_68
        r12_3 += 0x14
        i_5 = result
        result -= 1
    while (i_5 != 1)

int64_t* r9_7 = var_90
int32_t rdx_26 = r15.d

if (r15.d u< i_1)
    void* rcx_62 = r9_7 + 4
    
    while (*(rcx_62 + 0xf) == 1)
        result = zx.q(r14[0xb].d)
        rdx_26 += 1
        *rcx_62 |= result.d
        rcx_62 += 0x14
        
        if (rdx_26 u>= i_1)
            break

int32_t r8_22 = *(r14 + 0x6c)

if (r14[1].b == 0)
    result = *r14
    
    if (*(result + 0x18) == 0)
        r8_22 |= *(r14 + 0x64)

if (r15.d u< i_8)
    void* rcx_63 = r9_7 + 4
    uint64_t i_13 = zx.q(i_8 - r15.d)
    uint64_t i_6
    
    do
        *rcx_63 |= r8_22
        rcx_63 += 0x14
        i_6 = i_13
        i_13 -= 1
    while (i_6 != 1)

uint64_t rbp_3 = zx.q(i_8 + 1)
int32_t r8_25 = r14[0xe].d | r14[0xd].d | *(r14 + 0x64)

if (rbp_3.d u< i_1)
    result = zx.q(rbp_3.d)
    uint64_t i_10 = zx.q(i_1 - rbp_3.d)
    int32_t* rdx_30 = rsi + (((rbp_3 << 2) + 1 + result) << 2)
    uint64_t i_7
    
    do
        *rdx_30 |= r8_25
        rdx_30 = &rdx_30[5]
        i_7 = i_10
        i_10 -= 1
    while (i_7 != 1)

if (r14[1].b != 0)
    result = arg3
    
    if (*(result + 0x3c) == 0x44657661)
        uint64_t rdx_31 = zx.q((r15 + 1).d)
        
        while (rdx_31.d u< i_8)
            result = zx.q((rdx_31 - 1).d) * 5
            void* r9_8 = rsi + (result << 2)
            
            if (*(rsi + (result << 2) + 0x12) == 0x10)
                uint64_t rcx_65 = rdx_31 * 5
                void* r8_26 = rsi + (rcx_65 << 2)
                
                if (*(rsi + (rcx_65 << 2) + 0x12) == 4)
                    result = zx.q((rdx_31 + 1).d)
                    
                    if (result.d == i_8 || *(rsi + result * 0x14 + 0x12) != 6)
                        *(r9_8 + 4) |= *(r14 + 0x64)
                        result = zx.q(*(r14 + 0x64))
                        *(r8_26 + 4) |= result.d
            
            rdx_31 = zx.q(rdx_31.d + 1)

if (r14[0xc].d != 0)
    result = zx.q(i_8 + 2)
    
    if (result.d u< i_1)
        uint64_t rdi_5 = zx.q((rbp_3 + 1).d)
        
        while (rdi_5.d u< i_1)
            int32_t rbx_7 = 0
            var_90.d = *(rsi + rbp_3 * 0x14)
            result = zx.q(*(rsi + rdi_5 * 0x14))
            var_90:4.d = result.d
            
            if (r14[5].d u> 0)
                while (true)
                    result = sub_142c2ae00(arg2, zx.d(*(r14[4] + (zx.q(rbx_7) << 3))), &var_90, 2, 
                        zx.d(*(r14 + 0x2c)))
                    
                    if (result.d != 0)
                        uint64_t rcx_74 = rbp_3 * 5
                        *(rsi + (rcx_74 << 2) + 4) |= r14[0xc].d
                        void* rcx_75 = rsi + zx.q((rbp_3 + 1).d) * 0x14
                        result = zx.q(r14[0xc].d)
                        *(rcx_75 + 4) |= result.d
                        break
                    
                    rbx_7 += 1
                    
                    if (rbx_7 u>= r14[5].d)
                        goto label_142c410f5
                
                break
            
        label_142c410f5:
            rbp_3 = zx.q(rbp_3.d + 1)
            rdi_5 = zx.q(rdi_5.d + 1)

uint64_t r9_9 = zx.q((r15 + 1).d)

if (r9_9.d u< i_1)
    char* r10_5 = rsi + 0x12 + r9_9 * 0x14
    
    do
        result.b = r10_5[-6] u>> 5
        
        if ((result.b & 1) == 0)
            char r8_30 = *r10_5
            
            if (r8_30 u>= 0x20)
                result = 0
            else
                result = zx.q(1 << r8_30)
            
            if ((result.b & 0x60) != 0)
                uint64_t rdx_34 = zx.q(r9_9.d)
                
                while (true)
                    rdx_34 = zx.q(rdx_34.d - 1)
                    
                    if (r8_30 == 5)
                        uint64_t rcx_78 = rdx_34 * 5
                        result = zx.q(not.d(*(r14 + 0x6c)))
                        *(rsi + (rcx_78 << 2) + 4) &= result.d
                    
                    if (rdx_34.d u<= r15.d)
                        break
                    
                    uint64_t rcx_79 = rdx_34 * 5
                    result.b = *(rsi + (rcx_79 << 2) + 0xc) u>> 5
                    
                    if ((result.b & 1) == 0)
                        char rcx_80 = *(rsi + (rcx_79 << 2) + 0x12)
                        
                        if (rcx_80 u>= 0x20)
                            result = 0
                        else
                            result = zx.q(1 << rcx_80)
                        
                        if ((result.d & 0xb1806) != 0)
                            break
        
        r9_9 = zx.q(r9_9.d + 1)
        r10_5 = &r10_5[0x14]
    while (r9_9.d u< i_1)

__security_check_cookie(rax_1 ^ &var_c8)
return result
