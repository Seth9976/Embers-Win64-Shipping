// 函数: sub_141003b00
// 地址: 0x141003b00
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_b28
int64_t rax_1 = __security_cookie ^ &var_b28
int64_t* r12 = arg16
void* rax_4 = *(arg2 + 0x110)
int64_t* var_ac0 = r12
void* var_3d8 = nullptr
int32_t var_3d0 = 0
int32_t var_3cc = 0x60
int64_t var_ac8 = 0
void* const var_ae0
void var_9d8
int64_t var_248[0x40]

if (arg3 != 0)
    uint64_t i_11 = zx.q(arg3)
    void* r14_1 = arg4 - &var_248
    int64_t (* rdi_1)[0x40] = &var_248
    uint64_t i
    
    do
        int64_t* rbx_1 = *(r14_1 + rdi_1)
        
        if (rbx_1 != 0)
            void* rax_6
            rax_6, arg4 = (*(*rbx_1 + 0x48))(rbx_1)
            void* rdx = rax_6
            
            if (rax_6 != 0 && data_1439c7a34 u> 1)
                void* rcx_1 = *(rax_6 + 0xe8)
                
                if (rcx_1 != rax_6)
                    rdx = rcx_1
                
                if (rdx != 0)
                    while (*(rdx + 8) != *(arg1 + 0x138))
                        rdx = *(rdx + 0xb8)
                        
                        if (rdx == 0)
                            break
            
            int64_t* var_ad8_1 = rbx_1
            int64_t rbx_2 = sx.q(var_3d0)
            *rdi_1 = *(*(rdx + 0xf0) + 0x28)
            var_ae0 = *(rdx + 0x58)
            int32_t rax_10 = (rbx_2 + 1).d
            var_3d0 = rax_10
            
            if (rax_10 s> var_3cc)
                arg4 = sub_1410347e0(&var_9d8, rbx_2.d)
            
            void* rcx_4 = &var_9d8
            
            if (var_3d8 != 0)
                rcx_4 = var_3d8
            
            *(rcx_4 + rbx_2 * 0x10) = var_ae0.o
        
        rdi_1 = &(*rdi_1)[1]
        i = i_11
        i_11 -= 1
    while (i != 1)

if (arg5 != 0)
    int64_t (* rdi_2)[0x40] = &var_248
    uint64_t i_12 = zx.q(arg5)
    uint64_t i_1
    
    do
        void* rdx_2 = *(arg6 - &var_248 + rdi_2)
        
        if (rdx_2 != 0)
            void* rcx_5 = rdx_2
            
            if (data_1439c7a34 u> 1)
                while (*(rcx_5 + 0x20) != *(arg1 + 0x138))
                    rcx_5 = *(rcx_5 + 0x90)
                    
                    if (rcx_5 == 0)
                        break
            
            int64_t rbx_3 = sx.q(var_3d0)
            *rdi_2 = *(rcx_5 + 0x28)
            void* var_ad8_2 = rdx_2
            int32_t rax_18 = (rbx_3 + 1).d
            var_ae0 = *(*(rcx_5 + 0x40) + 0x10)
            var_3d0 = rax_18
            
            if (rax_18 s> var_3cc)
                arg4 = sub_1410347e0(&var_9d8, rbx_3.d)
            
            void* rcx_8 = &var_9d8
            
            if (var_3d8 != 0)
                rcx_8 = var_3d8
            
            *(rcx_8 + rbx_3 * 0x10) = var_ae0.o
        
        rdi_2 = &(*rdi_2)[1]
        i_1 = i_12
        i_12 -= 1
    while (i_1 != 1)

int64_t var_2c8[0x10]

if (arg7 != 0)
    int64_t rsi_1 = 0
    int64_t (* rdi_3)[0x10] = &var_2c8
    int64_t r12_1 = 0
    uint64_t i_14 = zx.q(arg7)
    uint64_t i_2
    
    do
        void* rdx_4 = *(arg8 - &var_2c8 + rdi_3)
        
        if (rdx_4 != 0)
            void* rcx_9 = rdx_4
            
            if (data_1439c7a34 u> 1)
                while (*(rcx_9 + 0x28) != *(arg1 + 0x138))
                    rcx_9 = *(rcx_9 + 0x30)
                    
                    if (rcx_9 == 0)
                        break
            
            r12_1 |= 1 << (rsi_1 u% 0x40)
            int64_t rbx_4 = sx.q(var_3d0)
            *rdi_3 = *(rcx_9 + 0x88)
            var_ae0 = *(rcx_9 + 0x50)
            int32_t rax_26 = (rbx_4 + 1).d
            void* var_ad8_3 = rdx_4
            var_3d0 = rax_26
            
            if (rax_26 s> var_3cc)
                arg4 = sub_1410347e0(&var_9d8, rbx_4.d)
            
            void* rcx_11 = &var_9d8
            
            if (var_3d8 != 0)
                rcx_11 = var_3d8
            
            *(rcx_11 + rbx_4 * 0x10) = var_ae0.o
        
        rsi_1 += 1
        rdi_3 = &(*rdi_3)[1]
        i_2 = i_14
        i_14 -= 1
    while (i_2 != 1)
    var_ac8 = r12_1
    r12 = var_ac0

int64_t var_3c8[0x10]

if (arg9 != 0)
    arg4 = arg10 - &var_3c8
    int64_t (* rdx_6)[0x10] = &var_3c8
    uint64_t i_13 = zx.q(arg9)
    uint64_t i_3
    
    do
        void* rax_31 = *(arg4 + rdx_6)
        
        if (rax_31 != 0)
            if (data_1439c7a34 u> 1)
                while (*(rax_31 + 0x18) != *(arg1 + 0x138))
                    rax_31 = *(rax_31 + 0x20)
                    
                    if (rax_31 == 0)
                        break
            
            *rdx_6 = *(rax_31 + 0x30)
        
        rdx_6 = &(*rdx_6)[1]
        i_3 = i_13
        i_13 -= 1
    while (i_3 != 1)

int32_t var_ad0
int64_t var_ab0
void var_348

if (arg11 != 0)
    void* rsi_2 = &var_348
    uint64_t i_15 = zx.q(arg11)
    uint64_t i_4
    
    do
        int64_t rdx_7 = *(arg12 - &var_348 + rsi_2)
        
        if (rdx_7 != 0)
            int64_t rbx_5 = rdx_7
            
            if (data_1439c7a34 u> 1)
                while (*(rbx_5 + 0x20) != *(arg1 + 0x138))
                    rbx_5 = *(rbx_5 + 0x88)
                    
                    if (rbx_5 == 0)
                        break
            
            int64_t rdi_4 = sx.q(var_3d0)
            *rsi_2 = *(rbx_5 + 0x28)
            int64_t var_ad8_4 = rdx_7
            int32_t rax_37 = (rdi_4 + 1).d
            var_ae0 = *(*(rbx_5 + 0x40) + 0x10)
            var_3d0 = rax_37
            
            if (rax_37 s> var_3cc)
                arg4 = sub_1410347e0(&var_9d8, rdi_4.d)
            
            void* rcx_15 = &var_9d8
            
            if (var_3d8 != 0)
                rcx_15 = var_3d8
            
            *(rcx_15 + rdi_4 * 0x10) = var_ae0.o
            
            if (*(*(*(rbx_5 + 0x40) + 0x10) + 0xfc) != 0)
                int64_t* rcx_18 = r12[1] + 0x168
                var_ab0 = rbx_5
                arg4 = sub_140812a70(rcx_18, &var_ad0, &var_ab0, nullptr)
        
        rsi_2 += 8
        i_4 = i_15
        i_15 -= 1
    while (i_4 != 1)

void* rdi_5 = arg2
int32_t rdx_10 = *(rdi_5 + 0x70)
int32_t var_ae8
void* const var_a78

if (rdx_10 != 0)
    int32_t rcx_21
    
    do
        var_ae8 = rdx_10
        int32_t i_5 = 0
        rcx_21 = neg.d(rdx_10) & rdx_10
        uint64_t rflags_1
        int32_t i_16
        i_16, rflags_1 = _bit_scan_reverse(rcx_21)
        
        if (rcx_21 != 0)
            i_5 = i_16
        
        int64_t i_10 = sx.q(i_5)
        var_ad0 = rdx_10 ^ rcx_21
        void* r13_1 = *(arg8 + (i_10 << 3))
        int64_t r12_2 = i_10 << 2
        void* rcx_23 = *(rdi_5 + 0xb8)
        var_ab0 = r12_2
        int64_t r14_4 = *(r13_1 + 0xa8)
        int64_t rax_43 = sx.q(*(rcx_23 + r12_2))
        
        if (rax_43.d != 0)
            int32_t rdi_6 = *(rcx_23 + (rax_43 << 2))
            void* rsi_4 = rcx_23 + (rax_43 << 2) + 4
            
            do
                int64_t* rcx_24 = *(r14_4 + (zx.q((rdi_6 u>> 8).w) << 3))
                void* const rax_48
                
                if (rcx_24 == 0)
                    rax_48 = nullptr
                else
                    rax_48, arg4 = (*(*rcx_24 + 0x48))(rcx_24)
                    
                    if (rax_48 != 0 && data_1439c7a34 u> 1)
                        void* rcx_25 = *(rax_48 + 0xe8)
                        
                        if (rcx_25 != rax_48)
                            rax_48 = rcx_25
                        
                        if (rax_48 != 0)
                            while (*(rax_48 + 8) != *(arg1 + 0x138))
                                rax_48 = *(rax_48 + 0xb8)
                                
                                if (rax_48 == 0)
                                    break
                
                void* rbx_6 = *(rax_48 + 0xf0)
                int64_t rdi_7 = sx.q(var_3d0)
                void* var_a50_1 = rbx_6
                var_248[zx.q(rdi_6.b)] = *(rbx_6 + 0x28)
                int64_t rcx_28 = *(*(rbx_6 + 0x40) + 0x10)
                int32_t rax_51 = (rdi_7 + 1).d
                var_3d0 = rax_51
                
                if (rax_51 s> var_3cc)
                    arg4 = sub_1410347e0(&var_9d8, rdi_7.d)
                
                void* rcx_30 = &var_9d8
                
                if (var_3d8 != 0)
                    rcx_30 = var_3d8
                
                *(rcx_30 + rdi_7 * 0x10) = rcx_28.o
                
                if (*(*(*(rbx_6 + 0x40) + 0x10) + 0xfc) != 0)
                    int64_t* rcx_33 = var_ac0[1] + 0x118
                    var_ae0 = rbx_6
                    void var_a68
                    arg4 = sub_140812a70(rcx_33, &var_a68, &var_ae0, nullptr)
                
                rdi_6 = *rsi_4
                rsi_4 += 4
            while (rdi_6 u>> 0x18 == i_5)
            
            r12_2 = var_ab0
            rdi_5 = arg2
            r14_4 = *(r13_1 + 0xa8)
        
        void* rcx_34 = *(rdi_5 + 0x78)
        int64_t rax_58 = sx.q(*(rcx_34 + r12_2))
        
        if (rax_58.d != 0)
            int32_t rcx_35 = *(rcx_34 + (rax_58 << 2))
            void* rsi_6 = rcx_34 + (rax_58 << 2) + 4
            
            do
                void* rbx_7 = *(r14_4 + (zx.q((rcx_35 u>> 8).w) << 3))
                
                if (rbx_7 != 0 && data_1439c7a34 u> 1)
                    while (*(rbx_7 + 0x20) != *(arg1 + 0x138))
                        rbx_7 = *(rbx_7 + 0x90)
                        
                        if (rbx_7 == 0)
                            break
                
                int64_t rdi_8 = sx.q(var_3d0)
                void* var_a70_1 = rbx_7
                var_248[zx.q(rcx_35.b)] = *(rbx_7 + 0x28)
                int32_t rax_65 = (rdi_8 + 1).d
                var_a78 = *(*(rbx_7 + 0x40) + 0x10)
                var_3d0 = rax_65
                
                if (rax_65 s> var_3cc)
                    arg4 = sub_1410347e0(&var_9d8, rdi_8.d)
                
                void* rcx_39 = &var_9d8
                
                if (var_3d8 != 0)
                    rcx_39 = var_3d8
                
                *(rcx_39 + rdi_8 * 0x10) = var_a78.o
                
                if (*(*(*(rbx_7 + 0x40) + 0x10) + 0xfc) != 0)
                    int64_t* rcx_42 = var_ac0[1] + 0x118
                    var_ae0 = rbx_7
                    void var_a64
                    arg4 = sub_140812a70(rcx_42, &var_a64, &var_ae0, nullptr)
                
                rcx_35 = *rsi_6
                rsi_6 += 4
            while (rcx_35 u>> 0x18 == i_5)
            
            r12_2 = var_ab0
            rdi_5 = arg2
            r14_4 = *(r13_1 + 0xa8)
        
        int64_t rcx_43 = *(rdi_5 + 0x88)
        int64_t rax_72 = sx.q(*(r12_2 + rcx_43))
        
        if (rax_72.d != 0)
            int32_t rdx_16 = *(rcx_43 + (rax_72 << 2))
            int32_t* r8_4 = rcx_43 + (rax_72 << 2) + 4
            
            do
                void* rax_76 = *(r14_4 + (zx.q((rdx_16 u>> 8).w) << 3))
                
                if (rax_76 != 0 && data_1439c7a34 u> 1)
                    while (*(rax_76 + 0x18) != *(arg1 + 0x138))
                        rax_76 = *(rax_76 + 0x20)
                        
                        if (rax_76 == 0)
                            break
                
                var_3c8[zx.q(rdx_16.b)] = *(rax_76 + 0x30)
                rdx_16 = *r8_4
                r8_4 = &r8_4[1]
            while (rdx_16 u>> 0x18 == i_5)
        
        rdx_10 = var_ad0
    while (rcx_21 != var_ae8)
    r12 = var_ac0

int64_t rsi_10

if (arg14 == 0 || *(rdi_5 + 0x108) == 0)
    rsi_10 = var_ac8
else
    void* rcx_47 = *(*r12 + 0x20)
    var_a78 = &data_141015ff0
    var_ae0 = rcx_47
    void** var_a70_2 = &var_ae0
    void* rax_82
    int512_t zmm0_1
    rax_82, zmm0_1 = sub_140a756e0(&var_a78, &data_1439b4ae8)
    void var_a48
    sub_14103f450(&var_a48, *r12)
    int32_t rax_83 = *(rax_82 + 0x88)
    int32_t rdx_18 = *(rax_82 + 0x8c)
    int32_t rsi_8 = (arg13 + 0xff) & 0xffffff00
    
    if (rsi_8 + rax_83 u> rdx_18)
        void* rax_84 = *(rax_82 + 0x10)
        *(rax_82 + 0x88) = 0
        sub_141012e10(*(*(rax_84 + 0x20) + (zx.q(*(rax_84 + 0x18)) << 3) + 0x4a0), rdx_18, 0x100, 
            rax_82 + 0x20, zmm0_1)
        rax_83 = *(rax_82 + 0x88)
    
    int64_t r14_5 = *(rax_82 + 0x60)
    int64_t r15_4 = *(rax_82 + 0x68)
    int32_t var_a40_1 = 3
    uint64_t rdi_9 = zx.q(rax_83)
    sub_14105ac70(&var_a48, *(rax_82 + 0x30))
    uint64_t var_9f0_1 = zx.q(rsi_8)
    uint64_t var_9f8_1 = rdi_9
    int64_t var_a08
    
    if (r14_5 != 0)
        var_a08 = rdi_9 + r14_5
    
    *(rax_82 + 0x88) += rsi_8
    char r9_2 = memcpy(var_a08, arg14, arg13)
    void* var_a38
    arg4 = j_sub_141059a80(&var_a48, sub_141012560(r12[1], var_a38, nullptr, r9_2))
    rdi_5 = arg2
    rsi_10 = var_ac8 | 1
    var_2c8[0] = rdi_9 + r15_4

uint64_t rdx_22 = zx.q(*(rdi_5 + 0x10a))
int64_t var_b08
int32_t var_b00
int32_t var_af8
int64_t* r14_6
void* r15_5

if (rdx_22.d == 0)
    r14_6 = arg15
    r15_5 = rax_4
else
    var_ae8 = rdx_22.d
    int64_t i_6 = sub_140a6b260(&var_248, (rdx_22 << 3).d)
    r14_6 = arg15
    char rdx_24 = 0
    int64_t r8_6 = r14_6[0x14]
    uint64_t r9_4 = zx.q(r14_6[0x17].d) & zx.q(i_6.d)
    uint64_t rcx_58
    
    if (r8_6 != 0)
        rcx_58 = zx.q(r9_4.d)
    
    int32_t* rbx_10
    
    if (r8_6 == 0 || *(r9_4 + r8_6) s< 0)
    label_1410044a6:
        rbx_10 = sub_141012260(&r14_6[0x13], rdx_24, &r14_6[0x13], r9_4, i_6, i_6.d, 0xffffffff)
    else
        while (i_6 != *(r14_6[0x15] + (rcx_58 << 3)))
            r9_4 = zx.q(r9_4.d + 1)
            rdx_24 += 1
            rcx_58 = zx.q(r9_4.d)
            
            if (*(r9_4 + r8_6) s< rdx_24)
                goto label_1410044a6
        
        rbx_10 = r14_6[0x16] + (rcx_58 << 2)
    
    int32_t rcx_67 = *rbx_10
    
    if (rcx_67 == 0xffffffff)
        int32_t rdx_25 = *(r14_6 + 0x1c)
        *(r14_6 + 0x1c) = var_ae8 + rdx_25
        *rbx_10 = rdx_25
        void* rax_89 = *r14_6
        var_ae0 = zx.q(r14_6[4].d * rdx_25) + r14_6[5]
        var_af8.q = 0
        var_b00.q = &var_248
        int64_t* rcx_66 = *(*(rax_89 + 0x20) + 0x18)
        var_b08.d = var_ae8
        (*(*rcx_66 + 0xb8))(rcx_66, 1, &var_ae0, &var_ae8, var_b08, var_b00, var_af8, 0)
        rcx_67 = *rbx_10
    
    void* r8_9 = r12[1]
    int64_t rax_91 = r12[2]
    r15_5 = rax_4
    int32_t rdx_27 = *(r8_9 + 0x3c) * r12[3].d
    var_ae0 = zx.q(rcx_67 * r14_6[4].d) + r14_6[6]
    void* rcx_73 = *(r8_9 + 0x48)
    arg4 =
        zx.q(rdx_27 + ((zx.d(*(rax_91 + zx.q(*(r15_5 + 0x24)) + 0x88)) + 8) << 2) + *(r8_9 + 0x2c))
    
    if ((rcx_73.b & 1) != 0)
        rcx_73 = (rcx_73 s>> 1) + r8_9 + 0x48
    
    *(zx.q(arg4.d) + rcx_73) = var_ae0
    *(r8_9 + 0x60) = 1

uint64_t rdx_28 = zx.q(*(rdi_5 + 0x10c))

if (rdx_28.d != 0)
    var_ae8 = rdx_28.d
    int64_t i_7 = sub_140a6b260(&var_348, (rdx_28 << 3).d)
    char rdx_30 = 0
    int64_t r8_10 = r14_6[0x14]
    uint64_t r9_8 = zx.q(r14_6[0x17].d) & zx.q(i_7.d)
    uint64_t rcx_76
    
    if (r8_10 != 0)
        rcx_76 = zx.q(r9_8.d)
    
    int32_t* rbx_11
    
    if (r8_10 == 0 || *(r9_8 + r8_10) s< 0)
    label_141004614:
        rbx_11 = sub_141012260(&r14_6[0x13], rdx_30, &r14_6[0x13], r9_8, i_7, i_7.d, 0xffffffff)
    else
        while (i_7 != *(r14_6[0x15] + (rcx_76 << 3)))
            r9_8 = zx.q(r9_8.d + 1)
            rdx_30 += 1
            rcx_76 = zx.q(r9_8.d)
            
            if (*(r9_8 + r8_10) s< rdx_30)
                goto label_141004614
        
        rbx_11 = r14_6[0x16] + (rcx_76 << 2)
    
    int32_t rcx_85 = *rbx_11
    
    if (rcx_85 == 0xffffffff)
        int32_t rdx_31 = *(r14_6 + 0x1c)
        *(r14_6 + 0x1c) = var_ae8 + rdx_31
        *rbx_11 = rdx_31
        void* rax_97 = *r14_6
        var_ae0 = zx.q(r14_6[4].d * rdx_31) + r14_6[5]
        var_af8.q = 0
        var_b00.q = &var_348
        int64_t* rcx_84 = *(*(rax_97 + 0x20) + 0x18)
        var_b08.d = var_ae8
        (*(*rcx_84 + 0xb8))(rcx_84, 1, &var_ae0, &var_ae8, var_b08, var_b00, var_af8, 0)
        rcx_85 = *rbx_11
    
    int64_t rax_99 = r12[2]
    void* r8_13 = r12[1]
    var_ae0 = zx.q(rcx_85 * r14_6[4].d) + r14_6[6]
    void* rcx_89 = *(r8_13 + 0x48)
    arg4 = zx.q(*(r8_13 + 0x3c) * r12[3].d + 0x20
        + (zx.d(*(zx.q(*(r15_5 + 0x28)) + rax_99 + 0x88)) << 2) + *(r8_13 + 0x2c))
    
    if ((rcx_89.b & 1) != 0)
        rcx_89 = (rcx_89 s>> 1) + r8_13 + 0x48
    
    *(zx.q(arg4.d) + rcx_89) = var_ae0
    *(r8_13 + 0x60) = 1

char rax_106 = *(rdi_5 + 0x10b)

if (rax_106 != 0)
    uint64_t r8_14 = 0
    
    if (rax_106 != 0)
        uint64_t r11_3 = zx.q(*(r15_5 + 0x26))
        
        do
            void* const rcx_91
            
            if (not(test_bit(rsi_10, zx.q(r8_14.d))))
                rcx_91 = nullptr
            else
                rcx_91 = var_2c8[r8_14]
            
            int64_t rax_109 = r12[2]
            arg4 = r12[1]
            var_ae0 = rcx_91
            void* rcx_92 = *(arg4 + 0x48)
            uint64_t* r10_7 = zx.q(*(arg4 + 0x3c) * r12[3].d
                + ((zx.d(*(r11_3 + rax_109 + 0x88)) + 8 + (r8_14 << 1).d) << 2) + *(arg4 + 0x2c))
            
            if ((rcx_92.b & 1) != 0)
                rcx_92 = (rcx_92 s>> 1) + arg4 + 0x48
            
            r8_14 = zx.q(r8_14.d + 1)
            *(r10_7 + rcx_92) = var_ae0
            *(arg4 + 0x60) = 1
        while (r8_14.d u< zx.d(*(rdi_5 + 0x10b)))

uint64_t rdx_35 = zx.q(*(rdi_5 + 0x109))

if (rdx_35.d != 0)
    var_ae8 = rdx_35.d
    int64_t i_8 = sub_140a6b260(&var_3c8, (rdx_35 << 3).d)
    char rdx_37 = 0
    int64_t r8_15 = r14_6[0x1a]
    arg4 = zx.q(r14_6[0x1d].d) & zx.q(i_8.d)
    uint64_t rcx_95
    
    if (r8_15 != 0)
        rcx_95 = zx.q(arg4.d)
    
    int32_t* rbx_12
    
    if (r8_15 == 0 || *(arg4 + r8_15) s< 0)
    label_141004812:
        int32_t* rax_114
        rax_114, arg4 =
            sub_141012260(&r14_6[0x19], rdx_37, &r14_6[0x19], arg4, i_8, i_8.d, 0xffffffff)
        rbx_12 = rax_114
    else
        while (i_8 != *(r14_6[0x1b] + (rcx_95 << 3)))
            arg4 = zx.q(arg4.d + 1)
            rdx_37 += 1
            rcx_95 = zx.q(arg4.d)
            
            if (*(arg4 + r8_15) s< rdx_37)
                goto label_141004812
        
        rbx_12 = r14_6[0x1c] + (rcx_95 << 2)
    
    int32_t rcx_104 = *rbx_12
    
    if (rcx_104 == 0xffffffff)
        int32_t rdx_38 = *(r14_6 + 0x64)
        int32_t var_af0_3 = 1
        *(r14_6 + 0x64) = var_ae8 + rdx_38
        *rbx_12 = rdx_38
        void* rax_115 = *r14_6
        var_af8.q = 0
        var_ae0 = zx.q(r14_6[0xd].d * rdx_38) + r14_6[0xe]
        var_b00.q = &var_3c8
        var_b08.d = var_ae8
        int64_t* rcx_103 = *(*(rax_115 + 0x20) + 0x18)
        arg4 = (*(*rcx_103 + 0xb8))(rcx_103, 1, &var_ae0, &var_ae8, var_b08, var_b00, var_af8, 
            var_af0_3)
        rcx_104 = *rbx_12
    
    void* r8_18 = r12[1]
    int64_t rax_117 = r12[2]
    int32_t rdx_40 = r12[3].d * *(r8_18 + 0x3c)
    var_ae0 = zx.q(rcx_104 * r14_6[0xd].d) + r14_6[0xf]
    void* rcx_110 = *(r8_18 + 0x48)
    
    if ((rcx_110.b & 1) != 0)
        rcx_110 = (rcx_110 s>> 1) + r8_18 + 0x48
    
    *(zx.q(rdx_40 + ((zx.d(*(rax_117 + zx.q(*(r15_5 + 0x27)) + 0x88)) + 8) << 2) + *(r8_18 + 0x2c))
        + rcx_110) = var_ae0
    *(r8_18 + 0x60) = 1

void* i_9 = &var_9d8

if (var_3d8 != 0)
    i_9 = var_3d8

for (void* rdi_12 = (sx.q(var_3d0) << 4) + i_9; i_9 != rdi_12; i_9 += 0x10)
    arg4 = sub_141012560(r12[1], *i_9, *(i_9 + 8), arg4.b)

void* result = var_3d8

if (result != 0)
    result = sub_140a74f90(result)

__security_check_cookie(rax_1 ^ &var_b28)
return result
