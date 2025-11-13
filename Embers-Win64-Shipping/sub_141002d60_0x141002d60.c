// 函数: sub_141002d60
// 地址: 0x141002d60
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_aa8
int64_t rax_1 = __security_cookie ^ &var_aa8
void* rax_4 = *(arg2 + 0x110)
int64_t var_a60 = arg8
void* var_3e0 = nullptr
int32_t var_3d8 = 0
int32_t var_3d4 = 0x60
int64_t var_a40 = 0
void var_9e0
int64_t var_248[0x40]

if (arg3 != 0)
    uint64_t i_11 = zx.q(arg3)
    int64_t (* rdi_1)[0x40] = &var_248
    uint64_t i
    
    do
        int64_t* rbx_1 = *(arg4 - &var_248 + rdi_1)
        
        if (rbx_1 != 0)
            void* rax_6 = (*(*rbx_1 + 0x48))(rbx_1)
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
            
            int64_t* var_a50_1 = rbx_1
            int64_t rbx_2 = sx.q(var_3d8)
            *rdi_1 = *(*(rdx + 0xf0) + 0x28)
            int64_t rax_9 = *(rdx + 0x58)
            int32_t rax_10 = (rbx_2 + 1).d
            var_3d8 = rax_10
            
            if (rax_10 s> var_3d4)
                sub_1410347e0(&var_9e0, rbx_2.d)
            
            void* rcx_4 = &var_9e0
            
            if (var_3e0 != 0)
                rcx_4 = var_3e0
            
            *(rcx_4 + rbx_2 * 0x10) = rax_9.o
        
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
            
            int64_t rbx_3 = sx.q(var_3d8)
            *rdi_2 = *(rcx_5 + 0x28)
            void* var_a50_2 = rdx_2
            int64_t rcx_6 = *(*(rcx_5 + 0x40) + 0x10)
            int32_t rax_18 = (rbx_3 + 1).d
            var_3d8 = rax_18
            
            if (rax_18 s> var_3d4)
                sub_1410347e0(&var_9e0, rbx_3.d)
            
            void* rcx_8 = &var_9e0
            
            if (var_3e0 != 0)
                rcx_8 = var_3e0
            
            *(rcx_8 + rbx_3 * 0x10) = rcx_6.o
        
        rdi_2 = &(*rdi_2)[1]
        i_1 = i_12
        i_12 -= 1
    while (i_1 != 1)

int64_t var_2c8[0x10]

if (arg7 != 0)
    int64_t rsi_1 = 0
    int64_t (* rdi_3)[0x10] = &var_2c8
    int64_t r13_1 = 0
    uint64_t i_15 = zx.q(arg7)
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
            
            r13_1 |= 1 << (rsi_1 u% 0x40)
            int64_t rbx_4 = sx.q(var_3d8)
            *rdi_3 = *(rcx_9 + 0x88)
            int64_t rax_25 = *(rcx_9 + 0x50)
            int32_t rax_26 = (rbx_4 + 1).d
            void* var_a50_3 = rdx_4
            var_3d8 = rax_26
            
            if (rax_26 s> var_3d4)
                sub_1410347e0(&var_9e0, rbx_4.d)
            
            void* rcx_11 = &var_9e0
            
            if (var_3e0 != 0)
                rcx_11 = var_3e0
            
            *(rcx_11 + rbx_4 * 0x10) = rax_25.o
        
        rsi_1 += 1
        rdi_3 = &(*rdi_3)[1]
        i_2 = i_15
        i_15 -= 1
    while (i_2 != 1)
    var_a40 = r13_1

int64_t var_3c8[0x10]

if (arg9 != 0)
    int64_t (* rdx_6)[0x10] = &var_3c8
    uint64_t i_13 = zx.q(arg9)
    uint64_t i_3
    
    do
        void* rax_31 = *(arg10 - &var_3c8 + rdx_6)
        
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

int64_t var_a88
void var_348

if (arg11 != 0)
    uint64_t i_14 = zx.q(arg11)
    void* r15_2 = &var_348
    uint64_t i_4
    
    do
        void* rdx_7 = *(r15_2 + arg12 - &var_348)
        
        if (rdx_7 != 0)
            void* rbx_5 = rdx_7
            
            if (data_1439c7a34 u> 1)
                while (*(rbx_5 + 0x20) != *(arg1 + 0x138))
                    rbx_5 = *(rbx_5 + 0x88)
                    
                    if (rbx_5 == 0)
                        break
            
            int64_t rdi_4 = sx.q(var_3d8)
            *r15_2 = *(rbx_5 + 0x28)
            void* var_a50_4 = rdx_7
            int64_t rcx_13 = *(*(rbx_5 + 0x40) + 0x10)
            int32_t rax_38 = (rdi_4 + 1).d
            var_3d8 = rax_38
            
            if (rax_38 s> var_3d4)
                sub_1410347e0(&var_9e0, rdi_4.d)
            
            void* rcx_15 = &var_9e0
            
            if (var_3e0 != 0)
                rcx_15 = var_3e0
            
            *(rcx_15 + rdi_4 * 0x10) = rcx_13.o
            int32_t r8 = *(rbx_5 + 0x64)
            void* rdi_6 = *arg15 + 0x1c0
            void* rsi_2 = *(*(rbx_5 + 0x40) + 0x10)
            
            if (r8 == 1)
                sub_14105c1a0(rsi_2, rdi_6)
                void* rax_44 = sub_141023fa0(rdi_6, rsi_2)
                int32_t rax_45 = sub_1410626f0(rax_44, 0)
                
                if (rax_45 == 0xffffffff)
                    void* rbx_6 = *(rdi_6 + 8)
                    int64_t var_a20_1 = 8
                    int64_t rdi_7 = sx.q(*(rbx_6 + 0xc0))
                    int32_t rax_46 = (rdi_7 + 1).d
                    *(rbx_6 + 0xc0) = rax_46
                    
                    if (rax_46 s> *(rbx_6 + 0xc4))
                        sub_1405a4f90(rbx_6 + 0xb8)
                    
                    *(*(rbx_6 + 0xb8) + rdi_7 * 0x10) = rsi_2.o
                    sub_141069360(rax_44, 0, 8)
                else if (rax_45 != 8)
                    var_a88.d = 0
                    sub_1410129f0(rdi_6, rsi_2, rax_45, 8, var_a88.d)
                    sub_141069360(rax_44, 0, 8)
            else if (r8 == 4)
                sub_141037220(rdi_6, rsi_2, 8, *(rbx_5 + 0x68))
            else if (r8 == 5 || r8 == 8)
                sub_141036f20(rdi_6, rsi_2, 8, rbx_5 + 0x50)
        
        r15_2 += 8
        i_4 = i_14
        i_14 -= 1
    while (i_4 != 1)

void* r14_6 = arg2
int32_t rdx_15 = *(r14_6 + 0x70)
int32_t var_a68

if (rdx_15 != 0)
    int32_t rcx_28
    
    do
        var_a68 = rdx_15
        int32_t i_5 = 0
        rcx_28 = neg.d(rdx_15) & rdx_15
        uint64_t rflags_1
        int32_t i_16
        i_16, rflags_1 = _bit_scan_reverse(rcx_28)
        
        if (rcx_28 != 0)
            i_5 = i_16
        
        int64_t i_10 = sx.q(i_5)
        void* r13_3 = *(var_a60 + (i_10 << 3))
        int64_t r12_1 = i_10 << 2
        int64_t var_a28_2 = r12_1
        int64_t r14_5 = *(r13_3 + 0xa8)
        void* rcx_31 = *(arg2 + 0xb8)
        int64_t rax_49 = sx.q(*(rcx_31 + r12_1))
        
        if (rax_49.d != 0)
            int32_t rdi_8 = *(rcx_31 + (rax_49 << 2))
            void* rsi_4 = rcx_31 + (rax_49 << 2) + 4
            
            do
                int64_t* rcx_32 = *(r14_5 + (zx.q((rdi_8 u>> 8).w) << 3))
                void* const rax_54
                
                if (rcx_32 == 0)
                    rax_54 = nullptr
                else
                    rax_54 = (*(*rcx_32 + 0x48))(rcx_32)
                    
                    if (rax_54 != 0 && data_1439c7a34 u> 1)
                        void* rcx_33 = *(rax_54 + 0xe8)
                        
                        if (rcx_33 != rax_54)
                            rax_54 = rcx_33
                        
                        if (rax_54 != 0)
                            while (*(rax_54 + 8) != *(arg1 + 0x138))
                                rax_54 = *(rax_54 + 0xb8)
                                
                                if (rax_54 == 0)
                                    break
                
                void* rbx_7 = *(rax_54 + 0xf0)
                int64_t rdi_9 = sx.q(var_3d8)
                void* var_9f8_1 = rbx_7
                var_248[zx.q(rdi_8.b)] = *(rbx_7 + 0x28)
                int64_t rcx_36 = *(*(rbx_7 + 0x40) + 0x10)
                int32_t rax_57 = (rdi_9 + 1).d
                var_3d8 = rax_57
                
                if (rax_57 s> var_3d4)
                    sub_1410347e0(&var_9e0, rdi_9.d)
                
                void* rcx_38 = &var_9e0
                
                if (var_3e0 != 0)
                    rcx_38 = var_3e0
                
                *(rcx_38 + rdi_9 * 0x10) = rcx_36.o
                void* rdx_18 = *(*(rbx_7 + 0x40) + 0x10)
                
                if (rdx_18 != 0 && *(rdx_18 + 0xfc) != 0
                        && (*(rbx_7 + 0x64) != 1 || *(rdx_18 + 0x100) == 1))
                    sub_141036f20(*arg15 + 0x1c0, rdx_18, 0x40, rbx_7 + 0x50)
                
                rdi_8 = *rsi_4
                rsi_4 += 4
            while (rdi_8 u>> 0x18 == i_5)
            
            r12_1 = var_a28_2
            r14_5 = *(r13_3 + 0xa8)
        
        void* rcx_41 = *(arg2 + 0x78)
        int64_t rax_65 = sx.q(*(rcx_41 + r12_1))
        
        if (rax_65.d != 0)
            int32_t rcx_42 = *(rcx_41 + (rax_65 << 2))
            void* rsi_6 = rcx_41 + (rax_65 << 2) + 4
            
            do
                void* rbx_8 = *(r14_5 + (zx.q((rcx_42 u>> 8).w) << 3))
                
                if (rbx_8 != 0 && data_1439c7a34 u> 1)
                    while (*(rbx_8 + 0x20) != *(arg1 + 0x138))
                        rbx_8 = *(rbx_8 + 0x90)
                        
                        if (rbx_8 == 0)
                            break
                
                int64_t rdi_10 = sx.q(var_3d8)
                void* var_9e8_1 = rbx_8
                var_248[zx.q(rcx_42.b)] = *(rbx_8 + 0x28)
                int64_t rcx_44 = *(*(rbx_8 + 0x40) + 0x10)
                int32_t rax_72 = (rdi_10 + 1).d
                var_3d8 = rax_72
                
                if (rax_72 s> var_3d4)
                    sub_1410347e0(&var_9e0, rdi_10.d)
                
                void* rcx_46 = &var_9e0
                
                if (var_3e0 != 0)
                    rcx_46 = var_3e0
                
                *(rcx_46 + rdi_10 * 0x10) = rcx_44.o
                void* rdx_20 = *(*(rbx_8 + 0x40) + 0x10)
                
                if (rdx_20 != 0 && *(rdx_20 + 0xfc) != 0
                        && (*(rbx_8 + 0x64) != 1 || *(rdx_20 + 0x100) == 1))
                    sub_141036f20(*arg15 + 0x1c0, rdx_20, 0x40, rbx_8 + 0x50)
                
                rcx_42 = *rsi_6
                rsi_6 += 4
            while (rcx_42 u>> 0x18 == i_5)
            
            r12_1 = var_a28_2
            r14_5 = *(r13_3 + 0xa8)
        
        void* rcx_49 = *(arg2 + 0x88)
        int64_t rax_80 = sx.q(*(rcx_49 + r12_1))
        
        if (rax_80.d != 0)
            int32_t rdx_21 = *(rcx_49 + (rax_80 << 2))
            void* r8_6 = rcx_49 + (rax_80 << 2) + 4
            
            do
                void* rax_84 = *(r14_5 + (zx.q((rdx_21 u>> 8).w) << 3))
                
                if (rax_84 != 0 && data_1439c7a34 u> 1)
                    while (*(rax_84 + 0x18) != *(arg1 + 0x138))
                        rax_84 = *(rax_84 + 0x20)
                        
                        if (rax_84 == 0)
                            break
                
                var_3c8[zx.q(rdx_21.b)] = *(rax_84 + 0x30)
                rdx_21 = *r8_6
                r8_6 += 4
            while (rdx_21 u>> 0x18 == i_5)
        
        rdx_15 ^= rcx_28
    while (rcx_28 != var_a68)
    r14_6 = arg2

int64_t r15_3 = var_a40

if (arg13 != 0 && *(r14_6 + 0x108) != 0)
    var_2c8[0] = 0
    r15_3 |= 1

uint64_t rdx_22 = zx.q(*(r14_6 + 0x10a))
int32_t var_a80
int32_t var_a78
int64_t* rsi_7
int64_t* r12_4
void* r13_8

if (rdx_22.d == 0)
    rsi_7 = arg15
    r12_4 = arg14
    r13_8 = rax_4
else
    var_a68 = rdx_22.d
    int64_t i_6 = sub_140a6b260(&var_248, (rdx_22 << 3).d)
    r12_4 = arg14
    char rdx_24 = 0
    int64_t r8_7 = r12_4[0x14]
    uint64_t r9_7 = zx.q(r12_4[0x17].d) & zx.q(i_6.d)
    uint64_t rcx_54
    
    if (r8_7 != 0)
        rcx_54 = zx.q(r9_7.d)
    
    int32_t* rbx_9
    
    if (r8_7 == 0 || *(r9_7 + r8_7) s< 0)
    label_1410036d4:
        rbx_9 = sub_141012260(&r12_4[0x13], rdx_24, &r12_4[0x13], r9_7, i_6, i_6.d, 0xffffffff)
    else
        while (i_6 != *(r12_4[0x15] + (rcx_54 << 3)))
            r9_7 = zx.q(r9_7.d + 1)
            rdx_24 += 1
            rcx_54 = zx.q(r9_7.d)
            
            if (*(r9_7 + r8_7) s< rdx_24)
                goto label_1410036d4
        
        rbx_9 = r12_4[0x16] + (rcx_54 << 2)
    
    int32_t rcx_63 = *rbx_9
    
    if (rcx_63 == 0xffffffff)
        int32_t rdx_25 = *(r12_4 + 0x1c)
        int32_t var_a70_1 = 0
        *(r12_4 + 0x1c) = var_a68 + rdx_25
        *rbx_9 = rdx_25
        void* rax_90 = *r12_4
        var_a78.q = 0
        var_a60 = zx.q(r12_4[4].d * rdx_25) + r12_4[5]
        var_a80.q = &var_248
        var_a88.d = var_a68
        int64_t* rcx_62 = *(*(rax_90 + 0x20) + 0x18)
        (*(*rcx_62 + 0xb8))(rcx_62, 1, &var_a60, &var_a68, var_a88, var_a80, var_a78, var_a70_1)
        rcx_63 = *rbx_9
    
    rsi_7 = arg15
    r13_8 = rax_4
    int64_t* rcx_65 = *(*(*rsi_7 + 0x1c8) + 0x30)
    (*(*rcx_65 + 0xf8))(rcx_65, zx.q(*(r13_8 + 0x24)), zx.q(r12_4[4].d * rcx_63) + r12_4[6])

uint64_t rdx_27 = zx.q(*(r14_6 + 0x10c))

if (rdx_27.d != 0)
    var_a68 = rdx_27.d
    int64_t i_7 = sub_140a6b260(&var_348, (rdx_27 << 3).d)
    char rdx_29 = 0
    int64_t r8_13 = r12_4[0x14]
    uint64_t r9_10 = zx.q(r12_4[0x17].d) & zx.q(i_7.d)
    uint64_t rcx_67
    
    if (r8_13 != 0)
        rcx_67 = zx.q(r9_10.d)
    
    int32_t* rbx_10
    
    if (r8_13 == 0 || *(r9_10 + r8_13) s< 0)
    label_141003817:
        rbx_10 = sub_141012260(&r12_4[0x13], rdx_29, &r12_4[0x13], r9_10, i_7, i_7.d, 0xffffffff)
    else
        while (i_7 != *(r12_4[0x15] + (rcx_67 << 3)))
            r9_10 = zx.q(r9_10.d + 1)
            rdx_29 += 1
            rcx_67 = zx.q(r9_10.d)
            
            if (*(r9_10 + r8_13) s< rdx_29)
                goto label_141003817
        
        rbx_10 = r12_4[0x16] + (rcx_67 << 2)
    
    int32_t rcx_76 = *rbx_10
    
    if (rcx_76 == 0xffffffff)
        int32_t rdx_30 = *(r12_4 + 0x1c)
        int32_t var_a70_2 = 0
        *(r12_4 + 0x1c) = var_a68 + rdx_30
        *rbx_10 = rdx_30
        void* rax_96 = *r12_4
        var_a78.q = 0
        var_a60 = zx.q(r12_4[4].d * rdx_30) + r12_4[5]
        var_a80.q = &var_348
        var_a88.d = var_a68
        int64_t* rcx_75 = *(*(rax_96 + 0x20) + 0x18)
        (*(*rcx_75 + 0xb8))(rcx_75, 1, &var_a60, &var_a68, var_a88, var_a80, var_a78, var_a70_2)
        rcx_76 = *rbx_10
    
    int64_t* rcx_78 = *(*(*rsi_7 + 0x1c8) + 0x30)
    (*(*rcx_78 + 0xf8))(rcx_78, zx.q(*(r13_8 + 0x28)), zx.q(r12_4[4].d * rcx_76) + r12_4[6])

char rax_100 = *(r14_6 + 0x10b)

if (rax_100 != 0)
    uint32_t rdi_11 = zx.d(*(r13_8 + 0x26))
    uint64_t rbx_11 = 0
    
    if (rax_100 != 0)
        do
            int64_t r8_19
            
            if (not(test_bit(r15_3, zx.q(rbx_11.d))))
                r8_19 = 0
            else
                r8_19 = var_2c8[rbx_11]
            
            int64_t* rcx_80 = *(*(*rsi_7 + 0x1c8) + 0x30)
            (*(*rcx_80 + 0x128))(rcx_80, zx.q(rbx_11.d + rdi_11), r8_19)
            rbx_11 = zx.q(rbx_11.d + 1)
        while (rbx_11.d u< zx.d(*(r14_6 + 0x10b)))

uint64_t rdx_33 = zx.q(*(r14_6 + 0x109))

if (rdx_33.d != 0)
    var_a68 = rdx_33.d
    int64_t i_8 = sub_140a6b260(&var_3c8, (rdx_33 << 3).d)
    char rdx_35 = 0
    int64_t r8_20 = r12_4[0x1a]
    uint64_t r9_13 = zx.q(r12_4[0x1d].d) & zx.q(i_8.d)
    uint64_t rcx_82
    
    if (r8_20 != 0)
        rcx_82 = zx.q(r9_13.d)
    
    int32_t* rbx_12
    
    if (r8_20 == 0 || *(r9_13 + r8_20) s< 0)
    label_1410039b4:
        rbx_12 = sub_141012260(&r12_4[0x19], rdx_35, &r12_4[0x19], r9_13, i_8, i_8.d, 0xffffffff)
    else
        while (i_8 != *(r12_4[0x1b] + (rcx_82 << 3)))
            r9_13 = zx.q(r9_13.d + 1)
            rdx_35 += 1
            rcx_82 = zx.q(r9_13.d)
            
            if (*(r9_13 + r8_20) s< rdx_35)
                goto label_1410039b4
        
        rbx_12 = r12_4[0x1c] + (rcx_82 << 2)
    
    int32_t rcx_91 = *rbx_12
    
    if (rcx_91 == 0xffffffff)
        int32_t rdx_36 = *(r12_4 + 0x64)
        int32_t var_a70_3 = 1
        *(r12_4 + 0x64) = var_a68 + rdx_36
        *rbx_12 = rdx_36
        void* rax_107 = *r12_4
        var_a78.q = 0
        var_a60 = zx.q(r12_4[0xd].d * rdx_36) + r12_4[0xe]
        var_a80.q = &var_3c8
        var_a88.d = var_a68
        int64_t* rcx_90 = *(*(rax_107 + 0x20) + 0x18)
        (*(*rcx_90 + 0xb8))(rcx_90, 1, &var_a60, &var_a68, var_a88, var_a80, var_a78, var_a70_3)
        rcx_91 = *rbx_12
    
    int64_t* rcx_93 = *(*(*rsi_7 + 0x1c8) + 0x30)
    (*(*rcx_93 + 0xf8))(rcx_93, zx.q(*(r13_8 + 0x27)), zx.q(r12_4[0xd].d * rcx_91) + r12_4[0xf])

void* i_9 = &var_9e0

if (var_3e0 != 0)
    i_9 = var_3e0

for (void* rdi_14 = (sx.q(var_3d8) << 4) + i_9; i_9 != rdi_14; i_9 += 0x10)
    sub_14105c1a0(*i_9, *rsi_7 + 0x1c0)

void* result = var_3e0

if (result != 0)
    result = sub_140a74f90(result)

__security_check_cookie(rax_1 ^ &var_aa8)
return result
