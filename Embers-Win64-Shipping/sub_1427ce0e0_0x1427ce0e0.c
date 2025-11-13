// 函数: sub_1427ce0e0
// 地址: 0x1427ce0e0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

char rax = sub_1427cba00(arg2, arg3, arg4, arg5, arg6)

if (rax == 0)
    return rax

sub_1427d0580()
void** var_158
sub_1427ceb60(&var_158, arg2, arg4)
int32_t i_19 = *(arg2 + 0x74)
uint64_t i_18 = 0

if (i_19 != 0)
    int64_t* rdi_1 = nullptr
    uint64_t i_16 = zx.q(i_19)
    uint64_t i
    
    do
        void* rbx_1 = *(rdi_1 + arg2[9])
        int64_t* rax_3 = (*(*arg3 + 0x18))(arg3, zx.q(*(rbx_1 + 8)))
        int64_t r9 = *rax_3
        (*(r9 + 0x28))(rax_3, rbx_1, &var_158, r9)
        rdi_1 = &rdi_1[2]
        i = i_16
        i_16 -= 1
    while (i != 1)

int64_t var_168 = arg1
void** const var_200 = &data_1434cda00
int32_t var_160 = 0
int64_t* var_1f8 = &var_168
char var_1e8 = arg7
int64_t* var_1f0 = arg2
int32_t var_214
__builtin_strncpy(&var_214, "SEBD", 4)
sub_1427cfb10(&var_200)
void** const rax_5 = var_200
int32_t var_218 = 0x3040000
rax_5[2](&var_200, &var_218, 4)
void** const rax_6 = var_200
int32_t var_1c0 = 0
rax_6[2](&var_200, &var_1c0, 4)
void** const rax_7 = var_200
int32_t var_1bc = 0
rax_7[2](&var_200, &var_1bc, 4)
int32_t var_1dc
__builtin_strncpy(&var_1dc, "W_64", 4)
var_200[2](&var_200, &var_1dc, 4)
void** const rax_9 = var_200
int32_t var_1e0 = 0
rax_9[2](&var_200, &var_1e0, 4)
int64_t* rdi_2 = var_1f8
int32_t i_1 = neg.d(rdi_2[1].d) & 0xf
void var_1a8
memset(&var_1a8, 0, zx.q(i_1))

if (i_1 != 0)
    do
        uint64_t i_10 = 0x40
        
        if (i_1 s< 0x40)
            i_10 = zx.q(i_1)
        
        var_200[2](&var_200, &var_1a8, i_10)
        i_1 -= 0x40
    while (i_1 s> 0)
    
    rdi_2 = var_1f8

int32_t var_1b8 = *(arg2 + 0x74)
int64_t* rcx_13 = *rdi_2
int32_t rax_13 = (**rcx_13)(rcx_13, &var_1b8, 4)
int64_t var_210 = 0
rdi_2[1].d += rax_13
int64_t var_208 = 0
sub_1427cfaa0(&var_210, *(arg2 + 0x74), &var_1dc)
int32_t i_2 = 0
int64_t r13_1 = var_210
var_218 = 0
int16_t var_1d8

if (*(arg2 + 0x74) u> 0)
    do
        int16_t rbx_4 = *(*(arg2[9] + zx.q(i_2) * 0x10) + 8)
        int64_t* rax_16 = (*(*arg3 + 0x18))(arg3, zx.q(rbx_4))
        var_1dc = var_218
        var_1d8 = rbx_4
        *(r13_1 + (zx.q(i_2) << 3)) = var_1dc.q
        int64_t rdx_14 = *rax_16
        int32_t rax_17 = (*(rdx_14 + 0x30))(rax_16, rdx_14)
        i_2 += 1
        var_218 += (neg.d(rax_17) & 0xf) + rax_17
    while (i_2 u< *(arg2 + 0x74))

int64_t* r12_1 = var_1f8
int32_t i_3 = neg.d(r12_1[1].d) & 0xf
memset(&var_1a8, 0, zx.q(i_3))

if (i_3 != 0)
    do
        uint64_t i_11 = 0x40
        
        if (i_3 s< 0x40)
            i_11 = zx.q(i_3)
        
        var_200[2](&var_200, &var_1a8, i_11)
        i_3 -= 0x40
    while (i_3 s> 0)
    
    r12_1 = var_1f8

uint64_t rdi_4 = zx.q(var_208.d)
var_1e0 = rdi_4.d
int64_t* rcx_27 = *r12_1
int32_t rax_20 = (**rcx_27)(rcx_27, &var_1e0, 4)
r12_1[1].d += rax_20
int64_t* rcx_28 = *var_1f8
int32_t rax_22 = (**rcx_28)(rcx_28, r13_1, zx.q((rdi_4 << 3).d))
var_1f8[1].d += rax_22
int64_t* rcx_29 = *var_1f8
int32_t rax_24 = (**rcx_29)(rcx_29, &var_218, 4)
var_1f8[1].d += rax_24
int32_t rax_25 = var_208:4.d

if ((rax_25 & 0x7fffffff) != 0 && rax_25 s>= 0 && r13_1 != 0)
    class physx::PxAllocatorCallback* rax_26 = physx::shdfnd::getAllocator()
    int64_t r8_9 = *rax_26
    (*(r8_9 + 0x10))(rax_26, r13_1, r8_9)

int64_t* rdi_5 = var_1f8
int32_t i_4 = neg.d(rdi_5[1].d) & 0xf
memset(&var_1a8, 0, zx.q(i_4))

if (i_4 != 0)
    do
        uint64_t i_12 = 0x40
        
        if (i_4 s< 0x40)
            i_12 = zx.q(i_4)
        
        var_200[2](&var_200, &var_1a8, i_12)
        i_4 -= 0x40
    while (i_4 s> 0)
    
    rdi_5 = var_1f8

int32_t var_110
var_1e0 = var_110
int64_t* rcx_33 = *rdi_5
int32_t rax_30 = (**rcx_33)(rcx_33, &var_1e0, 4)
rdi_5[1].d += rax_30
int64_t* rcx_34 = *var_1f8
int64_t var_118
int32_t rax_32 = (**rcx_34)(rcx_34, var_118, zx.q(var_110 << 4))
var_1f8[1].d += rax_32
int32_t rax_34 = (*(*arg2 + 0x58))(arg2)
int32_t var_1c8 = 0xffffffff
var_218 = rax_34
var_210 = 0
int64_t var_208_1 = 0
int64_t var_1d0
sub_1427cfa30(&var_210, rax_34, &var_1d0)
int64_t rax_35 = *arg2
var_218 = 0
int32_t rbx_12 = 0
int32_t rax_36 = (*(rax_35 + 0x38))(arg2)
int64_t rdi_6 = var_210

if (rax_36 != 0)
    int32_t rax_43
    
    do
        int64_t rax_38 = (*(*arg2 + 0x40))(arg2, zx.q(rbx_12))
        int64_t r8_14 = *arg2
        int64_t rax_39 = (*(r8_14 + 0x68))(arg2, rax_38, r8_14)
        
        if (rax_39 != 0)
            int32_t rcx_40 = var_218
            var_1d0 = rax_39
            var_1c8 = rbx_12
            int128_t zmm0_2 = var_1d0.o
            var_218 = rcx_40 + 1
            *(rdi_6 + zx.q(rcx_40) * 0x10) = zmm0_2
        
        rbx_12 += 1
        rax_43 = (*(*arg2 + 0x38))(arg2)
    while (rbx_12 u< rax_43)

int64_t* r12_2 = var_1f8
int32_t i_5 = neg.d(r12_2[1].d) & 0xf
memset(&var_1a8, 0, zx.q(i_5))

if (i_5 != 0)
    do
        uint64_t i_13 = 0x40
        
        if (i_5 s< 0x40)
            i_13 = zx.q(i_5)
        
        var_200[2](&var_200, &var_1a8, i_13)
        i_5 -= 0x40
    while (i_5 s> 0)
    
    r12_2 = var_1f8

int64_t* rcx_45 = *r12_2
int32_t rax_46 = (**rcx_45)(rcx_45, &var_218, 4)
r12_2[1].d += rax_46
int64_t* rcx_46 = *var_1f8
int32_t rax_48 = (**rcx_46)(rcx_46, rdi_6, zx.q(var_208_1.d << 4))
var_1f8[1].d += rax_48
int32_t rax_49 = var_208_1:4.d

if ((rax_49 & 0x7fffffff) != 0 && rax_49 s>= 0 && rdi_6 != 0)
    class physx::PxAllocatorCallback* rax_50 = physx::shdfnd::getAllocator()
    int64_t r8_18 = *rax_50
    (*(r8_18 + 0x10))(rax_50, rdi_6, r8_18)

var_208_1:4.d = 0xffffffff
var_1d0 = 0
var_1c8.q = 0
int32_t var_d4
sub_1427cf9b0(&var_1d0, var_d4, &var_210)
int32_t rcx_49 = 0
int64_t r13_2 = var_1d0
uint64_t r10 = 0
var_218 = 0
int32_t var_e8

if (var_e8 u> 0)
    int32_t* var_f0
    int32_t rax_51 = *var_f0
    int32_t var_e4
    
    if (rax_51 != 0xffffffff)
    label_1427ce680_1:
        
        while (true)
        label_1427ce680:
            uint64_t r9_1 = zx.q(rax_51)
            var_218 = rcx_49 + 1
            uint64_t rcx_51 = r9_1 * 3
            int64_t var_100
            int64_t* rdx_33 = var_100 + (rcx_51 << 3)
            var_208_1:4.d = *(var_100 + (rcx_51 << 3) + 0x10)
            var_210 = *rdx_33
            var_208_1.d = rdx_33[1].d
            *(r13_2 + zx.q(rcx_49) * 0x10) = var_210.o
            int64_t var_f8
            rax_51 = *(var_f8 + (r9_1 << 2))
            
            if (rax_51 == 0xffffffff)
                while (true)
                    r10 = zx.q(r10.d + 1)
                    
                    if (r10.d == var_e4)
                        break
                    
                    rax_51 = var_f0[r10]
                    
                    if (rax_51 != 0xffffffff)
                        rcx_49 = var_218
                        goto label_1427ce680
                
                if (rax_51 == 0xffffffff)
                    break
            
            rcx_49 = var_218
    else
        while (true)
            r10 = zx.q(r10.d + 1)
            
            if (r10.d == var_e4)
                break
            
            rax_51 = var_f0[r10]
            
            if (rax_51 != 0xffffffff)
                goto label_1427ce680_1
        
        if (rax_51 != 0xffffffff)
            goto label_1427ce680_1

int32_t var_1d4 = 0xffffffff
var_210 = 0
int64_t var_208_2 = 0
int32_t var_9c
sub_1427cf930(&var_210, var_9c, &var_1dc)
int32_t rcx_56 = 0
int64_t r12_3 = var_210
uint64_t r10_1 = 0
var_214 = 0
int32_t var_b0

if (var_b0 u> 0)
    int32_t* var_b8
    int32_t rax_57 = *var_b8
    int32_t var_ac
    
    if (rax_57 != 0xffffffff)
    label_1427ce770_1:
        
        while (true)
        label_1427ce770:
            uint64_t r9_2 = zx.q(rax_57)
            var_214 = rcx_56 + 1
            uint64_t rcx_58 = r9_2 * 3
            int64_t var_c8
            void* rdx_37 = var_c8 + (rcx_58 << 3)
            int32_t rax_59 = *(rdx_37 + 0x10)
            var_1dc = *(var_c8 + (rcx_58 << 3))
            uint64_t rdx_38 = zx.q(rcx_56) * 3
            var_1d8.d = *(rdx_37 + 8)
            *(r12_3 + (rdx_38 << 2)) = var_1dc.q
            *(r12_3 + (rdx_38 << 2) + 8) = rax_59
            int64_t var_c0
            rax_57 = *(var_c0 + (r9_2 << 2))
            
            if (rax_57 == 0xffffffff)
                while (true)
                    r10_1 = zx.q(r10_1.d + 1)
                    
                    if (r10_1.d == var_ac)
                        break
                    
                    rax_57 = var_b8[r10_1]
                    
                    if (rax_57 != 0xffffffff)
                        rcx_56 = var_214
                        goto label_1427ce770
                
                if (rax_57 == 0xffffffff)
                    break
            
            rcx_56 = var_214
    else
        while (true)
            r10_1 = zx.q(r10_1.d + 1)
            
            if (r10_1.d == var_ac)
                break
            
            rax_57 = var_b8[r10_1]
            
            if (rax_57 != 0xffffffff)
                goto label_1427ce770_1
        
        if (rax_57 != 0xffffffff)
            goto label_1427ce770_1

int64_t* rdi_7 = var_1f8
int32_t i_6 = neg.d(rdi_7[1].d) & 0xf
memset(&var_1a8, 0, zx.q(i_6))

if (i_6 != 0)
    do
        uint64_t i_14 = 0x40
        
        if (i_6 s< 0x40)
            i_14 = zx.q(i_6)
        
        var_200[2](&var_200, &var_1a8, i_14)
        i_6 -= 0x40
    while (i_6 s> 0)
    
    rdi_7 = var_1f8

int64_t* rcx_64 = *rdi_7
int32_t rax_63 = (**rcx_64)(rcx_64, &var_218, 4)
rdi_7[1].d += rax_63
int64_t* rcx_65 = *var_1f8
int32_t rax_65 = (**rcx_65)(rcx_65, r13_2, zx.q(var_1c8 << 4))
var_1f8[1].d += rax_65
int64_t* rcx_66 = *var_1f8
int32_t rax_67 = (**rcx_66)(rcx_66, &var_214, 4)
var_1f8[1].d += rax_67
int64_t* rcx_67 = *var_1f8
int64_t r9_3 = *rcx_67
int32_t rax_69 = (*r9_3)(rcx_67, r12_3, zx.q(var_208_2.d * 0xc), r9_3)
var_1f8[1].d += rax_69
int32_t rax_70 = var_208_2:4.d

if ((rax_70 & 0x7fffffff) != 0 && rax_70 s>= 0 && r12_3 != 0)
    class physx::PxAllocatorCallback* rax_71 = physx::shdfnd::getAllocator()
    int64_t r8_30 = *rax_71
    (*(r8_30 + 0x10))(rax_71, r12_3, r8_30)

int32_t var_1c4

if ((var_1c4 & 0x7fffffff) != 0 && var_1c4 s>= 0 && r13_2 != 0)
    class physx::PxAllocatorCallback* rax_73 = physx::shdfnd::getAllocator()
    int64_t r8_31 = *rax_73
    (*(r8_31 + 0x10))(rax_73, r13_2, r8_31)

int32_t i_7 = neg.d(var_1f8[1].d) & 0xf
memset(&var_1a8, 0, zx.q(i_7))

if (i_7 != 0)
    do
        uint64_t i_15 = 0x40
        
        if (i_7 s< 0x40)
            i_15 = zx.q(i_7)
        
        var_200[2](&var_200, &var_1a8, i_15)
        i_7 -= 0x40
    while (i_7 s> 0)

int32_t i_20 = *(arg2 + 0x74)

if (i_20 != 0)
    int64_t* rdi_8 = nullptr
    i_18 = zx.q(i_20)
    uint64_t i_8
    
    do
        void* r13_3 = *(rdi_8 + arg2[9])
        int64_t* rax_78 = (*(*arg3 + 0x18))(arg3, zx.q(*(r13_3 + 8)))
        int32_t j = neg.d(var_1f8[1].d) & 0xf
        memset(&var_1a8, 0, zx.q(j))
        
        if (j != 0)
            do
                uint64_t j_2 = 0x40
                
                if (j s< 0x40)
                    j_2 = zx.q(j)
                
                var_200[2](&var_200, &var_1a8, j_2)
                j -= 0x40
            while (j s> 0)
        
        (*(*rax_78 + 0x20))(rax_78, r13_3, &var_200)
        rdi_8 = &rdi_8[2]
        i_8 = i_18
        i_18 -= 1
    while (i_8 != 1)

int32_t i_21 = *(arg2 + 0x74)

if (i_21 != 0)
    uint64_t i_17 = zx.q(i_21)
    uint64_t i_9
    
    do
        void* r13_4 = *(i_18 + arg2[9])
        int64_t* rax_83 = (*(*arg3 + 0x18))(arg3, zx.q(*(r13_4 + 8)))
        int32_t j_1 = neg.d(var_1f8[1].d) & 0xf
        memset(&var_1a8, 0, zx.q(j_1))
        
        if (j_1 != 0)
            do
                uint64_t j_3 = 0x40
                
                if (j_1 s< 0x40)
                    j_3 = zx.q(j_1)
                
                var_200[2](&var_200, &var_1a8, j_3)
                j_1 -= 0x40
            while (j_1 s> 0)
        
        (*(*rax_83 + 0x18))(rax_83, r13_4, &var_200)
        i_18 += 0x10
        i_9 = i_17
        i_17 -= 1
    while (i_9 != 1)

var_200 = &data_1434cd8e0
void** var_50
sub_1427f5ea0(&var_50)
int64_t var_98

if (var_98 != 0)
    class physx::PxAllocatorCallback* rax_86 = physx::shdfnd::getAllocator()
    int64_t r8_37 = *rax_86
    (*(r8_37 + 0x10))(rax_86, var_98, r8_37)

int64_t var_d0

if (var_d0 != 0)
    class physx::PxAllocatorCallback* rax_87 = physx::shdfnd::getAllocator()
    int64_t r8_38 = *rax_87
    (*(r8_38 + 0x10))(rax_87, var_d0, r8_38)

int64_t var_108

if (var_108 != 0)
    class physx::PxAllocatorCallback* rax_88 = physx::shdfnd::getAllocator()
    int64_t r8_39 = *rax_88
    (*(r8_39 + 0x10))(rax_88, var_108, r8_39)

int32_t var_10c

if ((var_10c & 0x7fffffff) != 0 && var_10c s>= 0 && var_118 != 0)
    class physx::PxAllocatorCallback* rax_89 = physx::shdfnd::getAllocator()
    int64_t r8_40 = *rax_89
    (*(r8_40 + 0x10))(rax_89, var_118, r8_40)

int64_t var_150

if (var_150 != 0)
    class physx::PxAllocatorCallback* rax_91 = physx::shdfnd::getAllocator()
    int64_t r8_41 = *rax_91
    (*(r8_41 + 0x10))(rax_91, var_150, r8_41)

int32_t rax_90
rax_90.b = 1
return rax_90
