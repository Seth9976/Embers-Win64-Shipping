// 函数: sub_141872880
// 地址: 0x141872880
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

__chkstk(0x1a50)
void var_1a78
int64_t rax_1 = __security_cookie ^ &var_1a78
void* rbx = *(arg1 + 0x190)
int32_t var_19b8 = 0
void* r13 = arg1

while (true)
    bool z_1
    
    if (0 == *(rbx + 0x78))
        *(rbx + 0x78) = 0
        z_1 = true
    else
        int64_t rax_2
        rax_2.b = *(rbx + 0x78)
        z_1 = false
    
    if (not(z_1))
        break
    
    int64_t* rcx = *(rbx + 0x70)
    (*(*rcx + 0x20))(rcx, 0xffffffff, 0)

int64_t* var_19f8 = *(rbx + 0x80)
int64_t* rax_5 = *(rbx + 0x88)

if (rax_5 != 0)
    rax_5[1].d += 1

void* rbx_1 = *(r13 + 0x1a0)

while (true)
    bool z_2
    
    if (0 == *(rbx_1 + 0x78))
        *(rbx_1 + 0x78) = 0
        z_2 = true
    else
        int64_t rax_6
        rax_6.b = *(rbx_1 + 0x78)
        z_2 = false
    
    if (not(z_2))
        break
    
    int64_t* rcx_1 = *(rbx_1 + 0x70)
    (*(*rcx_1 + 0x20))(rcx_1, 0xffffffff, 0)

int64_t* rcx_2 = *(rbx_1 + 0x80)
int64_t* var_1a08 = rcx_2
void* rax_8 = *(rbx_1 + 0x88)

if (rax_8 != 0)
    *(rax_8 + 8) += 1
    rcx_2 = var_1a08

uint32_t rbx_2 = 1

if (var_19f8 == 0)
    rbx_2 = 0

if (rcx_2 == 0)
    rbx_2.b = 0
else if (rbx_2.b != 0)
    uint128_t var_d68 = var_1a08.o
    
    if (rax_8 != 0)
        *(rax_8 + 8) += 1
    
    uint128_t var_1158
    sub_14189da60(&var_1158, &var_d68)
    uint128_t zmm1 = var_19f8.o
    void* rax_9 = _mm_bsrli_si128(zmm1, 8).q
    
    if (rax_9 != 0)
        *(rax_9 + 8) += 1
    
    uint128_t zmm0 = var_1158
    uint128_t var_58_1 = zmm1
    uint128_t var_1098_2 = zmm0
    int64_t* rbx_3 = _mm_bsrli_si128(zmm0, 8).q
    var_1158 = zmm1
    
    if (rbx_3 != 0)
        rbx_3[1].d -= 1
        
        if (rbx_3[1].d == 1)
            (**rbx_3)(rbx_3)
            int32_t rax_12 = *(rbx_3 + 0xc)
            *(rbx_3 + 0xc) -= 1
            
            if (rax_12 == 1)
                (*(*rbx_3 + 8))(rbx_3, 1)
    
    int32_t var_1128_1 = 0
    int64_t var_1588
    sub_140b1a780(&var_1588, r13 + 0x18)
    int32_t i_5
    int32_t i_4 = i_5
    uint64_t var_1138
    uint64_t rbx_4 = var_1138
    
    if (i_4 != 0)
        int32_t i
        
        do
            int64_t rcx_7 = *rbx_4
            
            if (rcx_7 != 0)
                sub_140a74f90(rcx_7)
            
            rbx_4 += 0x10
            i = i_4
            i_4 -= 1
        while (i != 1)
    
    int32_t var_1130 = 1
    int32_t var_112c
    sub_1405a4be0(&var_1138, 1, var_112c)
    uint64_t rbx_5 = var_1138
    *rbx_5 = 0
    int64_t rsi_1 = var_1588
    int32_t var_1580
    *(rbx_5 + 8) = var_1580
    
    if (var_1580 != 0)
        sub_1405a4c70(rbx_5, var_1580, 0)
        memcpy(*rbx_5, rsi_1, var_1580 * 2)
    else
        *(rbx_5 + 0xc) = 0
    
    int64_t rcx_11 = var_1588
    
    if (rcx_11 != 0)
        sub_140a74f90(rcx_11)
    
    int64_t var_908
    sub_14189db00(&var_908)
    var_908 = *(r13 + 0x140)
    void*** rax_15
    int512_t zmm2_1
    rax_15, zmm2_1 = sub_1418a1300(&var_1158, &var_908)
    void*** rsi_2 = rax_15
    void* rax_17 = (*rax_15)[1](rsi_2)
    int64_t rcx_15 = *(rax_17 + 0x18)
    void* rcx_16 = *(rax_17 + 0x20)
    void* var_1570_1 = rcx_16
    
    if (rcx_16 != 0)
        *(rcx_16 + 8) += 1
    
    uint128_t zmm1_1 = var_1a08.o
    int128_t zmm0_1 = rcx_15.o
    int64_t var_1578_1
    var_1578_1.o = zmm1_1
    int64_t* rbx_6 = _mm_bsrli_si128(zmm1_1, 8).q
    int128_t var_68_1 = zmm0_1
    var_1a08.o = zmm0_1
    
    if (rbx_6 != 0)
        rbx_6[1].d -= 1
        
        if (rbx_6[1].d == 1)
            (**rbx_6)(rbx_6)
            int32_t rax_20 = *(rbx_6 + 0xc)
            *(rbx_6 + 0xc) -= 1
            
            if (rax_20 == 1)
                (*(*rbx_6 + 8))(rbx_6, 1)
    
    int32_t rax_23 = (*rsi_2)[2](rsi_2)
    int64_t* rcx_20 = var_19f8
    int64_t r12_1 = sx.q(rax_23)
    int64_t var_868
    __builtin_memset(&var_868, 0, 0x2c)
    int32_t var_83c_1 = 0x80
    int32_t var_838_1 = 0xffffffff
    int32_t var_834_1 = 0
    int64_t var_828_1 = 0
    int32_t var_820_1 = 0
    int64_t var_8b8
    __builtin_memset(&var_8b8, 0, 0x2c)
    int32_t var_88c_1 = 0x80
    int32_t var_888_1 = 0xffffffff
    int32_t var_884_1 = 0
    int64_t var_878_1 = 0
    int32_t var_870_1 = 0
    (*(*rcx_20 + 0xa8))(rcx_20, &var_868)
    
    if (*(r13 + 0x30) - *(r13 + 0x5c) s> 0)
        int64_t var_108
        int64_t* rax_27
        rax_27, zmm2_1 = sub_140967750(&var_868, &var_108, r13 + 0x28)
        
        if (&var_868 != rax_27)
            sub_1409f61f0(&var_868, rax_27)
            void var_830
            
            if (rax_27[8] == 0)
                memmove(&var_830, &rax_27[7], 4)
            
            if (var_828_1 != 0)
                sub_140a74f90(var_828_1)
            
            var_828_1 = rax_27[8]
            rax_27[8] = 0
            int32_t var_820_2 = rax_27[9].d
            rax_27[9].d = 0
        
        int32_t var_c0_1 = 0
        int64_t var_c8
        
        if (var_c8 != 0)
            sub_140a74f90(var_c8)
        
        sub_14059ad90(&var_108, 0)
        int64_t var_e8
        
        if (var_e8 != 0)
            sub_140a74f90(var_e8)
        
        int64_t rcx_28 = var_108
        
        if (rcx_28 != 0)
            sub_140a74f90(rcx_28)
    
    int64_t* rcx_29 = var_1a08
    (*(*rcx_29 + 0xa8))(rcx_29, &var_8b8)
    
    if (*(r13 + 0x80) - *(r13 + 0xac) s> 0)
        int64_t var_b8
        int64_t* rax_33
        rax_33, zmm2_1 = sub_140967750(&var_8b8, &var_b8, r13 + 0x78)
        
        if (&var_8b8 != rax_33)
            sub_1409f61f0(&var_8b8, rax_33)
            void var_880
            
            if (rax_33[8] == 0)
                memmove(&var_880, &rax_33[7], 4)
            
            if (var_878_1 != 0)
                sub_140a74f90(var_878_1)
            
            var_878_1 = rax_33[8]
            rax_33[8] = 0
            int32_t var_870_2 = rax_33[9].d
            rax_33[9].d = 0
        
        int32_t var_70_1 = 0
        int64_t var_78
        
        if (var_78 != 0)
            sub_140a74f90(var_78)
        
        sub_14059ad90(&var_b8, 0)
        int64_t var_98
        
        if (var_98 != 0)
            sub_140a74f90(var_98)
        
        int64_t rcx_37 = var_b8
        
        if (rcx_37 != 0)
            sub_140a74f90(rcx_37)
    
    int64_t* rcx_38 = var_19f8
    int64_t var_6f8 = 0
    int32_t var_6f0_1 = 0
    int64_t rdi_2 = 0
    int32_t var_6cc_1 = 0x80
    int64_t var_6e8
    __builtin_memset(&var_6e8, 0, 0x1c)
    int32_t var_6c8_1 = 0xffffffff
    int32_t var_6c4_1 = 0
    int64_t var_6b8_1 = 0
    int32_t var_6b0_1 = 0
    int64_t var_748 = 0
    int32_t var_740_1 = 0
    int32_t var_71c_1 = 0x80
    int64_t var_738
    __builtin_memset(&var_738, 0, 0x1c)
    int32_t var_718_1 = 0xffffffff
    int32_t var_714_1 = 0
    int64_t var_708_1 = 0
    int32_t var_700_1 = 0
    int64_t var_1f8
    __builtin_memset(&var_1f8, 0, 0x2c)
    int32_t var_1cc_1 = 0x80
    int32_t var_1c8_1 = 0xffffffff
    int32_t var_1c4_1 = 0
    int64_t var_1b8_1 = 0
    int32_t var_1b0_1 = 0
    int64_t var_798
    __builtin_memset(&var_798, 0, 0x2c)
    int32_t var_76c_1 = 0x80
    int32_t var_768_1 = 0xffffffff
    int32_t var_764_1 = 0
    int64_t var_758_1 = 0
    int32_t var_750_1 = 0
    int64_t var_1760_1 = 0
    (*(*rcx_38 + 0x1a8))(rcx_38, &var_868, &var_6f8)
    int64_t* rcx_39 = var_19f8
    (*(*rcx_39 + 0x168))(rcx_39, &var_6f8, &var_1f8)
    int64_t* rcx_40 = var_1a08
    (*(*rcx_40 + 0x1a8))(rcx_40, &var_8b8, &var_748)
    int64_t* rcx_41 = var_1a08
    (*(*rcx_41 + 0x168))(rcx_41, &var_748, &var_798)
    int64_t var_788
    int64_t* var_1720_1 = &var_788
    int32_t rcx_42 = 0
    int32_t var_1728_1 = 0
    int32_t r8_10 = 0
    int64_t var_1870 = 0
    int64_t var_1868_1 = 0
    int32_t var_1724_1 = 1
    int32_t var_1718_1 = 0xffffffff
    int64_t var_1714_1 = 0
    int32_t var_770
    
    if (var_770 != 0)
        int64_t* r10_1 = &var_788
        int64_t* var_778
        
        if (var_778 != 0)
            r10_1 = var_778
        
        int32_t temp2_1
        int32_t temp3_1
        temp2_1:temp3_1 = sx.q(var_770 - 1)
        int32_t rdx_20 = *r10_1
        
        if (rdx_20 != 0)
        label_1418730be:
            int32_t rax_47 = neg.d(rdx_20) & rdx_20
            uint64_t rflags_1
            int32_t temp0_8
            temp0_8, rflags_1 = _bit_scan_reverse(rax_47)
            int32_t var_1724_2 = rax_47
            int32_t var_1648_1 = temp0_8
            int32_t rax_48
            
            if (rax_47 == 0)
                rax_48 = 0x20
            else
                rax_48 = 0x1f - temp0_8
            
            int32_t rax_49 = r8_10 - rax_48 + 0x1f
            
            if (rax_49 s> var_770)
                rax_49 = var_770
            
            var_1714_1.d = rax_49
        else
            while (true)
                int64_t rdx_21 = sx.q(rcx_42)
                r8_10 += 0x20
                rcx_42 += 1
                var_1714_1:4.d = r8_10
                var_1728_1 = rcx_42
                
                if (rdx_21.d s>= (temp3_1 + (temp2_1 & 0x1f)) s>> 5)
                    var_1714_1.d = var_770
                    break
                
                rdx_20 = *(r10_1 + (rdx_21 << 2) + 4)
                int32_t var_1718_2 = 0xffffffff
                
                if (rdx_20 != 0)
                    goto label_1418730be
    
    zmm2_1.o = 0xffffffff
    char rcx_45 = var_770.b & 0x1f
    int128_t var_1a38_1 = var_1728_1.o
    int32_t var_1324_1 = var_770
    int128_t var_1a28_1 = 0xffffffff
    int32_t var_1334_1 = 1 << rcx_45
    int64_t* var_1330_1 = &var_788
    zmm2_1.o = _mm_unpackhi_pd(0xffffffff, 0xffffffff)
    int128_t var_1298 = (&var_798).o
    int32_t var_1320_1 = var_770 & 0xffffffe0
    int64_t var_1278_1 = (zmm2_1.o).q
    zmm2_1.o = (0xffffffff << rcx_45).o
    int128_t var_1a38_2 = (var_770 s>> 5).o
    int128_t var_1a28_2 = zmm2_1.o
    uint128_t var_1288_1 = var_1a38_1
    zmm2_1.o = _mm_unpackhi_pd(zmm2_1.o, zmm2_1.q)
    int64_t var_1088_1 = (&var_798).o.q
    int64_t var_1068_1 = (zmm2_1.o).q
    
    while (true)
        int64_t rcx_46 = sx.q(var_1288_1:0xc.d)
        int64_t* rdx_22 = var_1298.q
        
        if (rcx_46.d == (var_1a38_2:8.q u>> 0x20).d && var_1288_1.q == var_1a38_2.q
                && rdx_22 == var_1088_1)
            break
        
        int64_t* rbx_9 = *rdx_22 + rcx_46 * 0x18
        void var_1644
        int32_t* rax_58
        int512_t zmm1_2
        rax_58, zmm1_2 = sub_140b162a0(&var_1f8, &var_1644, rbx_9)
        
        if (*rax_58 == 0xffffffff)
            int64_t* rcx_49 = var_1a08
            int32_t rax_60 = (*(*rcx_49 + 0x188))(rcx_49, rbx_9)
            int64_t var_1850 = 0
            int32_t var_1848_1 = 0
            var_1760_1 = rdi_2 + sx.q(rax_60)
            sub_1405947f0(&var_1850, 2)
            int32_t rax_61 = var_1848_1 + 2
            var_1848_1 = rax_61
            
            if (rax_61 s> 0)
                sub_140594770(&var_1850)
            
            UnDecorator::getReferenceType(var_1850, &data_142d404c4, 4)
            uint128_t zmm0_2 = var_1a08.o
            uint128_t var_1118 = zmm0_2
            void* rax_62 = _mm_bsrli_si128(zmm0_2, 8).q
            void* var_1a00_1 = rax_62
            
            if (rax_62 != 0)
                *(rax_62 + 8) += 1
            
            int64_t var_d58
            int64_t* rax_63 = sub_14183a8a0(&var_d58, &var_1118, &var_1850, rbx_9, zmm1_2, zmm2_1)
            int64_t rdi_4 = sx.q(var_1868_1.d)
            int32_t rcx_55 = (rdi_4 + 1).d
            var_1868_1.d = rcx_55
            
            if (rcx_55 s> var_1868_1:4.d)
                sub_1405a4f90(&var_1870)
            
            int64_t* rcx_59 = (rdi_4 << 4) + var_1870
            *rcx_59 = 0
            *rcx_59 = *rax_63
            *rax_63 = 0
            rcx_59[1].d = rax_63[1].d
            *(rcx_59 + 0xc) = *(rax_63 + 0xc)
            rax_63[1] = 0
            int64_t rcx_60 = var_d58
            
            if (rcx_60 != 0)
                sub_140a74f90(rcx_60)
            
            int64_t* rbx_11 = var_1118:8.q
            
            if (rbx_11 != 0)
                rbx_11[1].d -= 1
                
                if (rbx_11[1].d == 1)
                    (**rbx_11)(rbx_11)
                    int32_t rax_69 = *(rbx_11 + 0xc)
                    *(rbx_11 + 0xc) -= 1
                    
                    if (rax_69 == 1)
                        (*(*rbx_11 + 8))(rbx_11, 1)
            
            int64_t rcx_63 = var_1850
            
            if (rcx_63 != 0)
                sub_140a74f90(rcx_63)
            
            rdi_2 = var_1760_1
        
        var_1288_1:8.d &= not.d(var_1298:0xc.d)
        sub_14059bdd0(&var_1298:8)
    
    void var_158
    sub_141835260(&var_748, &var_158, &var_6f8)
    void var_1a8
    sub_141835260(&var_6f8, &var_1a8, &var_748)
    int64_t* rbx_12 = &var_6f8
    int64_t var_338 = 0
    int64_t var_330_1 = 0
    
    if (var_740_1 - var_714_1 s<= var_6f0_1 - var_6c4_1)
        rbx_12 = &var_748
    
    int32_t var_30c_1 = 0x80
    int64_t var_328
    __builtin_memset(&var_328, 0, 0x1c)
    int32_t var_308_1 = 0xffffffff
    int32_t var_304_1 = 0
    int64_t var_2f8_1 = 0
    int32_t var_2f0_1 = 0
    int64_t var_388
    __builtin_memset(&var_388, 0, 0x2c)
    int32_t var_35c_1 = 0x80
    int32_t var_358_1 = 0xffffffff
    int32_t var_354_1 = 0
    int64_t var_348_1 = 0
    int32_t var_340_1 = 0
    void* var_1660_1 = &rbx_12[2]
    int32_t var_1668 = 0
    int32_t var_1664_1 = 1
    int32_t var_1658_1 = 0xffffffff
    int64_t var_1654_1 = 0
    
    if (rbx_12[5].d != 0)
        sub_14059bdd0(&var_1668)
    
    double zmm2_2[0x2] = var_1658_1.o
    void* var_1310_1 = &rbx_12[2]
    uint128_t var_1a38_3 = var_1668.o
    double var_1a28_3[0x2] = zmm2_2
    zmm2_2 = _mm_unpackhi_pd(zmm2_2, zmm2_2[0])
    uint128_t var_1270 = rbx_12.o
    int64_t var_1250_1 = zmm2_2.q
    uint128_t var_1260_1 = var_1a38_3
    int32_t rdx_30 = rbx_12[5].d
    char rcx_71 = rdx_30.b & 0x1f
    int32_t var_1304_1 = rdx_30
    int32_t var_1314_1 = 1 << rcx_71
    uint128_t var_1a38_4 = (rdx_30 s>> 5).o
    int32_t var_1300_1 = rdx_30 & 0xffffffe0
    zmm2_2 = (0xffffffff << rcx_71).o
    double var_1a28_4[0x2] = zmm2_2
    int64_t var_1010_1 = rbx_12.o.q
    int64_t var_ff0_1 = (_mm_unpackhi_pd(zmm2_2, zmm2_2[0])).q
    
    while (true)
        int64_t rcx_72 = sx.q(var_1260_1:0xc.d)
        int64_t* rdx_32 = var_1270.q
        
        if (rcx_72.d == (var_1a38_4:8.q u>> 0x20).d && var_1260_1.q == var_1a38_4.q
                && rdx_32 == var_1010_1)
            break
        
        int64_t* rbx_13 = *rdx_32 + rcx_72 * 0x18
        int64_t* rcx_74 = var_19f8
        int64_t var_818
        __builtin_memset(&var_818, 0, 0x28)
        
        if ((*(*rcx_74 + 0x1f0))(rcx_74, rbx_13, &var_818) != 0)
            int64_t* rcx_75 = var_1a08
            int64_t var_804
            
            if ((*(*rcx_75 + 0x1f0))(rcx_75, rbx_13, &var_804) != 0)
                int64_t var_810
                int32_t var_808
                int64_t var_7fc
                int32_t var_7f4
                int64_t* rcx_76
                void* rdx_35
                
                if (var_818 != var_804 || var_810 != var_7fc || var_808 != var_7f4)
                    void var_163c
                    rdx_35 = &var_163c
                    rcx_76 = &var_338
                else
                    void var_1640
                    rdx_35 = &var_1640
                    rcx_76 = &var_388
                
                sub_1406b3860(rcx_76, rdx_35, rbx_13, nullptr)
        
        var_1260_1:8.d &= not.d(var_1270:0xc.d)
        sub_14059bdd0(&var_1270:8)
    
    void var_d48
    sub_140a95a00(&var_d48)
    int64_t* rcx_79 = var_19f8
    int32_t var_d34_1 = 3
    int32_t var_d38_1 = 3
    int64_t rax_93 = (*(*rcx_79 + 0x50))(rcx_79, &var_868)
    int64_t* rcx_80 = var_19f8
    int64_t r8_19 = *rcx_80
    int64_t rax_94 = (*(r8_19 + 0x70))(rcx_80, &var_868, r8_19)
    int64_t* rcx_81 = var_1a08
    int64_t r8_20 = *rcx_81
    int64_t rax_95 = (*(r8_20 + 0x50))(rcx_81, &var_8b8, r8_20)
    int64_t* rcx_82 = var_1a08
    int64_t r8_21 = *rcx_82
    int64_t rax_96 = (*(r8_21 + 0x70))(rcx_82, &var_8b8, r8_21)
    
    if (rax_5 != 0)
        rax_5[1].d += 1
    
    int64_t* var_1568 = var_19f8
    
    if (rax_5 != 0)
        rax_5[1].d += 1
    
    int64_t* rcx_84 = var_1a08
    int64_t var_1590_1 = r12_1
    int64_t rax_99 = (*(*rcx_84 + 0x60))(rcx_84, &var_8b8, &var_1568, &var_868) + r12_1
    
    if (rax_5 != 0)
        rax_5[1].d -= 1
        
        if (rax_5[1].d == 1)
            (**rax_5)(rax_5)
            int32_t rax_102 = *(rax_5 + 0xc)
            *(rax_5 + 0xc) -= 1
            
            if (rax_102 == 1)
                (*(*rax_5 + 8))(rax_5, 1)
    
    if (rax_5 != 0)
        rax_5[1].d -= 1
        
        if (rax_5[1].d == 1)
            (**rax_5)(rax_5)
            int32_t rax_106 = *(rax_5 + 0xc)
            *(rax_5 + 0xc) -= 1
            
            if (rax_106 == 1)
                (*(*rax_5 + 8))(rax_5, 1)
    
    uint128_t zmm0_3 = var_1a08.o
    uint128_t var_1108 = zmm0_3
    void* rax_108 = _mm_bsrli_si128(zmm0_3, 8).q
    int32_t var_173c = 1
    void* var_1a00_2 = rax_108
    
    if (rax_108 != 0)
        *(rax_108 + 8) += 1
    
    int64_t rax_109 = sub_141829fe0(&var_19f8, &var_1108, &var_173c, &var_8b8)
    int64_t* rbx_15 = var_1108:8.q
    
    if (rbx_15 != 0)
        rbx_15[1].d -= 1
        
        if (rbx_15[1].d == 1)
            int64_t rdx_43 = *rbx_15
            (*rdx_43)(rbx_15, rdx_43)
            int32_t rax_110 = *(rbx_15 + 0xc)
            *(rbx_15 + 0xc) -= 1
            
            if (rax_110 == 1)
                (*(*rbx_15 + 8))(rbx_15, 1)
    
    int32_t var_840
    int32_t rdx_44 = var_840
    int64_t var_858
    int64_t* var_1680_1 = &var_858
    int64_t var_3d8
    __builtin_memset(&var_3d8, 0, 0x2c)
    int32_t var_3ac_1 = 0x80
    int32_t var_3a8_1 = 0xffffffff
    int32_t var_3a4_1 = 0
    int64_t var_398_1 = 0
    int32_t var_390_1 = 0
    int64_t var_428
    __builtin_memset(&var_428, 0, 0x2c)
    int32_t var_3fc_1 = 0x80
    int32_t var_3f8_1 = 0xffffffff
    int32_t var_3f4_1 = 0
    int64_t var_3e8_1 = 0
    int32_t var_3e0_1 = 0
    int64_t var_2e8
    __builtin_memset(&var_2e8, 0, 0x2c)
    int32_t var_2bc_1 = 0x80
    int32_t var_2b8_1 = 0xffffffff
    int32_t var_2b4_1 = 0
    int64_t var_2a8_1 = 0
    int32_t var_2a0_1 = 0
    int64_t var_478
    __builtin_memset(&var_478, 0, 0x2c)
    int32_t var_44c_1 = 0x80
    int32_t var_448_1 = 0xffffffff
    int32_t var_444_1 = 0
    int64_t var_438_1 = 0
    int32_t var_430_1 = 0
    int64_t var_7e8
    __builtin_memset(&var_7e8, 0, 0x2c)
    int32_t var_7bc_1 = 0x80
    int32_t var_7b8_1 = 0xffffffff
    int32_t var_7b4_1 = 0
    int64_t var_7a8_1 = 0
    int32_t var_7a0_1 = 0
    int32_t var_1688 = 0
    int32_t var_1684_1 = 1
    int32_t var_1678_1 = 0xffffffff
    int64_t var_1674_1 = 0
    
    if (rdx_44 != 0)
        sub_14059bdd0(&var_1688)
        rdx_44 = var_840
    
    double zmm2_3[0x2] = var_1678_1.o
    char rcx_94 = rdx_44.b & 0x1f
    int128_t var_1a38_5 = var_1688.o
    int32_t var_12e4_1 = rdx_44
    double var_1a28_5[0x2] = zmm2_3
    int32_t var_12f4_1 = 1 << rcx_94
    int64_t* var_12f0_1 = &var_858
    zmm2_3 = _mm_unpackhi_pd(zmm2_3, zmm2_3[0])
    int128_t var_1248 = (&var_868).o
    int32_t var_12e0_1 = rdx_44 & 0xffffffe0
    int64_t var_1228_1 = zmm2_3.q
    zmm2_3 = (0xffffffff << rcx_94).o
    int128_t var_1a38_6 = (rdx_44 s>> 5).o
    double var_1a28_6[0x2] = zmm2_3
    int128_t var_1238_1 = var_1a38_5
    int64_t var_1038_1 = (&var_868).o.q
    int64_t var_1018_1 = (_mm_unpackhi_pd(zmm2_3, zmm2_3[0])).q
    
    while (true)
        int64_t rcx_95 = sx.q(var_1238_1:0xc.d)
        int64_t* rdx_46 = var_1248.q
        
        if (rcx_95.d == (var_1a38_6:8.q u>> 0x20).d && var_1238_1.q == var_1a38_6.q
                && rdx_46 == var_1038_1)
            break
        
        int64_t rax_119 = *rdx_46
        int64_t var_248
        __builtin_memset(&var_248, 0, 0x2c)
        int64_t* rbx_16 = rax_119 + rcx_95 * 0x18
        int32_t var_21c_1 = 0x80
        int32_t var_218_1 = 0xffffffff
        int32_t var_214_1 = 0
        int64_t var_208_1 = 0
        int32_t var_200_1 = 0
        void var_1638
        sub_1406b3860(&var_248, &var_1638, rbx_16, nullptr)
        int64_t* rcx_98 = var_19f8
        int64_t var_1628 = (*(*rcx_98 + 0x50))(rcx_98, &var_248)
        sub_141859dd0(&var_3d8, rbx_16, &var_1628)
        int64_t* rcx_100 = var_19f8
        int64_t var_1620 = (*(*rcx_100 + 0x70))(rcx_100, &var_248)
        sub_141859dd0(&var_428, rbx_16, &var_1620)
        int32_t var_200_2 = 0
        
        if (var_208_1 != 0)
            sub_140a74f90(var_208_1)
        
        sub_140669e00(&var_248)
        var_1238_1:8.d &= not.d(var_1248:0xc.d)
        sub_14059bdd0(&var_1248:8)
    
    int32_t var_890
    int32_t rdx_52 = var_890
    int64_t var_8a8
    int64_t* var_16a0_1 = &var_8a8
    int32_t var_16a8 = 0
    int32_t var_16a4_1 = 1
    int32_t var_1698_1 = 0xffffffff
    int64_t var_1694_1 = 0
    
    if (rdx_52 != 0)
        sub_14059bdd0(&var_16a8)
        rdx_52 = var_890
    
    zmm2_3 = var_1698_1.o
    char rcx_107 = rdx_52.b & 0x1f
    int128_t var_1a38_7 = var_16a8.o
    int32_t var_12c4_1 = rdx_52
    double var_1a28_7[0x2] = zmm2_3
    int32_t var_12d4_1 = 1 << rcx_107
    int64_t* var_12d0_1 = &var_8a8
    zmm2_3 = _mm_unpackhi_pd(zmm2_3, zmm2_3[0])
    int128_t var_1220 = (&var_8b8).o
    int32_t var_12c0_1 = rdx_52 & 0xffffffe0
    int64_t var_1200_1 = zmm2_3.q
    zmm2_3 = (0xffffffff << rcx_107).o
    int128_t var_1a38_8 = (rdx_52 s>> 5).o
    double var_1a28_8[0x2] = zmm2_3
    int128_t var_1210_1 = var_1a38_7
    int64_t var_1060_1 = (&var_8b8).o.q
    int64_t var_1040_1 = (_mm_unpackhi_pd(zmm2_3, zmm2_3[0])).q
    
    while (true)
        int64_t rcx_108 = sx.q(var_1210_1:0xc.d)
        int64_t* rdx_54 = var_1220.q
        
        if (rcx_108.d == (var_1a38_8:8.q u>> 0x20).d && var_1210_1.q == var_1a38_8.q
                && rdx_54 == var_1060_1)
            break
        
        int64_t rax_133 = *rdx_54
        int64_t var_298
        __builtin_memset(&var_298, 0, 0x2c)
        int64_t* rdi_7 = rax_133 + rcx_108 * 0x18
        int32_t var_26c_1 = 0x80
        int32_t var_268_1 = 0xffffffff
        int32_t var_264_1 = 0
        int64_t var_258_1 = 0
        int32_t var_250_1 = 0
        void var_1634
        sub_1406b3860(&var_298, &var_1634, rdi_7, nullptr)
        int64_t* rcx_111 = var_1a08
        int64_t var_1618 = (*(*rcx_111 + 0x50))(rcx_111, &var_298)
        sub_141859dd0(&var_2e8, rdi_7, &var_1618)
        int64_t* rcx_113 = var_1a08
        int64_t var_1610 = (*(*rcx_113 + 0x70))(rcx_113, &var_298)
        sub_141859dd0(&var_478, rdi_7, &var_1610)
        
        if (rax_5 != 0)
            rax_5[1].d += 1
        
        int64_t* var_1558 = var_19f8
        
        if (rax_5 != 0)
            rax_5[1].d += 1
        
        int64_t* rcx_115 = var_1a08
        int64_t var_1608 = (*(*rcx_115 + 0x60))(rcx_115, &var_298, &var_1558, &var_868)
        sub_141859dd0(&var_7e8, rdi_7, &var_1608)
        
        if (rax_5 != 0)
            rax_5[1].d -= 1
            
            if (rax_5[1].d == 1)
                (**rax_5)(rax_5)
                int32_t rax_143 = *(rax_5 + 0xc)
                *(rax_5 + 0xc) -= 1
                
                if (rax_143 == 1)
                    (*(*rax_5 + 8))(rax_5, 1)
        
        if (rax_5 != 0)
            rax_5[1].d -= 1
            
            if (rax_5[1].d == 1)
                (**rax_5)(rax_5)
                int32_t rax_147 = *(rax_5 + 0xc)
                *(rax_5 + 0xc) -= 1
                
                if (rax_147 == 1)
                    (*(*rax_5 + 8))(rax_5, 1)
        
        int32_t var_250_2 = 0
        
        if (var_258_1 != 0)
            sub_140a74f90(var_258_1)
        
        sub_140669e00(&var_298)
        var_1210_1:8.d &= not.d(var_1220:0xc.d)
        sub_14059bdd0(&var_1220:8)
    
    if (r12_1.d s> 0)
        int64_t var_16e8 = 0
        int64_t var_16e0_1 = 0
        int32_t rax_151 = sub_1405969c0(0, &data_142d40450)
        int32_t var_1748
        sub_140a5d580(&var_7e8, &var_1748, rax_151, &var_16e8)
        int64_t rax_152 = sx.q(var_1748)
        int64_t rcx_126
        
        if (rax_152.d != 0xffffffff)
            rcx_126 = rax_152 << 5
        
        int64_t* rax_153
        
        if (rax_152.d == 0xffffffff || rcx_126 == neg.q(var_7e8))
            rax_153 = sub_14185b6d0(&var_7e8, rax_151, &var_16e8)
        else
            rax_153 = rcx_126 + var_7e8 + 0x10
        
        *rax_153 += r12_1
        int64_t rcx_129 = var_16e8
        
        if (rcx_129 != 0)
            sub_140a74f90(rcx_129)
    
    int64_t var_4c8
    __builtin_memset(&var_4c8, 0, 0x2c)
    int32_t var_49c_1 = 0x80
    int32_t var_498_1 = 0xffffffff
    int32_t var_494_1 = 0
    int64_t var_488_1 = 0
    int32_t var_480_1 = 0
    int64_t var_518
    __builtin_memset(&var_518, 0, 0x2c)
    int32_t var_4ec_1 = 0x80
    int32_t var_4e8_1 = 0xffffffff
    int32_t var_4e4_1 = 0
    int64_t var_4d8_1 = 0
    int32_t var_4d0_1 = 0
    int64_t var_568
    __builtin_memset(&var_568, 0, 0x2c)
    int32_t var_53c_1 = 0x80
    int32_t var_538_1 = 0xffffffff
    int32_t var_534_1 = 0
    int64_t var_528_1 = 0
    int32_t var_520_1 = 0
    int64_t var_5b8
    __builtin_memset(&var_5b8, 0, 0x2c)
    int32_t var_58c_1 = 0x80
    int32_t var_588_1 = 0xffffffff
    int32_t var_584_1 = 0
    int64_t var_578_1 = 0
    int32_t var_570_1 = 0
    int64_t var_608
    __builtin_memset(&var_608, 0, 0x2c)
    int32_t var_5dc_1 = 0x80
    int32_t var_5d8_1 = 0xffffffff
    int32_t var_5d4_1 = 0
    int64_t var_5c8_1 = 0
    int32_t var_5c0_1 = 0
    int64_t var_658
    __builtin_memset(&var_658, 0, 0x2c)
    int32_t var_62c_1 = 0x80
    int32_t var_628_1 = 0xffffffff
    int32_t var_624_1 = 0
    int64_t var_618_1 = 0
    int32_t var_610_1 = 0
    int64_t var_6a8
    __builtin_memset(&var_6a8, 0, 0x2c)
    int32_t var_67c_1 = 0x80
    int32_t var_678_1 = 0xffffffff
    int32_t var_674_1 = 0
    int64_t var_668_1 = 0
    int32_t var_660_1 = 0
    int64_t* rcx_130 = *(r13 + 0xc8)
    void* rax_157 = &rcx_130[sx.q(*(r13 + 0xd0)) * 0xa]
    char var_1a48
    
    if (rcx_130 != rax_157)
        int64_t* rsi_3 = rcx_130
        
        do
            int64_t* i_3
            sub_14186d760(rsi_3, &i_3)
            int32_t var_1730
            sub_14185e1d0(i_3, var_1730, var_1a48, var_1a48)
            int64_t* i_1 = i_3
            r12_1.b = 1
            int64_t var_19a0 = 0
            int64_t var_1998_1 = 0
            
            for (; i_1 != &i_1[sx.q(var_1730) * 2]; i_1 = &i_1[2])
                if (r12_1.b == 0)
                    sub_140a20ba0(&var_19a0, &data_142d8adc4, 2)
                else
                    r12_1.b = 0
                
                int32_t rax_158 = i_1[1].d
                int32_t r8_35 = rax_158 - 1
                
                if (rax_158 == 0)
                    r8_35 = 0
                
                sub_140a20ba0(&var_19a0, *i_1, r8_35)
            
            void var_1630
            sub_1406b3860(&var_6a8, &var_1630, &var_19a0, nullptr)
            
            if (rax_5 != 0)
                rax_5[1].d += 1
            
            int64_t* var_1548 = var_19f8
            
            if (rax_5 != 0)
                rax_5[1].d += 1
            
            int64_t* rcx_136 = var_1a08
            int64_t var_15f8 = (*(*rcx_136 + 0x60))(rcx_136, rsi_3, &var_1548, rsi_3) + var_1590_1
            sub_141859dd0(&var_4c8, &var_19a0, &var_15f8)
            
            if (rax_5 != 0)
                rax_5[1].d -= 1
                
                if (rax_5[1].d == 1)
                    (**rax_5)(rax_5)
                    int32_t rax_165 = *(rax_5 + 0xc)
                    *(rax_5 + 0xc) -= 1
                    
                    if (rax_165 == 1)
                        (*(*rax_5 + 8))(rax_5, 1)
            
            if (rax_5 != 0)
                rax_5[1].d -= 1
                
                if (rax_5[1].d == 1)
                    (**rax_5)(rax_5)
                    int32_t rax_169 = *(rax_5 + 0xc)
                    *(rax_5 + 0xc) -= 1
                    
                    if (rax_169 == 1)
                        (*(*rax_5 + 8))(rax_5, 1)
            
            int64_t* rcx_142 = var_1a08
            int64_t var_15f0 = (*(*rcx_142 + 0x70))(rcx_142, rsi_3)
            sub_141859dd0(&var_5b8, &var_19a0, &var_15f0)
            int64_t* rcx_144 = var_1a08
            int64_t var_15e8 = (*(*rcx_144 + 0x50))(rcx_144, rsi_3)
            sub_141859dd0(&var_608, &var_19a0, &var_15e8)
            int64_t* rcx_146 = var_19f8
            int64_t var_15e0 = (*(*rcx_146 + 0x70))(rcx_146, rsi_3)
            sub_141859dd0(&var_518, &var_19a0, &var_15e0)
            int64_t* rcx_148 = var_19f8
            int64_t var_15d8 = (*(*rcx_148 + 0x50))(rcx_148, rsi_3)
            sub_141859dd0(&var_568, &var_19a0, &var_15d8)
            uint128_t zmm0_5 = var_1a08.o
            uint128_t var_10f8 = zmm0_5
            void* rax_179 = _mm_bsrli_si128(zmm0_5, 8).q
            int32_t var_1744 = 1
            void* var_1a00_3 = rax_179
            
            if (rax_179 != 0)
                *(rax_179 + 8) += 1
            
            int64_t var_15d0 = sub_141829fe0(&var_19f8, &var_10f8, &var_1744, rsi_3)
            sub_141859dd0(&var_658, &var_19a0, &var_15d0)
            int64_t* r15_2 = var_10f8:8.q
            
            if (r15_2 != 0)
                r15_2[1].d -= 1
                
                if (r15_2[1].d == 1)
                    (**r15_2)(r15_2)
                    int32_t rax_183 = *(r15_2 + 0xc)
                    *(r15_2 + 0xc) -= 1
                    
                    if (rax_183 == 1)
                        (*(*r15_2 + 8))(r15_2, 1)
            
            int64_t rcx_154 = var_19a0
            
            if (rcx_154 != 0)
                sub_140a74f90(rcx_154)
            
            r12_1 = zx.q(var_1730)
            int64_t* i_6 = i_3
            
            if (r12_1.d != 0)
                int32_t i_2
                
                do
                    int64_t rcx_155 = *i_6
                    
                    if (rcx_155 != 0)
                        sub_140a74f90(rcx_155)
                    
                    i_6 = &i_6[2]
                    i_2 = r12_1.d
                    r12_1 = zx.q(r12_1.d - 1)
                while (i_2 != 1)
                i_6 = i_3
            
            if (i_6 != 0)
                sub_140a74f90(i_6)
            
            rsi_3 = &rsi_3[0xa]
        while (rsi_3 != rax_157)
        
        rsi_2 = rax_15
        r13 = arg1
    
    int64_t var_16b8
    sub_14186d760(&var_8b8, &var_16b8)
    int32_t var_16b0
    sub_14185e1d0(var_16b8, var_16b0, var_1a48, var_1a48)
    int64_t var_19b0 = 0
    int32_t var_19a8_1 = 0
    sub_1405947f0(&var_19b0, 0xb)
    int32_t rax_185 = var_19a8_1 + 0xb
    
    if (rax_185 s> 0)
        sub_140594770(&var_19b0)
    
    UnDecorator::getReferenceType(var_19b0, u"(untagged)", 0x16)
    int64_t var_1708
    sub_1406c96b0(&var_1708, &var_16b8, &data_142d8adc4)
    int32_t var_1700
    int32_t rax_186 = var_1700
    
    if (rax_186 s<= 1)
        goto label_141874780
    
    if (sub_140a32ae0(&var_1708, &data_142d8adc4, 1) != 0)
        rax_186 = var_1700
    label_141874780:
        
        if (rax_185 != 0 && rax_185 != 1)
            int64_t rdx_84 = var_19b0
            int64_t* rcx_164 = &var_1708
            
            if (rax_186 != 0)
                sub_140ab3a50(rcx_164, rdx_84, rax_185 - 1, 0)
            else
                sub_140a20ba0(rcx_164, rdx_84, rax_185 - 1)
    
    int32_t var_b70[0x8]
    int64_t var_698
    int32_t* rax_188 = sub_1406c8970(&var_b70, &var_698, 0)
    int32_t rdi_10 = 0
    int32_t var_680
    int32_t var_12a4_1 = var_680
    char rcx_167 = var_680.b & 0x1f
    double zmm2_4[0x2] = *(rax_188 + 0x10)
    int128_t var_1a38_9 = *rax_188
    double var_1a28_9[0x2] = zmm2_4
    int32_t var_12b4_1 = 1 << rcx_167
    int64_t* var_12b0_1 = &var_698
    zmm2_4 = _mm_unpackhi_pd(zmm2_4, zmm2_4[0])
    int128_t var_11f8 = (&var_6a8).o
    int32_t var_12a0_1 = var_680 & 0xffffffe0
    int64_t var_11d8_1 = zmm2_4.q
    zmm2_4 = (0xffffffff << rcx_167).o
    int128_t var_1a38_10 = (var_680 s>> 5).o
    double var_1a28_10[0x2] = zmm2_4
    int128_t var_11e8_1 = var_1a38_9
    int64_t var_fc0_1 = (&var_6a8).o.q
    int64_t var_fa0_1 = (_mm_unpackhi_pd(zmm2_4, zmm2_4[0])).q
    
    while (true)
        int64_t rcx_168 = sx.q(var_11e8_1:0xc.d)
        int64_t* rdx_88 = var_11f8.q
        
        if (rcx_168.d == (var_1a38_10:8.q u>> 0x20).d && var_11e8_1.q == var_1a38_10.q
                && rdx_88 == var_fc0_1)
            break
        
        int64_t rax_195 = *rdx_88
        int64_t rcx_169 = rcx_168 * 3
        int64_t* rbx_20 = rax_195 + (rcx_169 << 3)
        char rax_196
        
        if (*(rax_195 + (rcx_169 << 3) + 8) s> 1)
            rax_196 = sub_140a32ae0(rbx_20, &data_142d7fa60, 1)
        
        int64_t var_16d8
        uint64_t var_1538[0x2]
        uint64_t (* rdx_90)[0x2]
        
        if (*(rax_195 + (rcx_169 << 3) + 8) s<= 1 || rax_196 != 0)
            rdi_10 |= 2
            
            if (rax_185 s> 1)
                int32_t rax_197 = rbx_20[1].d
                int32_t rdi_11 = rax_197 - 1
                
                if (rax_197 == 0)
                    rdi_11 = 0
                
                int32_t rax_198
                
                if (rax_185 == 0)
                    rax_198 = rax_185 + 1
                
                if (rax_185 != 0 || rdi_11 == 0)
                    rax_198 = 0
                
                int64_t rdx_92 = var_19b0
                int64_t var_1758 = 0
                sub_140596860(&var_1758, rdx_92, rax_185, 0, rax_198 + rdi_11)
                sub_140a20ba0(&var_1758, *rbx_20, rdi_11)
                var_16d8 = var_1758
                int32_t var_1750
                int32_t var_16d0_1 = var_1750
                int32_t var_174c
                int32_t var_16cc_1 = var_174c
                var_1750.q = 0
                var_1758 = 0
            else
                sub_140596d10(&var_16d8, rbx_20)
            
            rdx_90 = &var_16d8
        else
            var_1538[0] = 0
            rdi_10 |= 1
            sub_140596860(&var_1538, *rbx_20, rbx_20[1].d, 0, 0)
            rdx_90 = &var_1538
        
        uint64_t var_10e8[0x2]
        var_10e8[0] = 0
        sub_140596860(&var_10e8, *rdx_90, (*rdx_90)[1].d, 0, 0)
        
        if ((rdi_10.b & 2) != 0)
            int64_t rcx_176 = var_16d8
            rdi_10 &= 0xfffffffd
            
            if (rcx_176 != 0)
                sub_140a74f90(rcx_176)
        
        if ((rdi_10.b & 1) != 0)
            uint64_t rcx_177 = var_1538[0]
            rdi_10 &= 0xfffffffe
            
            if (rcx_177 != 0)
                sub_140a74f90(rcx_177)
        
        uint64_t rcx_178 = var_10e8[0]
        
        if (rcx_178 != 0)
            sub_140a74f90(rcx_178)
        
        var_11e8_1:8.d &= not.d(var_11f8:0xc.d)
        sub_14059bdd0(&var_11f8:8)
    
    void* var_1a18 = nullptr
    int64_t var_1a10_1 = 0
    *sub_14186c8d0(&var_1a18) = 1
    *sub_14186c8d0(&var_1a18) = 2
    *(var_1a18 + 0x38) = 0x41324f8000000000
    *(var_1a18 + 8) = 0x41324f8000000000
    *(var_1a18 + 0x40) = 0x417c9c3800000000
    *(var_1a18 + 0x10) = 0x417c9c3800000000
    *(var_1a18 + 0x48) = 0x4177d78400000000
    *(var_1a18 + 0x18) = 0x4177d78400000000
    *(var_1a18 + 0x50) = 0x416312d000000000
    *(var_1a18 + 0x20) = 0x416312d000000000
    *sub_14186c8d0(&var_1a18) = 1
    *sub_14186c8d0(&var_1a18) = 2
    *(var_1a18 + 0x98) = 0x414ab3f000000000
    *(var_1a18 + 0x68) = 0x414ab3f000000000
    *(var_1a18 + 0xa0) = 0x41a1490c80000000
    *(var_1a18 + 0x70) = 0x41a1490c80000000
    *(var_1a18 + 0xa8) = 0x4191e1a300000000
    *(var_1a18 + 0x78) = 0x4191e1a300000000
    *(var_1a18 + 0xb0) = 0x417312d000000000
    *(var_1a18 + 0x80) = 0x417312d000000000
    *sub_14186c8d0(&var_1a18) = 1
    *sub_14186c8d0(&var_1a18) = 2
    *(var_1a18 + 0xf8) = 0x4168cba800000000
    *(var_1a18 + 0xc8) = 0x4168cba800000000
    *(var_1a18 + 0x100) = 0x41b19557c0000000
    *(var_1a18 + 0xd0) = 0x41b19557c0000000
    *(var_1a18 + 0x108) = 0x419dcd6500000000
    *(var_1a18 + 0xd8) = 0x419dcd6500000000
    *(var_1a18 + 0x110) = 0x418312d000000000
    *(var_1a18 + 0xe0) = 0x418312d000000000
    uint128_t zmm0_7 = var_1a08.o
    uint128_t var_10c8 = zmm0_7
    void* rax_235 = _mm_bsrli_si128(zmm0_7, 8).q
    void* var_1a00_4 = rax_235
    
    if (rax_235 != 0)
        *(rax_235 + 8) += 1
    
    zmm0_7 = var_19f8.o
    uint128_t var_10d8 = zmm0_7
    void* rax_236 = _mm_bsrli_si128(zmm0_7, 8).q
    
    if (rax_236 != 0)
        *(rax_236 + 8) += 1
    
    int32_t var_1a58
    var_1a58.q = &var_8b8
    int64_t* var_1528
    double zmm6_1[0x2] =
        sub_141879b50(&var_1528, &var_10d8, &var_868, &var_10c8, var_1a58, &var_1a18)
    sub_1405970a0(&var_10d8)
    sub_1405970a0(&var_10c8)
    
    if (*(r13 + 0xe0) s> 1)
        int64_t var_16c8 = 0
        int64_t var_16c0_1 = 0
        void*** var_10a8
        sub_14093d6b0(&var_10a8, &var_16c8, 0)
        void*** rbx_21 = var_10a8
        sub_140944dc0(rbx_21)
        int64_t var_1840 = 0
        int32_t var_1838_1 = 0
        sub_1405947f0(&var_1840, 0xa)
        int32_t rax_237 = var_1838_1 + 0xa
        var_1838_1 = rax_237
        
        if (rax_237 s> 0)
            sub_140594770(&var_1840)
        
        UnDecorator::getReferenceType(var_1840, u"ManifestA", 0x14)
        sub_140939a80(rbx_21, &var_1840)
        int64_t rcx_195 = var_1840
        
        if (rcx_195 != 0)
            sub_140a74f90(rcx_195)
        
        int64_t var_1830 = 0
        int32_t var_1828_1 = 0
        sub_1405947f0(&var_1830, 8)
        int32_t rax_238 = var_1828_1 + 8
        var_1828_1 = rax_238
        
        if (rax_238 s> 0)
            sub_140594770(&var_1830)
        
        UnDecorator::getReferenceType(var_1830, u"AppName", 0x10)
        int64_t* rcx_199 = var_19f8
        void var_d30
        sub_140918ca0(rbx_21, &var_1830, sub_140596d10(&var_d30, (*(*rcx_199 + 0x10))(rcx_199)))
        int64_t rcx_202 = var_1830
        
        if (rcx_202 != 0)
            sub_140a74f90(rcx_202)
        
        int64_t var_1820 = 0
        int32_t var_1818_1 = 0
        sub_1405947f0(&var_1820, 6)
        int32_t rax_242 = var_1818_1 + 6
        var_1818_1 = rax_242
        
        if (rax_242 s> 0)
            sub_140594770(&var_1820)
        
        UnDecorator::getReferenceType(var_1820, u"AppId", 0xc)
        int64_t* rcx_206 = var_19f8
        sub_14185ee60(rbx_21, &var_1820, (*(*rcx_206 + 8))(rcx_206))
        int64_t rcx_208 = var_1820
        
        if (rcx_208 != 0)
            sub_140a74f90(rcx_208)
        
        int64_t var_1810 = 0
        int32_t var_1808_1 = 0
        sub_1405947f0(&var_1810, 0xe)
        int32_t rax_245 = var_1808_1 + 0xe
        var_1808_1 = rax_245
        
        if (rax_245 s> 0)
            sub_140594770(&var_1810)
        
        UnDecorator::getReferenceType(var_1810, u"VersionString", 0x1c)
        int64_t* rcx_212 = var_19f8
        void var_d00
        sub_140918ca0(rbx_21, &var_1810, sub_140596d10(&var_d00, (*(*rcx_212 + 0x18))(rcx_212)))
        int64_t rcx_215 = var_1810
        
        if (rcx_215 != 0)
            sub_140a74f90(rcx_215)
        
        int64_t var_1800 = 0
        int32_t var_17f8_1 = 0
        sub_1405947f0(&var_1800, 0xd)
        int32_t rax_249 = var_17f8_1 + 0xd
        var_17f8_1 = rax_249
        
        if (rax_249 s> 0)
            sub_140594770(&var_1800)
        
        UnDecorator::getReferenceType(var_1800, u"DownloadSize", 0x1a)
        sub_140918e90(rbx_21, &var_1800, rax_93)
        int64_t rcx_220 = var_1800
        
        if (rcx_220 != 0)
            sub_140a74f90(rcx_220)
        
        int64_t var_17f0 = 0
        int32_t var_17e8_1 = 0
        sub_1405947f0(&var_17f0, 0xa)
        int32_t rax_250 = var_17e8_1 + 0xa
        var_17e8_1 = rax_250
        
        if (rax_250 s> 0)
            sub_140594770(&var_17f0)
        
        UnDecorator::getReferenceType(var_17f0, u"BuildSize", 0x14)
        sub_140918e90(rbx_21, &var_17f0, rax_94)
        int64_t rcx_225 = var_17f0
        
        if (rcx_225 != 0)
            sub_140a74f90(rcx_225)
        
        int64_t var_17e0 = 0
        int32_t var_17d8_1 = 0
        sub_1405947f0(&var_17e0, 0x1b)
        int32_t rax_251 = var_17d8_1 + 0x1b
        var_17d8_1 = rax_251
        
        if (rax_251 s> 0)
            sub_140594770(&var_17e0)
        
        UnDecorator::getReferenceType(var_17e0, u"IndividualTagDownloadSizes", 0x36)
        sub_140939a80(rbx_21, &var_17e0)
        int64_t rcx_230 = var_17e0
        
        if (rcx_230 != 0)
            sub_140a74f90(rcx_230)
        
        int32_t var_cb0[0x8]
        int64_t var_3c8
        int32_t* rax_252 = sub_1406c8970(&var_cb0, &var_3c8, 0)
        double zmm2_5[0x2] = *(rax_252 + 0x10)
        int128_t var_1a38_11 = *rax_252
        double var_1a28_11[0x2] = zmm2_5
        zmm2_5 = _mm_unpackhi_pd(zmm2_5, zmm2_5[0])
        int128_t var_11d0 = (&var_3d8).o
        int128_t var_11c0_1 = var_1a38_11
        int64_t var_11b0_1 = zmm2_5.q
        int32_t var_c90[0x8]
        int32_t var_3b0
        int32_t* rax_253 = sub_1406c8970(&var_c90, &var_3c8, var_3b0)
        zmm2_5 = *(rax_253 + 0x10)
        int128_t var_1a38_12 = *rax_253
        double var_1a28_12[0x2] = zmm2_5
        int64_t var_f98_1 = (&var_3d8).o.q
        int64_t var_f78_1 = (_mm_unpackhi_pd(zmm2_5, zmm2_5[0])).q
        
        while (true)
            int64_t rdx_115 = sx.q(var_11c0_1:0xc.d)
            int64_t rcx_233 = var_11d0.q
            
            if (rdx_115.d == (var_1a38_12:8.q u>> 0x20).d && var_11c0_1.q == var_1a38_12.q
                    && rcx_233 == var_f98_1)
                break
            
            void* rdx_117 = (rdx_115 << 5) + *rcx_233
            sub_140918e90(rbx_21, rdx_117, *(rdx_117 + 0x10))
            var_11c0_1:8.d &= not.d(var_11d0:0xc.d)
            sub_14059bdd0(&var_11d0:8)
        
        sub_140944d70(rbx_21)
        int64_t var_17d0 = 0
        int32_t var_17c8_1 = 0
        sub_1405947f0(&var_17d0, 0x1b)
        int32_t rax_259 = var_17c8_1 + 0x1b
        var_17c8_1 = rax_259
        
        if (rax_259 s> 0)
            sub_140594770(&var_17d0)
        
        var_1a58.w = 0x3f
        sub_1405a7220(var_17d0, 0x1b, "CompareTagSetDownloadSizes", 0x1b, var_1a58.w)
        sub_140939a80(rbx_21, &var_17d0)
        int64_t rcx_241 = var_17d0
        
        if (rcx_241 != 0)
            sub_140a74f90(rcx_241)
        
        int32_t var_c70[0x8]
        int64_t var_558
        int32_t* rax_260 = sub_1406c8970(&var_c70, &var_558, 0)
        zmm2_5 = *(rax_260 + 0x10)
        int128_t var_1a38_13 = *rax_260
        double var_1a28_13[0x2] = zmm2_5
        zmm2_5 = _mm_unpackhi_pd(zmm2_5, zmm2_5[0])
        int128_t var_11a8 = (&var_568).o
        int128_t var_1198_1 = var_1a38_13
        int64_t var_1188_1 = zmm2_5.q
        int32_t var_c50[0x8]
        int32_t var_540
        int32_t* rax_261 = sub_1406c8970(&var_c50, &var_558, var_540)
        zmm2_5 = *(rax_261 + 0x10)
        int128_t var_1a38_14 = *rax_261
        double var_1a28_14[0x2] = zmm2_5
        int64_t var_f70_1 = (&var_568).o.q
        int64_t var_f50_1 = (_mm_unpackhi_pd(zmm2_5, zmm2_5[0])).q
        
        while (true)
            int64_t rdx_122 = sx.q(var_1198_1:0xc.d)
            int64_t rcx_244 = var_11a8.q
            
            if (rdx_122.d == (var_1a38_14:8.q u>> 0x20).d && var_1198_1.q == var_1a38_14.q
                    && rcx_244 == var_f70_1)
                break
            
            void* rdx_124 = (rdx_122 << 5) + *rcx_244
            sub_140918e90(rbx_21, rdx_124, *(rdx_124 + 0x10))
            var_1198_1:8.d &= not.d(var_11a8:0xc.d)
            sub_14059bdd0(&var_11a8:8)
        
        sub_140944d70(rbx_21)
        int64_t var_1890 = 0
        int32_t var_1888_1 = 0
        sub_1405947f0(&var_1890, 0x18)
        int32_t rax_267 = var_1888_1 + 0x18
        var_1888_1 = rax_267
        
        if (rax_267 s> 0)
            sub_140594770(&var_1890)
        
        UnDecorator::getReferenceType(var_1890, u"IndividualTagBuildSizes", 0x30)
        sub_140939a80(rbx_21, &var_1890)
        int64_t rcx_252 = var_1890
        
        if (rcx_252 != 0)
            sub_140a74f90(rcx_252)
        
        int32_t var_c30[0x8]
        int64_t var_418
        int32_t* rax_268 = sub_1406c8970(&var_c30, &var_418, 0)
        zmm2_5 = *(rax_268 + 0x10)
        int128_t var_1a38_15 = *rax_268
        double var_1a28_15[0x2] = zmm2_5
        zmm2_5 = _mm_unpackhi_pd(zmm2_5, zmm2_5[0])
        int128_t var_1180 = (&var_428).o
        int128_t var_1170_1 = var_1a38_15
        int64_t var_1160_1 = zmm2_5.q
        int32_t var_c10[0x8]
        int32_t var_400
        int32_t* rax_269 = sub_1406c8970(&var_c10, &var_418, var_400)
        zmm2_5 = *(rax_269 + 0x10)
        int128_t var_1a38_16 = *rax_269
        double var_1a28_16[0x2] = zmm2_5
        int64_t var_f48_1 = (&var_428).o.q
        int64_t var_f28_1 = (_mm_unpackhi_pd(zmm2_5, zmm2_5[0])).q
        
        while (true)
            int64_t rdx_129 = sx.q(var_1170_1:0xc.d)
            int64_t rcx_255 = var_1180.q
            
            if (rdx_129.d == (var_1a38_16:8.q u>> 0x20).d && var_1170_1.q == var_1a38_16.q
                    && rcx_255 == var_f48_1)
                break
            
            void* rdx_131 = (rdx_129 << 5) + *rcx_255
            sub_140918e90(rbx_21, rdx_131, *(rdx_131 + 0x10))
            var_1170_1:8.d &= not.d(var_1180:0xc.d)
            sub_14059bdd0(&var_1180:8)
        
        sub_140944d70(rbx_21)
        int64_t var_17c0 = 0
        int32_t var_17b8_1 = 0
        sub_1405947f0(&var_17c0, 0x18)
        int32_t rax_275 = var_17b8_1 + 0x18
        var_17b8_1 = rax_275
        
        if (rax_275 s> 0)
            sub_140594770(&var_17c0)
        
        var_1a58.w = 0x3f
        sub_1405a7220(var_17c0, 0x18, "CompareTagSetBuildSizes", 0x18, var_1a58.w)
        sub_140939a80(rbx_21, &var_17c0)
        int64_t rcx_263 = var_17c0
        
        if (rcx_263 != 0)
            sub_140a74f90(rcx_263)
        
        int32_t var_bf0[0x8]
        int64_t var_508
        int32_t* rax_276 = sub_1406c8970(&var_bf0, &var_508, 0)
        zmm2_5 = *(rax_276 + 0x10)
        int128_t var_1a38_17 = *rax_276
        double var_1a28_17[0x2] = zmm2_5
        zmm2_5 = _mm_unpackhi_pd(zmm2_5, zmm2_5[0])
        int128_t var_1518 = (&var_518).o
        int128_t var_1508_1 = var_1a38_17
        int64_t var_14f8_1 = zmm2_5.q
        int32_t var_bd0[0x8]
        int32_t var_4f0
        int32_t* rax_277 = sub_1406c8970(&var_bd0, &var_508, var_4f0)
        zmm2_5 = *(rax_277 + 0x10)
        int128_t var_1a38_18 = *rax_277
        double var_1a28_18[0x2] = zmm2_5
        int64_t var_f20_1 = (&var_518).o.q
        int64_t var_f00_1 = (_mm_unpackhi_pd(zmm2_5, zmm2_5[0])).q
        
        while (true)
            int64_t rdx_136 = sx.q(var_1508_1:0xc.d)
            int64_t rcx_266 = var_1518.q
            
            if (rdx_136.d == (var_1a38_18:8.q u>> 0x20).d && var_1508_1.q == var_1a38_18.q
                    && rcx_266 == var_f20_1)
                break
            
            void* rdx_138 = (rdx_136 << 5) + *rcx_266
            sub_140918e90(rbx_21, rdx_138, *(rdx_138 + 0x10))
            var_1508_1:8.d &= not.d(var_1518:0xc.d)
            sub_14059bdd0(&var_1518:8)
        
        sub_140944d70(rbx_21)
        sub_140944d70(rbx_21)
        int64_t var_17b0 = 0
        int32_t var_17a8_1 = 0
        sub_1405947f0(&var_17b0, 0xa)
        int32_t rax_283 = var_17a8_1 + 0xa
        var_17a8_1 = rax_283
        
        if (rax_283 s> 0)
            sub_140594770(&var_17b0)
        
        UnDecorator::getReferenceType(var_17b0, u"ManifestB", 0x14)
        sub_140939a80(rbx_21, &var_17b0)
        int64_t rcx_275 = var_17b0
        
        if (rcx_275 != 0)
            sub_140a74f90(rcx_275)
        
        int64_t var_17a0 = 0
        int32_t var_1798_1 = 0
        sub_1405947f0(&var_17a0, 8)
        int32_t rax_284 = var_1798_1 + 8
        var_1798_1 = rax_284
        
        if (rax_284 s> 0)
            sub_140594770(&var_17a0)
        
        UnDecorator::getReferenceType(var_17a0, u"AppName", 0x10)
        int64_t* rcx_279 = var_1a08
        void var_d20
        sub_140918ca0(rbx_21, &var_17a0, sub_140596d10(&var_d20, (*(*rcx_279 + 0x10))(rcx_279)))
        int64_t rcx_282 = var_17a0
        
        if (rcx_282 != 0)
            sub_140a74f90(rcx_282)
        
        int64_t var_1790 = 0
        int32_t var_1788_1 = 0
        sub_1405947f0(&var_1790, 6)
        int32_t rax_288 = var_1788_1 + 6
        var_1788_1 = rax_288
        
        if (rax_288 s> 0)
            sub_140594770(&var_1790)
        
        UnDecorator::getReferenceType(var_1790, u"AppId", 0xc)
        int64_t* rcx_286 = var_1a08
        sub_14185ee60(rbx_21, &var_1790, (*(*rcx_286 + 8))(rcx_286))
        int64_t rcx_288 = var_1790
        
        if (rcx_288 != 0)
            sub_140a74f90(rcx_288)
        
        int64_t var_1780 = 0
        int32_t var_1778_1 = 0
        sub_1405947f0(&var_1780, 0xe)
        int32_t rax_291 = var_1778_1 + 0xe
        var_1778_1 = rax_291
        
        if (rax_291 s> 0)
            sub_140594770(&var_1780)
        
        UnDecorator::getReferenceType(var_1780, u"VersionString", 0x1c)
        int64_t* rcx_292 = var_1a08
        void var_d10
        sub_140918ca0(rbx_21, &var_1780, sub_140596d10(&var_d10, (*(*rcx_292 + 0x18))(rcx_292)))
        int64_t rcx_295 = var_1780
        
        if (rcx_295 != 0)
            sub_140a74f90(rcx_295)
        
        int64_t var_1770 = 0
        int32_t var_1768_1 = 0
        sub_1405947f0(&var_1770, 0xd)
        int32_t rax_295 = var_1768_1 + 0xd
        var_1768_1 = rax_295
        
        if (rax_295 s> 0)
            sub_140594770(&var_1770)
        
        UnDecorator::getReferenceType(var_1770, u"DownloadSize", 0x1a)
        sub_140918e90(rbx_21, &var_1770, rax_95)
        int64_t rcx_300 = var_1770
        
        if (rcx_300 != 0)
            sub_140a74f90(rcx_300)
        
        int64_t var_1980 = 0
        int32_t var_1978_1 = 0
        sub_1405947f0(&var_1980, 0xa)
        int32_t rax_296 = var_1978_1 + 0xa
        var_1978_1 = rax_296
        
        if (rax_296 s> 0)
            sub_140594770(&var_1980)
        
        UnDecorator::getReferenceType(var_1980, u"BuildSize", 0x14)
        sub_140918e90(rbx_21, &var_1980, rax_96)
        int64_t rcx_305 = var_1980
        
        if (rcx_305 != 0)
            sub_140a74f90(rcx_305)
        
        int64_t var_1970 = 0
        int32_t var_1968_1 = 0
        sub_1405947f0(&var_1970, 0x1b)
        int32_t rax_297 = var_1968_1 + 0x1b
        var_1968_1 = rax_297
        
        if (rax_297 s> 0)
            sub_140594770(&var_1970)
        
        UnDecorator::getReferenceType(var_1970, u"IndividualTagDownloadSizes", 0x36)
        sub_140939a80(rbx_21, &var_1970)
        int64_t rcx_310 = var_1970
        
        if (rcx_310 != 0)
            sub_140a74f90(rcx_310)
        
        int32_t var_bb0[0x8]
        int64_t var_2d8
        int32_t* rax_298 = sub_1406c8970(&var_bb0, &var_2d8, 0)
        zmm2_5 = *(rax_298 + 0x10)
        int128_t var_1a38_19 = *rax_298
        double var_1a28_19[0x2] = zmm2_5
        zmm2_5 = _mm_unpackhi_pd(zmm2_5, zmm2_5[0])
        int128_t var_14f0 = (&var_2e8).o
        int128_t var_14e0_1 = var_1a38_19
        int64_t var_14d0_1 = zmm2_5.q
        int32_t var_b90[0x8]
        int32_t var_2c0
        int32_t* rax_299 = sub_1406c8970(&var_b90, &var_2d8, var_2c0)
        zmm2_5 = *(rax_299 + 0x10)
        int128_t var_1a38_20 = *rax_299
        double var_1a28_20[0x2] = zmm2_5
        int64_t var_ef8_1 = (&var_2e8).o.q
        int64_t var_ed8_1 = (_mm_unpackhi_pd(zmm2_5, zmm2_5[0])).q
        
        while (true)
            int64_t rdx_157 = sx.q(var_14e0_1:0xc.d)
            int64_t rcx_313 = var_14f0.q
            
            if (rdx_157.d == (var_1a38_20:8.q u>> 0x20).d && var_14e0_1.q == var_1a38_20.q
                    && rcx_313 == var_ef8_1)
                break
            
            void* rdx_159 = (rdx_157 << 5) + *rcx_313
            sub_140918e90(rbx_21, rdx_159, *(rdx_159 + 0x10))
            var_14e0_1:8.d &= not.d(var_14f0:0xc.d)
            sub_14059bdd0(&var_14f0:8)
        
        sub_140944d70(rbx_21)
        int64_t var_1960 = 0
        int32_t var_1958_1 = 0
        sub_1405947f0(&var_1960, 0x1b)
        int32_t rax_305 = var_1958_1 + 0x1b
        var_1958_1 = rax_305
        
        if (rax_305 s> 0)
            sub_140594770(&var_1960)
        
        var_1a58.w = 0x3f
        sub_1405a7220(var_1960, 0x1b, "CompareTagSetDownloadSizes", 0x1b, var_1a58.w)
        sub_140939a80(rbx_21, &var_1960)
        int64_t rcx_321 = var_1960
        
        if (rcx_321 != 0)
            sub_140a74f90(rcx_321)
        
        int32_t var_a70[0x8]
        int64_t var_5f8
        int32_t* rax_306 = sub_1406c8970(&var_a70, &var_5f8, 0)
        zmm2_5 = *(rax_306 + 0x10)
        int128_t var_1a38_21 = *rax_306
        double var_1a28_21[0x2] = zmm2_5
        zmm2_5 = _mm_unpackhi_pd(zmm2_5, zmm2_5[0])
        int128_t var_14c8 = (&var_608).o
        int128_t var_14b8_1 = var_1a38_21
        int64_t var_14a8_1 = zmm2_5.q
        int32_t var_b50[0x8]
        int32_t var_5e0
        int128_t* rax_307 = sub_1406c8970(&var_b50, &var_5f8, var_5e0)
        zmm2_5 = rax_307[1]
        int128_t var_1a38_22 = *rax_307
        double var_1a28_22[0x2] = zmm2_5
        int64_t var_ed0_1 = (&var_608).o.q
        int64_t var_eb0_1 = (_mm_unpackhi_pd(zmm2_5, zmm2_5[0])).q
        
        while (true)
            int64_t rdx_164 = sx.q(var_14b8_1:0xc.d)
            int64_t rcx_324 = var_14c8.q
            
            if (rdx_164.d == (var_1a38_22:8.q u>> 0x20).d && var_14b8_1.q == var_1a38_22.q
                    && rcx_324 == var_ed0_1)
                break
            
            void* rdx_166 = (rdx_164 << 5) + *rcx_324
            sub_140918e90(rbx_21, rdx_166, *(rdx_166 + 0x10))
            var_14b8_1:8.d &= not.d(var_14c8:0xc.d)
            sub_14059bdd0(&var_14c8:8)
        
        sub_140944d70(rbx_21)
        int64_t var_1910 = 0
        int32_t var_1908_1 = 0
        sub_1405947f0(&var_1910, 0x18)
        int32_t rax_313 = var_1908_1 + 0x18
        var_1908_1 = rax_313
        
        if (rax_313 s> 0)
            sub_140594770(&var_1910)
        
        UnDecorator::getReferenceType(var_1910, u"IndividualTagBuildSizes", 0x30)
        sub_140939a80(rbx_21, &var_1910)
        int64_t rcx_332 = var_1910
        
        if (rcx_332 != 0)
            sub_140a74f90(rcx_332)
        
        int32_t var_b30[0x8]
        int64_t var_468
        int128_t* rax_314 = sub_1406c8970(&var_b30, &var_468, 0)
        zmm2_5 = rax_314[1]
        int128_t var_1a38_23 = *rax_314
        double var_1a28_23[0x2] = zmm2_5
        zmm2_5 = _mm_unpackhi_pd(zmm2_5, zmm2_5[0])
        int128_t var_14a0 = (&var_478).o
        int128_t var_1490_1 = var_1a38_23
        int64_t var_1480_1 = zmm2_5.q
        int32_t var_b10[0x8]
        int32_t var_450
        int128_t* rax_315 = sub_1406c8970(&var_b10, &var_468, var_450)
        zmm2_5 = rax_315[1]
        int128_t var_1a38_24 = *rax_315
        double var_1a28_24[0x2] = zmm2_5
        int64_t var_fe8_1 = (&var_478).o.q
        int64_t var_fc8_1 = (_mm_unpackhi_pd(zmm2_5, zmm2_5[0])).q
        
        while (true)
            int64_t rdx_171 = sx.q(var_1490_1:0xc.d)
            int64_t rcx_335 = var_14a0.q
            
            if (rdx_171.d == (var_1a38_24:8.q u>> 0x20).d && var_1490_1.q == var_1a38_24.q
                    && rcx_335 == var_fe8_1)
                break
            
            void* rdx_173 = (rdx_171 << 5) + *rcx_335
            sub_140918e90(rbx_21, rdx_173, *(rdx_173 + 0x10))
            var_1490_1:8.d &= not.d(var_14a0:0xc.d)
            sub_14059bdd0(&var_14a0:8)
        
        sub_140944d70(rbx_21)
        int64_t var_1950 = 0
        int32_t var_1948_1 = 0
        sub_1405947f0(&var_1950, 0x18)
        int32_t rax_321 = var_1948_1 + 0x18
        var_1948_1 = rax_321
        
        if (rax_321 s> 0)
            sub_140594770(&var_1950)
        
        var_1a58.w = 0x3f
        sub_1405a7220(var_1950, 0x18, "CompareTagSetBuildSizes", 0x18, var_1a58.w)
        sub_140939a80(rbx_21, &var_1950)
        int64_t rcx_343 = var_1950
        
        if (rcx_343 != 0)
            sub_140a74f90(rcx_343)
        
        int32_t var_af0[0x8]
        int64_t var_5a8
        int128_t* rax_322 = sub_1406c8970(&var_af0, &var_5a8, 0)
        zmm2_5 = rax_322[1]
        int128_t var_1a38_25 = *rax_322
        double var_1a28_25[0x2] = zmm2_5
        zmm2_5 = _mm_unpackhi_pd(zmm2_5, zmm2_5[0])
        int128_t var_1360 = (&var_5b8).o
        int128_t var_1350_1 = var_1a38_25
        int64_t var_1340_1 = zmm2_5.q
        int32_t var_ad0[0x8]
        int32_t var_590
        int128_t* rax_323 = sub_1406c8970(&var_ad0, &var_5a8, var_590)
        zmm2_5 = rax_323[1]
        int128_t var_1a38_26 = *rax_323
        double var_1a28_26[0x2] = zmm2_5
        int64_t var_ea8_1 = (&var_5b8).o.q
        int64_t var_e88_1 = (_mm_unpackhi_pd(zmm2_5, zmm2_5[0])).q
        
        while (true)
            int64_t rdx_178 = sx.q(var_1350_1:0xc.d)
            int64_t rcx_346 = var_1360.q
            
            if (rdx_178.d == (var_1a38_26:8.q u>> 0x20).d && var_1350_1.q == var_1a38_26.q
                    && rcx_346 == var_ea8_1)
                break
            
            void* rdx_180 = (rdx_178 << 5) + *rcx_346
            sub_140918e90(rbx_21, rdx_180, *(rdx_180 + 0x10))
            var_1350_1:8.d &= not.d(var_1360:0xc.d)
            sub_14059bdd0(&var_1360:8)
        
        sub_140944d70(rbx_21)
        sub_140944d70(rbx_21)
        int64_t var_1940 = 0
        int32_t var_1938_1 = 0
        sub_1405947f0(&var_1940, 0xd)
        int32_t rax_329 = var_1938_1 + 0xd
        var_1938_1 = rax_329
        
        if (rax_329 s> 0)
            sub_140594770(&var_1940)
        
        UnDecorator::getReferenceType(var_1940, u"Differential", 0x1a)
        sub_140939a80(rbx_21, &var_1940)
        int64_t rcx_355 = var_1940
        
        if (rcx_355 != 0)
            sub_140a74f90(rcx_355)
        
        int64_t var_1930 = 0
        int32_t var_1928_1 = 0
        sub_1405947f0(&var_1930, 0xd)
        int32_t rax_330 = var_1928_1 + 0xd
        var_1928_1 = rax_330
        
        if (rax_330 s> 0)
            sub_140594770(&var_1930)
        
        UnDecorator::getReferenceType(var_1930, u"NewFilePaths", 0x1a)
        sub_140939040(rbx_21, &var_1930)
        int64_t rcx_360 = var_1930
        
        if (rcx_360 != 0)
            sub_140a74f90(rcx_360)
        
        int32_t var_ab0[0x8]
        void var_148
        int128_t* rax_331 = sub_1406c8970(&var_ab0, &var_148, 0)
        zmm2_5 = rax_331[1]
        int128_t var_1a38_27 = *rax_331
        double var_1a28_27[0x2] = zmm2_5
        zmm2_5 = _mm_unpackhi_pd(zmm2_5, zmm2_5[0])
        int128_t var_1478 = (&var_158).o
        int128_t var_1468_1 = var_1a38_27
        int64_t var_1458_1 = zmm2_5.q
        int32_t var_a90[0x8]
        int32_t var_130
        int128_t* rax_332 = sub_1406c8970(&var_a90, &var_148, var_130)
        zmm2_5 = rax_332[1]
        int128_t var_1a38_28 = *rax_332
        double var_1a28_28[0x2] = zmm2_5
        int64_t var_e80_1 = (&var_158).o.q
        int64_t var_e60_1 = (_mm_unpackhi_pd(zmm2_5, zmm2_5[0])).q
        
        while (true)
            int64_t rcx_363 = sx.q(var_1468_1:0xc.d)
            int64_t* rdx_187 = var_1478.q
            
            if (rcx_363.d == (var_1a38_28:8.q u>> 0x20).d && var_1468_1.q == var_1a38_28.q
                    && rdx_187 == var_e80_1)
                break
            
            int64_t rdi_12 = *rdx_187 + rcx_363 * 0x18
            int32_t rcx_365 = rbx_21[4].d
            
            if (((rcx_365 - 2) & 0xfffffff5) != 0 || rcx_365 == 0xa)
                int16_t var_19e8 = 0x2c
                int64_t* rcx_366 = rbx_21[1]
                (*(*rcx_366 + 0x150))(rcx_366, &var_19e8, 2)
            
            (*rbx_21)[2](rbx_21, rdi_12)
            rbx_21[4].d = 7
            var_1468_1:8.d &= not.d(var_1478:0xc.d)
            sub_14059bdd0(&var_1478:8)
        
        sub_140944d20(rbx_21)
        int64_t var_1920 = 0
        int32_t var_1918_1 = 0
        sub_1405947f0(&var_1920, 0x11)
        int32_t rax_342 = var_1918_1 + 0x11
        var_1918_1 = rax_342
        
        if (rax_342 s> 0)
            sub_140594770(&var_1920)
        
        UnDecorator::getReferenceType(var_1920, u"RemovedFilePaths", 0x22)
        sub_140939040(rbx_21, &var_1920)
        int64_t rcx_374 = var_1920
        
        if (rcx_374 != 0)
            sub_140a74f90(rcx_374)
        
        int32_t var_a50[0x8]
        void var_198
        int128_t* rax_343 = sub_1406c8970(&var_a50, &var_198, 0)
        zmm2_5 = rax_343[1]
        int128_t var_1a38_29 = *rax_343
        double var_1a28_29[0x2] = zmm2_5
        zmm2_5 = _mm_unpackhi_pd(zmm2_5, zmm2_5[0])
        int128_t var_1450 = (&var_1a8).o
        int128_t var_1440_1 = var_1a38_29
        int64_t var_1430_1 = zmm2_5.q
        int32_t var_a30[0x8]
        int32_t var_180
        int128_t* rax_344 = sub_1406c8970(&var_a30, &var_198, var_180)
        zmm2_5 = rax_344[1]
        int128_t var_1a38_30 = *rax_344
        double var_1a28_30[0x2] = zmm2_5
        int64_t var_e58_1 = (&var_1a8).o.q
        int64_t var_e38_1 = (_mm_unpackhi_pd(zmm2_5, zmm2_5[0])).q
        
        while (true)
            int64_t rcx_377 = sx.q(var_1440_1:0xc.d)
            int64_t* rdx_194 = var_1450.q
            
            if (rcx_377.d == (var_1a38_30:8.q u>> 0x20).d && var_1440_1.q == var_1a38_30.q
                    && rdx_194 == var_e58_1)
                break
            
            int64_t rdi_13 = *rdx_194 + rcx_377 * 0x18
            int32_t rcx_379 = rbx_21[4].d
            
            if (((rcx_379 - 2) & 0xfffffff5) != 0 || rcx_379 == 0xa)
                int16_t var_19e0 = 0x2c
                int64_t* rcx_380 = rbx_21[1]
                (*(*rcx_380 + 0x150))(rcx_380, &var_19e0, 2)
            
            (*rbx_21)[2](rbx_21, rdi_13)
            rbx_21[4].d = 7
            var_1440_1:8.d &= not.d(var_1450:0xc.d)
            sub_14059bdd0(&var_1450:8)
        
        sub_140944d20(rbx_21)
        int64_t var_1990 = 0
        int32_t var_1988_1 = 0
        sub_1405947f0(&var_1990, 0x11)
        int32_t rax_354 = var_1988_1 + 0x11
        var_1988_1 = rax_354
        
        if (rax_354 s> 0)
            sub_140594770(&var_1990)
        
        UnDecorator::getReferenceType(var_1990, u"ChangedFilePaths", 0x22)
        sub_140939040(rbx_21, &var_1990)
        int64_t rcx_388 = var_1990
        
        if (rcx_388 != 0)
            sub_140a74f90(rcx_388)
        
        int32_t var_a10[0x8]
        int128_t* rax_355 = sub_1406c8970(&var_a10, &var_328, 0)
        zmm2_5 = rax_355[1]
        int128_t var_1a38_31 = *rax_355
        double var_1a28_31[0x2] = zmm2_5
        zmm2_5 = _mm_unpackhi_pd(zmm2_5, zmm2_5[0])
        int128_t var_1428 = (&var_338).o
        int128_t var_1418_1 = var_1a38_31
        int64_t var_1408_1 = zmm2_5.q
        int32_t var_9f0[0x8]
        int32_t var_310
        int128_t* rax_356 = sub_1406c8970(&var_9f0, &var_328, var_310)
        zmm2_5 = rax_356[1]
        int128_t var_1a38_32 = *rax_356
        double var_1a28_32[0x2] = zmm2_5
        int64_t var_e30_1 = (&var_338).o.q
        int64_t var_e10_1 = (_mm_unpackhi_pd(zmm2_5, zmm2_5[0])).q
        
        while (true)
            int64_t rcx_391 = sx.q(var_1418_1:0xc.d)
            int64_t* rdx_201 = var_1428.q
            
            if (rcx_391.d == (var_1a38_32:8.q u>> 0x20).d && var_1418_1.q == var_1a38_32.q
                    && rdx_201 == var_e30_1)
                break
            
            int64_t rdi_14 = *rdx_201 + rcx_391 * 0x18
            int32_t rcx_393 = rbx_21[4].d
            
            if (((rcx_393 - 2) & 0xfffffff5) != 0 || rcx_393 == 0xa)
                int16_t var_19d8 = 0x2c
                int64_t* rcx_394 = rbx_21[1]
                (*(*rcx_394 + 0x150))(rcx_394, &var_19d8, 2)
            
            (*rbx_21)[2](rbx_21, rdi_14)
            rbx_21[4].d = 7
            var_1418_1:8.d &= not.d(var_1428:0xc.d)
            sub_14059bdd0(&var_1428:8)
        
        sub_140944d20(rbx_21)
        int64_t var_1900 = 0
        int32_t var_18f8_1 = 0
        sub_1405947f0(&var_1900, 0x13)
        int32_t rax_366 = var_18f8_1 + 0x13
        var_18f8_1 = rax_366
        
        if (rax_366 s> 0)
            sub_140594770(&var_1900)
        
        UnDecorator::getReferenceType(var_1900, u"UnchangedFilePaths", 0x26)
        sub_140939040(rbx_21, &var_1900)
        int64_t rcx_402 = var_1900
        
        if (rcx_402 != 0)
            sub_140a74f90(rcx_402)
        
        int32_t var_9d0[0x8]
        int64_t var_378
        int128_t* rax_367 = sub_1406c8970(&var_9d0, &var_378, 0)
        zmm2_5 = rax_367[1]
        int128_t var_1a38_33 = *rax_367
        double var_1a28_33[0x2] = zmm2_5
        zmm2_5 = _mm_unpackhi_pd(zmm2_5, zmm2_5[0])
        int128_t var_1400 = (&var_388).o
        int128_t var_13f0_1 = var_1a38_33
        int64_t var_13e0_1 = zmm2_5.q
        int32_t var_9b0[0x8]
        int32_t var_360
        int128_t* rax_368 = sub_1406c8970(&var_9b0, &var_378, var_360)
        zmm2_5 = rax_368[1]
        int128_t var_1a38_34 = *rax_368
        double var_1a28_34[0x2] = zmm2_5
        int64_t var_e08_1 = (&var_388).o.q
        int64_t var_de8_1 = (_mm_unpackhi_pd(zmm2_5, zmm2_5[0])).q
        
        while (true)
            int64_t rcx_405 = sx.q(var_13f0_1:0xc.d)
            int64_t* rdx_208 = var_1400.q
            
            if (rcx_405.d == (var_1a38_34:8.q u>> 0x20).d && var_13f0_1.q == var_1a38_34.q
                    && rdx_208 == var_e08_1)
                break
            
            int64_t rdi_15 = *rdx_208 + rcx_405 * 0x18
            int32_t rcx_407 = rbx_21[4].d
            
            if (((rcx_407 - 2) & 0xfffffff5) != 0 || rcx_407 == 0xa)
                int16_t var_19d0 = 0x2c
                int64_t* rcx_408 = rbx_21[1]
                (*(*rcx_408 + 0x150))(rcx_408, &var_19d0, 2)
            
            (*rbx_21)[2](rbx_21, rdi_15)
            rbx_21[4].d = 7
            var_13f0_1:8.d &= not.d(var_1400:0xc.d)
            sub_14059bdd0(&var_1400:8)
        
        sub_140944d20(rbx_21)
        int64_t var_18f0 = 0
        int32_t var_18e8_1 = 0
        sub_1405947f0(&var_18f0, 0xe)
        int32_t rax_378 = var_18e8_1 + 0xe
        var_18e8_1 = rax_378
        
        if (rax_378 s> 0)
            sub_140594770(&var_18f0)
        
        UnDecorator::getReferenceType(var_18f0, u"NewChunkPaths", 0x1c)
        sub_140939040(rbx_21, &var_18f0)
        int64_t rcx_416 = var_18f0
        
        if (rcx_416 != 0)
            sub_140a74f90(rcx_416)
        
        int64_t rdi_16 = var_1870
        int64_t r15_6 = (sx.q(var_1868_1.d) << 4) + rdi_16
        
        if (rdi_16 != r15_6)
            int32_t rcx_417 = rbx_21[4].d
            
            do
                if (((rcx_417 - 2) & 0xfffffff5) != 0 || rcx_417 == 0xa)
                    int16_t var_19c8 = 0x2c
                    int64_t* rcx_418 = rbx_21[1]
                    (*(*rcx_418 + 0x150))(rcx_418, &var_19c8, 2)
                
                (*rbx_21)[2](rbx_21, rdi_16)
                rdi_16 += 0x10
                rbx_21[4].d = 7
                rcx_417 = 7
            while (rdi_16 != r15_6)
        
        sub_140944d20(rbx_21)
        int64_t var_18e0 = 0
        int32_t var_18d8_1 = 0
        sub_1405947f0(&var_18e0, 0xf)
        int32_t rax_382 = var_18d8_1 + 0xf
        var_18d8_1 = rax_382
        
        if (rax_382 s> 0)
            sub_140594770(&var_18e0)
        
        UnDecorator::getReferenceType(var_18e0, u"TotalChunkSize", 0x1e)
        sub_140918e90(rbx_21, &var_18e0, var_1760_1)
        int64_t rcx_425 = var_18e0
        
        if (rcx_425 != 0)
            sub_140a74f90(rcx_425)
        
        int64_t var_18d0 = 0
        int32_t var_18c8_1 = 0
        sub_1405947f0(&var_18d0, 0x12)
        int32_t rax_383 = var_18c8_1 + 0x12
        var_18c8_1 = rax_383
        
        if (rax_383 s> 0)
            sub_140594770(&var_18d0)
        
        UnDecorator::getReferenceType(var_18d0, u"DeltaDownloadSize", 0x24)
        sub_140918e90(rbx_21, &var_18d0, rax_99)
        int64_t rcx_430 = var_18d0
        
        if (rcx_430 != 0)
            sub_140a74f90(rcx_430)
        
        int64_t var_18c0 = 0
        int32_t var_18b8_1 = 0
        sub_1405947f0(&var_18c0, 0x11)
        int32_t rax_384 = var_18b8_1 + 0x11
        var_18b8_1 = rax_384
        
        if (rax_384 s> 0)
            sub_140594770(&var_18c0)
        
        UnDecorator::getReferenceType(var_18c0, u"TempDiskSpaceReq", 0x22)
        sub_140918e90(rbx_21, &var_18c0, rax_109)
        int64_t rcx_435 = var_18c0
        
        if (rcx_435 != 0)
            sub_140a74f90(rcx_435)
        
        int64_t var_1860 = 0
        int32_t var_1858_1 = 0
        sub_1405947f0(&var_1860, 0x18)
        int32_t rax_385 = var_1858_1 + 0x18
        var_1858_1 = rax_385
        
        if (rax_385 s> 0)
            sub_140594770(&var_1860)
        
        UnDecorator::getReferenceType(var_1860, u"IndividualTagDeltaSizes", 0x30)
        sub_140939a80(rbx_21, &var_1860)
        int64_t rcx_440 = var_1860
        
        if (rcx_440 != 0)
            sub_140a74f90(rcx_440)
        
        int32_t var_990[0x8]
        int64_t var_7d8
        int128_t* rax_386 = sub_1406c8970(&var_990, &var_7d8, 0)
        zmm2_5 = rax_386[1]
        int128_t var_1a38_35 = *rax_386
        double var_1a28_35[0x2] = zmm2_5
        zmm2_5 = _mm_unpackhi_pd(zmm2_5, zmm2_5[0])
        int128_t var_13d8 = (&var_7e8).o
        int128_t var_13c8_1 = var_1a38_35
        int64_t var_13b8_1 = zmm2_5.q
        int32_t var_970[0x8]
        int32_t var_7c0
        int128_t* rax_387 = sub_1406c8970(&var_970, &var_7d8, var_7c0)
        zmm2_5 = rax_387[1]
        int128_t var_1a38_36 = *rax_387
        double var_1a28_36[0x2] = zmm2_5
        int64_t var_de0_1 = (&var_7e8).o.q
        int64_t var_dc0_1 = (_mm_unpackhi_pd(zmm2_5, zmm2_5[0])).q
        
        while (true)
            int64_t rdx_225 = sx.q(var_13c8_1:0xc.d)
            int64_t rcx_443 = var_13d8.q
            
            if (rdx_225.d == (var_1a38_36:8.q u>> 0x20).d && var_13c8_1.q == var_1a38_36.q
                    && rcx_443 == var_de0_1)
                break
            
            void* rdx_227 = (rdx_225 << 5) + *rcx_443
            sub_140918e90(rbx_21, rdx_227, *(rdx_227 + 0x10))
            var_13c8_1:8.d &= not.d(var_13d8:0xc.d)
            sub_14059bdd0(&var_13d8:8)
        
        sub_140944d70(rbx_21)
        int64_t var_18b0 = 0
        int32_t var_18a8_1 = 0
        sub_1405947f0(&var_18b0, 0x18)
        int32_t rax_393 = var_18a8_1 + 0x18
        var_18a8_1 = rax_393
        
        if (rax_393 s> 0)
            sub_140594770(&var_18b0)
        
        UnDecorator::getReferenceType(var_18b0, u"CompareTagSetDeltaSizes", 0x30)
        sub_140939a80(rbx_21, &var_18b0)
        int64_t rcx_451 = var_18b0
        
        if (rcx_451 != 0)
            sub_140a74f90(rcx_451)
        
        int32_t var_950[0x8]
        int64_t var_4b8
        int128_t* rax_394 = sub_1406c8970(&var_950, &var_4b8, 0)
        zmm2_5 = rax_394[1]
        int128_t var_1a38_37 = *rax_394
        double var_1a28_37[0x2] = zmm2_5
        zmm2_5 = _mm_unpackhi_pd(zmm2_5, zmm2_5[0])
        int128_t var_13b0 = (&var_4c8).o
        int128_t var_13a0_1 = var_1a38_37
        int64_t var_1390_1 = zmm2_5.q
        int32_t var_930[0xa]
        int32_t var_4a0
        int128_t* rax_395 = sub_1406c8970(&var_930, &var_4b8, var_4a0)
        zmm2_5 = rax_395[1]
        int128_t var_1a38_38 = *rax_395
        double var_1a28_38[0x2] = zmm2_5
        int64_t var_db8_1 = (&var_4c8).o.q
        int64_t var_d98_1 = (_mm_unpackhi_pd(zmm2_5, zmm2_5[0])).q
        
        while (true)
            int64_t rdx_232 = sx.q(var_13a0_1:0xc.d)
            int64_t rcx_454 = var_13b0.q
            
            if (rdx_232.d == (var_1a38_38:8.q u>> 0x20).d && var_13a0_1.q == var_1a38_38.q
                    && rcx_454 == var_db8_1)
                break
            
            void* rdx_234 = (rdx_232 << 5) + *rcx_454
            sub_140918e90(rbx_21, rdx_234, *(rdx_234 + 0x10))
            var_13a0_1:8.d &= not.d(var_13b0:0xc.d)
            sub_14059bdd0(&var_13b0:8)
        
        sub_140944d70(rbx_21)
        int64_t var_18a0 = 0
        int32_t var_1898_1 = 0
        sub_1405947f0(&var_18a0, 0x1f)
        int32_t rax_401 = var_1898_1 + 0x1f
        var_1898_1 = rax_401
        
        if (rax_401 s> 0)
            sub_140594770(&var_18a0)
        
        UnDecorator::getReferenceType(var_18a0, u"CompareTagSetTempDiskSpaceReqs", 0x3e)
        sub_140939a80(rbx_21, &var_18a0)
        int64_t rcx_462 = var_18a0
        
        if (rcx_462 != 0)
            sub_140a74f90(rcx_462)
        
        int32_t var_cf0[0x8]
        int64_t var_648
        int128_t* rax_402 = sub_1406c8970(&var_cf0, &var_648, 0)
        zmm2_5 = rax_402[1]
        int128_t var_1a38_39 = *rax_402
        double var_1a28_39[0x2] = zmm2_5
        zmm2_5 = _mm_unpackhi_pd(zmm2_5, zmm2_5[0])
        int128_t var_1388 = (&var_658).o
        int128_t var_1378_1 = var_1a38_39
        int64_t var_1368_1 = zmm2_5.q
        int32_t var_cd0[0x8]
        int32_t var_630
        int128_t* rax_403 = sub_1406c8970(&var_cd0, &var_648, var_630)
        zmm2_5 = rax_403[1]
        int128_t var_1a38_40 = *rax_403
        double var_1a28_40[0x2] = zmm2_5
        int64_t var_d90_1 = (&var_658).o.q
        int64_t var_d70_1 = (_mm_unpackhi_pd(zmm2_5, zmm2_5[0])).q
        
        while (true)
            int64_t rdx_239 = sx.q(var_1378_1:0xc.d)
            int64_t rcx_465 = var_1388.q
            
            if (rdx_239.d == (var_1a38_40:8.q u>> 0x20).d && var_1378_1.q == var_1a38_40.q
                    && rcx_465 == var_d90_1)
                break
            
            void* rdx_241 = (rdx_239 << 5) + *rcx_465
            sub_140918e90(rbx_21, rdx_241, *(rdx_241 + 0x10))
            var_1378_1:8.d &= not.d(var_1388:0xc.d)
            sub_14059bdd0(&var_1388:8)
        
        sub_140944d70(rbx_21)
        int64_t var_1880 = 0
        int32_t var_1878_1 = 0
        sub_1405947f0(&var_1880, 0x18)
        int32_t rax_409 = var_1878_1 + 0x18
        var_1878_1 = rax_409
        
        if (rax_409 s> 0)
            sub_140594770(&var_1880)
        
        UnDecorator::getReferenceType(var_1880, u"InstallTimeCoefficients", 0x30)
        sub_140939040(rbx_21, &var_1880)
        int64_t rcx_473 = var_1880
        
        if (rcx_473 != 0)
            sub_140a74f90(rcx_473)
        
        int64_t* rdi_17 = var_1528
        int64_t r12_3 = 0
        int32_t var_1520
        void* rcx_474 = &rdi_17[sx.q(var_1520)]
        uint64_t r15_10 = (rcx_474 - rdi_17 + 7) u>> 3
        
        if (rdi_17 u> rcx_474)
            r15_10 = 0
        
        if (r15_10 != 0)
            int32_t rcx_475 = rbx_21[4].d
            double var_38_1[0x2] = zmm6_1
            
            do
                zmm6_1 = zx.o(*rdi_17)
                
                if (((rcx_475 - 2) & 0xfffffff5) != 0 || rcx_475 == 0xa)
                    int16_t var_19c0 = 0x2c
                    int64_t* rcx_476 = rbx_21[1]
                    (*(*rcx_476 + 0x150))(rcx_476, &var_19c0, 2)
                
                int64_t var_10b8
                sub_140a2e390(&var_10b8, u"%.17g", zmm6_1[0])
                sub_14189b020(rbx_21[1], &var_10b8)
                int64_t rcx_479 = var_10b8
                
                if (rcx_479 != 0)
                    sub_140a74f90(rcx_479)
                
                rdi_17 = &rdi_17[1]
                rbx_21[4].d = 8
                r12_3 += 1
                rcx_475 = 8
            while (r12_3 != r15_10)
            
            rsi_2 = rax_15
        
        sub_140944d20(rbx_21)
        sub_140944d70(rbx_21)
        sub_140944d70(rbx_21)
        (*rbx_21)[1](rbx_21)
        int16_t* const rbx_22
        
        if (*(r13 + 0xe0) == 0)
            rbx_22 = &data_142d40450
        else
            rbx_22 = *(r13 + 0xd8)
        
        sub_140a464c0()
        rbx_2 = zx.d(sub_140b27210(&var_16c8, rbx_22, 0, &data_14399ea08, 0))
        sub_140597060(&var_10a8)
        int64_t rcx_486 = var_16c8
        
        if (rcx_486 != 0)
            sub_140a74f90(rcx_486)
    
    int64_t* rcx_487 = var_1528
    
    if (rcx_487 != 0)
        sub_140a74f90(rcx_487)
    
    void* rcx_488 = var_1a18
    
    if (rcx_488 != 0)
        sub_140a74f90(rcx_488)
    
    int64_t rcx_489 = var_1708
    
    if (rcx_489 != 0)
        sub_140a74f90(rcx_489)
    
    int64_t rcx_490 = var_19b0
    
    if (rcx_490 != 0)
        sub_140a74f90(rcx_490)
    
    sub_140597000(&var_16b8)
    int32_t var_660_2 = 0
    
    if (var_668_1 != 0)
        sub_140a74f90(var_668_1)
    
    sub_140669e00(&var_6a8)
    int32_t var_610_2 = 0
    
    if (var_618_1 != 0)
        sub_140a74f90(var_618_1)
    
    sub_1405df330(&var_658)
    int32_t var_5c0_2 = 0
    
    if (var_5c8_1 != 0)
        sub_140a74f90(var_5c8_1)
    
    sub_1405df330(&var_608)
    int32_t var_570_2 = 0
    
    if (var_578_1 != 0)
        sub_140a74f90(var_578_1)
    
    sub_1405df330(&var_5b8)
    int32_t var_520_2 = 0
    
    if (var_528_1 != 0)
        sub_140a74f90(var_528_1)
    
    sub_1405df330(&var_568)
    int32_t var_4d0_2 = 0
    
    if (var_4d8_1 != 0)
        sub_140a74f90(var_4d8_1)
    
    sub_1405df330(&var_518)
    int32_t var_480_2 = 0
    
    if (var_488_1 != 0)
        sub_140a74f90(var_488_1)
    
    sub_1405df330(&var_4c8)
    int32_t var_7a0_2 = 0
    
    if (var_7a8_1 != 0)
        sub_140a74f90(var_7a8_1)
    
    sub_1405df330(&var_7e8)
    int32_t var_430_2 = 0
    
    if (var_438_1 != 0)
        sub_140a74f90(var_438_1)
    
    sub_1405df330(&var_478)
    int32_t var_2a0_2 = 0
    
    if (var_2a8_1 != 0)
        sub_140a74f90(var_2a8_1)
    
    sub_1405df330(&var_2e8)
    int32_t var_3e0_2 = 0
    
    if (var_3e8_1 != 0)
        sub_140a74f90(var_3e8_1)
    
    sub_1405df330(&var_428)
    int32_t var_390_2 = 0
    
    if (var_398_1 != 0)
        sub_140a74f90(var_398_1)
    
    sub_1405df330(&var_3d8)
    int32_t var_340_2 = 0
    
    if (var_348_1 != 0)
        sub_140a74f90(var_348_1)
    
    sub_140669e00(&var_388)
    int32_t var_2f0_2 = 0
    
    if (var_2f8_1 != 0)
        sub_140a74f90(var_2f8_1)
    
    sub_140669e00(&var_338)
    int32_t var_160_1 = 0
    int64_t var_168
    
    if (var_168 != 0)
        sub_140a74f90(var_168)
    
    sub_140669e00(&var_1a8)
    int32_t var_110_1 = 0
    int64_t var_118
    
    if (var_118 != 0)
        sub_140a74f90(var_118)
    
    sub_140669e00(&var_158)
    sub_140597000(&var_1870)
    int32_t var_750_2 = 0
    
    if (var_758_1 != 0)
        sub_140a74f90(var_758_1)
    
    sub_14094b3a0(&var_798)
    int32_t var_1b0_2 = 0
    
    if (var_1b8_1 != 0)
        sub_140a74f90(var_1b8_1)
    
    sub_14094b3a0(&var_1f8)
    int32_t var_700_2 = 0
    
    if (var_708_1 != 0)
        sub_140a74f90(var_708_1)
    
    sub_140669e00(&var_748)
    int32_t var_6b0_2 = 0
    
    if (var_6b8_1 != 0)
        sub_140a74f90(var_6b8_1)
    
    sub_140669e00(&var_6f8)
    int32_t var_870_3 = 0
    
    if (var_878_1 != 0)
        sub_140a74f90(var_878_1)
    
    sub_140669e00(&var_8b8)
    int32_t var_820_3 = 0
    
    if (var_828_1 != 0)
        sub_140a74f90(var_828_1)
    
    sub_140669e00(&var_868)
    (**rsi_2)(rsi_2, 1)
    int64_t var_8f8
    
    if (var_8f8 != 0)
        void var_8d8
        void* rcx_538 = &var_8d8
        void* var_8e8
        
        if (var_8e8 != 0)
            rcx_538 = var_8e8
        
        (*(*rcx_538 + 0x10))(rcx_538)
    
    sub_141868870(&var_1158)

*(r13 + 0x150)
*(r13 + 0x150) = 0
sub_1405970a0(&var_1a08)
sub_1405970a0(&var_19f8)
__security_check_cookie(rax_1 ^ &var_1a78)
return zx.q(rbx_2.b)
