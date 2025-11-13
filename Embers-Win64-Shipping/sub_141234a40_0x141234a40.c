// 函数: sub_141234a40
// 地址: 0x141234a40
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_8d8
int64_t rax_1 = __security_cookie ^ &var_8d8
int32_t i_4 = *arg3
void** r15 = arg1
void* rbx = &arg3[4]
int64_t* rcx = arg4

if (arg4 == 0)
    rcx = nullptr

int32_t var_874 = arg3[3]
uint64_t rdi = arg2
int32_t i_10 = i_4
int64_t* var_7f0 = &data_143ec4c60
uint128_t zmm6

if (data_1439b55bc != 0 && data_143f0f1c5 != 0)
    int64_t rsi_1 = r15[0x7d]
    void*** rcx_4 = (*(rdi + 0x30) + 7) & 0xfffffffffffffff8
    void* rax_4 = &rcx_4[3]
    
    if (rax_4 u> *(rdi + 0x38))
        zmm6 = sub_140b0e3d0(rdi + 0x30, 0x20)
        rcx_4 = (*(rdi + 0x30) + 7) & 0xfffffffffffffff8
        rax_4 = &rcx_4[3]
    
    *(rdi + 0x30) = rax_4
    int64_t* rax_5 = *(rdi + 8)
    *(rdi + 0x14) += 1
    *rax_5 = rcx_4
    *(rdi + 8) = &rcx_4[1]
    rcx_4[1] = 0
    *rcx_4 = &data_142f11608
    rcx_4[2] = rsi_1

int32_t rsi_2 = *arg3
int32_t r12 = arg3[6]
char rax_7 = sub_1410c25d0(r15)
char rax_8

if (rax_7 != 0)
    rax_8 = sub_141090d60(r15)

char var_8b8
uint64_t var_8b0
void* r12_1
int64_t* r14_1
int128_t zmm7
int128_t zmm8
int128_t zmm9
int128_t zmm10

if (rax_7 == 0 || rax_8 == 0)
    if (sub_1414c4ab0(r15) == 0)
        goto label_141234ca7
    
    void** rdx_4 = arg1
    r15.b = 0
    int32_t i = 0
    
    if (rdx_4[0x15].d s> 0)
        do
            if (sub_142391f10(sx.q(i) * 0x5240 + rdx_4[0x14]) != 0)
                r15.b = 1
                break
            
            rdx_4 = arg1
            i += 1
        while (i s< rdx_4[0x15].d)
    
    if (sub_1414e0a60(arg1, arg3[1]) == 0)
        r15 = arg1
    label_141234ca7:
        rdi = arg2
        
        if (r12 s<= 0)
            r12_1 = &arg3[0x10]
            r14_1 = var_7f0
        else
            r14_1 = var_7f0
            var_8b8 = 1
            sub_141394ae0(r14_1, rdi, 0, 0x21, var_8b8)
            zmm7, zmm8, zmm9, zmm10 = sub_1412379e0(r15, rdi, rbx)
            zmm6 = sub_14139bc50(r14_1, rdi)
            r12_1 = &arg3[0x10]
    else
        bool cond:2_1 = r15.b != 0
        r15 = arg1
        
        if (cond:2_1)
            goto label_141234ca7
        
        rsi_2 = arg3[1]
        r12_1 = &arg3[0x10]
        rdi = arg2
        var_8b0 = rbx
        var_8b8.d = rsi_2
        zmm6, zmm7, zmm8, zmm9, zmm10 = sub_1414d9a50(r15, rdi, r12_1.d, *arg3, var_8b8, var_8b0)
        r14_1 = var_7f0
else
    rsi_2 = arg3[2]
    zmm6, zmm7, zmm8, zmm9, zmm10 = sub_14108dc90(r15, rdi, arg3)
    r12_1 = &arg3[0x10]
    r14_1 = var_7f0

char var_8a8
int128_t var_7d8
int64_t var_780
void** var_740
int16_t var_738

if (arg4 == 0)
    var_8b8 = 1
    sub_141394ae0(r14_1, rdi, 0, 0x21, var_8b8)
    
    if (rsi_2 s< var_874)
        int64_t rdi_2 = sx.q(rsi_2) * 0x18
        
        do
            var_8a8 = 0
            var_8b0.b = 0
            var_8b8.q = 0
            zmm7, zmm8, zmm9, zmm10 =
                sub_141231ec0(r15, arg2, *(rdi_2 + *r12_1 + 8), nullptr, var_8b8, var_8b0.b)
            rsi_2 += 1
            rdi_2 += 0x18
        while (rsi_2 s< var_874)
        
        rdi = arg2
        r14_1 = var_7f0
    
    zmm6 = sub_14139bc50(r14_1, rdi)
else if (rsi_2 s< var_874)
    int64_t r14_4 = sx.q(rsi_2) * 0x18
    
    do
        var_7d8 = zx.o(0)
        void* r15_1 = *(r14_4 + *(arg3 + 0x40) + 8)
        var_8b0 = &var_780
        var_8b8.q = arg4
        var_780 = 0
        int64_t* rax_17 = sub_1411e9d70(&var_740, arg2, &r15[0x14], r15_1, var_8b8, var_8b0)
        
        if (&var_7d8 != rax_17)
            var_7d8.q = *rax_17
            *rax_17 = 0
        
        sub_1405d1600(&var_7d8:8, &rax_17[1])
        sub_1405ec8a0(&var_738)
        void** rdi_3 = var_740
        
        if (rdi_3 != 0)
            rdi_3[0x1a].d -= 1
            
            if (rdi_3[0x1a].d == 1)
                sub_1405d16e0(rdi_3, nullptr)
                sub_14081d930(&rdi_3[1], nullptr)
                sub_1405d16e0(&rdi_3[2], nullptr)
                sub_141096260(&rdi_3[3], 0)
                sub_141096040(&rdi_3[0xd], 0)
        
        sub_141394ae0(var_7f0, arg2, 0, 0x21, 1)
        r15 = arg1
        var_8a8 = 0
        var_8b0.b = 0
        var_8b8.q = rcx
        zmm7, zmm8, zmm9, zmm10 = sub_141231ec0(r15, arg2, r15_1, nullptr, var_8b8, var_8b0.b)
        sub_14139bc50(var_7f0, arg2)
        int64_t rcx_34 = var_780
        
        if (rcx_34 != 0)
            (*(*rcx_34 + 0x38))(rcx_34)
        
        zmm6 = sub_1405ec8a0(&var_7d8:8)
        int64_t* rdi_4 = var_7d8.q
        
        if (rdi_4 != 0)
            rdi_4[0x1a].d -= 1
            
            if (rdi_4[0x1a].d == 1)
                sub_1405d16e0(rdi_4, nullptr)
                sub_14081d930(&rdi_4[1], nullptr)
                sub_1405d16e0(&rdi_4[2], nullptr)
                sub_141096260(&rdi_4[3], 0)
                zmm6 = sub_141096040(&rdi_4[0xd], 0)
        
        rsi_2 += 1
        r14_4 += 0x18
    while (rsi_2 s< var_874)
    
    i_4 = i_10

uint128_t var_58 = zmm6
int32_t j_6
void* var_7f8

if (data_1439b70a0 != 0 && data_1439c7a15 != 0)
    int32_t rax_20 = var_874
    
    if (rax_20 != 0)
        var_8b8.d = rax_20
        zmm7, zmm8, zmm9, zmm10 = sub_1414d5c70(r15, arg2, &arg3[0x10], i_4, var_8b8)
    
    if (*(rbx + 8) s> 0)
        int64_t i_14 = sx.q(r15[0x15].d)
        int64_t rax_21 = 0x30 * i_14
        
        if (mulu.dp.q(0x30, i_14) u>> 0x40 != zx.o(0))
            rax_21 = -1
        
        int64_t rax_22 = rax_21 + 8
        
        if (rax_21 u>= -8)
            rax_22 = -1
        
        int64_t* rax_23 = j_sub_140a82f30(rax_22)
        void* rax_24
        
        if (rax_23 == 0)
            rax_24 = nullptr
            var_7f8 = nullptr
        else
            *rax_23 = i_14
            rax_24 = &rax_23[1]
            var_7f8 = rax_24
            void* rcx_43 = rax_24
            
            if (i_14 != 0)
                void* rax_25 = rax_24 + 0x1c
                int64_t i_1
                
                do
                    *rcx_43 = 0
                    rcx_43 += 0x30
                    __builtin_memset(rax_25 - 0x14, 0, 0x18)
                    *(rax_25 + 4) = 0
                    *(rax_25 + 0xc) = 0
                    rax_25 += 0x30
                    i_1 = i_14
                    i_14 -= 1
                while (i_1 != 1)
                rax_24 = var_7f8
        
        bool cond:6_1 = *(rbx + 8) s<= 0
        int32_t j_8 = 0
        j_6 = 0
        int32_t rax_36
        
        if (cond:6_1)
            rax_36 = r15[0x15].d
        else
            int64_t* rdx_16 = nullptr
            int64_t r12_3 = 0
            int64_t* var_7e0_1 = nullptr
            
            while (true)
                int32_t r14_5 = 0
                
                if (r15[0x15].d s<= 0)
                    rax_36 = r15[0x15].d
                else
                    void* rdi_5 = rax_24 + 0x18
                    
                    do
                        int64_t j_9
                        
                        if (*(rbx + 8) != *(rbx + 0x18))
                            int32_t rcx_44 = 0
                            int64_t rdx_17 = *(rdx_16 + *(rbx + 0x20))
                            
                            if ((rdx_17 u>> 0x20).d != 0)
                                rcx_44 = r14_5
                            
                            j_9 = sx.q((rdx_17.d & 0x7fffffff) + rcx_44)
                        else
                            j_9 = sx.q(j_8)
                        
                        int64_t rsi_3 = sx.q(*(rdi_5 - 0x10))
                        int64_t rcx_45 = j_9 * 3
                        int64_t rax_31 = *(rbx + 0x10)
                        zmm6 = zx.o(*(rax_31 + (rcx_45 << 2)))
                        int32_t r13_1 = *(rax_31 + (rcx_45 << 2) + 8)
                        int128_t* r15_2 = *rbx
                        int32_t rax_32 = (rsi_3 + 1).d
                        *(rdi_5 - 0x10) = rax_32
                        
                        if (rax_32 s> *(rdi_5 - 0xc))
                            zmm6 = sub_14083a9e0(rdi_5 - 0x18, rsi_3.d)
                        
                        int64_t rcx_47 = *(rdi_5 - 0x18)
                        int128_t* rdx_21 = rsi_3 * 0x1c
                        *(rdx_21 + rcx_47) = *(r15_2 + r12_3)
                        *(rdx_21 + rcx_47 + 0x10) = *(r15_2 + r12_3 + 0x10)
                        *(rdx_21 + rcx_47 + 0x18) = *(r15_2 + r12_3 + 0x18)
                        int64_t rsi_4 = sx.q(*rdi_5)
                        int32_t rax_34 = (rsi_4 + 1).d
                        *rdi_5 = rax_34
                        
                        if (rax_34 s> *(rdi_5 + 4))
                            zmm6 = sub_14083aa30(rdi_5 - 8, rsi_4.d)
                        
                        int64_t rax_35 = *(rdi_5 - 8)
                        int64_t rcx_49 = rsi_4 * 3
                        r15 = arg1
                        r14_5 += 1
                        rdx_16 = var_7e0_1
                        rdi_5 += 0x30
                        *(rax_35 + (rcx_49 << 2)) = zmm6.q
                        *(rax_35 + (rcx_49 << 2) + 8) = r13_1
                        rax_36 = r15[0x15].d
                        j_8 = j_6
                    while (r14_5 s< rax_36)
                
                j_8 += 1
                rdx_16 = &rdx_16[1]
                r12_3 += 0x1c
                j_6 = j_8
                var_7e0_1 = rdx_16
                
                if (j_8 s>= *(rbx + 8))
                    break
                
                rax_24 = var_7f8
            
            i_4 = i_10
        
        void* rsi_5 = var_7f8
        int32_t i_2 = 0
        
        if (rax_36 s> 0)
            void* rbx_2 = rsi_5 + 8
            
            do
                if (*rbx_2 s> 0)
                    int64_t i_11 = sx.q(i_2)
                    var_8b8.d = i_2
                    zmm7, zmm8, zmm9, zmm10 = sub_1414d3aa0(r15, arg2, i_11 * 0x30 + rsi_5, 
                        i_11 * 0x5240 + r15[0x14], var_8b8)
                
                i_2 += 1
                rbx_2 += 0x30
            while (i_2 s< r15[0x15].d)
            
            i_4 = i_10
        
        if (rsi_5 != 0)
            j_sub_140a74f90(rsi_5 - 8)

void** r12_4 = arg1

if (sub_1405fba70((*U"1111")[sx.q(r12_4[0x76].d)], 3) != 0)
    void* rdx_27 = &arg3[0x10]
    char rcx_53 = 0
    int64_t rdi_6 = sx.q(var_874)
    
    if (rdi_6.d s< *(rdx_27 + 8))
        int64_t rbx_4 = rdi_6 * 0x18
        int32_t i_3
        
        do
            r15 = arg2
            void* r8_11 = *(rbx_4 + *rdx_27 + 8)
            void* rax_41 = *(r8_11 + 0x20)
            
            if (rax_41 != 0 && (*(rax_41 + 0x13a) & 6) == 6)
                zmm7, zmm8, zmm9, zmm10 = sub_141491970(r12_4, r15, r8_11)
                rdx_27 = &arg3[0x10]
                rcx_53 = 1
            
            i_3 = *(rdx_27 + 8)
            rdi_6 = zx.q(rdi_6.d + 1)
            rbx_4 += 0x18
        while (rdi_6.d s< i_3)
        
        if (rcx_53 != 0 && i_4 s< i_3)
            int64_t r14_7 = sx.q(i_4) * 0x18
            
            do
                void* rdi_7 = *(r14_7 + *rdx_27 + 8)
                
                if (rdi_7 != 0)
                    void* rax_45 = *(rdi_7 + 0x20)
                    
                    if (rax_45 != 0 && (*(rax_45 + 0x13a) & 6) == 2)
                        int32_t j = 0
                        
                        if (r12_4[0x15].d s> 0)
                            int64_t rbx_5 = 0
                            
                            do
                                void* r9_6 = r12_4[0x14] + rbx_5
                                
                                if (((*(rdi_7 + 0x64) & 2) == 0 || (
                                        *(sx.q(*(rdi_7 + 0x28)) * 0x78 + *(r9_6 + 0x18d0) + 0x40)
                                        & 1) != 0) && (*(r9_6 + 0xd79) == 0
                                        || (*(*(rdi_7 + 0x20) + 0x138) & 8) != 0))
                                    int64_t* r8_12 = *(rdi_7 + 0x20)
                                    
                                    if ((*(r8_12 + 0x13d) & 1) != 0
                                            || (*(r9_6 + 0x497c) & 0x100) != 0)
                                        void* rax_50 = *(r9_6 + 8)
                                        
                                        if (rax_50 != 0 && *(r9_6 + 0x1548) s>= 3
                                                && *(rax_50 + 0x4c0) == 0)
                                            void* rcx_56 = *(rax_50 + 0x4b8)
                                            
                                            if (rcx_56 != 0 && r8_12 != 0)
                                                sub_14122b5e0(rcx_56, r15, r8_12, r9_6)
                                
                                j += 1
                                rbx_5 += 0x5240
                            while (j s< r12_4[0x15].d)
                            
                            rdx_27 = &arg3[0x10]
                
                i_4 += 1
                r14_7 += 0x18
            while (i_4 s< *(rdx_27 + 8))
    
    int32_t i_5 = 0
    
    if (r12_4[0x15].d s> 0)
        int64_t rbx_6 = 0
        
        do
            void* r8_14 = r12_4[0x14] + rbx_6
            void* rax_51 = *(r8_14 + 8)
            
            if (rax_51 != 0 && *(r8_14 + 0x1548) s>= 3 && *(rax_51 + 0x4c0) == 0)
                void* rcx_57 = *(rax_51 + 0x4b8)
                
                if (rcx_57 != 0)
                    zmm7 = sub_141246530(rcx_57, arg2, r8_14)
            
            i_5 += 1
            rbx_6 += 0x5240
        while (i_5 s< r12_4[0x15].d)

int32_t rbx_7 = *(data_143e83138 + 4)
void* rax_53 = sub_141455400()
void* rcx_58 = data_143ed5ae0

if (rbx_7 == 1)
    rcx_58 = rax_53

int64_t var_848 = 0
int32_t rdi_8 = 0
int64_t var_840 = 0
int64_t var_7e0_2
__builtin_memset(&var_7e0_2, 0, 0x18)
int32_t var_7c0 = 0
void* rax_54 = data_143e83150
var_7f8 = rcx_58
int32_t rcx_59 = *(rax_54 + 4)
int32_t rdx_32

if (rcx_59 s>= 1)
    rdx_32 = 4
    
    if (rcx_59 s< 4)
        rdx_32 = rcx_59
else
    rdx_32 = 1

int64_t rax_56 = zx.q(*(data_143e83168 + 4))
int32_t var_748 = rax_56.d
char var_86c
int64_t* rdi_18

if (rbx_7 != 0 && rdx_32 s> 1)
    if (r12_4[0x15].d == 1)
        goto label_1412353f1
    
    var_86c = 0
    rdi_18 = arg4
else if (rax_56.d s<= 1 || r12_4[0x15].d != 1)
    var_86c = 0
    rdi_18 = arg4
else
label_1412353f1:
    void* rbx_8 = r12_4[0x14]
    var_86c = 1
    void* r13_3
    
    if ((*(rbx_8 + 0x497c) & 1) != 0)
        r13_3 = &arg3[0x10]
    else
        sub_141224ad0(*(rbx_8 + 0x15a8) + 0xa90, 0)
        r13_3 = &arg3[0x10]
        int64_t* rbx_10 = *(rbx_8 + 0x15a8) + 0xa90
        int32_t rdi_9 = *(r13_3 + 8)
        
        if (rdi_9 s> rbx_10[1].d - *(rbx_10 + 0x34))
            sub_141238070(rbx_10, rdi_9)
            
            if (rdi_9 u< 4)
                rax_56 = 1
            else
                uint32_t rdi_10 = rdi_9 u>> 1
                uint64_t rflags_1
                int32_t temp0_2
                temp0_2, rflags_1 = _bit_scan_reverse(rdi_10 + 8)
                int32_t rcx_63
                
                if (rdi_10 == 0xfffffff8)
                    rcx_63 = 0x20
                else
                    rcx_63 = 0x1f - temp0_2
                
                int32_t rcx_65 = rcx_63 << 0x1a s>> 0x1f
                uint64_t rflags_2
                char temp0_3
                temp0_3, rflags_2 = _bit_scan_reverse(rdi_10 + 7)
                
                if (rcx_65 == 0)
                    rax_56 = 1
                else
                    rax_56 = zx.q(1 << ((not.d(rcx_65)).b & (0x20 - (0x1f - temp0_3))))
            
            int32_t rcx_68 = rbx_10[9].d
            
            if (rcx_68 == 0 || rcx_68 s< rax_56.d)
                rbx_10[9].d = rax_56.d
                sub_140837330(rbx_10)
        
        rdi_8 = var_840.d
    
    int64_t rbx_11 = sx.q(*(r13_3 + 8))
    
    if (rbx_11.d s> rdi_8)
        int32_t rbx_12 = rbx_11.d - rdi_8
        int64_t rsi_6 = sx.q(rdi_8)
        rdi_8 = rsi_6.d + rbx_12
        var_840.d = rdi_8
        
        if (rdi_8 s> 0)
            sub_1405a4d70(&var_848)
            rdi_8 = var_840.d
        
        if (rbx_12 != 0)
            __builtin_memset(var_848 + (rsi_6 << 3), 0, zx.q(rbx_12) << 3)
            rdi_8 = var_840.d
    else if (rbx_11.d s< rdi_8)
        int32_t i_17 = rdi_8 - rbx_11.d
        
        if (rdi_8 != rbx_11.d)
            int32_t i_13 = i_17
            int64_t rdi_13 = var_848 + (rbx_11 << 3)
            int32_t i_6
            
            do
                int64_t* rcx_72 = *rdi_13
                
                if (rcx_72 != 0)
                    (*(*rcx_72 + 0x38))(rcx_72)
                
                rdi_13 += 8
                i_6 = i_13
                i_13 -= 1
            while (i_6 != 1)
            int32_t rax_63 = var_840.d
            int32_t rcx_74 = rax_63 - i_17
            
            if (rcx_74 != rbx_11.d)
                int64_t rax_65 = var_848
                memmove(rax_65 + (rbx_11 << 3), rax_65 + (sx.q(i_17 + rbx_11.d) << 3), 
                    (rcx_74 - rbx_11.d) << 3)
                rax_63 = var_840.d
            
            var_840.d = rax_63 - i_17
            sub_1405c53d0(&var_848)
            rdi_8 = var_840.d
    
    int64_t rsi_7 = sx.q(*(r13_3 + 8))
    
    if (rsi_7.d s> rdi_8)
        int32_t rsi_8 = rsi_7.d - rdi_8
        int32_t rax_67 = rdi_8 + rsi_8
        var_840.d = rax_67
        
        if (rax_67 s> var_840:4.d)
            sub_1405a4d70(&var_848)
        
        if (rsi_8 != 0)
            __builtin_memset(var_848 + (sx.q(rdi_8) << 3), 0, zx.q(rsi_8) << 3)
    else if (rsi_7.d s< rdi_8)
        int32_t i_16 = rdi_8 - rsi_7.d
        
        if (rdi_8 != rsi_7.d)
            int32_t i_15 = i_16
            int64_t rbx_13 = var_848 + (rsi_7 << 3)
            int32_t i_7
            
            do
                int64_t* rcx_82 = *rbx_13
                
                if (rcx_82 != 0)
                    (*(*rcx_82 + 0x38))(rcx_82)
                
                rbx_13 += 8
                i_7 = i_15
                i_15 -= 1
            while (i_7 != 1)
            int32_t rax_70 = var_840.d
            int32_t rcx_84 = rax_70 - i_16
            
            if (rcx_84 != rsi_7.d)
                int64_t rax_72 = var_848
                memmove(rax_72 + (rsi_7 << 3), rax_72 + (sx.q(i_16 + rsi_7.d) << 3), 
                    (rcx_84 - rsi_7.d) << 3)
                rax_70 = var_840.d
            
            var_840.d = rax_70 - i_16
            sub_1405c53d0(&var_848)
    
    rdi_18 = arg4
    
    if (rdi_18 != 0 && rdi_18[3].d s> 0 && *(rdi_18[2] + 8) s> 0)
        int64_t rsi_9 = sx.q(*(r13_3 + 8))
        int32_t temp10_1 = rsi_9.d
        
        if (temp10_1 s> 0)
            var_7d8:8.d = rsi_9.d
            sub_1405a4d70(&var_7d8)
            int64_t r8_20 = var_7d8.q
            __builtin_memset(r8_20, 0, zx.q(rsi_9.d) << 3)
            var_7c0 = var_7d8:8.d
            var_7e0_2 = r8_20
            rdi_18 = arg4
        else if (temp10_1 s< 0)
            int32_t i_12 = neg.d(rsi_9.d)
            
            if (i_12 != 0)
                int64_t rdi_17 = rsi_9 << 3
                int32_t i_8
                
                do
                    int64_t* rcx_92 = *rdi_17
                    
                    if (rcx_92 != 0)
                        (*(*rcx_92 + 0x38))(rcx_92)
                    
                    rdi_17 += 8
                    i_8 = i_12
                    i_12 -= 1
                while (i_8 != 1)
                var_7d8:8.d = rsi_9.d
                sub_1405c53d0(&var_7d8)
                var_7c0 = var_7d8:8.d
                var_7e0_2 = var_7d8.q
                rdi_18 = arg4

int64_t rdx_41 = sx.q(var_874)
void* rbx_15 = &arg3[0x10]
char var_876 = 0
int64_t* var_818 = nullptr
int64_t* var_800 = nullptr
int32_t var_860 = rdx_41.d

if (rdx_41.d s< *(rbx_15 + 8))
    uint64_t r13_4 = arg2
    int64_t rax_76 = rdx_41
    int128_t var_68_1 = zmm7
    int128_t var_78_1 = zmm8
    int128_t var_88_1 = zmm9
    int128_t var_98_1 = zmm10
    zmm10 = zx.o(0)
    var_780 = rdx_41
    int32_t i_9
    
    do
        int64_t rcx_94 = rax_76 * 3
        int64_t rax_77 = *rbx_15
        bool cond:16_1 = (*(rax_77 + (rcx_94 << 3)) & 0x10) == 0
        int64_t r14_9 = rax_77 + (rcx_94 << 3)
        void* rsi_10 = *(r14_9 + 8)
        void* var_850 = rsi_10
        int64_t var_7b8_1 = r14_9
        
        if (not(cond:16_1))
            rax_77 = sub_1413fb0b0(rsi_10)
        
        if (cond:16_1 || rax_77.b != 0)
            rbx_15.b = 0
        else
            rbx_15.b = 1
        
        r15.b = 0
        uint32_t rcx_97
        rcx_97.b = (*r14_9 u>> 3).b & 1
        char var_86a_1 = rbx_15.b
        uint32_t var_770 = rcx_97
        char var_869 = 0
        char var_875_1
        
        if (rbx_15.b != 0)
            var_875_1 = 1
        
        if (rbx_15.b == 0 || rdi_18 == 0)
            var_875_1 = 0
        
        char var_878_1
        
        if (rbx_15.b != 0 && rdi_18 != 0)
            var_878_1 = 1
        
        if (rbx_15.b == 0 || rdi_18 == 0 || (*(*(rsi_10 + 0x20) + 0x139) & 2) == 0)
            var_878_1 = 0
        
        char var_8a0
        int128_t var_838
        int128_t var_7b0
        uint128_t var_7a0
        int128_t zmm0_2
        
        if (rbx_15.b != 0 || rcx_97.b != 0)
            if (var_818 == 0)
                int64_t r9_8
                rax_77, r9_8 = sub_1413934a0(var_7f0, r13_4, &var_818)
                rax_77.b = 0
                var_876 = 0
                
                if (rdi_18 != 0)
                    r9_8.b = 1
                    sub_1413934a0(var_7f0, r13_4, &var_800)
            
            if (rbx_15.b != 0)
                uint64_t rbx_16 = *(rsi_10 + 0x20)
                int32_t rax_78
                rax_78, zmm0_2 = sub_1410f8230()
                
                if (rax_78 s> 0 || (data_1439b6354 s> 0 && rax_78 s< 0))
                    rdi_18.b = 1
                else
                    rdi_18.b = 0
                
                int64_t rax_79
                uint64_t rdx_44
                
                if (data_143f0f21f != 0)
                    rdx_44 = zx.q(data_143f0f1a0)
                    rax_79 = sx.q(rdx_44.d)
                
                if (data_143f0f21f == 0
                        || ((*(rax_79 * 0x14 + &data_143f025fc) u>> 0x13).b & 1) == 0
                        || not(test_bit(data_143f13cd8, rdx_44)) || rdi_18.b == 0
                        || (*(rbx_16 + 0x139) & 0x10) == 0)
                    rbx_16.b = 0
                else
                    rbx_16.b = 1
                
                int64_t* rcx_101 = *(rsi_10 + 0x20)
                r15 = &r12_4[0x14]
                void* r13_5 = *r15
                int32_t var_7c8 = 1
                char var_877_1 = rbx_16.b
                var_7c8 = *(rcx_101 + 0x16c)
                uint32_t rdx_45 = zx.d(*(rcx_101 + 0x13c))
                void** var_720_1 = r15
                void* var_760_1 = r13_5
                void*** var_898
                void*** var_890
                void*** var_888
                int32_t rax_85
                
                if (rdx_45.b != 0)
                    if ((rdx_45 - 1).b u<= 1)
                        (*(*rcx_101 + 0x28))()
                        goto label_141235a76
                    
                    if (rdx_45.b == 3)
                    label_141235a81:
                        void* rcx_109 = var_7f8
                        
                        if ((*(*rcx_109 + 0x10))(rcx_109, r13_5, rsi_10, &var_7c8, var_8b8, 
                                var_8b0, var_8a8, var_8a0, var_898, var_890, var_888) == 2)
                            rax_85.b = 1
                        else
                            rax_85.b = 0
                    else
                        rax_85.b = 1
                else
                    (*(*rcx_101 + 0x48))()
                label_141235a76:
                    rax_85.b = zmm0_2.d f> zmm10.d
                    
                    if (rax_85.b != 0)
                        goto label_141235a81
                    
                    rax_85.b = 1
                
                char var_828
                void var_718
                void* const var_3e8
                int32_t j_7
                int128_t var_3d8
                void** var_368
                void var_318
                int64_t* var_310
                void var_2f8
                void var_2a8
                void var_258
                void var_208
                int64_t var_1b8
                int32_t var_1b0
                int32_t var_1ac
                void var_170
                int32_t var_164
                void var_f8
                int32_t var_ec
                int64_t rax_89
                int32_t rsi_11
                
                if (rbx_16.b != 1 || var_86c == 0 || rax_85.b == 0 || (*r14_9 & 0x10) == 0)
                    rax_89 = var_848
                    rsi_11 = var_860
                else if (sub_1413fb0b0(rsi_10) != 0)
                    rax_89 = var_848
                    rsi_11 = var_860
                else
                    if (var_840.d != 0)
                        rsi_11 = var_860
                        rax_89 = var_848
                    
                    if (var_840.d == 0 || *(rax_89 + (sx.q(rsi_11 - var_874) << 3)) == 0)
                        j_7 = 1
                        var_3e8 = nullptr
                        __builtin_memset(&var_3d8, 0, 0x18)
                        int32_t var_3c0_1 = 1
                        int128_t var_3b8
                        __builtin_memset(&var_3b8, 0, 0x18)
                        int32_t var_3a0_1 = 1
                        int128_t var_398
                        __builtin_memset(&var_398, 0, 0x18)
                        int32_t var_380_1 = 1
                        int128_t var_378_1 = zx.o(0)
                        sub_1419928d0(&var_318, arg2)
                        void* var_710
                        __builtin_memset(&var_710, 0, 0x48)
                        sub_14142a030(&var_318, &var_718)
                        void* rsi_12 = &arg3[0x10]
                        int32_t j_1 = var_860
                        var_368 = &var_3e8
                        void** var_360_1 = &var_7f8
                        void* var_358_1 = &var_318
                        void* var_348_1 = &var_718
                        int32_t var_328[0x4]
                        int32_t (* var_340_1)[0x4] = &var_328
                        int64_t* var_338_1 = &var_848
                        int32_t* var_330_1 = &var_874
                        int64_t rax_90 = var_780
                        int64_t var_758_1 = rax_90
                        int32_t var_7e8_1 = 0
                        void* var_350_1 = r13_5
                        j_6 = var_860
                        
                        if (var_860 s< *(rsi_12 + 8))
                            do
                                int64_t rcx_107 = rax_90 * 3
                                int64_t rax_91 = *rsi_12
                                void* rsi_13 = *(rax_91 + (rcx_107 << 3) + 8)
                                
                                if ((*(rax_91 + (rcx_107 << 3)) & 0x10) != 0
                                        && sub_1413fb0b0(rsi_13) == 0)
                                    void* rbx_17 = *(rsi_13 + 0x20)
                                    int32_t rax_93
                                    int128_t zmm0_3
                                    rax_93, zmm0_3 = sub_1410f8230()
                                    int64_t rdi_19
                                    
                                    if (rax_93 s> 0 || (data_1439b6354 s> 0 && rax_93 s< 0))
                                        rdi_19.b = 1
                                    else
                                        rdi_19.b = 0
                                    
                                    if (data_143f0f21f != 0)
                                        uint64_t rdx_49 = zx.q(data_143f0f1a0)
                                        
                                        if (((*(sx.q(rdx_49.d) * 0x14 + &data_143f025fc) u>> 0x13).b
                                                & 1) != 0 && test_bit(data_143f13cd8, rdx_49)
                                                && rdi_19.b != 0
                                                && (*(rbx_17 + 0x139) & 0x10) != 0)
                                            int64_t* rcx_111 = *(rsi_13 + 0x20)
                                            char rdx_50 = *(rcx_111 + 0x13c)
                                            
                                            if (rdx_50 != 0)
                                                if (rdx_50 - 1 u<= 1)
                                                    (*(*rcx_111 + 0x28))()
                                                    goto label_141235b75
                                                
                                                if (rdx_50 == 3 && rbx_7 s> 0)
                                                    rdx_50 = 1
                                                else
                                                    rdx_50 = 0
                                            else
                                                (*(*rcx_111 + 0x48))()
                                            label_141235b75:
                                                
                                                if (zmm0_3.d f> zmm10.d == 0 || rbx_7 s<= 0)
                                                    rdx_50 = 0
                                                else
                                                    rdx_50 = 1
                                            
                                            int32_t var_7bc = 1
                                            var_7bc = *(*(rsi_13 + 0x20) + 0x16c)
                                            int32_t r13_6
                                            
                                            if (rdx_50 == 0)
                                                r13_6 = 0
                                            label_141235baf:
                                                int512_t zmm6_1
                                                zmm6_1.o = data_1439c7ad8
                                                int64_t rax_108 = *(var_710 + 0x44)
                                                int32_t var_424_1 = rax_108.d
                                                var_838.q = rax_108
                                                int32_t var_420_1 = var_838:4.d
                                                int16_t var_3f0_1 = 1
                                                char var_3ee_1 = 0
                                                int128_t var_588_1 = u"UnknownTexture2D".o
                                                int16_t var_400_1 = 0
                                                int32_t var_41c_1 = 0
                                                zmm7 = data_1439c7ae8.o
                                                int32_t var_414_1 = 0x10000
                                                int16_t var_410_1 = 1
                                                int32_t var_404_1 = 0x10009
                                                var_588_1.q = u"RayTracingOcclusion"
                                                void*** rax_110
                                                int128_t zmm6_2
                                                rax_110, zmm6_2 = sub_14081d830(0x88, var_310, 1, 0)
                                                void*** r15_3 = rax_110
                                                
                                                if (rax_110 == 0)
                                                    r15_3 = nullptr
                                                else
                                                    rax_110[1] = u"RayTracingOcclusion"
                                                    rax_110[2] = 0
                                                    rax_110[3].b = 0
                                                    *(rax_110 + 0x1c) = 0
                                                    rax_110[4] = 0
                                                    rax_110[5].w = 0x200
                                                    *(rax_110 + 0x30) = zmm6_2
                                                    *rax_110 = &data_142f11960
                                                    *(rax_110 + 0x40) = zmm7
                                                    rax_110[0x10] = 0
                                                    *(rax_110 + 0x50) = 1.o
                                                    *(rax_110 + 0x60) = 0xa:4.o
                                                    *(rax_110 + 0x70) = var_588_1
                                                
                                                data_1439c7ad8
                                                int64_t rax_112 = *(var_710 + 0x44)
                                                int32_t var_424_2 = rax_112.d
                                                var_838.q = rax_112
                                                int32_t var_420_2 = var_838:4.d
                                                int16_t var_3f0_2 = 1
                                                char var_3ee_2 = 0
                                                int128_t var_628_1 = u"UnknownTexture2D".o
                                                int16_t var_400_2 = 0
                                                int32_t var_41c_2 = 0
                                                zmm7 = data_1439c7ae8.o
                                                int32_t var_414_2 = 0x10000
                                                int16_t var_410_2 = 1
                                                int32_t var_404_2 = 0x10009
                                                var_628_1.q = u"RayTracingOcclusionDistance"
                                                void*** rax_114
                                                int128_t zmm6_3
                                                rax_114, zmm6_3 = sub_14081d830(0x88, var_310, 1, 0)
                                                void*** r12_5 = rax_114
                                                
                                                if (rax_114 == 0)
                                                    r12_5 = nullptr
                                                else
                                                    rax_114[1] = u"RayTracingOcclusionDistance"
                                                    rax_114[2] = 0
                                                    rax_114[3].b = 0
                                                    *(rax_114 + 0x1c) = 0
                                                    rax_114[4] = 0
                                                    rax_114[5].w = 0x200
                                                    *(rax_114 + 0x30) = zmm6_3
                                                    *rax_114 = &data_142f11960
                                                    *(rax_114 + 0x40) = zmm7
                                                    rax_114[0x10] = 0
                                                    *(rax_114 + 0x50) = 1.o
                                                    *(rax_114 + 0x60) = 0x15:4.o
                                                    *(rax_114 + 0x70) = var_628_1
                                                
                                                void*** rdi_20 = nullptr
                                                void*** r14_10 = nullptr
                                                
                                                if (arg4 != 0)
                                                    data_1439c7ad8
                                                    int64_t rax_116 = *(var_710 + 0x44)
                                                    int32_t var_424_3 = rax_116.d
                                                    var_838.q = rax_116
                                                    int32_t var_420_3 = var_838:4.d
                                                    int16_t var_3f0_3 = 1
                                                    char var_3ee_3 = 0
                                                    int128_t var_538_1 = u"UnknownTexture2D".o
                                                    int16_t var_400_3 = 0
                                                    int32_t var_41c_3 = 0
                                                    zmm7 = data_1439c7ae8.o
                                                    int32_t var_414_3 = 0x10000
                                                    int16_t var_410_3 = 1
                                                    int32_t var_404_3 = 0x10009
                                                    var_538_1.q = u"SubPixelRayTracingOcclusion"
                                                    void*** rax_118
                                                    int128_t zmm6_4
                                                    rax_118, zmm6_4 =
                                                        sub_14081d830(0x88, var_310, 1, 0)
                                                    rdi_20 = rax_118
                                                    
                                                    if (rax_118 == 0)
                                                        rdi_20 = nullptr
                                                    else
                                                        rax_118[1] = u"SubPixelRayTracingOcclusion"
                                                        rax_118[2] = 0
                                                        rax_118[3].b = 0
                                                        *(rax_118 + 0x1c) = 0
                                                        rax_118[4] = 0
                                                        rax_118[5].w = 0x200
                                                        *(rdi_20 + 0x30) = zmm6_4
                                                        *rdi_20 = &data_142f11960
                                                        *(rdi_20 + 0x40) = zmm7
                                                        rdi_20[0x10] = 0
                                                        *(rdi_20 + 0x50) = 1.o
                                                        *(rdi_20 + 0x60) = 0xa:4.o
                                                        *(rdi_20 + 0x70) = var_538_1
                                                    
                                                    int16_t var_690_1 = 0
                                                    void*** rax_119 =
                                                        sub_14081d830(0x28, var_310, 1, 0)
                                                    r14_10 = rax_119
                                                    
                                                    if (rax_119 == 0)
                                                        r14_10 = nullptr
                                                    else
                                                        rax_119[1] = rdi_20[1]
                                                        rax_119[2] = 0
                                                        *r14_10 = &data_142f285c0
                                                        *(r14_10 + 0x18) = rdi_20.o
                                                
                                                int16_t var_680_1 = 0
                                                void*** rax_120 = sub_14081d830(0x28, var_310, 1, 0)
                                                void*** rsi_14 = rax_120
                                                
                                                if (rax_120 == 0)
                                                    rsi_14 = nullptr
                                                else
                                                    rax_120[1] = r15_3[1]
                                                    rax_120[2] = 0
                                                    *rsi_14 = &data_142f285c0
                                                    *(rsi_14 + 0x18) = r15_3.o
                                                
                                                int16_t var_6c0_1 = 0
                                                void*** rax_121 = sub_14081d830(0x28, var_310, 1, 0)
                                                void*** rbx_18 = rax_121
                                                
                                                if (rax_121 == 0)
                                                    rbx_18 = nullptr
                                                else
                                                    rax_121[1] = r12_5[1]
                                                    rax_121[2] = 0
                                                    *rbx_18 = &data_142f285c0
                                                    *(rbx_18 + 0x18) = r12_5.o
                                                
                                                __builtin_memset(&var_838, 0, 0x19)
                                                
                                                if (arg4 != 0 && arg4[1].d s> 0)
                                                    void* rax_123 = *arg4
                                                    
                                                    if (*(rax_123 + 0x28) != 0)
                                                        var_838.q = sub_1410fccd0(&var_318, 
                                                            rax_123 + 0x28, External", 0)
                                                        rax_123 = *arg4
                                                    
                                                    if (*(rax_123 + 0x48) != 0)
                                                        var_838:8.q = sub_1410fccd0(&var_318, 
                                                            rax_123 + 0x48, External", 0)
                                                    
                                                    var_828.q = arg4[2] + 0x40
                                                
                                                var_888 = r14_10
                                                var_890 = rbx_18
                                                var_898 = rsi_14
                                                var_7a0 = var_828.o
                                                var_7b0 = var_838
                                                var_8a0.q = &var_7b0
                                                var_8a8.d = r13_6
                                                r13_5 = var_760_1
                                                var_8b0 = &var_7bc
                                                var_7a0:8.b =
                                                    not.b(*(*(rsi_13 + 0x20) + 0x139) u>> 1) & 1
                                                var_8b8.q = rsi_13
                                                sub_1413f4960(arg1, &var_318, &var_718, r13_5, 
                                                    var_8b8, var_8b0, var_8a8, var_8a0, var_898, 
                                                    var_890)
                                                char rax_130 = sub_1412288d0(0, arg4)
                                                j_1 = j_6
                                                
                                                if (rax_130 != 0)
                                                    var_838.q = rdi_20
                                                    int64_t rdi_21 = sx.q(var_1b0)
                                                    var_828 = 1
                                                    var_838:8.q =
                                                        var_7e0_2 + (sx.q(j_1 - var_874) << 3)
                                                    int32_t rax_134 = (rdi_21 + 1).d
                                                    var_1b0 = rax_134
                                                    
                                                    if (rax_134 s> var_1ac)
                                                        sub_14119a720(&var_1b8, rdi_21.d)
                                                    
                                                    int64_t rax_135 = var_1b8
                                                    int64_t rcx_128 = rdi_21 * 3
                                                    *(rax_135 + (rcx_128 << 3)) = var_838
                                                    *(rax_135 + (rcx_128 << 3) + 0x10) = var_828.q
                                                
                                                rbx_18.b = 0
                                                
                                                if (rdx_50 == 0)
                                                    rdi_19 = sx.q(var_1b0)
                                                    var_838.q = r15_3
                                                    var_828 = 1
                                                    int32_t rax_152 = (rdi_19 + 1).d
                                                    var_838:8.q =
                                                        var_848 + (sx.q(j_1 - var_874) << 3)
                                                    var_1b0 = rax_152
                                                    
                                                    if (rax_152 s> var_1ac)
                                                        sub_14119a720(&var_1b8, rdi_19.d)
                                                    
                                                    int64_t rax_153 = var_1b8
                                                    int64_t rcx_140 = rdi_19 * 3
                                                    *(rax_153 + (rcx_140 << 3)) = var_838
                                                    *(rax_153 + (rcx_140 << 3) + 0x10) = var_828.q
                                                else
                                                    uint64_t rdx_64 = 0
                                                    int64_t k = 0
                                                    void** rax_136 = &var_3e8
                                                    
                                                    do
                                                        rdi_19 = zx.q((rdx_64 + 1).d)
                                                        
                                                        if (*rax_136 == 0)
                                                            var_328[rdx_64] = j_1
                                                            (&var_3e8)[rdx_64 * 4] = rsi_13
                                                            (&j_7)[rdx_64 * 8] = var_7c8
                                                            (&var_3d8)[rdx_64 * 2].q = r15_3
                                                            *(&var_3d8:8 + (rdx_64 << 5)) = r12_5
                                                            
                                                            if (rdi_19.d == rdx_32)
                                                                int64_t var_438
                                                                var_8a0.q = &var_438
                                                                var_438 = 0
                                                                int32_t var_428_2
                                                                var_428_2.q = 0
                                                                int64_t var_388
                                                                int32_t rcx_131
                                                                rcx_131.b = var_388 != 0
                                                                int32_t var_418_2
                                                                var_418_2.q = 0
                                                                int64_t var_40c_2 = 0
                                                                int64_t var_3a8
                                                                int32_t rax_139
                                                                rax_139.b = var_3a8 != 0
                                                                void* rcx_132 = var_7f8
                                                                int64_t var_3c8_1
                                                                int32_t rax_140
                                                                rax_140.b = var_3c8_1 != 0
                                                                int32_t rax_141
                                                                rax_141.b = var_3e8 != 0
                                                                rdi_19 = zx.q(rax_139 + rcx_131
                                                                    + rax_140 + rax_141)
                                                                var_8a8.d = rdi_19.d
                                                                var_8b0 = &var_3e8
                                                                var_8b8.q = &var_718
                                                                (*(*rcx_132 + 0x18))(rcx_132, &var_318, 
                                                                    r13_5, r13_5 + 0x4990, var_8b8, 
                                                                    var_8b0, var_8a8, var_8a0)
                                                                uint64_t r15_4 = zx.q(rdi_19.d)
                                                                
                                                                if (rdi_19.d != 0)
                                                                    rbx_18 = nullptr
                                                                    void** r14_11 = &var_3e8
                                                                    int64_t* rsi_15 = &var_438
                                                                    
                                                                    do
                                                                        rdi_19 = sx.q(var_1b0)
                                                                        var_838.q = *rsi_15
                                                                        var_828 = 1
                                                                        int32_t rax_147 = (rdi_19 + 1).d
                                                                        var_838:8.q = var_848 + (
                                                                            sx.q(var_328[rbx_18] - var_874) << 3)
                                                                        var_1b0 = rax_147
                                                                        
                                                                        if (rax_147 s> var_1ac)
                                                                            sub_14119a720(&var_1b8, rdi_19.d)
                                                                        
                                                                        int64_t rax_148 = var_1b8
                                                                        int64_t rcx_136 = rdi_19 * 3
                                                                        rbx_18 += 1
                                                                        rsi_15 = &rsi_15[2]
                                                                        *(rax_148 + (rcx_136 << 3)) = var_838
                                                                        *(rax_148 + (rcx_136 << 3) + 0x10) =
                                                                            var_828.q
                                                                        *r14_11 = nullptr
                                                                        r14_11 = &r14_11[4]
                                                                    while (rbx_18 s< r15_4)
                                                                    
                                                                    j_1 = j_6
                                                                
                                                                rbx_18.b = 1
                                                            
                                                            break
                                                        
                                                        k += 1
                                                        rdx_64 = zx.q(rdi_19.d)
                                                        rax_136 = &rax_136[4]
                                                    while (k s< 4)
                                                
                                                int32_t rdx_69 = var_7e8_1 + 1
                                                var_7e8_1 = rdx_69
                                                
                                                if (rbx_18.b != 0)
                                                    break
                                                
                                                if (rdx_69 == var_748)
                                                    break
                                            else
                                                void* rcx_113 = var_7f8
                                                int32_t rax_105 = (*(*rcx_113 + 0x10))(rcx_113, 
                                                    r13_5, rsi_13, &var_7bc, var_8b8, var_8b0, 
                                                    var_8a8, var_8a0, var_898, var_890, var_888)
                                                r13_6 = rax_105
                                                
                                                if (rax_105 == 2)
                                                    goto label_141235baf
                                                
                                                r13_5 = var_760_1
                                
                                j_1 += 1
                                rsi_12 = &arg3[0x10]
                                rax_90 = var_758_1 + 1
                                j_6 = j_1
                                var_758_1 = rax_90
                            while (j_1 s< *(rsi_12 + 8))
                            
                            r12_4 = arg1
                            rbx_16 = zx.q(var_877_1)
                            r15 = var_720_1
                        
                        if (var_3e8 != 0)
                            sub_14121a810(&var_368)
                        
                        sub_14199ef00(&var_318)
                        int32_t var_f0_1 = 0
                        
                        if (var_ec != 0)
                            sub_1410b3aa0(&var_f8, 0)
                        
                        int32_t var_168_1 = 0
                        
                        if (var_164 != 0)
                            sub_1410b3aa0(&var_170, 0)
                        
                        int32_t var_1c0_1 = 0
                        int32_t var_200_1 = 0
                        int32_t var_1fc
                        
                        if (var_1fc != 0)
                            sub_1410b3bb0(&var_208, 0)
                        
                        int32_t var_1d8_1 = 0xffffffff
                        int32_t var_1d4_1 = 0
                        void var_1f8
                        sub_141095ed0(&var_1f8, 0)
                        int32_t var_210_1 = 0
                        sub_141219390(&var_258)
                        int32_t var_260_1 = 0
                        sub_141096480(&var_2a8, 0)
                        int32_t var_2b0_1 = 0
                        sub_14108c840(&var_2f8)
                        rax_89 = var_848
                        r14_9 = var_7b8_1
                        rsi_11 = var_860
                
                int32_t rsi_16
                int64_t rdi_24
                
                if (var_840.d s> 0)
                    rsi_16 = rsi_11 - var_874
                    rdi_24 = sx.q(rsi_16)
                
                if (var_840.d s> 0 && *(rax_89 + (rdi_24 << 3)) != 0)
                    int64_t* rcx_150 = *(rax_89 + (rdi_24 << 3))
                    int64_t* rbx_19 = var_818
                    var_818 = rcx_150
                    (*(*rcx_150 + 0x30))()
                    
                    if (rbx_19 != 0)
                        (*(*rbx_19 + 0x38))(rbx_19)
                    
                    rax_77 = var_848
                    int64_t* rcx_152 = *(rax_77 + (rdi_24 << 3))
                    *(rax_77 + (rdi_24 << 3)) = 0
                    
                    if (rcx_152 != 0)
                        (*(*rcx_152 + 0x38))(rcx_152)
                    
                    int64_t* rcx_156 = arg4
                    
                    if (rcx_156 != 0 && rsi_16 u< var_7c0)
                        int64_t rsi_17 = var_7e0_2
                        int64_t* rbx_20 = var_800
                        int64_t* rcx_153 = *(rsi_17 + (rdi_24 << 3))
                        var_800 = rcx_153
                        
                        if (rcx_153 != 0)
                            (*(*rcx_153 + 0x30))()
                        
                        if (rbx_20 != 0)
                            (*(*rbx_20 + 0x38))(rbx_20)
                        
                        int64_t* rcx_155 = *(rsi_17 + (rdi_24 << 3))
                        *(rsi_17 + (rdi_24 << 3)) = 0
                        
                        if (rcx_155 != 0)
                            (*(*rcx_155 + 0x38))(rcx_155)
                        
                        rcx_156 = arg4
                    
                    rsi_10 = var_850
                    
                    if (var_878_1 != 0)
                        var_8b8.q = var_818
                        sub_1411e9c30(arg2, r15, rsi_10, rcx_156, var_8b8)
                else if (rbx_16.b != 1)
                    int32_t j_2 = 0
                    rsi_10 = var_850
                    
                    if (r12_4[0x15].d s> 0)
                        do
                            void* rdx_90 = sx.q(j_2) * 0x5240 + *r15
                            sub_1411d9e10(rdx_90 + 0x50d8, rdx_90, arg2, rsi_10)
                            j_2 += 1
                        while (j_2 s< r12_4[0x15].d)
                        
                        r14_9 = var_7b8_1
                    
                    var_7b0:8.q = var_7f0
                    var_7a0.q = arg2
                    var_7b0.q = r14_9
                    var_7a0:8.q = r12_4
                    int128_t var_790
                    var_790.q = rsi_10
                    sub_14121a180(&var_7b0, &var_818)
                    int64_t* rax_214 = var_800
                    
                    if (rax_214 != 0)
                        sub_14121a180(&var_7b0, &var_800)
                        rax_214 = var_800
                    
                    var_8a8.q = &var_869
                    var_8b0 = arg4
                    var_8b8.q = rax_214
                    sub_141499290(r12_4, arg2, rsi_10, var_818, var_8b8, var_8b0, var_8a8)
                else
                    sub_1419928d0(&var_318, arg2)
                    void* var_710_1
                    __builtin_memset(&var_710_1, 0, 0x48)
                    sub_14142a030(&var_318, &var_718)
                    int512_t zmm6_5
                    zmm6_5.o = data_1439c7ad8
                    int64_t rax_163 = *(var_710_1 + 0x44)
                    int32_t var_424_4 = rax_163.d
                    var_838.q = rax_163
                    int32_t var_420_4 = var_838:4.d
                    int16_t var_3f0_4 = 1
                    char var_3ee_4 = 0
                    int128_t var_5d8_1 = u"UnknownTexture2D".o
                    int16_t var_400_4 = 0
                    int32_t var_41c_4 = 0
                    zmm7 = data_1439c7ae8.o
                    int32_t var_414_4 = 0x10000
                    int16_t var_410_4 = 1
                    int32_t var_404_4 = 0x10009
                    var_5d8_1.q = u"RayTracingOcclusion"
                    void*** rax_165
                    int128_t zmm6_6
                    rax_165, zmm6_6 = sub_14081d830(0x88, var_310, 1, 0)
                    void*** r14_12 = rax_165
                    
                    if (rax_165 == 0)
                        r14_12 = nullptr
                    else
                        rax_165[1] = u"RayTracingOcclusion"
                        rax_165[2] = 0
                        rax_165[3].b = 0
                        *(rax_165 + 0x1c) = 0
                        rax_165[4] = 0
                        rax_165[5].w = 0x200
                        *(rax_165 + 0x30) = zmm6_6
                        *rax_165 = &data_142f11960
                        *(rax_165 + 0x40) = zmm7
                        rax_165[0x10] = 0
                        *(rax_165 + 0x50) = 1.o
                        *(rax_165 + 0x60) = 0xa:4.o
                        *(rax_165 + 0x70) = var_5d8_1
                    
                    data_1439c7ad8
                    int64_t rax_167 = *(var_710_1 + 0x44)
                    int32_t var_424_5 = rax_167.d
                    var_838.q = rax_167
                    int32_t var_420_5 = var_838:4.d
                    int16_t var_3f0_5 = 1
                    char var_3ee_5 = 0
                    int128_t var_4e8_1 = u"UnknownTexture2D".o
                    int16_t var_400_5 = 0
                    int32_t var_41c_5 = 0
                    zmm7 = data_1439c7ae8.o
                    int32_t var_414_5 = 0x10000
                    int16_t var_410_5 = 1
                    int32_t var_404_5 = 0x10009
                    var_4e8_1.q = u"RayTracingOcclusionDistance"
                    void*** rax_169
                    int128_t zmm6_7
                    rax_169, zmm6_7 = sub_14081d830(0x88, var_310, 1, 0)
                    void*** var_750_2 = rax_169
                    void*** rdi_25 = rax_169
                    
                    if (rax_169 == 0)
                        rdi_25 = nullptr
                        var_750_2 = nullptr
                    else
                        rax_169[1] = u"RayTracingOcclusionDistance"
                        rax_169[2] = 0
                        rax_169[3].b = 0
                        *(rax_169 + 0x1c) = 0
                        rax_169[4] = 0
                        rax_169[5].w = 0x200
                        *(rax_169 + 0x30) = zmm6_7
                        *rax_169 = &data_142f11960
                        *(rax_169 + 0x40) = zmm7
                        rax_169[0x10] = 0
                        *(rax_169 + 0x50) = 1.o
                        *(rax_169 + 0x60) = 0x15:4.o
                        *(rax_169 + 0x70) = var_4e8_1
                    
                    int16_t var_6b0_1 = 0
                    void*** rax_170 = sub_14081d830(0x28, var_310, 1, 0)
                    void*** var_760_2 = rax_170
                    
                    if (rax_170 == 0)
                        var_760_2 = nullptr
                    else
                        rax_170[1] = r14_12[1]
                        rax_170[2] = 0
                        *(rax_170 + 0x18) = r14_12.o
                        *rax_170 = &data_142f285c0
                    
                    int16_t var_6a0_1 = 0
                    void*** rax_171
                    int512_t zmm6_8
                    rax_171, zmm6_8 = sub_14081d830(0x28, var_310, 1, 0)
                    void*** var_758_2 = rax_171
                    
                    if (rax_171 == 0)
                        var_758_2 = nullptr
                    else
                        rax_171[1] = rdi_25[1]
                        rax_171[2] = 0
                        *(rax_171 + 0x18) = rdi_25.o
                        *rax_171 = &data_142f285c0
                    
                    int64_t* rbx_21 = arg4
                    r15 = nullptr
                    var_7c8.q = 0
                    
                    if (rbx_21 != 0)
                        zmm6_8.o = data_1439c7ad8
                        int64_t rax_173 = *(var_710_1 + 0x44)
                        int32_t var_424_6 = rax_173.d
                        var_838.q = rax_173
                        int32_t var_420_6 = var_838:4.d
                        int16_t var_3f0_6 = 1
                        char var_3ee_6 = 0
                        int128_t var_498_1 = u"UnknownTexture2D".o
                        int16_t var_400_6 = 0
                        int32_t var_41c_6 = 0
                        zmm7 = data_1439c7ae8.o
                        int32_t var_414_6 = 0x10000
                        int16_t var_410_6 = 1
                        int32_t var_404_6 = 0x10009
                        var_498_1.q = u"RayTracingOcclusion"
                        void** rax_175
                        int128_t zmm6_9
                        rax_175, zmm6_9 = sub_14081d830(0x88, var_310, 1, 0)
                        r15 = rax_175
                        
                        if (rax_175 == 0)
                            r15 = nullptr
                        else
                            rax_175[1] = u"RayTracingOcclusion"
                            rax_175[2] = 0
                            rax_175[3].b = 0
                            *(rax_175 + 0x1c) = 0
                            rax_175[4] = 0
                            rax_175[5].w = 0x200
                            *(r15 + 0x30) = zmm6_9
                            *r15 = &data_142f11960
                            *(r15 + 0x40) = zmm7
                            r15[0x10] = 0
                            *(r15 + 0x50) = 1.o
                            *(r15 + 0x60) = 0xa:4.o
                            *(r15 + 0x70) = var_498_1
                        
                        var_740 = r15
                        var_738 = 0
                        void*** rax_176
                        rax_176, zmm6_8 = sub_14081d830(0x28, var_310, 1, 0)
                        var_7c8.q = rax_176
                        
                        if (rax_176 == 0)
                            var_7c8.q = 0
                        else
                            int128_t zmm0_15 = var_740.o
                            rax_176[1] = r15[1]
                            rax_176[2] = 0
                            *rax_176 = &data_142f285c0
                            *(rax_176 + 0x18) = zmm0_15
                    
                    zmm6_8.o = data_1439c7ad8
                    int64_t rax_178 = *(var_710_1 + 0x44)
                    int32_t var_424_7 = rax_178.d
                    var_838.q = rax_178
                    int32_t var_420_7 = var_838:4.d
                    int16_t var_3f0_7 = 1
                    char var_3ee_7 = 0
                    int128_t var_448_1 = u"UnknownTexture2D".o
                    int16_t var_400_7 = 0
                    int32_t var_41c_7 = 0
                    zmm7 = data_1439c7ae8.o
                    int32_t var_414_7 = 0x10000
                    int16_t var_410_7 = 1
                    int32_t var_404_7 = 0x10009
                    var_448_1.q = u"RayTracingOcclusionTile"
                    void*** rax_180
                    int128_t zmm0_17
                    int128_t zmm6_10
                    rax_180, zmm0_17, zmm6_10 = sub_14081d830(0x88, var_310, 1, 0)
                    void*** r13_7 = rax_180
                    
                    if (rax_180 == 0)
                        r13_7 = nullptr
                    else
                        zmm0_17 = var_448_1
                        rax_180[1] = u"RayTracingOcclusionTile"
                        rax_180[2] = 0
                        rax_180[3].b = 0
                        *(rax_180 + 0x1c) = 0
                        rax_180[4] = 0
                        rax_180[5].w = 0x200
                        *(r13_7 + 0x30) = zmm6_10
                        *r13_7 = &data_142f11960
                        *(r13_7 + 0x40) = zmm7
                        r13_7[0x10] = 0
                        *(r13_7 + 0x50) = 1.o
                        *(r13_7 + 0x60) = 0xa:4.o
                        *(r13_7 + 0x70) = zmm0_17
                    
                    int32_t rax_181 = r12_4[0x15].d
                    int32_t j_3 = 0
                    
                    if (rax_181 s> 0)
                        int64_t rcx_167 = 0
                        int64_t var_7b8_2 = 0
                        int64_t r12_6 = 0
                        
                        do
                            int32_t rbx_22 = 0
                            void* rdx_80 = var_850
                            void* rdi_27 = *var_720_1
                            j_6 = 1
                            void* rdi_28 = rdi_27 + rcx_167
                            j_6 = *(*(rdx_80 + 0x20) + 0x16c)
                            
                            if (rbx_7 != 0 && sub_14122cc30(rdx_80, zmm0_17.d) != 0)
                                void* rcx_170 = var_7f8
                                rbx_22 = (*(*rcx_170 + 0x10))(rcx_170, rdi_28, var_850, &j_6, 
                                    var_8b8, var_8b0, var_8a8, var_8a0, var_898, var_890, var_888)
                            
                            void**** rax_188 = sub_141226e30(&var_838, j_3, &var_318, arg4)
                            var_7b0 = *rax_188
                            var_7a0 = *(rax_188 + 0x10)
                            var_7a0:8.b = var_878_1 ^ 1
                            var_888 = var_7c8.q
                            var_890 = var_758_2
                            var_898 = var_760_2
                            var_8a0.q = &var_7b0
                            var_8a8.d = rbx_22
                            var_8b0 = &j_6
                            var_8b8.q = var_850
                            sub_1413f4960(arg1, &var_318, &var_718, rdi_28, var_8b8, var_8b0, 
                                var_8a8, var_8a0, var_898, var_890)
                            
                            if (rbx_22 == 0)
                                var_838.q = r14_12
                            else
                                void* rcx_173 = var_7f8
                                var_8a0.q = &var_368
                                int64_t var_3c8_2 = 0
                                int64_t var_358_2 = 0
                                int64_t var_348_2 = 0
                                int64_t var_338_2 = 0
                                var_3d8:8.q = var_750_2
                                var_8a8.d = 1
                                var_8b0 = &var_3e8
                                var_3e8 = var_850
                                int32_t var_3c0_2 = 1
                                int32_t var_3a0_2 = 1
                                int32_t var_380_2 = 1
                                j_7 = j_6
                                int128_t var_3b8_1
                                __builtin_memset(&var_3b8_1, 0, 0x18)
                                int128_t var_398_1
                                __builtin_memset(&var_398_1, 0, 0x18)
                                int128_t var_378_2
                                __builtin_memset(&var_378_2, 0, 0x18)
                                var_3d8.q = r14_12
                                var_8b8.q = &var_718
                                (*(*rcx_173 + 0x18))(zx.o(0), &var_318, rdi_28, rdi_28 + 0x4990, 
                                    var_8b8, var_8b0, var_8a8, var_8a0)
                                
                                if (rax_181 s<= 0)
                                    var_838.q = var_368
                                else
                                    int32_t var_72c_1 = *(rdi_28 + 0x15a4) - *(rdi_28 + 0x159c)
                                    var_8a8.q = (*(rdi_28 + 0x15a0) - *(rdi_28 + 0x1598)).q
                                    uint64_t rax_203 = *(rdi_28 + 0x1598)
                                    var_8b0 = rax_203
                                    var_8b8.q = rax_203
                                    sub_141446b70(&var_318, rdi_28, var_368, r13_7, var_8b8, 
                                        var_8b0, var_8a8)
                                    var_838.q = r13_7
                            
                            int64_t rdi_29 = sx.q(var_1b0)
                            var_838:8.q = &var_818
                            var_828 = 1
                            int32_t rax_205 = (rdi_29 + 1).d
                            var_1b0 = rax_205
                            
                            if (rax_205 s> var_1ac)
                                sub_14119a720(&var_1b8, rdi_29.d)
                            
                            int64_t rax_206 = var_1b8
                            int64_t rcx_176 = rdi_29 * 3
                            zmm0_17 = var_838
                            rbx_21 = arg4
                            *(rax_206 + (rcx_176 << 3)) = zmm0_17
                            *(rax_206 + (rcx_176 << 3) + 0x10) = var_828.q
                            
                            if (rbx_21 == 0 || j_3 s>= rbx_21[3].d
                                    || *(rbx_21[2] + r12_6 + 8) s<= 0)
                                rax_206.b = 0
                            else
                                rax_206.b = 1
                            
                            if (rax_206.b != 0)
                                int64_t rdi_30 = sx.q(var_1b0)
                                var_838:8.q = &var_800
                                var_838.q = r15
                                var_828 = 1
                                int32_t rax_207 = (rdi_30 + 1).d
                                var_1b0 = rax_207
                                
                                if (rax_207 s> var_1ac)
                                    sub_14119a720(&var_1b8, rdi_30.d)
                                
                                int64_t rax_208 = var_1b8
                                int64_t rcx_178 = rdi_30 * 3
                                zmm0_17 = var_838
                                *(rax_208 + (rcx_178 << 3)) = zmm0_17
                                *(rax_208 + (rcx_178 << 3) + 0x10) = var_828.q
                            
                            j_3 += 1
                            rcx_167 = var_7b8_2 + 0x5240
                            r12_6 += 0x130
                            var_7b8_2 = rcx_167
                        while (j_3 s< arg1[0x15].d)
                        
                        r12_4 = arg1
                    
                    sub_14199ef00(&var_318)
                    rsi_10 = var_850
                    
                    if (rbx_21 != 0 && var_878_1 != 0)
                        var_8b8.q = var_818
                        sub_1411e9c30(arg2, &r12_4[0x14], rsi_10, rbx_21, var_8b8)
                    
                    int32_t var_f0_2 = 0
                    
                    if (var_ec != 0)
                        sub_1410b3aa0(&var_f8, 0)
                    
                    int32_t var_168_2 = 0
                    
                    if (var_164 != 0)
                        sub_1410b3aa0(&var_170, 0)
                    
                    int32_t var_1c0_2 = 0
                    sub_141219390(&var_208)
                    int32_t var_210_2 = 0
                    sub_141219390(&var_258)
                    int32_t var_260_2 = 0
                    sub_141096480(&var_2a8, 0)
                    int32_t var_2b0_2 = 0
                    sub_14108c840(&var_2f8)
                
                rbx_15 = zx.q(var_86a_1)
                r15.b = 1
        
        r13_4 = arg2
        int32_t j_4 = 0
        
        if (r12_4[0x15].d s> 0)
            do
                int64_t* rdx_95 = sx.q(j_4) * 0x5240 + r12_4[0x14]
                sub_1411da530(&rdx_95[0xa1b], rdx_95, r13_4, rsi_10)
                j_4 += 1
            while (j_4 s< r12_4[0x15].d)
        
        if (var_770.b != 0)
            if ((r12_4[7].d & 0x10000000) == 0)
                rax_77.b = 0
            else
                var_8a0 = 0
                var_8a8 = 0
                var_8b0.b = rbx_15.b
                var_8b8.q = *(*(rsi_10 + 0x20) + 0x128)
                rax_77 = sub_141233420(r12_4, r13_4, rsi_10, var_818, var_8b8, var_8b0.b, var_8a8, 
                    var_8a0)
            
            r15.b |= rax_77.b
        
        if (r15.b != 0)
            int64_t* rax_217 = var_818
            uint128_t zmm1 = data_142d3f800
            int64_t rdi_33 = *(r13_4 + 0x30) + 7
            var_7b0 = data_142d57d10
            void*** rdi_34 = rdi_33 & 0xfffffffffffffff8
            zmm0_2 = data_142d57920
            var_7a0 = zmm1
            int64_t r14_14 = rax_217[2]
            int64_t* rsi_18 = rax_217[1]
            void* rax_218 = &rdi_34[0xa]
            
            if (rax_218 u> *(r13_4 + 0x38))
                sub_140b0e3d0(r13_4 + 0x30, 0x58)
                rdi_34 = (*(r13_4 + 0x30) + 7) & 0xfffffffffffffff8
                rax_218 = &rdi_34[0xa]
            
            *(r13_4 + 0x30) = rax_218
            int64_t* rax_219 = *(r13_4 + 8)
            *(r13_4 + 0x14) += 1
            *rax_219 = rdi_34
            *(r13_4 + 8) = &rdi_34[1]
            rdi_34[1] = 0
            *rdi_34 = &data_142d56628
            rdi_34[2].d = var_7b0.d
            *(rdi_34 + 0x14) = var_7b0:4.d
            rdi_34[3].d = var_7b0:8.d
            *(rdi_34 + 0x1c) = var_7b0:0xc.d
            __builtin_memset(&rdi_34[4], 0xff, 0x14)
            *(rdi_34 + 0x34) = zmm0_2:4.d
            rdi_34[7].d = zmm0_2:8.d
            *(rdi_34 + 0x3c) = zmm0_2:0xc.d
            rdi_34[8] = rsi_18
            rdi_34[9] = r14_14
            
            if ((*(*rsi_18 + 8))(rsi_18) == 0)
                int64_t* rcx_198 = rdi_34[8]
                
                if ((*(*rcx_198 + 0x18))(rcx_198) == 0)
                    int64_t* rcx_199 = rdi_34[8]
                    
                    if ((*(*rcx_199 + 0x20))(rcx_199) == 0)
                        int64_t* rcx_200 = rdi_34[8]
                        (*(*rcx_200 + 0x10))(rcx_200)
            
            int64_t* rcx_201 = rdi_34[9]
            
            if ((*(*rcx_201 + 8))(rcx_201) == 0)
                int64_t* rcx_202 = rdi_34[9]
                
                if ((*(*rcx_202 + 0x18))(rcx_202) == 0)
                    int64_t* rcx_203 = rdi_34[9]
                    
                    if ((*(*rcx_203 + 0x20))(rcx_203) == 0)
                        int64_t* rcx_204 = rdi_34[9]
                        (*(*rcx_204 + 0x10))(rcx_204)
            
            int64_t* rax_242 = var_800
            
            if (rax_242 != 0)
                zmm1 = data_142d3f800
                int64_t rdi_38 = *(r13_4 + 0x30) + 7
                var_7b0 = data_142d57d10
                void*** rdi_39 = rdi_38 & 0xfffffffffffffff8
                zmm0_2 = data_142d57920
                var_7a0 = zmm1
                int64_t r14_15 = rax_242[2]
                int64_t* rsi_19 = rax_242[1]
                void* rax_243 = &rdi_39[0xa]
                
                if (rax_243 u> *(r13_4 + 0x38))
                    sub_140b0e3d0(r13_4 + 0x30, 0x58)
                    rdi_39 = (*(r13_4 + 0x30) + 7) & 0xfffffffffffffff8
                    rax_243 = &rdi_39[0xa]
                
                *(r13_4 + 0x30) = rax_243
                int64_t* rax_244 = *(r13_4 + 8)
                *(r13_4 + 0x14) += 1
                *rax_244 = rdi_39
                *(r13_4 + 8) = &rdi_39[1]
                rdi_39[1] = 0
                *rdi_39 = &data_142d56628
                rdi_39[2].d = var_7b0.d
                *(rdi_39 + 0x14) = var_7b0:4.d
                rdi_39[3].d = var_7b0:8.d
                *(rdi_39 + 0x1c) = var_7b0:0xc.d
                __builtin_memset(&rdi_39[4], 0xff, 0x14)
                *(rdi_39 + 0x34) = zmm0_2:4.d
                rdi_39[7].d = zmm0_2:8.d
                *(rdi_39 + 0x3c) = zmm0_2:0xc.d
                rdi_39[8] = rsi_19
                rdi_39[9] = r14_15
                
                if ((*(*rsi_19 + 8))(rsi_19) == 0)
                    int64_t* rcx_207 = rdi_39[8]
                    
                    if ((*(*rcx_207 + 0x18))(rcx_207) == 0)
                        int64_t* rcx_208 = rdi_39[8]
                        
                        if ((*(*rcx_208 + 0x20))(rcx_208) == 0)
                            int64_t* rcx_209 = rdi_39[8]
                            (*(*rcx_209 + 0x10))(rcx_209)
                
                int64_t* rcx_210 = rdi_39[9]
                
                if ((*(*rcx_210 + 8))(rcx_210) == 0)
                    int64_t* rcx_211 = rdi_39[9]
                    
                    if ((*(*rcx_211 + 0x18))(rcx_211) == 0)
                        int64_t* rcx_212 = rdi_39[9]
                        
                        if ((*(*rcx_212 + 0x20))(rcx_212) == 0)
                            int64_t* rcx_213 = rdi_39[9]
                            (*(*rcx_213 + 0x10))(rcx_213)
            
            if (var_876 == 0)
                int64_t* rdi_44 = (*(r13_4 + 0x30) + 7) & 0xfffffffffffffff8
                int64_t rcx_214 = var_818[2]
                var_838.q = rcx_214
                void* rax_268 = &rdi_44[1]
                
                if (rax_268 u> *(r13_4 + 0x38))
                    sub_140b0e3d0(r13_4 + 0x30, 0x10)
                    rcx_214 = var_838.q
                    rdi_44 = (*(r13_4 + 0x30) + 7) & 0xfffffffffffffff8
                    rax_268 = &rdi_44[1]
                
                *(r13_4 + 0x30) = rax_268
                *rdi_44 = rcx_214
                void*** rcx_218 = (*(r13_4 + 0x30) + 7) & 0xfffffffffffffff8
                void* rax_269 = &rcx_218[5]
                
                if (rax_269 u> *(r13_4 + 0x38))
                    sub_140b0e3d0(r13_4 + 0x30, 0x30)
                    rcx_218 = (*(r13_4 + 0x30) + 7) & 0xfffffffffffffff8
                    rax_269 = &rcx_218[5]
                
                *(r13_4 + 0x30) = rax_269
                void**** rax_270 = *(r13_4 + 8)
                *(r13_4 + 0x14) += 1
                *rax_270 = rcx_218
                *(r13_4 + 8) = &rcx_218[1]
                rcx_218[1] = 0
                *rcx_218 = &data_142d549c8
                rcx_218[2].d = 1
                rcx_218[3] = rdi_44
                rcx_218[4].d = 0
                int64_t* rax_272 = var_800
                
                if (rax_272 != 0)
                    int64_t rcx_222 = rax_272[2]
                    var_838.q = rcx_222
                    int64_t* rdi_49 = (*(r13_4 + 0x30) + 7) & 0xfffffffffffffff8
                    void* rax_273 = &rdi_49[1]
                    
                    if (rax_273 u> *(r13_4 + 0x38))
                        sub_140b0e3d0(r13_4 + 0x30, 0x10)
                        rcx_222 = var_838.q
                        rdi_49 = (*(r13_4 + 0x30) + 7) & 0xfffffffffffffff8
                        rax_273 = &rdi_49[1]
                    
                    *(r13_4 + 0x30) = rax_273
                    *rdi_49 = rcx_222
                    void*** rcx_226 = (*(r13_4 + 0x30) + 7) & 0xfffffffffffffff8
                    void* rax_274 = &rcx_226[5]
                    
                    if (rax_274 u> *(r13_4 + 0x38))
                        sub_140b0e3d0(r13_4 + 0x30, 0x30)
                        rcx_226 = (*(r13_4 + 0x30) + 7) & 0xfffffffffffffff8
                        rax_274 = &rcx_226[5]
                    
                    *(r13_4 + 0x30) = rax_274
                    void**** rax_275 = *(r13_4 + 8)
                    *(r13_4 + 0x14) += 1
                    *rax_275 = rcx_226
                    *(r13_4 + 8) = &rcx_226[1]
                    rcx_226[1] = 0
                    *rcx_226 = &data_142d549c8
                    rcx_226[2].d = 1
                    rcx_226[3] = rdi_49
                    rcx_226[4].d = 0
                
                var_876 = 1
        
        void* rbx_23 = var_850
        
        if (var_869 == 0)
            int32_t j_5 = 0
            
            if (r12_4[0x15].d s> 0)
                do
                    var_8b0.d = j_5
                    var_8b8.q = sx.q(j_5) * 0x5240 + r12_4[0x14]
                    sub_1414d5c10(r12_4, r13_4, rbx_23, 0, var_8b8, var_8b0.d)
                    j_5 += 1
                while (j_5 s< r12_4[0x15].d)
        
        var_838 = zx.o(0)
        
        if (var_875_1 != 0)
            var_8b0 = &var_800
            var_8b8.q = arg4
            int64_t* var_678
            int64_t* rax_278 =
                sub_1411e9d70(&var_678, r13_4, &r12_4[0x14], rbx_23, var_8b8, var_8b0)
            
            if (&var_838 != rax_278)
                var_838.q = *rax_278
                *rax_278 = 0
            
            sub_1405d1600(&var_838:8, &rax_278[1])
            void var_670
            sub_1405ec8a0(&var_670)
            int64_t* rcx_237 = var_678
            
            if (rcx_237 != 0)
                sub_1411e8d60(rcx_237)
        
        if (sub_1413fb0b0(rbx_23) == 0)
            sub_141394ae0(var_7f0, r13_4, 0, 0x21, 1)
            int64_t* r9_26 = nullptr
            int64_t* rdi_52 = nullptr
            
            if (r15.b != 0)
                r9_26 = var_818
                rdi_52 = var_800
            
            r15 = rcx
            var_8a8 = 1
            var_8b0.b = 0
            var_8b8.q = r15
            zmm10 = sub_141231ec0(r12_4, r13_4, rbx_23, r9_26, var_8b8, var_8b0.b)
            sub_14139bc50(var_7f0, r13_4)
            
            if (arg4 != 0)
                var_8b0 = r15
                var_8b8.q = &var_838
                zmm10 = sub_141232b80(r12_4, r13_4, rbx_23, rdi_52, var_8b8, var_8b0)
        else
            var_770.q = 0
            var_8b8.q = &var_850
            var_850 = nullptr
            zmm10 = sub_1413f5c20(r12_4, r13_4, rbx_23, &var_770, var_8b8)
            sub_1413d4870(r12_4, r13_4, &var_770)
            void* rcx_241 = var_850
            
            if (rcx_241 != 0)
                (*(*rcx_241 + 0x38))(rcx_241)
            
            int64_t* rcx_242 = var_770.q
            
            if (rcx_242 != 0)
                (*(*rcx_242 + 0x38))(rcx_242)
        
        sub_1405ec8a0(&var_838:8)
        int64_t* rcx_248 = var_838.q
        
        if (rcx_248 != 0)
            sub_1411e8d60(rcx_248)
        
        i_9 = var_860 + 1
        rbx_15 = &arg3[0x10]
        rax_76 = var_780 + 1
        rdi_18 = arg4
        var_860 = i_9
        var_780 = rax_76
    while (i_9 s< *(rbx_15 + 8))
    int64_t* rcx_249 = var_800
    
    if (rcx_249 != 0)
        (*(*rcx_249 + 0x38))(rcx_249)
    
    int64_t* rcx_250 = var_818
    
    if (rcx_250 != 0)
        (*(*rcx_250 + 0x38))(rcx_250)

sub_1412192b0(&var_7d8)
int64_t result = sub_1412192b0(&var_848)
__security_check_cookie(rax_1 ^ &var_8d8)
return result
