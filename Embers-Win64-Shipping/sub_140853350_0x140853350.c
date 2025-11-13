// 函数: sub_140853350
// 地址: 0x140853350
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_158
int64_t rax_1 = __security_cookie ^ &var_158
int32_t* r15 = arg1 + 0x20
void* r13 = arg1
sub_140d3a3a0(r15, arg2)
*(r13 + 0x28) = *(arg2 + 0x38)
*(r13 + 0x30) = arg5
int32_t rdx_2 = zx.d(arg4) << 3 | (*(r13 + 0xd68) & 0xfffffff7)
*(r13 + 0x38) = arg3
*(r13 + 0xd68) = rdx_2 & 0xfffffff9
sub_140865dd0(arg3)
int64_t r14 = 0
int32_t rcx_2

if (*(*(arg2 + 0x88) + 0x4e8) != 0)
    rcx_2 = 1

if (*(*(arg2 + 0x88) + 0x4e8) == 0 || *(*(arg2 + 0x90) + 0x4e8) == 0)
    rcx_2 = 0

uint64_t result = (zx.q(*(r13 + 0xd68)) & 0xfffffffe) | zx.q(rcx_2)
*(r13 + 0xd68) = result.d
int64_t rcx_3 = data_143ce38e0

if ((result.b & 1) != 0)
    void* rbx_1 = r13 + 0x40
    void* rsi_1 = &data_143ce2ed0
    void* rdi_1 = &data_143ce2ed0
    
    if (arg2 != -0x160)
        rdi_1 = arg2 + 0x160
    
    sub_1407e50a0(rbx_1, rdi_1)
    *(rbx_1 + 0xcc) = 1
    j_sub_140808700(rbx_1)
    sub_1407e50a0(r13 + 0x110, rdi_1)
    *(r13 + 0x1dc) = 1
    j_sub_140808700(r13 + 0x110)
    sub_1407e50a0(r13 + 0x1e0, rdi_1)
    *(r13 + 0x2ac) = 1
    j_sub_140808700(r13 + 0x1e0)
    void* rdx_7 = &data_143ce2ed0
    
    if (arg2 != -0x1a0)
        rdx_7 = arg2 + 0x1a0
    
    sub_1407e50a0(r13 + 0x2b0, rdx_7)
    *(r13 + 0x37c) = 1
    j_sub_140808700(r13 + 0x2b0)
    
    if (arg2 != -0x1e0)
        rsi_1 = arg2 + 0x1e0
    
    sub_1407e50a0(r13 + 0x380, rsi_1)
    *(r13 + 0x44c) = 1
    j_sub_140808700(r13 + 0x380)
    sub_140780c40(r13 + 0xb60, arg2 + 0x220)
    sub_140780c40(r13 + 0xb70, arg2 + 0x230)
    sub_140780c40(r13 + 0xb80, arg2 + 0x240)
    sub_140780c40(r13 + 0xb90, arg2 + 0x250)
    sub_140780c40(r13 + 0xba0, arg2 + 0x260)
    sub_140780c40(r13 + 0xbb0, arg2 + 0x270)
    sub_140847b80(r13 + 0xbc0, arg2 + 0x280)
    sub_140780c40(r13 + 0xbd0, arg2 + 0x290)
    sub_140780c40(r13 + 0xbe0, arg2 + 0x2a0)
    sub_140780c40(r13 + 0xbf0, arg2 + 0x2b0)
    sub_140780c40(r13 + 0xc00, arg2 + 0x2c0)
    sub_140780c40(r13 + 0xc10, arg2 + 0x2d0)
    sub_140780c40(r13 + 0xc20, arg2 + 0x2e0)
    sub_140847b80(r13 + 0xc30, arg2 + 0x2f0)
    int64_t* rsi_3 = *(arg2 + 0x88)
    int64_t* rbx_2 = *(arg2 + 0x90)
    int64_t* var_120 = rsi_3
    int64_t* var_138 = rbx_2
    *(r13 + 0x450) = rsi_3
    NMT::reload(r13 + 0x478, rsi_3, 0, 1)
    void* rax_13 = *(r13 + 0x450)
    int32_t rax_16
    
    if (rax_13 != 0)
        rax_16 = 1
    
    if (rax_13 == 0 || ((*(rax_13 + 0x204) u>> 1).b & 1) == 0)
        rax_16 = 0
    
    *(r13 + 0x7b0) &= 0xfffffffe
    *(r13 + 0x7b0) |= rax_16
    *(r13 + 0x7b8) = rbx_2
    NMT::reload(r13 + 0x7e0, rbx_2, 0, 1)
    void* rax_17 = *(r13 + 0x7b8)
    int32_t rax_20
    
    if (rax_17 != 0)
        rax_20 = 1
    
    if (rax_17 == 0 || ((*(rax_17 + 0x204) u>> 1).b & 1) == 0)
        rax_20 = 0
    
    *(r13 + 0xb18) &= 0xfffffffe
    *(r13 + 0xb18) |= rax_20
    int64_t* rdi_2 = rsi_3[0xa0]
    int64_t rsi_4 = 0
    uint64_t r12_2 = sx.q(rsi_3[0xa1].d) << 3 u>> 3
    
    if (rdi_2 u> &rdi_2[rsi_3[0xa1]])
        r12_2 = 0
    
    if (r12_2 != 0)
        do
            void* rbx_3 = *rdi_2
            void* rax_23 = sub_140d3c6e0(r15)
            void* r15_1 = nullptr
            
            if (rax_23 != 0)
                int64_t* i = *(rax_23 + 0x78)
                void* var_118_1 = rbx_3
                
                for (; i != &i[sx.q(*(rax_23 + 0x80))]; i = &i[1])
                    void* rax_25 = *i
                    
                    if (rax_25 != 0 && rbx_3 == *(rax_25 + 0x28))
                        break
            
            int64_t* rax_26 = sub_140865dd0(*(r13 + 0x38))
            
            if (rax_26 != 0)
                r15_1 = sub_140865e30(rax_26, rbx_3)
            
            sub_140820ac0(r15_1 + 0x40, r13 + 0x478, nullptr)
            rdi_2 = &rdi_2[1]
            r15 = r13 + 0x20
            rsi_4 += 1
        while (rsi_4 != r12_2)
        
        rbx_2 = var_138
        r15 = r13 + 0x20
    
    int64_t rsi_5 = 0
    int64_t* rdi_3 = rbx_2[0xa0]
    uint64_t r12_4 = sx.q(rbx_2[0xa1].d) << 3 u>> 3
    
    if (rdi_3 u> &rdi_3[rbx_2[0xa1]])
        r12_4 = 0
    
    if (r12_4 != 0)
        do
            void* rbx_4 = *rdi_3
            void* rax_30 = sub_140d3c6e0(r15)
            void* r15_2 = nullptr
            
            if (rax_30 != 0)
                int64_t* i_1 = *(rax_30 + 0x78)
                void* var_118_2 = rbx_4
                
                for (; i_1 != &i_1[sx.q(*(rax_30 + 0x80))]; i_1 = &i_1[1])
                    void* rax_32 = *i_1
                    
                    if (rax_32 != 0 && rbx_4 == *(rax_32 + 0x28))
                        break
            
            int64_t* rax_33 = sub_140865dd0(*(r13 + 0x38))
            
            if (rax_33 != 0)
                r15_2 = sub_140865e30(rax_33, rbx_4)
            
            sub_140820ac0(r15_2 + 0x40, r13 + 0x7e0, nullptr)
            rdi_3 = &rdi_3[1]
            r15 = r13 + 0x20
            rsi_5 += 1
        while (rsi_5 != r12_4)
        
        rbx_2 = var_138
    
    int64_t* rdi_4 = var_120
    int64_t var_58_1 = 0
    int32_t var_4c_1 = 2
    int32_t var_50 = 2
    int32_t var_e0_1 = 2
    int64_t* var_68 = rdi_4
    int64_t* var_60_1 = rbx_2
    void** var_e8 = &var_68
    sub_14074cfd0(arg2, &var_e8, r13 + 0xd70)
    sub_140820ac0(r13 + 0xd70, r13 + 0x478, nullptr)
    sub_140820ac0(r13 + 0xd70, r13 + 0x7e0, nullptr)
    sub_140820ac0(&rdi_4[8], r13 + 0x478, nullptr)
    sub_140820ac0(&var_138[8], r13 + 0x7e0, nullptr)
    
    if ((*(r13 + 0xd68) & 8) == 0)
        sub_140820ac0(sub_140d3c6e0(r13 + 0x20) + 0x300, r13 + 0x478, nullptr)
        sub_140820ac0(sub_140d3c6e0(r13 + 0x20) + 0x300, r13 + 0x7e0, nullptr)
    
    if (var_58_1 != 0)
        sub_140a74f90(var_58_1)
    
    sub_140b58260(&var_138, u"System.ExecutionState", 1)
    var_68 = var_138
    int32_t var_60_2 = rcx_3.d
    int128_t zmm0_1 = var_68.o
    *(r13 + 0xd10) = r13 + 0x40
    *(r13 + 0xd20) = zmm0_1
    var_50.q = 0
    *(r13 + 0xd30) = 0xffffffff0003
    int64_t var_48_1 = 0
    sub_14081d8c0(r13 + 0xd38, &var_50)
    int64_t rax_40 = sub_1408011e0(*(r13 + 0xd10), &var_68)
    int64_t rcx_52 = var_50.q
    *(r13 + 0xd18) = rax_40
    
    if (rcx_52 != 0)
        sub_140a74f90(rcx_52)
    
    void* r12_5 = r13 + 0xd00
    int32_t rax_41 = *(r12_5 + 0xc)
    int64_t* rsi_6 = *r12_5
    int32_t i_9 = *(r12_5 + 8)
    
    if (rax_41 s< 0)
        if (i_9 != 0)
            int32_t i_2
            
            do
                int32_t j_3 = rsi_6[1].d
                void* rcx_55 = *rsi_6
                
                if (j_3 != 0)
                    int64_t* rbx_6 = rcx_55 + 0x28
                    int32_t j
                    
                    do
                        int64_t rcx_56 = *rbx_6
                        
                        if (rcx_56 != 0)
                            sub_140a74f90(rcx_56)
                        
                        rbx_6 = &rbx_6[0xf]
                        j = j_3
                        j_3 -= 1
                    while (j != 1)
                    rcx_55 = *rsi_6
                
                if (rcx_55 != 0)
                    sub_140a74f90(rcx_55)
                
                rsi_6 = &rsi_6[2]
                i_2 = i_9
                i_9 -= 1
            while (i_2 != 1)
            rax_41 = *(r12_5 + 0xc)
        
        *(r12_5 + 8) = 0
        
        if (rax_41 != 0)
            sub_1405a5410(r12_5, 0)
    else
        if (i_9 != 0)
            int32_t i_3
            
            do
                int32_t j_2 = rsi_6[1].d
                void* rcx_53 = *rsi_6
                
                if (j_2 != 0)
                    int64_t* rbx_5 = rcx_53 + 0x28
                    int32_t j_1
                    
                    do
                        int64_t rcx_54 = *rbx_5
                        
                        if (rcx_54 != 0)
                            sub_140a74f90(rcx_54)
                        
                        rbx_5 = &rbx_5[0xf]
                        j_1 = j_2
                        j_2 -= 1
                    while (j_1 != 1)
                    rcx_53 = *rsi_6
                
                if (rcx_53 != 0)
                    sub_140a74f90(rcx_53)
                
                rsi_6 = &rsi_6[2]
                i_3 = i_9
                i_9 -= 1
            while (i_3 != 1)
        
        *(r12_5 + 8) = 0
    
    void* rsi_7 = r13 + 0xd58
    int32_t rax_42 = *(rsi_7 + 0xc)
    void* rdi_5 = *rsi_7
    int32_t i_8 = *(rsi_7 + 8)
    
    if (rax_42 s< 0)
        if (i_8 != 0)
            void* rdi_7 = rdi_5 + 0x28
            int32_t i_4
            
            do
                int64_t rcx_59 = *rdi_7
                
                if (rcx_59 != 0)
                    sub_140a74f90(rcx_59)
                
                rdi_7 += 0x48
                i_4 = i_8
                i_8 -= 1
            while (i_4 != 1)
            rax_42 = *(rsi_7 + 0xc)
        
        *(rsi_7 + 8) = 0
        
        if (rax_42 != 0)
            sub_140775c70(rsi_7, 0)
    else
        if (i_8 != 0)
            int64_t* rdi_6 = rdi_5 + 0x28
            int32_t i_5
            
            do
                int64_t rcx_58 = *rdi_6
                
                if (rcx_58 != 0)
                    sub_140a74f90(rcx_58)
                
                rdi_6 = &rdi_6[9]
                i_5 = i_8
                i_8 -= 1
            while (i_5 != 1)
        
        *(rsi_7 + 8) = 0
    
    int64_t rbx_7 = sx.q(*(r12_5 + 8))
    int32_t rdx_40 = *(arg2 + 0x70)
    
    if (rdx_40 s> rbx_7.d)
        *(r12_5 + 8) = rdx_40
        
        if (rdx_40 s> *(r12_5 + 0xc))
            sub_1405a4f90(r12_5)
        
        memset((rbx_7 << 4) + *r12_5, 0, sx.q(rdx_40 - rbx_7.d) << 4)
    else if (rdx_40 s< rbx_7.d)
        sub_140858ae0(r12_5, rdx_40, rbx_7.d - rdx_40, 1)
    
    void* rdx_42 = arg2
    int32_t i_6 = 0
    int32_t i_7 = 0
    
    if (*(rdx_42 + 0x70) s> 0)
        int64_t* r15_3 = nullptr
        var_138 = nullptr
        
        do
            int64_t* rax_45 = sub_1407faf10(sx.q(i_6) * 0x30 + *(rdx_42 + 0x68))
            var_120 = rax_45
            
            if (rax_45 == 0)
                int64_t rbx_15 = sx.q(*(rsi_7 + 8))
                int32_t rax_68 = (rbx_15 + 1).d
                *(rsi_7 + 8) = rax_68
                
                if (rax_68 s> *(rsi_7 + 0xc))
                    sub_140775520(rsi_7)
                
                int64_t rcx_91 = *rsi_7
                int64_t rdx_57 = rbx_15 * 9
                *(rcx_91 + (rdx_57 << 3)) = 0
                *(rcx_91 + (rdx_57 << 3) + 8) = 0
                *(rcx_91 + (rdx_57 << 3) + 0x10) = 0
                *(rcx_91 + (rdx_57 << 3) + 0x18) = data_14396f0d8
                *(rcx_91 + (rdx_57 << 3) + 0x20) = data_14396f0e0
                *(rcx_91 + (rdx_57 << 3) + 0x22) = 0xffffffff
                *(rcx_91 + (rdx_57 << 3) + 0x28) = 0
                *(rcx_91 + (rdx_57 << 3) + 0x30) = 0
            else
                int32_t r8_4 = sub_140800130(rax_45, &var_e8)
                void** rbx_9 = var_e8
                var_68 = nullptr
                sub_1405a4c70(&var_68, sbb.d(r8_4, r8_4, var_e0_1 != 0) + 0x10 + var_e0_1, 0)
                memcpy(var_68, rbx_9, var_e0_1 * 2)
                sub_140a20ba0(&var_68, u".ExecutionState", 0xf)
                int64_t* rdx_47 = &data_142d40450
                int64_t* rdi_11 = var_68
                var_68 = nullptr
                var_60_2 = 0
                
                if (var_e0_1 != 0)
                    rdx_47 = rdi_11
                
                int64_t var_d0
                sub_140b58260(&var_d0, rdx_47, 1)
                int64_t r12_6 = sx.q(*(rsi_7 + 8))
                int64_t var_110 = var_d0
                int64_t var_108_1 = rcx_3
                int16_t var_fc_1 = 0xffff
                int32_t rax_49 = (r12_6 + 1).d
                int32_t var_100_1 = 0xffff0003
                int64_t var_f8_1 = 0
                int64_t var_f0_1 = 0
                *(rsi_7 + 8) = rax_49
                
                if (rax_49 s> *(rsi_7 + 0xc))
                    sub_140775520(rsi_7)
                
                void var_b8
                sub_14077da80(*rsi_7 + r12_6 * 0x48, r13 + 0x40, sub_140745220(&var_b8, &var_110))
                
                if (var_f8_1 != 0)
                    sub_140a74f90(var_f8_1)
                
                if (rdi_11 != 0)
                    sub_140a74f90(rdi_11)
                
                int64_t* rcx_80 = *(r15_3 + *(arg2 + 0x98))
                int64_t r15_4 = 0
                int64_t* rsi_8 = *rcx_80
                uint64_t r12_8 = sx.q(rcx_80[1].d) << 3 u>> 3
                
                if (rsi_8 u> &rsi_8[rcx_80[1]])
                    r12_8 = 0
                
                if (r12_8 != 0)
                    int64_t* r13_1 = var_138
                    
                    do
                        var_110 = *rsi_8
                        int64_t var_108_2 = sub_1408807d0()
                        int16_t var_fc_2 = 0xffff
                        int32_t var_100_2 = 0xffff0002
                        int64_t var_f8_2 = 0
                        int64_t var_f0_2 = 0
                        void* rbx_12 = *r12_5 + r13_1
                        int64_t rdi_12 = sx.q(*(rbx_12 + 8))
                        int32_t rax_58 = (rdi_12 + 1).d
                        *(rbx_12 + 8) = rax_58
                        
                        if (rax_58 s> *(rbx_12 + 0xc))
                            sub_1407c3920(rbx_12)
                        
                        int64_t* rdi_14 = rdi_12 * 0x78 + *rbx_12
                        int64_t* rax_59 = sub_140745220(&var_b8, &var_110)
                        void var_90
                        sub_14077e420(rdi_14, rbx_1, sub_140745220(&var_90, rax_59))
                        sub_140855f40(rdi_14)
                        int64_t rcx_86 = rax_59[3]
                        
                        if (rcx_86 != 0)
                            sub_140a74f90(rcx_86)
                        
                        if (var_f8_2 != 0)
                            sub_140a74f90(var_f8_2)
                        
                        rsi_8 = &rsi_8[1]
                        r15_4 += 1
                    while (r15_4 != r12_8)
                    
                    r13 = arg1
                
                int64_t* rax_61 = var_120
                
                if ((rax_61[0x35].b & 4) != 0)
                    int32_t zmm1_2 = *(rax_61 + 0x14c)
                    int32_t zmm0_2
                    
                    if (*(r13 + 0xe2c) == 0)
                        zmm0_2 = zmm1_2
                    else
                        zmm0_2 = _mm_min_ss(*(r13 + 0xe28), zmm1_2)
                    
                    if (&var_120 != r13 + 0xe28)
                        *(r13 + 0xe28) = zmm0_2
                        *(r13 + 0xe2c) = 1
                
                void** rcx_88 = var_e8
                
                if (rcx_88 != 0)
                    sub_140a74f90(rcx_88)
                
                r15_3 = var_138
                rsi_7 = r13 + 0xd58
            
            r15_3 = &r15_3[2]
            rdx_42 = arg2
            i_6 = i_7 + 1
            i_7 = i_6
            var_138 = r15_3
        while (i_6 s< *(rdx_42 + 0x70))
    
    int32_t* rax_65 = (*(*(r13 + 0x478) + 0x30))(r13 + 0x478, &data_14396f770)
    int64_t rax_66
    
    if (rax_65 != 0)
        rax_66 = sx.q(*rax_65)
    
    int64_t rax_67
    
    if (rax_65 == 0 || rax_66.d == 0xffffffff)
        rax_67 = 0
    else
        rax_67 = rax_66 + *(r13 + 0x498)
    
    *(r13 + 0xc80) = rax_67
    int32_t* rax_72 = (*(*(r13 + 0x7e0) + 0x30))(r13 + 0x7e0, &data_14396f770)
    int64_t rax_73
    
    if (rax_72 != 0)
        rax_73 = sx.q(*rax_72)
    
    int64_t rax_74
    
    if (rax_72 == 0 || rax_73.d == 0xffffffff)
        rax_74 = 0
    else
        rax_74 = rax_73 + *(r13 + 0x800)
    
    *(r13 + 0xc88) = rax_74
    int32_t* rax_76 = (*(*(r13 + 0x478) + 0x30))(r13 + 0x478, &data_14396f798)
    int64_t rax_77
    
    if (rax_76 != 0)
        rax_77 = sx.q(*rax_76)
    
    int64_t rax_78
    
    if (rax_76 == 0 || rax_77.d == 0xffffffff)
        rax_78 = 0
    else
        rax_78 = rax_77 + *(r13 + 0x498)
    
    *(r13 + 0xc90) = rax_78
    int32_t* rax_80 = (*(*(r13 + 0x7e0) + 0x30))(r13 + 0x7e0, &data_14396f798)
    int64_t rax_81
    
    if (rax_80 != 0)
        rax_81 = sx.q(*rax_80)
    
    int64_t rax_82
    
    if (rax_80 == 0 || rax_81.d == 0xffffffff)
        rax_82 = 0
    else
        rax_82 = rax_81 + *(r13 + 0x800)
    
    *(r13 + 0xc98) = rax_82
    int32_t* rax_84 = (*(*(r13 + 0x478) + 0x30))(r13 + 0x478, &data_14396f7c0)
    int64_t rax_85
    
    if (rax_84 != 0)
        rax_85 = sx.q(*rax_84)
    
    int64_t rax_86
    
    if (rax_84 == 0 || rax_85.d == 0xffffffff)
        rax_86 = 0
    else
        rax_86 = rax_85 + *(r13 + 0x498)
    
    *(r13 + 0xca0) = rax_86
    result = (*(*(r13 + 0x7e0) + 0x30))(r13 + 0x7e0, &data_14396f7c0)
    
    if (result != 0)
        result = sx.q(*result)
        
        if (result.d != 0xffffffff)
            r14 = result + *(r13 + 0x800)
    
    *(r13 + 0xca8) = r14

result.b = 1
__security_check_cookie(rax_1 ^ &var_158)
return result
