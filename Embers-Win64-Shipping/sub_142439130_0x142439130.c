// 函数: sub_142439130
// 地址: 0x142439130
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int128_t* r15 = arg2

if ((*(arg1 + 0x11b) & 0x40) != 0)
    return &__return_addr

if (*(arg1 + 0x11a) - 1 u<= 2)
    sub_1423b1ee0(arg1 + 0x648, arg1)

int64_t r14
r14.b = 0
int32_t rdx_1 = data_143a30688
int32_t rcx_2 = data_143a30694 + 1
data_143a30694 = rcx_2
int64_t rsi_1 = sx.q(rdx_1 - 1)
int128_t var_b8

if (rdx_1 - 1 s>= 0)
    int64_t rbx_2 = rsi_1 << 4
    int64_t temp0_1
    
    do
        int64_t rcx_3 = data_143a30680
        
        if (*(rbx_2 + rcx_3 + 8) == 0)
            r14.b = 1
        else
            int64_t* rcx_4 = *(rbx_2 + rcx_3)
            
            if (rcx_4 == 0)
                r14.b = 1
            else
                int128_t zmm0 = *r15
                int64_t rax_2 = *rcx_4
                var_b8 = zmm0
                
                if ((*(rax_2 + 0x50))(zmm0, arg1, &var_b8) == 0)
                    r14.b = 1
        
        rbx_2 -= 0x10
        temp0_1 = rsi_1
        rsi_1 -= 1
    while (temp0_1 - 1 s>= 0)
    rcx_2 = data_143a30694
    rdx_1 = data_143a30688

int32_t rsi_2 = 0
data_143a30694 = rcx_2 - 1

if (r14.b != 0 && rcx_2 - 1 s<= 0)
    int32_t r15_1 = rdx_1
    int32_t r14_1 = 0
    
    if (rdx_1 s> 0)
        int64_t* rbx_3 = nullptr
        
        do
            int64_t rcx_6 = data_143a30680
            
            if (*(rbx_3 + rcx_6 + 8) == 0)
                sub_1405a4880(&data_143a30680, r14_1, 1, 1)
            else
                int64_t* rcx_7 = *(rbx_3 + rcx_6)
                
                if (rcx_7 == 0)
                    sub_1405a4880(&data_143a30680, r14_1, 1, 1)
                else if ((*(*rcx_7 + 0x20))(rcx_7) != 0)
                    sub_1405a4880(&data_143a30680, r14_1, 1, 1)
                else
                    r14_1 += 1
                    rbx_3 = &rbx_3[2]
            
            rdx_1 = data_143a30688
        while (r14_1 s< rdx_1)
    
    int32_t rax_6 = rdx_1 * 2
    
    if (rax_6 s<= 2)
        rax_6 = 2
    
    data_143a30690 = rax_6
    
    if (r15_1 s> rax_6 && data_143a3068c != rdx_1)
        sub_1405a5410(&data_143a30680, rdx_1)
    
    r15 = arg2

void* rcx_8 = *(arg1 + 0x30)
void* const r14_2 = nullptr

if (rcx_8 != 0)
    rdx_1.b = 1
    r14_2 = sub_1420e4e60(rcx_8)

int32_t r12_1 = *r15
uint32_t var_e8

if ((r12_1.b & 1) != 0)
    if ((r12_1.b & 8) != 0)
        int64_t* rax_8 = j_sub_140a82f30(0x1e8)
        int64_t* rbx_4
        
        if (rax_8 == 0)
            rbx_4 = nullptr
        else
            rbx_4 = sub_142259d10(rax_8, r14_2)
        
        void* rcx_10 = *(arg1 + 0x1f8)
        
        if (rcx_10 != 0)
            sub_142279aa0(rcx_10, 0)
            int64_t* r15_2 = *(arg1 + 0x1f8)
            
            if (r15_2 != 0)
                sub_14225afc0(r15_2)
                j_sub_140a74f90(r15_2)
        
        *(arg1 + 0x1f8) = rbx_4
        
        if (rbx_4 != 0)
            sub_142279aa0(rbx_4, arg1)
    
    *(arg1 + 0x11c) &= 0xfb
    *(arg1 + 0x11e) &= 0xf7
    *(arg1 + 0x11c) |= ((r12_1 u>> 6).b & 1) << 2
    *(arg1 + 0x11e) |= ((r12_1 u>> 2).b & 1) << 3
    int64_t* rax_14 = sub_142006940()
    var_e8 = zx.d(*(arg1 + 0x118))
    (*(*rax_14 + 0x50))(rax_14, arg1, *(arg1 + 0x11e) u>> 3 & 1, (r12_1 u>> 9).b & 1, var_e8)

if (r14_2 != 0 && (r12_1.b & 0x30) != 0)
    if ((r12_1.b & 0x10) != 0)
        int64_t* r8_3 = *(r14_2 + 0x238)
        
        if (r8_3 == 0)
            r8_3 = *(r14_2 + 0x230)
        
        var_e8.b = 0
        sub_141de0ff0(arg1, 0, r8_3, 0, 0)
    
    if ((r12_1.b & 0x20) != 0 && (*(r14_2 + 0x22d) & 0x10) != 0)
        sub_14242f9a0(arg1)

void* rbx_5 = data_143f5b298
int32_t var_e0
char var_d8
int64_t var_d0
char var_c8
uint64_t arg_8

if (*(rbx_5 + 0x1d0) != 0)
    void* rax_15 = sub_142475a10()
    
    if (rax_15 != 0)
        void* rdx_8 = *(rbx_5 + 0x1d0)
        int64_t rax_16 = sx.q(*(rax_15 + 0x38))
        
        if (rax_16.d s<= *(rdx_8 + 0x38) && *(*(rdx_8 + 0x30) + (rax_16 << 3)) == rax_15 + 0x30
                && rdx_8 != 0)
            void* r15_3 = data_143f5b298
            arg_8 = 0
            int64_t* r15_4
            
            if (*(r15_3 + 0x1d0) == 0)
                r15_4 = nullptr
            else
                void* rax_18 = sub_142475a10()
                
                if (rax_18 == 0)
                    r15_4 = nullptr
                else
                    r15_4 = *(r15_3 + 0x1d0)
                    int64_t rax_19 = sx.q(*(rax_18 + 0x38))
                    
                    if (rax_19.d s> r15_4[7].d || *(r15_4[6] + (rax_19 << 3)) != rax_18 + 0x30)
                        r15_4 = nullptr
            
            char rax_21 = sub_140b5b8a0(0, 0)
            uint64_t rbx_6 = arg_8
            uint32_t rcx_21
            rcx_21.b = (rbx_6 u>> 0x20).d == 0
            
            if ((rcx_21.b & rax_21) != 0)
                sub_140d19010(arg1, 
                    NewObject with empty name can't be used to create default subobjects (inside of "
                "UObject derived class constructor) as it produces incon")
            
            var_c8 = 0
            var_d0 = 0
            var_d8 = 0
            var_e0.q = 0
            var_e8 = 0
            *(arg1 + 0x140) = sub_140d2dfc0(r15_4, arg1, rbx_6, 0, 0, 0, 0, 0, 0)

int128_t zmm0_1
int128_t zmm6_1
zmm0_1, zmm6_1 = sub_1424455e0(arg1)
void* rax_23 = *(arg1 + 0x30)
int16_t* const r13_1 = &data_142d40450

if (*(rax_23 + 0x20) != arg1)
    arg_8 = *(rax_23 + 0x18)
    zmm0_1, zmm6_1 = sub_140b63b70(&arg_8, &var_b8)
    int64_t* rcx_26 = *(arg1 + 0x30)
    int16_t* const rdx_12 = &data_142d40450
    
    if (var_b8:8.d != 0)
        rdx_12 = var_b8.q
    
    (*(*rcx_26 + 0x138))(rcx_26, rdx_12, arg1, 1, var_e8, var_e0, var_d8, var_d0, var_c8)
    int64_t rcx_27 = var_b8.q
    
    if (rcx_27 != 0)
        zmm0_1 = sub_140a74f90(rcx_27)

int32_t r15_5 = 0
bool cond:1_1 = *(arg1 + 0x154) == 1
*(arg1 + 0x150) = 0

if (not(cond:1_1))
    zmm0_1 = sub_1405c5570(arg1 + 0x148, 1)
    r15_5 = *(arg1 + 0x150)

*(arg1 + 0x150) = r15_5 + 1

if (r15_5 + 1 s> *(arg1 + 0x154))
    zmm0_1 = sub_1405a4d70(arg1 + 0x148)

*(*(arg1 + 0x148) + (sx.q(r15_5) << 3)) = *(arg1 + 0x30)
*(*(arg1 + 0x30) + 0xb8) = arg1
void* rax_29 = *(arg1 + 0x30)
*(rax_29 + 0x1f4) |= 0x20
int64_t rdx_14

if (*(arg1 + 0x100) == 0)
    void* rcx_31 = *(arg1 + 0x30)
    int64_t* rbx_8
    
    if (rcx_31 == 0)
        rbx_8 = nullptr
    else
        void* rax_30 = sub_1420e4e60(rcx_31)
        
        if (rax_30 == 0)
            rbx_8 = nullptr
        else
            rbx_8 = *(rax_30 + 0x258)
            
            if (rbx_8 == 0)
                rbx_8 = nullptr
            else
                void* rax_31 = sub_14249bc70()
                
                if (rax_31 == 0)
                    rbx_8 = nullptr
                else
                    int64_t rax_32 = sx.q(*(rax_31 + 0x38))
                    
                    if (rax_32.d s> rbx_8[7].d || *(rbx_8[6] + (rax_32 << 3)) != rax_31 + 0x30)
                        rbx_8 = nullptr
    
    if (rbx_8 == 0)
        rbx_8 = sub_14249bc70()
    
    int64_t var_78
    __builtin_memset(&var_78, 0, 0x29)
    char var_4f
    char var_4f_1 = (var_4f & 0xf8) | 8
    char var_4e_1 = 0
    int32_t var_4c_1 = 8
    var_e8.q = &var_78
    void* rax_35
    rax_35, rdx_14, zmm0_1, zmm6_1 = sub_1420efae0(arg1, rbx_8, nullptr, nullptr, var_e8)
    *(arg1 + 0x100) = rax_35
    *(rax_35 + 0x25c) = 0xfff0bdc0

if (*(arg1 + 0x1f8) != 0)
    void* rcx_35 = *(arg1 + 0x30)
    int128_t var_48_1 = zmm6_1
    int64_t* rax_36
    
    if (rcx_35 != 0)
        rdx_14.b = 1
        rax_36 = sub_1420e4e60(rcx_35)
    
    if (rcx_35 == 0 || rax_36 == 0)
        zmm0_1 = zx.o(0)
    else
        int64_t rdx_18 = *rax_36
        (*(rdx_18 + 0x630))(rax_36, rdx_18)
    
    int32_t var_e8_1 = zx.o(0).d
    var_b8:8.d = zmm0_1.d
    var_b8.q = 0
    sub_14227a5c0(*(arg1 + 0x1f8), &var_b8, (zx.o(0)).d, (zx.o(0)).d)

if ((r12_1.b & 8) != 0)
    int64_t* r14_3
    
    if (r14_2 == 0)
        r14_3 = nullptr
    else
        r14_3 = *(r14_2 + 0x260)
    
    if (r14_3 == 0)
        r14_3 = *(data_143f5b298 + 0x1d8)
    else
        void* rax_37 = sub_142560320()
        
        if (rax_37 == 0)
            r14_3 = *(data_143f5b298 + 0x1d8)
        else
            int64_t rax_38 = sx.q(*(rax_37 + 0x38))
            
            if (rax_38.d s> r14_3[7].d || *(r14_3[6] + (rax_38 << 3)) != rax_37 + 0x30)
                r14_3 = *(data_143f5b298 + 0x1d8)
    
    if (r14_3 != 0)
        void* rax_41 = sub_142560320()
        
        if (rax_41 != 0)
            int64_t rax_42 = sx.q(*(rax_41 + 0x38))
            
            if (rax_42.d s<= r14_3[7].d && *(r14_3[6] + (rax_42 << 3)) == rax_41 + 0x30)
                arg_8 = 0
                void* rax_44 = sub_142560320()
                int64_t rax_45
                
                if (rax_44 != 0)
                    rax_45 = sx.q(*(rax_44 + 0x38))
                
                if (rax_44 == 0 || rax_45.d s> r14_3[7].d
                        || *(r14_3[6] + (rax_45 << 3)) != rax_44 + 0x30)
                    r14_3 = nullptr
                
                char rax_47 = sub_140b5b8a0(0, 0)
                uint64_t rbx_9 = arg_8
                uint32_t rcx_42
                rcx_42.b = (rbx_9 u>> 0x20).d == 0
                
                if ((rcx_42.b & rax_47) != 0)
                    sub_140d19010(arg1, 
                        NewObject with empty name can't be used to create default subobjects (inside of "
                    "UObject derived class constructor) as it produces incon")
                
                void* rax_48 = sub_140d2dfc0(r14_3, arg1, rbx_9, 0, 0, 0, 0, 0, 0)
                *(arg1 + 0x60) = rax_48
                int64_t rdx_24 = *rax_48
                (*(rdx_24 + 0x268))(rax_48, rdx_24)

sub_141fa75e0(arg1 + 0x400, *(arg1 + 0x30) + 0x30)
*(arg1 + 0x11e) &= 0xfd
*(arg1 + 0x11c) &= 0xfe
*(arg1 + 0x11e) |= ((r12_1 u>> 1).b & 1) * 2
int64_t var_98
int64_t var_88
int16_t** rax_50 = sub_140b18700(&var_98, sub_14151ffb0(&var_88), 1)
int64_t var_a8
int64_t* rax_52 = sub_140b18720(&var_b8, sub_142436cb0(arg1, &var_a8), 1)
int16_t* rdx_30

if (rax_50[1].d == 0)
    rdx_30 = &data_142d40450
else
    rdx_30 = *rax_50

if (rax_52[1].d != 0)
    r13_1 = *rax_52

char rcx_52 = 0

if (sub_140a54510(r13_1, rdx_30) == 0)
    rcx_52 = 0x20

*(arg1 + 0x11c) &= 0xdf
*(arg1 + 0x11c) |= rcx_52
int64_t rcx_53 = var_b8.q

if (rcx_53 != 0)
    sub_140a74f90(rcx_53)

int64_t rcx_54 = var_a8

if (rcx_54 != 0)
    sub_140a74f90(rcx_54)

int64_t rcx_55 = var_98

if (rcx_55 != 0)
    sub_140a74f90(rcx_55)

int64_t rcx_56 = var_88

if (rcx_56 != 0)
    sub_140a74f90(rcx_56)

sub_14242f280(arg1)
*(arg1 + 0x11b) |= 0x40
r15_5.b = 0
int32_t rdx_31 = data_143a306a0
int32_t rcx_59 = data_143a306ac + 1
data_143a306ac = rcx_59
int64_t r14_4 = sx.q(rdx_31 - 1)

if (rdx_31 - 1 s>= 0)
    int64_t rbx_12 = r14_4 << 4
    int64_t temp1_1
    
    do
        int64_t rcx_60 = data_143a30698
        
        if (*(rbx_12 + rcx_60 + 8) == 0)
            r15_5.b = 1
        else
            int64_t* rcx_61 = *(rbx_12 + rcx_60)
            
            if (rcx_61 == 0)
                r15_5.b = 1
            else
                int128_t zmm0_2 = *arg2
                var_88.o = zmm0_2
                
                if ((*(*rcx_61 + 0x50))(zmm0_2, arg1, &var_88) == 0)
                    r15_5.b = 1
        
        rbx_12 -= 0x10
        temp1_1 = r14_4
        r14_4 -= 1
    while (temp1_1 - 1 s>= 0)
    rcx_59 = data_143a306ac
    rdx_31 = data_143a306a0

data_143a306ac = rcx_59 - 1

if (r15_5.b != 0 && rcx_59 - 1 s<= 0)
    int32_t r14_5 = rdx_31
    
    if (rdx_31 s> 0)
        int64_t* rbx_13 = nullptr
        
        do
            int64_t rcx_63 = data_143a30698
            
            if (*(rbx_13 + rcx_63 + 8) == 0)
                sub_1405a4880(&data_143a30698, rsi_2, 1, 1)
            else
                int64_t* rcx_64 = *(rbx_13 + rcx_63)
                
                if (rcx_64 == 0)
                    sub_1405a4880(&data_143a30698, rsi_2, 1, 1)
                else if ((*(*rcx_64 + 0x20))(rcx_64) != 0)
                    sub_1405a4880(&data_143a30698, rsi_2, 1, 1)
                else
                    rsi_2 += 1
                    rbx_13 = &rbx_13[2]
            
            rdx_31 = data_143a306a0
        while (rsi_2 s< rdx_31)
    
    int32_t rax_59 = rdx_31 * 2
    
    if (rax_59 s<= 2)
        rax_59 = 2
    
    data_143a306a8 = rax_59
    
    if (r14_5 s> rax_59 && data_143a306a4 != rdx_31)
        sub_1405a5410(&data_143a30698, rdx_31)

sub_1420f1e60(*(arg1 + 0x30) + 0x150, *(arg1 + 0x1b0))
sub_1420f1e80(*(arg1 + 0x30) + 0x180, *(arg1 + 0x1b0))
sub_1420e5fa0(*(arg1 + 0x30))
void*** rax_60 = sub_141f88540()
void** r8_11 = *rax_60
r8_11[9](rax_60, *(arg1 + 0x30), r8_11)
return sub_140599090(arg1 + 0x3d0)
