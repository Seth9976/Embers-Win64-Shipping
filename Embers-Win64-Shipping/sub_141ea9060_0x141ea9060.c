// 函数: sub_141ea9060
// 地址: 0x141ea9060
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

sub_14221e490(arg1, arg2)
char rax = sub_142008300(arg1[0x51] + 0x4d8)
char rax_2
int64_t* rcx_2

if (rax == 0)
    rcx_2 = arg1[0x50]
    
    if (rcx_2 != 0)
        rax_2 = (*(*rcx_2 + 0x968))(rcx_2)

uint64_t var_48
int64_t var_38
int32_t r15
float zmm1_1[0x4]
void arg_8
TEB* gsbase

if (rax != 0 || (rcx_2 != 0 && rax_2 != 0))
    uint64_t rcx_7 = arg1[0x50]
    r15 = 0
    int64_t rax_7
    
    if (rcx_7 != 0)
        rax_7 = sub_141f3b9f0(rcx_7)
    
    int64_t* rdi_1
    
    if (rcx_7 == 0 || rax_7 == 0)
        rdi_1 = nullptr
    else
        rdi_1 = sub_141e04a20(sub_141f3b9f0(arg1[0x50]))
    
    void* rax_10 = arg1[0x53]
    arg1[0x84].b = 1
    
    if (rax_10 == 0 || *(rax_10 + 0x14f) != 2)
        rax_10.b = 0
    else
        rax_10.b = 1
    
    arg1[0x8c].b = rax_10.b
    
    if (*(arg1 + 0x2c1) != 0)
        rcx_7 = arg1[0x53]
    
    if (*(arg1 + 0x2c1) == 0 || rcx_7 == 0 || *(rcx_7 + 0x14f) != 2)
        rcx_7.b = 0
    else
        rcx_7.b = 1
    
    *(arg1 + 0x461) = rcx_7.b
    int32_t* rdx_2
    uint128_t zmm0_1
    
    if (rax_10.b == 0)
        void* rax_12 = arg1[0x26]
        float var_40_2
        
        if (rax_12 == 0)
            float rax_13 = data_143dbb200
            var_48 = data_143dbb1f8.q
            var_40_2 = rax_13
        else
            zmm1_1 = *(rax_12 + 0x1d0)
            var_48.d = zmm1_1[0]
            zmm0_1 = _mm_shuffle_ps(zmm1_1, zmm1_1, 0x55)
            var_40_2 = _mm_shuffle_ps(zmm1_1, zmm1_1, 0xaa)[0]
            var_48:4.d = zmm0_1.d
        
        float var_30_1 = var_40_2
        int64_t rax_15 = *arg1
        var_38 = var_48
        int32_t* rax_17 = sub_14200cd50(&var_48, &var_38, (*(rax_15 + 0x150))(arg1) + 0x538)
        rcx_7 = zx.q(*(arg1 + 0x461))
        rdx_2 = rax_17
    else
        rdx_2 = &var_48
        int32_t rax_11 = arg1[0x56].d
        var_48 = arg1[0x55]
        int32_t var_40_1 = rax_11
    
    int32_t rax_18 = rdx_2[2]
    *(arg1 + 0x434) = *rdx_2
    *(arg1 + 0x43c) = rax_18
    int64_t* rax_20
    
    if (rcx_7.b == 0)
        void* rbx_1 = arg1[0x26]
        int32_t rax_24
        
        if (rbx_1 == 0)
            zmm0_1 = zx.o(data_143dbb208)
            rax_24 = data_143dbb210
        else
            zmm1_1 = *(rbx_1 + 0x1c0)
            var_48.o = zmm1_1
            
            if (_mm_movemask_ps(__cmpps_xmmps_memps_immb(zmm1_1, *(rbx_1 + 0x180), 4)) != 0)
                *(rbx_1 + 0x180) = zmm1_1
                int32_t* rax_22 = sub_140adf5d0(&var_48, &var_38)
                *(rbx_1 + 0x190) = *rax_22
                *(rbx_1 + 0x198) = rax_22[2]
            
            zmm0_1 = zx.o(*(rbx_1 + 0x190))
            rax_24 = *(rbx_1 + 0x198)
        
        var_38 = zmm0_1.q
        int32_t var_40_3 = rax_24
        rax_20 = &var_48
        var_48 = var_38
    else
        int32_t var_30_2 = *(arg1 + 0x2bc)
        rax_20 = &var_38
        var_38 = *(arg1 + 0x2b4)
    
    int32_t rax_26 = rax_20[1].d
    arg1[0x88] = *rax_20
    arg1[0x89].d = rax_26
    arg1[0x8a] = arg1[0x53]
    arg1[0x8b] = arg1[0x54]
    
    if (rdi_1 == 0)
        arg1[0x85] = 0
    else
        arg1[0x85] = *rdi_1
        arg1[0x86].d = rdi_1[0x25].d.d
    
    sub_141ff71c0(&arg1[0x8d], arg1[0x51] + 0x4d8)
    int64_t* rax_30 = sub_141ee3770(arg1[0x51], &var_38)
    uint64_t rdx_8 = zx.q(data_14401b1a0)
    int32_t rcx_13 = rax_30[1].d
    void* rax_31 = arg1[0x51]
    arg1[0x94] = *rax_30
    arg1[0x95].d = rcx_13
    int32_t rcx_14 = *(rax_31 + 0xcc)
    void* ThreadLocalStoragePointer = gsbase->ThreadLocalStoragePointer
    *(arg1 + 0x4ac) = *(rax_31 + 0xc4)
    *(arg1 + 0x4b4) = rcx_14
    
    if (data_143f3a430 s> *(0x14 + *(ThreadLocalStoragePointer + (rdx_8 << 3))))
        _Init_thread_header(&data_143f3a430)
        
        if (data_143f3a430 == 0xffffffff)
            void* rax_51 = sub_1424890f0()
            sub_1424890f0()
            int64_t* rax_52 = sub_140b58260(&arg_8, u"RepRootMotion", 1)
            sub_140b63b70(rax_52, &var_48)
            uint64_t rcx_24 = var_48
            
            if (rcx_24 != 0)
                sub_140a74f90(rcx_24)
            
            data_143f3a428 = sub_1408f7ec0(rax_51, *rax_52)
            _Init_thread_footer(&data_143f3a430)
    
    void* rcx_15 = data_143f3a428
    int32_t i = 0
    
    if (*(rcx_15 + 0x38) s> 0)
        do
            int64_t r9_1
            r9_1.b = 1
            (**arg2)(arg2, arg1, *(rcx_15 + 0x48) + i.w, r9_1)
            rcx_15 = data_143f3a428
            i += 1
        while (i s< *(rcx_15 + 0x38))
else
    r15 = 0
    arg1[0x84].b = 0
    arg1[0x85] = 0
    sub_141ffd2b0(&arg1[0x8d])
    
    if (data_143f3a440
            s> *(0x14 + *(gsbase->ThreadLocalStoragePointer + (zx.q(data_14401b1a0) << 3))))
        _Init_thread_header(&data_143f3a440)
        
        if (data_143f3a440 == 0xffffffff)
            void* rax_47 = sub_1424890f0()
            data_143f3a438 =
                sub_141ea4350(sub_1424890f0(), rax_47, sub_140b58260(&arg_8, RepRootMotion", 1))
            _Init_thread_footer(&data_143f3a440)
    
    void* rcx_4 = data_143f3a438
    int32_t i_1 = 0
    
    if (*(rcx_4 + 0x38) s> 0)
        do
            (**arg2)(arg2, arg1, *(rcx_4 + 0x48) + i_1.w, 0)
            rcx_4 = data_143f3a438
            i_1 += 1
        while (i_1 s< *(rcx_4 + 0x38))
arg1[0x66].d &= 0xfffffffd
int64_t* rcx_17 = arg1[0x51]
int32_t zmm6 = (zx.o(0)).d

if (zmm6 f< arg1[0x67].d)
    r15 = 2

arg1[0x66].d |= r15
char rax_36 = (*(*rcx_17 + 0x5a0))(rcx_17)
zmm1_1 = *(arg1 + 0x2a8)
*(arg1 + 0x2c8) = *(arg1 + 0x298)
arg1[0x65].b = rax_36
float zmm0_2[0x4] = *(arg1 + 0x2b8)
void* rax_37 = arg1[0x53]
*(arg1 + 0x2d8) = zmm1_1
*(arg1 + 0x2e8) = zmm0_2

if (rax_37 != 0 && *(rax_37 + 0x14f) == 2)
    void* rax_39 = arg1[0x51] + 0xc4
    
    if (zmm6 f!= *rax_39 || zmm6 f!= *(rax_39 + 4) || zmm6 f!= *(rax_39 + 8))
        rax_39.b = 1
    else
        rax_39.b = 0
    
    *(arg1 + 0x2f2) = rax_39.b
    void* rax_40
    
    if (*(arg1 + 0x2c1) != 0)
        rax_40 = arg1[0x53]
    
    if (*(arg1 + 0x2c1) == 0 || rax_40 == 0 || *(rax_40 + 0x14f) != 2)
        void* rbx_2 = arg1[0x26]
        int32_t rax_44
        
        if (rbx_2 == 0)
            zmm0_2 = zx.o(data_143dbb208)
            rax_44 = data_143dbb210
        else
            zmm1_1 = *(rbx_2 + 0x1c0)
            uint32_t temp0_6 = _mm_movemask_ps(_mm_cmpeq_ps(*(rbx_2 + 0x180), zmm1_1, 4))
            var_48.o = zmm1_1
            
            if (temp0_6 != 0)
                *(rbx_2 + 0x180) = zmm1_1
                int32_t* rax_42
                rax_42, zmm6 = sub_140adf5d0(&var_48, &var_38)
                *(rbx_2 + 0x190) = *rax_42
                *(rbx_2 + 0x198) = rax_42[2]
            
            zmm0_2 = zx.o(*(rbx_2 + 0x190))
            rax_44 = *(rbx_2 + 0x198)
        
        var_38 = zmm0_2.q
        *(arg1 + 0x2e4) = var_38
        *(arg1 + 0x2ec) = rax_44

void* result = arg1[0x51]

if (*(result + 0x16a) != 1 && (*(result + 0x1f2) & 4) == 0)
    arg1[0x64].d = zmm6
    return result

arg1[0x64].d = (*(result + 0x268))[0]
return result
