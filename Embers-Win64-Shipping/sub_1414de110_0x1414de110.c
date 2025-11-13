// 函数: sub_1414de110
// 地址: 0x1414de110
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t r9
int32_t arg_20 = r9
int64_t* arg_18 = arg3
int64_t r12 = *(arg2 + 0x1b0)
int64_t arg_10 = r12
sub_1410809a0(arg1, arg2, r12, arg3[2])
int64_t arg_30
int64_t rdi = arg_30

if (rdi == 0)
    rdi = *(data_143f111a8 + 0x10)

int64_t* r15 = data_14395f4d0

if (*(arg1 + 0x11e) u> 0)
    uint32_t r13_1 = zx.d(*(arg1 + 0x11c))
    void*** rcx_2 = (*(arg2 + 0x30) + 7) & 0xfffffffffffffff8
    void* rax_2 = &rcx_2[5]
    
    if (rax_2 u> *(arg2 + 0x38))
        sub_140b0e3d0(arg2 + 0x30, 0x30)
        rcx_2 = (*(arg2 + 0x30) + 7) & 0xfffffffffffffff8
        rax_2 = &rcx_2[5]
    
    *(arg2 + 0x30) = rax_2
    void**** rax_3 = *(arg2 + 8)
    *(arg2 + 0x14) += 1
    *rax_3 = rcx_2
    *(arg2 + 8) = &rcx_2[1]
    rcx_2[1] = 0
    rcx_2[3].d = r13_1
    *rcx_2 = &data_142da77b8
    rcx_2[2] = r12
    rcx_2[4] = rdi

if (*(arg1 + 0x122) u> 0)
    uint32_t rdi_1 = zx.d(*(arg1 + 0x120))
    
    if ((*(*r15 + 8))(r15) == 0)
        void*** rcx_9 = (*(arg2 + 0x30) + 7) & 0xfffffffffffffff8
        void* rax_7 = &rcx_9[5]
        
        if (rax_7 u> *(arg2 + 0x38))
            sub_140b0e3d0(arg2 + 0x30, 0x30)
            rcx_9 = (*(arg2 + 0x30) + 7) & 0xfffffffffffffff8
            rax_7 = &rcx_9[5]
        
        *(arg2 + 0x30) = rax_7
        void**** rax_8 = *(arg2 + 8)
        *(arg2 + 0x14) += 1
        *rax_8 = rcx_9
        *(arg2 + 8) = &rcx_9[1]
        rcx_9[1] = 0
        *rcx_9 = &data_142da77c8
        rcx_9[2] = r12
        rcx_9[3].d = rdi_1
        rcx_9[4] = r15

int64_t* r13_2 = arg_18
sub_1414b9130(arg1 + 0x124, arg2, &arg_10, r13_2)
int64_t rbx = sx.q(*(arg1 + 0xe0))
int32_t r8_2 = 0

if (rbx s> 0)
    int64_t rdx_1 = 0
    
    while (true)
        void* rcx_15 = *(arg1 + 0xd8)
        
        if ((*(arg1 + 0xd8) & 1) != 0)
            rcx_15 = (rcx_15 s>> 1) + arg1 + 0xd8
        
        if (*(rcx_15 + (rdx_1 << 3)) == data_143e82020)
            break
        
        r8_2 += 1
        rdx_1 += 1
        
        if (rdx_1 s>= rbx)
            goto label_1414de309

int16_t* rdx_2
TEB* gsbase

if (rbx s<= 0 || r8_2 == 0xffffffff)
label_1414de309:
    
    if (data_143ce8564
            s> *(0x14 + *(gsbase->ThreadLocalStoragePointer + (zx.q(data_14401b1a0) << 3))))
        _Init_thread_header(&data_143ce8564)
        
        if (data_143ce8564 == 0xffffffff)
            data_143ce8560 = 0xffff
            _Init_thread_footer(&data_143ce8564)
    
    rdx_2 = &data_143ce8560
else
    void* rcx_34 = *(arg1 + 0xe8)
    
    if ((rcx_34.b & 1) != 0)
        rcx_34 = (rcx_34 s>> 1) + arg1 + 0xe8
    
    rdx_2 = rcx_34 + (sx.q(r8_2) << 1)

int16_t rcx_17 = *rdx_2

if (rcx_17 != 0xffff)
    int64_t rdi_3 = *(r13_2[0x2a8] + 0x280)
    void*** rcx_20 = (*(arg2 + 0x30) + 7) & 0xfffffffffffffff8
    void* rax_14 = &rcx_20[5]
    
    if (rax_14 u> *(arg2 + 0x38))
        sub_140b0e3d0(arg2 + 0x30, 0x30)
        rcx_20 = (*(arg2 + 0x30) + 7) & 0xfffffffffffffff8
        rax_14 = &rcx_20[5]
    
    *(arg2 + 0x30) = rax_14
    void**** rax_15 = *(arg2 + 8)
    *(arg2 + 0x14) += 1
    *rax_15 = rcx_20
    *(arg2 + 8) = &rcx_20[1]
    rcx_20[1] = 0
    *rcx_20 = &data_142da77a8
    rcx_20[2] = r12
    rcx_20[3].d = zx.d(rcx_17)
    rcx_20[4] = rdi_3

sub_14077c730(arg2, &arg_10, arg1 + 0x168, arg4, 0)
int64_t* rdi_4 = data_14395f4d0

if (*(arg1 + 0x174) u> 0)
    uint32_t r15_2 = zx.d(*(arg1 + 0x172))
    
    if ((*(*rdi_4 + 8))(rdi_4) == 0)
        void*** rcx_28 = (*(arg2 + 0x30) + 7) & 0xfffffffffffffff8
        void* rax_19 = &rcx_28[5]
        
        if (rax_19 u> *(arg2 + 0x38))
            sub_140b0e3d0(arg2 + 0x30, 0x30)
            rcx_28 = (*(arg2 + 0x30) + 7) & 0xfffffffffffffff8
            rax_19 = &rcx_28[5]
        
        *(arg2 + 0x30) = rax_19
        void**** rax_20 = *(arg2 + 8)
        *(arg2 + 0x14) += 1
        *rax_20 = rcx_28
        *(arg2 + 8) = &rcx_28[1]
        rcx_28[1] = 0
        *rcx_28 = &data_142da77c8
        rcx_28[2] = r12
        rcx_28[3].d = r15_2
        rcx_28[4] = rdi_4

int512_t zmm6
zmm6.o = zx.o(0)
void* rbx_1 = *(*r13_2 + 0x20)
int64_t var_128
sub_1410ea5b0(&var_128, *(rbx_1 + 0x6318), (zx.o(0)).d)
void* r15_3 = *(rbx_1 + 0xf80)
char rcx_33

if (r15_3 != 0)
    rcx_33 = *(r15_3 + 0x20)

int128_t var_118

if (r15_3 == 0 || (rcx_33 & 4) != 0 || (*(*r13_2 + 0x2c) & 0x80000) == 0)
    arg_30.d = 0
    sub_140741e30(arg2, &arg_10, arg1 + 0x17c, &arg_30, 0)
    arg_30.d = 0
    sub_140741e30(arg2, &arg_10, arg1 + 0x182, &arg_30, 0)
    var_118 = zx.o(0)
    sub_14077c870(arg2, &arg_10, arg1 + 0x188, &var_118, 0)
    var_118 = zx.o(0)
    sub_14077c870(arg2, &arg_10, arg1 + 0x188, &var_118, 1)
    var_118 = zx.o(0)
    sub_14077c870(arg2, &arg_10, arg1 + 0x188, &var_118, 2)
else
    int32_t zmm0_1
    
    if ((rcx_33 & 3) != 3)
        zmm0_1 = (zx.o(0)).d
    else
        zmm0_1 = 0x3f800000
    
    arg_30.d = zmm0_1
    sub_140741e30(arg2, &arg_10, arg1 + 0x17c, &arg_30, 0)
    sub_140741e30(arg2, &arg_10, arg1 + 0x182, r15_3 + 0x2c, 0)
    sub_14077c870(arg2, &arg_10, arg1 + 0x188, r15_3 + 0x30, 0)
    sub_14077c870(arg2, &arg_10, arg1 + 0x188, r15_3 + 0x60, 1)
    sub_14077c870(arg2, &arg_10, arg1 + 0x188, r15_3 + 0x90, 2)
    float* rax_26 = sub_1410ea5b0(&var_118, *(r15_3 + 0xc0), *(r15_3 + 0xc4))
    var_128 = *rax_26
    int32_t var_120_1 = rax_26[2]
void* rax_28 = *r13_2
void* arg_28
void* rbx_2 = arg_28
int32_t arg_8 = 0

if ((*(rax_28 + 0x28) & 0x2000040) == 0x2000040)
    arg_8 = (*(rbx_2 + 0x9c)).d

sub_140741e30(arg2, &arg_10, arg1 + 0x176, &arg_8, 0)
sub_140741e30(arg2, &arg_10, arg1 + 0x18e, rbx_2 + 0x70, 0)
sub_140741e30(arg2, &arg_10, arg1 + 0x194, &data_1439b7084, 0)
char arg_38
int32_t zmm0_3

if (arg_38 == 0)
    zmm0_3 = (zx.o(0)).d
else
    zmm0_3 = 0x3f800000

arg_38.d = zmm0_3
int32_t zmm6_1 = sub_140741e30(arg2, &arg_10, arg1 + 0x1a0, &arg_38, 0)
int32_t zmm0_4

if (*(rbx_2 + 0xa0) == 0)
    zmm0_4 = (zx.o(0)).d
else
    zmm0_4 = 0x3f800000
    
    if (*(r13_2 + 0x490c) != 0 && r13_2[0x91f] == 0)
        zmm6_1 = 0x3f800000

uint64_t r15_4 = zx.q(*(arg1 + 0x19e))
arg_28.d = zmm6_1
arg_28:4.d = zmm0_4

if (r15_4.d u>= 8)
    r15_4 = 8

if (r15_4.d != 0)
    arg_30.d = zx.d(*(arg1 + 0x19c))
    int64_t rbx_5 = (*(arg2 + 0x30) + 0xf) & 0xfffffffffffffff0
    arg_38.d = zx.d(*(arg1 + 0x19a))
    int64_t rax_31 = rbx_5 + r15_4
    
    if (rax_31 u> *(arg2 + 0x38))
        sub_140b0e3d0(arg2 + 0x30, (r15_4 + 0x10).d)
        rbx_5 = (*(arg2 + 0x30) + 0xf) & 0xfffffffffffffff0
        rax_31 = rbx_5 + r15_4
    
    *(arg2 + 0x30) = rax_31
    memcpy(rbx_5, &arg_28, r15_4.d)
    void*** rcx_57 = (*(arg2 + 0x30) + 7) & 0xfffffffffffffff8
    void* rax_32 = &rcx_57[6]
    
    if (rax_32 u> *(arg2 + 0x38))
        sub_140b0e3d0(arg2 + 0x30, 0x38)
        rcx_57 = (*(arg2 + 0x30) + 7) & 0xfffffffffffffff8
        rax_32 = &rcx_57[6]
    
    *(arg2 + 0x30) = rax_32
    void**** rax_33 = *(arg2 + 8)
    *(arg2 + 0x14) += 1
    r13_2 = arg_18
    *rax_33 = rcx_57
    *(arg2 + 8) = &rcx_57[1]
    rcx_57[1] = 0
    *rcx_57 = &data_142d99550
    rcx_57[4].d = arg_38.d
    *(rcx_57 + 0x24) = arg_30.d
    rcx_57[2] = r12
    rcx_57[3] = rbx_5
    rcx_57[5].d = r15_4.d

arg_10 = r12
sub_140741e30(arg2, &arg_10, arg1 + 0x1a6, &var_128:4, 0)
float zmm0_6 = tanf(data_1439b5b9c)
int128_t zmm1_2
zmm1_2.d = float.s(zx.q(data_1439b55b8 - 1))
zmm1_2.d = zmm1_2.d f* data_1439b55a8
arg_38.d = powf(2f, (zmm1_2 ^ data_142d3f780).d) * var_128:4.d / (zmm0_6 + 1f)
sub_140741e30(arg2, &arg_10, arg1 + 0x1ac, &arg_38, 0)
sub_140741e30(arg2, &arg_10, arg1 + 0x1b2, &data_1439b55a8, 0)
arg_30.d = __minss_xmmss_memss(data_1439b55ac, 0x477de800)
sub_140741e30(arg2, &arg_10, arg1 + 0x1b8, &arg_30, 0)
arg_28.d = var_128.d
sub_140741e30(arg2, &arg_10, arg1 + 0x1be, &arg_28, 0)
arg_30 = r12

if (*(arg1 + 0x1e8) u> 0 || *(arg1 + 0x1ee) u> 0)
    int64_t rdi_5 = r13_2[0x30c]
    
    if (rdi_5 == 0)
        rdi_5 = *(data_143f111a8 + 0x10)
    
    int64_t* r15_5 = data_14396ee58
    
    if (*(arg1 + 0x1c6) u> 0)
        arg_38.d = zx.d(*(arg1 + 0x1c4))
        void*** rcx_70 = (*(arg2 + 0x30) + 7) & 0xfffffffffffffff8
        void* rax_39 = &rcx_70[5]
        
        if (rax_39 u> *(arg2 + 0x38))
            sub_140b0e3d0(arg2 + 0x30, 0x30)
            rcx_70 = (*(arg2 + 0x30) + 7) & 0xfffffffffffffff8
            rax_39 = &rcx_70[5]
        
        *(arg2 + 0x30) = rax_39
        int64_t* rax_40 = *(arg2 + 8)
        *(arg2 + 0x14) += 1
        *rax_40 = rcx_70
        *(arg2 + 8) = &rcx_70[1]
        rcx_70[1] = 0
        *rcx_70 = &data_142da77b8
        rcx_70[3].d = arg_38.d
        rcx_70[2] = r12
        rcx_70[4] = rdi_5
    
    if (*(arg1 + 0x1d6) u> 0)
        uint32_t rdi_6 = zx.d(*(arg1 + 0x1d4))
        
        if ((*(*r15_5 + 8))(r15_5) == 0)
            void*** rcx_77 = (*(arg2 + 0x30) + 7) & 0xfffffffffffffff8
            void* rax_45 = &rcx_77[5]
            
            if (rax_45 u> *(arg2 + 0x38))
                sub_140b0e3d0(arg2 + 0x30, 0x30)
                rcx_77 = (*(arg2 + 0x30) + 7) & 0xfffffffffffffff8
                rax_45 = &rcx_77[5]
            
            *(arg2 + 0x30) = rax_45
            void**** rax_46 = *(arg2 + 8)
            *(arg2 + 0x14) += 1
            *rax_46 = rcx_77
            *(arg2 + 8) = &rcx_77[1]
            rcx_77[1] = 0
            *rcx_77 = &data_142da77c8
            rcx_77[2] = r12
            rcx_77[3].d = rdi_6
            rcx_77[4] = r15_5
    
    int64_t rdi_7 = r13_2[0x30d]
    
    if (rdi_7 == 0)
        rdi_7 = *(data_143f111a8 + 0x10)
    
    int64_t* r15_6 = data_14396ee58
    
    if (*(arg1 + 0x1ca) u> 0)
        arg_38.d = zx.d(*(arg1 + 0x1c8))
        void*** rcx_83 = (*(arg2 + 0x30) + 7) & 0xfffffffffffffff8
        void* rax_50 = &rcx_83[5]
        
        if (rax_50 u> *(arg2 + 0x38))
            sub_140b0e3d0(arg2 + 0x30, 0x30)
            rcx_83 = (*(arg2 + 0x30) + 7) & 0xfffffffffffffff8
            rax_50 = &rcx_83[5]
        
        *(arg2 + 0x30) = rax_50
        int64_t* rax_51 = *(arg2 + 8)
        *(arg2 + 0x14) += 1
        *rax_51 = rcx_83
        *(arg2 + 8) = &rcx_83[1]
        rcx_83[1] = 0
        *rcx_83 = &data_142da77b8
        rcx_83[3].d = arg_38.d
        rcx_83[2] = r12
        rcx_83[4] = rdi_7
    
    if (*(arg1 + 0x1da) u> 0)
        uint32_t rdi_8 = zx.d(*(arg1 + 0x1d8))
        
        if ((*(*r15_6 + 8))(r15_6) == 0)
            void*** rcx_90 = (*(arg2 + 0x30) + 7) & 0xfffffffffffffff8
            void* rax_56 = &rcx_90[5]
            
            if (rax_56 u> *(arg2 + 0x38))
                sub_140b0e3d0(arg2 + 0x30, 0x30)
                rcx_90 = (*(arg2 + 0x30) + 7) & 0xfffffffffffffff8
                rax_56 = &rcx_90[5]
            
            *(arg2 + 0x30) = rax_56
            void**** rax_57 = *(arg2 + 8)
            *(arg2 + 0x14) += 1
            *rax_57 = rcx_90
            *(arg2 + 8) = &rcx_90[1]
            rcx_90[1] = 0
            *rcx_90 = &data_142da77c8
            rcx_90[2] = r12
            rcx_90[3].d = rdi_8
            rcx_90[4] = r15_6
    
    int64_t rdi_9 = r13_2[0x30e]
    
    if (rdi_9 == 0)
        rdi_9 = *(data_143f111a8 + 0x10)
    
    int64_t* r15_7 = data_14396ee58
    
    if (*(arg1 + 0x1ce) u> 0)
        arg_38.d = zx.d(*(arg1 + 0x1cc))
        void*** rcx_96 = (*(arg2 + 0x30) + 7) & 0xfffffffffffffff8
        void* rax_61 = &rcx_96[5]
        
        if (rax_61 u> *(arg2 + 0x38))
            sub_140b0e3d0(arg2 + 0x30, 0x30)
            rcx_96 = (*(arg2 + 0x30) + 7) & 0xfffffffffffffff8
            rax_61 = &rcx_96[5]
        
        *(arg2 + 0x30) = rax_61
        int64_t* rax_62 = *(arg2 + 8)
        *(arg2 + 0x14) += 1
        *rax_62 = rcx_96
        *(arg2 + 8) = &rcx_96[1]
        rcx_96[1] = 0
        *rcx_96 = &data_142da77b8
        rcx_96[3].d = arg_38.d
        rcx_96[2] = r12
        rcx_96[4] = rdi_9
    
    if (*(arg1 + 0x1de) u> 0)
        uint32_t rdi_10 = zx.d(*(arg1 + 0x1dc))
        
        if ((*(*r15_7 + 8))(r15_7) == 0)
            void*** rcx_103 = (*(arg2 + 0x30) + 7) & 0xfffffffffffffff8
            void* rax_67 = &rcx_103[5]
            
            if (rax_67 u> *(arg2 + 0x38))
                sub_140b0e3d0(arg2 + 0x30, 0x30)
                rcx_103 = (*(arg2 + 0x30) + 7) & 0xfffffffffffffff8
                rax_67 = &rcx_103[5]
            
            *(arg2 + 0x30) = rax_67
            void**** rax_68 = *(arg2 + 8)
            *(arg2 + 0x14) += 1
            *rax_68 = rcx_103
            *(arg2 + 8) = &rcx_103[1]
            rcx_103[1] = 0
            *rcx_103 = &data_142da77c8
            rcx_103[2] = r12
            rcx_103[3].d = rdi_10
            rcx_103[4] = r15_7
    
    int64_t rdi_11 = r13_2[0x30f]
    
    if (rdi_11 == 0)
        rdi_11 = *(data_143f111a8 + 0x10)
    
    int64_t* r15_8 = data_14396ee58
    
    if (*(arg1 + 0x1d2) u> 0)
        arg_38.d = zx.d(*(arg1 + 0x1d0))
        void*** rcx_109 = (*(arg2 + 0x30) + 7) & 0xfffffffffffffff8
        void* rax_72 = &rcx_109[5]
        
        if (rax_72 u> *(arg2 + 0x38))
            sub_140b0e3d0(arg2 + 0x30, 0x30)
            rcx_109 = (*(arg2 + 0x30) + 7) & 0xfffffffffffffff8
            rax_72 = &rcx_109[5]
        
        *(arg2 + 0x30) = rax_72
        int64_t* rax_73 = *(arg2 + 8)
        *(arg2 + 0x14) += 1
        *rax_73 = rcx_109
        *(arg2 + 8) = &rcx_109[1]
        rcx_109[1] = 0
        *rcx_109 = &data_142da77b8
        rcx_109[3].d = arg_38.d
        rcx_109[2] = r12
        rcx_109[4] = rdi_11
    
    if (*(arg1 + 0x1e2) u> 0)
        uint32_t rdi_12 = zx.d(*(arg1 + 0x1e0))
        
        if ((*(*r15_8 + 8))(r15_8) == 0)
            void*** rcx_116 = (*(arg2 + 0x30) + 7) & 0xfffffffffffffff8
            void* rax_78 = &rcx_116[5]
            
            if (rax_78 u> *(arg2 + 0x38))
                sub_140b0e3d0(arg2 + 0x30, 0x30)
                rcx_116 = (*(arg2 + 0x30) + 7) & 0xfffffffffffffff8
                rax_78 = &rcx_116[5]
            
            *(arg2 + 0x30) = rax_78
            void**** rax_79 = *(arg2 + 8)
            *(arg2 + 0x14) += 1
            *rax_79 = rcx_116
            *(arg2 + 8) = &rcx_116[1]
            rcx_116[1] = 0
            *rcx_116 = &data_142da77c8
            rcx_116[2] = r12
            rcx_116[3].d = rdi_12
            rcx_116[4] = r15_8
    
    sub_14077c9b0(arg2, &arg_30, arg1 + 0x1e4, &r13_2[0x2fc], 4, 0)
    sub_14077c9b0(arg2, &arg_30, arg1 + 0x1ea, &r13_2[0x304], 4, 0)
    sub_140741e30(arg2, &arg_30, arg1 + 0x1f0, &r13_2[0x310], 0)
    arg_38.d = 1f f/ r13_2[0x310].d
    sub_140741e30(arg2, &arg_30, arg1 + 0x1f6, &arg_38, 0)
    sub_140741e30(arg2, &arg_30, arg1 + 0x1fc, r13_2 + 0x1884, 0)

int64_t* rcx_125 = arg_18
int512_t zmm1_3
zmm1_3.o = data_142d3f660
int128_t var_108
__builtin_memcpy(&var_108, 
    "\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x80\x3f\x00\x00\x00\x00\x00\x00\x00\x00\x"
"00\x00\x00\x00\x00\x00\x80\x3f\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x80\x3f\x00"
"00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x80\x3f\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00"
"00\x00\x00\x00\x80\x3f\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x80\x3f", 
    0x60)
int128_t var_88
__builtin_memset(&var_88, 0, 0x20)
sub_1411463f0(rcx_125, &var_108)
int64_t rbx_8 = sx.q(*(arg1 + 0xe0))
int32_t result_1 = 0

if (rbx_8 s> 0)
    int64_t rdx_31 = 0
    
    while (true)
        void* rcx_127 = *(arg1 + 0xd8)
        
        if ((*(arg1 + 0xd8) & 1) != 0)
            rcx_127 = (rcx_127 s>> 1) + arg1 + 0xd8
        
        if (*(rcx_127 + (rdx_31 << 3)) == data_143e58170)
            break
        
        result_1 += 1
        rdx_31 += 1
        
        if (rdx_31 s>= rbx_8)
            goto label_1414defac

uint64_t result
void* rbx_9

if (rbx_8 s<= 0 || result_1 == 0xffffffff)
label_1414defac:
    result = zx.q(*(0x14 + *(gsbase->ThreadLocalStoragePointer + (zx.q(data_14401b1a0) << 3))))
    
    if (data_143ce8564 s> result.d)
        result = _Init_thread_header(&data_143ce8564)
        
        if (data_143ce8564 == 0xffffffff)
            data_143ce8560 = 0xffff
            result = _Init_thread_footer(&data_143ce8564)
    
    rbx_9 = &data_143ce8560
else
    void* rcx_136 = *(arg1 + 0xe8)
    
    if ((rcx_136.b & 1) != 0)
        rcx_136 = (rcx_136 s>> 1) + arg1 + 0xe8
    
    result = sx.q(result_1)
    rbx_9 = rcx_136 + (result << 1)

if (*rbx_9 == 0xffff)
    return result

int64_t* rcx_128 = data_143f0f180
(*(*rcx_128 + 0xf8))(rcx_128, &arg_18, &var_108, &data_143e58180, 0, 1)
int64_t* rdi_13 = arg_18
uint32_t r14_1 = zx.d(*rbx_9)
void*** rcx_131 = (*(arg2 + 0x30) + 7) & 0xfffffffffffffff8
void* rax_84 = &rcx_131[5]

if (rax_84 u> *(arg2 + 0x38))
    sub_140b0e3d0(arg2 + 0x30, 0x30)
    rcx_131 = (*(arg2 + 0x30) + 7) & 0xfffffffffffffff8
    rax_84 = &rcx_131[5]

*(arg2 + 0x30) = rax_84
void**** rax_85 = *(arg2 + 8)
*(arg2 + 0x14) += 1
*rax_85 = rcx_131
*(arg2 + 8) = &rcx_131[1]
rcx_131[1] = 0
*rcx_131 = &data_142da77a8
rcx_131[2] = r12
rcx_131[3].d = r14_1
rcx_131[4] = rdi_13
return sub_1405d1550(&arg_18)
