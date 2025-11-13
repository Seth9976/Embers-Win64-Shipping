// 函数: sub_1405a0ca0
// 地址: 0x1405a0ca0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_ff8
int64_t rax_1 = __security_cookie ^ &var_ff8
void* var_e70 = arg1
int32_t var_fa0 = 0
int32_t r13 = 0
int16_t* rdi = arg2
sub_140b26d80(0)
void var_9b8
pdb_internal::Array<struct DBI1::SrcMap>::Array<struct DBI1::SrcMap>(&var_9b8)
sub_140b19e60()
sub_140b19e60()
void* rdx_1 = data_1439a8bd0
(*(rdx_1 + 0x68))(&data_1439a8bd0, rdx_1)
int32_t var_fa8 = 0
int32_t r15 = -1
int64_t rcx_1 = -1

do
    rcx_1 += 1
while ((*u"Win64")[rcx_1] != 0)

int32_t rdx_2 = var_fa8
int32_t rax_2 = 0x3ff - rdx_2

if (rcx_1.d s<= rax_2)
    rax_2 = rcx_1.d

char var_468[0x400]

if (rax_2 s> 0)
    int64_t i = 0
    
    do
        char rcx_2 = (*u"Win64")[i].b
        i += 1
        var_468[sx.q(rdx_2)] = rcx_2 & 0x7f
        rdx_2 = var_fa8 + 1
        var_fa8 = rdx_2
    while (i s< sx.q(rax_2))

int32_t rax_4 = 0x3ff - rdx_2

if (rax_4 s>= 3)
    rax_4 = 3

if (rax_4 s> 0)
    int64_t i_1 = 0
    
    do
        char rcx_3 = *(&data_142d40e98 + (i_1 << 1))
        i_1 += 1
        var_468[sx.q(rdx_2)] = rcx_3 & 0x7f
        rdx_2 = var_fa8 + 1
        var_fa8 = rdx_2
    while (i_1 s< sx.q(rax_4))

int64_t rax_6 = -1

do
    rax_6 += 1
while (rdi[rax_6] != 0)

int32_t r10 = 0x3ff - rdx_2

if (rax_6.d s<= r10)
    r10 = rax_6.d

if (r10 s> 0)
    int64_t i_2 = 0
    
    do
        char rcx_4 = rdi[i_2].b
        i_2 += 1
        var_468[sx.q(rdx_2)] = rcx_4 & 0x7f
        rdx_2 = var_fa8 + 1
        var_fa8 = rdx_2
    while (i_2 s< sx.q(r10))

sub_140b72910()
sub_140a8d380()
void var_ac0
pdb_internal::Array<struct DBI1::SrcMap>::Array<struct DBI1::SrcMap>(&var_ac0)
pdb_internal::Array<struct FileLCRec* __ptr64>::~Array<struct FileLCRec* __ptr64>(&var_ac0)
void var_aa8
pdb_internal::Array<struct DBI1::SrcMap>::Array<struct DBI1::SrcMap>(&var_aa8)
pdb_internal::Array<struct FileLCRec* __ptr64>::~Array<struct FileLCRec* __ptr64>(&var_aa8)

if (sub_140b21a10(rdi, u"UTF8Output") != 0)
    sub_140b730d0()

sub_140b72800()

if (sub_140affe80(rdi) != 0)
    void var_a90
    pdb_internal::Array<struct DBI1::SrcMap>::Array<struct DBI1::SrcMap>(&var_a90)
    int64_t var_e58 = 0
    int64_t var_e50_1 = 0
    
    if (sub_140b2acc0(rdi, u"-tracehost=", &var_e58, 1) == 0)
        sub_140b2acc0(rdi, u"-tracefile=", &var_e58, 1)
    
    int64_t rcx_14 = var_e58
    
    if (rcx_14 != 0)
        sub_140a74f90(rcx_14)
    
    pdb_internal::Array<struct FileLCRec* __ptr64>::~Array<struct FileLCRec* __ptr64>(&var_a90)
    void*** rax_11 = sub_140a84c80(0, 0x20, 0)
    void*** var_648_1 = rax_11
    
    if (rax_11 != 0)
        *rax_11 = &data_142d40dc0
        rax_11[1] = sub_142265ea0
        rax_11[3] = sub_140a387b0()
        *rax_11 = &data_142d40e18
    
    void* var_e78
    
    if (rax_11 != 0)
        sub_140599630(&data_1439aa9e8, 1)
        (*rax_11)[6](rax_11, &var_e78)
        int64_t rsi_1 = sx.q(data_1439aa9f0)
        int32_t rax_14 = (rsi_1 + 1).d
        bool cond:0_1 = rax_14 s<= data_1439aa9f4
        data_1439aa9f0 = rax_14
        
        if (not(cond:0_1))
            sub_1405a4f90(&data_1439aa9e8)
        
        void** rax_17 = (rsi_1 << 4) + data_1439aa9e8
        *rax_17 = rax_11
        rax_17[1].d = 2
    
    void*** rax_18 = sub_140a84c80(0, 0x20, 0)
    void*** var_628_1 = rax_18
    
    if (rax_18 != 0)
        *rax_18 = &data_142d40dc0
        rax_18[1] = sub_1405a6200
        rax_18[3] = sub_140a387b0()
        *rax_18 = &data_142d40e18
    
    int16_t* var_ec0
    
    if (rax_18 != 0)
        sub_140599630(&data_14399fd78, 1)
        (*rax_18)[6](rax_18, &var_ec0)
        int64_t rsi_2 = sx.q(data_14399fd80)
        int32_t rax_21 = (rsi_2 + 1).d
        bool cond:1_1 = rax_21 s<= data_14399fd84
        data_14399fd80 = rax_21
        
        if (not(cond:1_1))
            sub_1405a4f90(&data_14399fd78)
        
        void** rax_24 = (rsi_2 << 4) + data_14399fd78
        *rax_24 = rax_18
        rax_24[1].d = 2
    
    uint64_t var_e88 = 0
    int32_t var_e80_1 = 0
    void var_a78
    pdb_internal::Array<struct DBI1::SrcMap>::Array<struct DBI1::SrcMap>(&var_a78)
    char rax_25 = sub_14059d3d0(rdi, &var_e88)
    pdb_internal::Array<struct FileLCRec* __ptr64>::~Array<struct FileLCRec* __ptr64>(&var_a78)
    
    if (rax_25 != 0)
        void var_b08
        pdb_internal::Array<struct DBI1::SrcMap>::Array<struct DBI1::SrcMap>(&var_b08)
        void*** rax_26 = sub_140d77f20()
        int64_t* rcx_22 = data_143cd5ab8
        void*** var_b78_1 = rax_26
        data_143cd5ab8 = rax_26
        
        if (rcx_22 != 0)
            (**rcx_22)(rcx_22, 1)
        
        pdb_internal::Array<struct FileLCRec* __ptr64>::~Array<struct FileLCRec* __ptr64>(&var_b08)
        sub_140b19e60()
        void* r8_3 = data_1439a8bd0
        (*(r8_3 + 0x60))(&data_1439a8bd0, 1, r8_3)
        sub_140af2b60()
        
        if (sub_140b21a10(&data_143dbb3f0, u"stdout") != 0)
            sub_14059c620()
        
        sub_140b72800()
        void var_a48
        pdb_internal::Array<struct DBI1::SrcMap>::Array<struct DBI1::SrcMap>(&var_a48)
        
        if (sub_140b1d450() != 0)
            int16_t* var_e18
            sub_140b1aa20(&var_e18)
            
            if (sub_140b16090(&var_e18) == 0)
                int16_t* const rdx_19 = &data_142d40450
                int32_t var_e10
                
                if (var_e10 != 0)
                    rdx_19 = var_e18
                
                sub_140a4bcc0(u"Project file not found: %s\n", rdx_19)
                sub_140b65060()
                int64_t var_f30 = 0
                int32_t rdx_20 = 0
                int32_t var_f28_1 = 0
                int32_t rcx_27 = 0
                int32_t var_f24_1 = 0
                
                if (data_143e189c0 != 0)
                    int64_t rbx_4 = -1
                    
                    do
                        rbx_4 += 1
                    while ((&data_143e189c0)[rbx_4] != 0)
                    
                    if (rbx_4.d + 1 s> 0)
                        sub_1405947f0(&var_f30, rbx_4.d + 1)
                        rcx_27 = var_f24_1
                        rdx_20 = var_f28_1
                    
                    int32_t rax_31 = rdx_20 + rbx_4.d + 1
                    int32_t var_f28_2 = rax_31
                    
                    if (rax_31 s> rcx_27)
                        sub_140594770(&var_f30)
                    
                    UnDecorator::getReferenceType(var_f30, &data_143e189c0, (rbx_4.d + 1) * 2)
                
                sub_140b3d650()
                int16_t* var_e48
                sub_140b3ddc0(&data_143de7d00, &var_e48, u"Embers", &var_f30)
                int64_t rcx_31 = var_f30
                
                if (rcx_31 != 0)
                    sub_140a74f90(rcx_31)
                
                int32_t var_e40
                
                if (var_e40 s> 1)
                    sub_140b27db0(&var_e48)
                    sub_140af2b60()
                    int16_t* var_f90 = nullptr
                    int32_t rdx_23 = 0
                    int32_t var_f88_1 = 0
                    int32_t rcx_33 = 0
                    int32_t var_f84_1 = 0
                    
                    if (data_143dbb3f0 != 0)
                        int64_t rbx_6 = -1
                        
                        do
                            rbx_6 += 1
                        while ((&data_143dbb3f0)[rbx_6] != 0)
                        
                        if (rbx_6.d + 1 s> 0)
                            sub_1405947f0(&var_f90, rbx_6.d + 1)
                            rcx_33 = var_f84_1
                            rdx_23 = var_f88_1
                        
                        int32_t rax_32 = rdx_23 + rbx_6.d + 1
                        var_f88_1 = rax_32
                        
                        if (rax_32 s> rcx_33)
                            sub_140594770(&var_f90)
                        
                        UnDecorator::getReferenceType(var_f90, &data_143dbb3f0, (rbx_6.d + 1) * 2)
                    
                    int16_t* const r8_8 = &data_142d40450
                    int16_t* rdx_25 = &data_142d40450
                    
                    if (var_e40 != 0)
                        r8_8 = var_e48
                    
                    if (var_e80_1 != 0)
                        rdx_25 = var_e88
                    
                    sub_140a306e0(&var_f90, rdx_25, r8_8, 0)
                    int16_t* const rcx_38 = &data_142d40450
                    
                    if (var_f88_1 != 0)
                        rcx_38 = var_f90
                    
                    sub_140affe80(rcx_38)
                    sub_140af2b60()
                    int16_t* rcx_39 = var_f90
                    rdi = &data_143dbb3f0
                    
                    if (rcx_39 != 0)
                        sub_140a74f90(rcx_39)
                
                int16_t* rcx_40 = var_e48
                
                if (rcx_40 != 0)
                    sub_140a74f90(rcx_40)
            
            int16_t* rcx_41 = var_e18
            
            if (rcx_41 != 0)
                sub_140a74f90(rcx_41)
        
        pdb_internal::Array<struct FileLCRec* __ptr64>::~Array<struct FileLCRec* __ptr64>(&var_a48)
        void var_a30
        pdb_internal::Array<struct DBI1::SrcMap>::Array<struct DBI1::SrcMap>(&var_a30)
        sub_140d7b040()
        data_143de5de8 = &data_143e20c98
        j_sub_140a47400()
        data_143ddb418 = &data_143db48d0
        pdb_internal::Array<struct FileLCRec* __ptr64>::~Array<struct FileLCRec* __ptr64>(&var_a30)
        void var_a18
        pdb_internal::Array<struct DBI1::SrcMap>::Array<struct DBI1::SrcMap>(&var_a18)
        sub_140aa2490()
        pdb_internal::Array<struct FileLCRec* __ptr64>::~Array<struct FileLCRec* __ptr64>(&var_a18)
        void var_d98
        pdb_internal::Array<struct DBI1::SrcMap>::Array<struct DBI1::SrcMap>(&var_d98)
        int64_t var_c98
        int64_t* rax_33 = sub_140b251a0(&var_c98)
        int32_t rdx_28 = rax_33[1].d
        int32_t rdx_29 = neg.d(rdx_28)
        int64_t var_f00 = *rax_33
        *rax_33 = 0
        int32_t rcx_50 = rax_33[1].d
        int32_t rcx_51 = *(rax_33 + 0xc)
        rax_33[1] = 0
        int32_t rdx_32 = sbb.d(rdx_29, rdx_29, rdx_28 != 0) + 8 + rcx_50
        
        if (rdx_32 s> rcx_51)
            sub_1405947f0(&var_f00, rdx_32)
        
        sub_140a2cf70(&var_f00, u"global", 6)
        void var_638
        int128_t var_ca8 = *sub_140a1dfc0(&var_f00, &var_638)
        wWinMainCRTStartup(&var_d98, &var_ca8)
        int64_t rcx_56 = var_f00
        
        if (rcx_56 != 0)
            sub_140a74f90(rcx_56)
        
        int64_t rcx_57 = var_c98
        
        if (rcx_57 != 0)
            sub_140a74f90(rcx_57)
        
        if (sub_140ab3ee0(&var_d98) != 0)
            int32_t var_5a8
            sub_140ab37d0(&var_5a8)
            
            if (var_5a8 != 0)
                int64_t var_c88
                int64_t* rax_36 = sub_140ac6560(&var_5a8, &var_c88)
                int16_t* const r9_5
                
                if (rax_36[1].d == 0)
                    r9_5 = &data_142d40450
                else
                    r9_5 = *rax_36
                
                sub_140af98a0("Unknown", 0x692, u"Failed to initialize I/O dispatcher: '%s'", r9_5)
                int64_t rcx_61 = var_c88
                
                if (rcx_61 != 0)
                    sub_140a74f90(rcx_61)
                
                sub_140afbb40()
        
        pdb_internal::Array<struct FileLCRec* __ptr64>::~Array<struct FileLCRec* __ptr64>(&var_d98)
        void var_a00
        pdb_internal::Array<struct DBI1::SrcMap>::Array<struct DBI1::SrcMap>(&var_a00)
        char var_fc5
        char rax_37 = sub_14059c760(rdi, &var_fc5)
        pdb_internal::Array<struct FileLCRec* __ptr64>::~Array<struct FileLCRec* __ptr64>(&var_a00)
        
        if (rax_37 != 0)
            void var_9e8
            pdb_internal::Array<struct DBI1::SrcMap>::Array<struct DBI1::SrcMap>(&var_9e8)
            sub_140a464c0()
            char const (* rdx_39)[0x4] = data_14399ea08
            (*rdx_39)(&data_14399ea08, rdx_39)
            pdb_internal::Array<struct FileLCRec* __ptr64>::~Array<struct FileLCRec* __ptr64>(
                &var_9e8)
            void var_9d0
            pdb_internal::Array<struct DBI1::SrcMap>::Array<struct DBI1::SrcMap>(&var_9d0)
            sub_140a80800(&data_143db7b00)
            pdb_internal::Array<struct FileLCRec* __ptr64>::~Array<struct FileLCRec* __ptr64>(
                &var_9d0)
            sub_140b26d80(1)
            char rax_38
            
            if (data_143cefff1 != 0)
                rax_38 = sub_14059d1e0()
            
            if (data_143cefff1 == 0 || rax_38 == 0)
                uint32_t rax_75 = GetCurrentThreadId()
                data_143de5480 = 1
                data_143de5470 = rax_75
                sub_140b72cd0(-1)
                int64_t rax_76 = -1
                
                do
                    rax_76 += 1
                while (rdi[rax_76] != 0)
                
                int64_t rax_77 = 2 * (sx.q(rax_76.d) + 1)
                
                if (mulu.dp.q(2, sx.q(rax_76.d) + 1) u>> 0x40 != zx.o(0))
                    rax_77 = -1
                
                int16_t* rax_78 = j_sub_140a82f30(rax_77)
                var_fa8.q = rax_78
                void* rdx_48 = rax_78 - rdi
                int16_t* rbx_14 = rax_78
                int16_t i_3
                
                do
                    i_3 = *rdi
                    *(rdi + rdx_48) = i_3
                    rdi = &rdi[1]
                while (i_3 != 0)
                int16_t* var_f98 = rax_78
                int16_t* var_fc0
                sub_140b294d0(&var_fc0, &var_f98, 0)
                int16_t* rax_79 = sub_140a53db0()
                int64_t var_f40 = 0
                int32_t rdx_50 = 0
                int32_t var_f38_1 = 0
                int32_t rcx_101 = 0
                int32_t var_f34_1 = 0
                
                if (rax_79 != 0 && *rax_79 != 0)
                    int64_t rbx_15 = -1
                    
                    do
                        rbx_15 += 1
                    while (rax_79[rbx_15] != 0)
                    
                    if (rbx_15.d + 1 s> 0)
                        sub_1405947f0(&var_f40, rbx_15.d + 1)
                        rcx_101 = var_f34_1
                        rdx_50 = var_f38_1
                    
                    int32_t rax_80 = rbx_15.d + 1 + rdx_50
                    int32_t var_f38_2 = rax_80
                    
                    if (rax_80 s> rcx_101)
                        sub_140594770(&var_f40)
                    
                    UnDecorator::getReferenceType(var_f40, rax_79, (rbx_15.d + 1) * 2)
                    rbx_14 = var_fa8.q
                
                int64_t var_f60 = 0
                int32_t var_f58_1 = 0
                sub_1405947f0(&var_f60, 8)
                int32_t rax_81 = var_f58_1 + 8
                var_f58_1 = rax_81
                
                if (rax_81 s> 0)
                    sub_140594770(&var_f60)
                
                UnDecorator::getReferenceType(var_f60, u"/Engine", 0x10)
                int64_t rcx_108 = var_f60
                
                if (rcx_108 != 0)
                    sub_140a74f90(rcx_108)
                
                int64_t rcx_109 = var_f40
                
                if (rcx_109 != 0)
                    sub_140a74f90(rcx_109)
                
                int64_t var_e98 = 0
                int32_t var_e90_1 = 0
                int64_t var_ea8 = 0
                int32_t var_ea0_1 = 0
                sub_14059e300(rbx_14, &var_e98, &var_ea8)
                char i_4 = 0
                char i_6 = 0
                int32_t rbx_17 = 0
                
                if (var_e90_1 s> 0)
                    int64_t r12_2 = var_e98
                    
                    do
                        int64_t rdi_7 = sx.q(rbx_17) * 2
                        i_4 = sub_140a237d0(r12_2 + (rdi_7 << 3), u"Commandlet", 1)
                        
                        if (i_4 != 0)
                            i_6 = 1
                            sub_140597df0(&var_fc0, r12_2 + (rdi_7 << 3))
                            i_4 = 1
                            break
                        
                        rbx_17 += 1
                    while (rbx_17 s< var_e90_1)
                
                int32_t rbx_18 = 0
                
                if (var_ea0_1 s> 0)
                    int64_t r12_3 = var_ea8
                    
                    while (i_4 == 0)
                        int64_t rdi_9 = sx.q(rbx_18) * 2
                        
                        if (sub_140a32ae0(r12_3 + (rdi_9 << 3), u"RUN=", 1) != 0)
                            i_6 = 1
                            sub_140597df0(&var_fc0, r12_3 + (rdi_9 << 3))
                            break
                        
                        i_4 = i_6
                        rbx_18 += 1
                        
                        if (rbx_18 s>= var_ea0_1)
                            goto label_1405a1b73
                    
                    data_143de5426 = 1
                else if (i_4 != 0)
                    data_143de5426 = 1
                
            label_1405a1b73:
                _DeleteExceptionPtr(&var_fc0)
                int16_t* rdi_10 = var_fc0
                int16_t* var_f10 = nullptr
                int32_t var_fb8
                
                if (var_fb8 != 0)
                    sub_1405a4c70(&var_f10, var_fb8, 0)
                    memcpy(var_f10, rdi_10, var_fb8 * 2)
                else
                    int32_t var_f04_1 = 0
                
                sub_140b21570(&var_f10)
                int32_t rbx_19
                
                if ((*u"Embers")[0] == 0)
                    rbx_19.b = 0
                else if (sub_140a54510(u"Embers", u"None") == 0)
                    rbx_19.b = 0
                else
                    int16_t* const rcx_119 = &data_142d40450
                    
                    if (var_fb8 != 0)
                        rcx_119 = var_fc0
                    
                    if (sub_140a54510(rcx_119, u"Embers") != 0)
                        rbx_19.b = 0
                    else
                        rbx_19 = 1
                
                char rax_85 = sub_140b1d450()
                int64_t var_c78
                int32_t rax_87
                
                if (rax_85 != 0)
                    int64_t* rax_86 = sub_140b1aa20(&var_c78)
                    int16_t* rdx_59
                    
                    if (rax_86[1].d == 0)
                        rdx_59 = &data_142d40450
                    else
                        rdx_59 = *rax_86
                    
                    int16_t* const rcx_121 = &data_142d40450
                    r13 = 1
                    
                    if (var_fb8 != 0)
                        rcx_121 = var_f10
                    
                    var_fa0 = 1
                    rax_87 = sub_140a54510(rcx_121, rdx_59)
                
                char var_fc6_1
                int32_t rsi_5
                
                if (rax_85 == 0 || rax_87 != 0)
                    rsi_5.b = 0
                    var_fc6_1 = 0
                else
                    rsi_5 = 1
                    var_fc6_1 = 1
                    var_fa0 = 1
                
                if ((1 & r13.b) != 0)
                    r13 &= 0xfffffffe
                    var_fa0 = r13
                    int64_t rcx_122 = var_c78
                    
                    if (rcx_122 != 0)
                        sub_140a74f90(rcx_122)
                
                char rax_88 = sub_140b1d450()
                int64_t var_c68
                int64_t var_c58
                int32_t rax_91
                
                if (rax_88 != 0)
                    r13 |= 6
                    var_fa0 = r13
                    int64_t* rax_90 = sub_140b187e0(&var_c68, sub_140b1aa20(&var_c58))
                    int16_t* rdx_61
                    
                    if (rax_90[1].d == 0)
                        rdx_61 = &data_142d40450
                    else
                        rdx_61 = *rax_90
                    
                    int16_t* const rcx_125 = &data_142d40450
                    
                    if (var_fb8 != 0)
                        rcx_125 = var_fc0
                    
                    rax_91 = sub_140a54510(rcx_125, rdx_61)
                
                char var_fc7
                char rdi_11
                
                if (rax_88 == 0 || rax_91 != 0)
                    rdi_11 = 0
                    var_fc7 = nullptr
                else
                    rdi_11 = 1
                    var_fc7 = 1
                
                if ((r13.b & 4) != 0)
                    r13 &= 0xfffffffb
                    var_fa0 = r13
                    int64_t rcx_126 = var_c68
                    
                    if (rcx_126 != 0)
                        sub_140a74f90(rcx_126)
                
                if ((r13.b & 2) != 0)
                    r13 &= 0xfffffffd
                    var_fa0 = r13
                    int64_t rcx_127 = var_c58
                    
                    if (rcx_127 != 0)
                        sub_140a74f90(rcx_127)
                
                if (rbx_19.b != 0 || rsi_5.b != 0 || rdi_11 != 0)
                    int16_t* rdi_12 = var_f98
                    int32_t rax_92 = 0
                    int16_t* var_f50 = nullptr
                    int16_t* r12_4 = nullptr
                    int64_t var_f48_1 = 0
                    int32_t rdx_62 = 0
                    int32_t rsi_6
                    
                    if (rdi_12 != 0 && *rdi_12 != 0)
                        int64_t rbx_20 = -1
                        
                        do
                            rbx_20 += 1
                        while (rdi_12[rbx_20] != 0)
                        
                        if (rbx_20.d + 1 s> 0)
                            sub_1405947f0(&var_f50, rbx_20.d + 1)
                            rax_92 = var_f48_1:4.d
                            rdx_62 = var_f48_1.d
                            r12_4 = var_f50
                        
                        rsi_6 = rbx_20.d + 1 + rdx_62
                        var_f48_1.d = rsi_6
                        
                        if (rsi_6 s> rax_92)
                            sub_140594770(&var_f50)
                            rsi_6 = var_f48_1.d
                            r12_4 = var_f50
                        
                        UnDecorator::getReferenceType(r12_4, rdi_12, (rbx_20.d + 1) * 2)
                    
                    int16_t* rcx_131
                    
                    if (rdi_12 == 0 || *rdi_12 == 0 || rsi_6 == 0)
                        rcx_131 = &data_142d40450
                    else
                        rcx_131 = r12_4
                    
                    int16_t* r8_19 = var_fa8.q
                    void* rdx_66 = r8_19 - rcx_131
                    int16_t i_5
                    
                    do
                        i_5 = *rcx_131
                        *(rdx_66 + rcx_131) = i_5
                        rcx_131 = &rcx_131[1]
                    while (i_5 != 0)
                    var_f98 = r8_19
                    sub_140affe80(r8_19)
                    int64_t var_c48
                    int64_t* rax_93 = sub_140b294d0(&var_c48, &var_f98, 0)
                    
                    if (&var_fc0 != rax_93)
                        int16_t* rcx_134 = var_fc0
                        
                        if (rcx_134 != 0)
                            sub_140a74f90(rcx_134)
                        
                        var_fc0 = *rax_93
                        *rax_93 = 0
                        var_fb8 = rax_93[1].d
                        int32_t var_fb4_1 = *(rax_93 + 0xc)
                        rax_93[1] = 0
                    
                    int64_t rcx_136 = var_c48
                    int64_t* rbx_23
                    
                    while (true)
                        if (rcx_136 != 0)
                            sub_140a74f90(rcx_136)
                        
                        sub_140a360c0(&var_fc0)
                        int64_t var_c28
                        int64_t* rax_96 = sub_140b7d8f0(&var_c28)
                        int64_t var_c38
                        int64_t* rax_97 = sub_140b19c30(&var_c38, &var_fc0, 0)
                        int16_t* rdx_69
                        
                        if (rax_96[1].d == 0)
                            rdx_69 = &data_142d40450
                        else
                            rdx_69 = *rax_96
                        
                        int16_t* const rcx_140
                        
                        if (rax_97[1].d == 0)
                            rcx_140 = &data_142d40450
                        else
                            rcx_140 = *rax_97
                        
                        int32_t rax_98 = sub_140a54510(rcx_140, rdx_69)
                        int64_t rcx_141 = var_c38
                        rbx_23.b = rax_98 == 0
                        
                        if (rcx_141 != 0)
                            sub_140a74f90(rcx_141)
                        
                        int64_t rcx_142 = var_c28
                        
                        if (rcx_142 != 0)
                            sub_140a74f90(rcx_142)
                        
                        if (rbx_23.b == 0)
                            break
                        
                        int64_t var_c18
                        int64_t* rax_99 = sub_140b294d0(&var_c18, &var_f98, 0)
                        
                        if (&var_fc0 != rax_99)
                            int16_t* rcx_144 = var_fc0
                            
                            if (rcx_144 != 0)
                                sub_140a74f90(rcx_144)
                            
                            var_fc0 = *rax_99
                            *rax_99 = 0
                            var_fb8 = rax_99[1].d
                            int32_t var_fb4_2 = *(rax_99 + 0xc)
                            rax_99[1] = 0
                        
                        rcx_136 = var_c18
                    
                    if (var_fc6_1 != 0 || var_fc7 != 0)
                        int64_t var_c08
                        int64_t* rax_102 = sub_140b1aa20(&var_c08)
                        int16_t* rdx_71
                        
                        if (rax_102[1].d == 0)
                            rdx_71 = &data_142d40450
                        else
                            rdx_71 = *rax_102
                        
                        int16_t* var_e08
                        sub_140a41c90(&var_e08, rdx_71)
                        int64_t rcx_148 = var_c08
                        
                        if (rcx_148 != 0)
                            sub_140a74f90(rcx_148)
                        
                        int64_t var_bf8
                        int64_t* rax_103 = sub_140b1aa20(&var_bf8)
                        int16_t* rdx_72
                        
                        if (rax_103[1].d == 0)
                            rdx_72 = &data_142d40450
                        else
                            rdx_72 = *rax_103
                        
                        int16_t* const rcx_150 = &data_142d40450
                        int32_t var_e00
                        
                        if (var_e00 != 0)
                            rcx_150 = var_e08
                        
                        int32_t rax_104 = sub_140a54510(rcx_150, rdx_72)
                        int64_t rcx_151 = var_bf8
                        rbx_23.b = rax_104 != 0
                        
                        if (rcx_151 != 0)
                            sub_140a74f90(rcx_151)
                        
                        if (rbx_23.b != 0)
                            sub_140b27db0(&var_e08)
                        
                        int16_t* rcx_153 = var_e08
                        
                        if (rcx_153 != 0)
                            sub_140a74f90(rcx_153)
                    
                    if (r12_4 != 0)
                        sub_140a74f90(r12_4)
                
                int32_t rdi_13 = 0
                var_ec0 = nullptr
                
                if (i_6 != 0)
                    if (sub_140a32ae0(&var_fc0, u"run=", 1) != 0)
                        int32_t r8_21
                        
                        if (var_fb8 == 0)
                            r8_21 = 0
                        else
                            r8_21 = var_fb8 - 1
                        
                        if (r8_21 s> 4)
                            r8_21 = 4
                        
                        sub_1405a4810(&var_fc0, 0, r8_21, 0)
                        
                        if (sub_140a237d0(&var_fc0, u"Commandlet", 1) == 0)
                            sub_140a20ba0(&var_fc0, u"Commandlet", 0xa)
                    
                    var_ec0 = var_f98
                
                data_143dbb3b5 = 0
                sub_140af2b60()
                char rax_108 = sub_140b21a10(&data_143dbb3f0, u"Deterministic")
                char rax_109
                
                if (rax_108 == 0)
                    sub_140af2b60()
                    rax_109 = sub_140b21a10(&data_143dbb3f0, u"UseFixedTimeStep")
                
                char rax_110
                
                if (rax_108 != 0 || rax_109 != 0)
                    data_143dbb3b6 = 1
                    
                    if (rax_108 != 0 || data_143dbb3b5 != 0)
                        rax_110 = 1
                    else
                    label_1405a20d8:
                        sub_140af2b60()
                        rax_110 = sub_140b21a10(&data_143dbb3f0, u"FixedSeed")
                        
                        if (rax_110 != 0)
                            rax_110 = 1
                else
                    data_143dbb3b6 = 0
                    
                    if (data_143dbb3b5 == 0)
                        goto label_1405a20d8
                    
                    rax_110 = 1
                
                data_143dbb3b4 = rax_110
                uint32_t _Seed = 0
                int64_t performanceCount
                int64_t performanceCount_1
                
                if (rax_110 == 0)
                    QueryPerformanceCounter(&performanceCount)
                    _Seed = performanceCount.d
                    QueryPerformanceCounter(&performanceCount_1)
                    rdi_13 = performanceCount_1.d
                
                srand(_Seed)
                sub_140a506c0(rdi_13)
                
                if (data_143cefff1 == 0 && (*Embers")[0] != 0 && sub_140a54510(Embers", None"
                        ) != 0 && sub_140b1d450() == 0)
                    int64_t var_bd8
                    int64_t* rax_113 = sub_140b7d8f0(&var_bd8)
                    
                    if (rax_113[1].d != 0)
                        *rax_113
                    
                    int16_t* var_dc8
                    sub_140a2e390(&var_dc8, u"%s.%s", u"Embers")
                    int16_t* const rbx_26 = &data_142d40450
                    int32_t var_dc0
                    
                    if (var_dc0 != 0)
                        rbx_26 = var_dc8
                    
                    int64_t var_be8
                    int64_t* rax_114 = sub_140b251a0(&var_be8)
                    int16_t* const rax_115
                    
                    if (rax_114[1].d == 0)
                        rax_115 = &data_142d40450
                    else
                        rax_115 = *rax_114
                    
                    int16_t* const var_d08 = rax_115
                    int16_t* const var_d00_1 = rbx_26
                    uint64_t var_e28 = 0
                    int64_t var_e20_1 = 0
                    sub_140b0f5f0(&var_e28, &var_d08, 2)
                    int64_t rcx_167 = var_be8
                    
                    if (rcx_167 != 0)
                        sub_140a74f90(rcx_167)
                    
                    int16_t* rcx_168 = var_dc8
                    
                    if (rcx_168 != 0)
                        sub_140a74f90(rcx_168)
                    
                    int64_t rcx_169 = var_bd8
                    
                    if (rcx_169 != 0)
                        sub_140a74f90(rcx_169)
                    
                    sub_140b27db0(&var_e28)
                    uint64_t rcx_171 = var_e28
                    
                    if (rcx_171 != 0)
                        sub_140a74f90(rcx_171)
                
                if (sub_140b1d450() == 0)
                label_1405a23eb:
                    sub_14059cf80()
                    int32_t rax_125
                    
                    if ((*u"Embers")[0] != 0)
                        rax_125 = sub_140a54510(u"Embers", u"None")
                    
                    int16_t* const rdi_15
                    
                    if ((*u"Embers")[0] == 0 || rax_125 == 0)
                        rdi_15 = &data_142d40450
                    else
                        uint64_t var_480 = sub_140a4d590()
                        wchar16 const* const var_478_1 = u"Binaries"
                        wchar16 const* const var_470_1 = u"Win64"
                        uint64_t var_f20 = 0
                        int32_t var_f18_1 = 0
                        sub_140b0f5f0(&var_f20, &var_480, 3)
                        rdi_15 = &data_142d40450
                        int16_t* const rcx_188 = &data_142d40450
                        
                        if (var_f18_1 != 0)
                            rcx_188 = var_f20
                        
                        sub_140b64c60(rcx_188)
                        j_sub_140b3db50()
                        sub_14059c920()
                        uint64_t rcx_190 = var_f20
                        
                        if (rcx_190 != 0)
                            sub_140a74f90(rcx_190)
                    
                    void var_988
                    pdb_internal::Array<struct DBI1::SrcMap>::Array<struct DBI1::SrcMap>(&var_988)
                    sub_140a32b80(sub_140b70ca0())
                    int64_t* rax_128 = sub_140a242a0()
                    int64_t r8_22 = *rax_128
                    (*(r8_22 + 0x28))(rax_128, 2, r8_22)
                    pdb_internal::Array<struct FileLCRec* __ptr64>::~Array<struct FileLCRec* __ptr64>(
                        &var_988)
                    sub_140b26d80(4)
                    sub_140b26d80(2)
                    void var_970
                    pdb_internal::Array<struct DBI1::SrcMap>::Array<struct DBI1::SrcMap>(&var_970)
                    void var_b70
                    int64_t* rax_129 = sub_140b58260(&var_b70, u"CoreUObject", 1)
                    j_sub_140b3db50()
                    int64_t rax_130 = sub_140b407e0(&data_143de7d78, *rax_129)
                    pdb_internal::Array<struct FileLCRec* __ptr64>::~Array<struct FileLCRec* __ptr64>(
                        &var_970)
                    
                    if (rax_130 != 0)
                        sub_140af2b60()
                        char rax_131 = sub_140b21a10(&data_143dbb3f0, u"DumpEarlyConfigReads")
                        sub_140af2b60()
                        char rax_132 = sub_140b21a10(&data_143dbb3f0, u"DumpEarlyPakFileReads")
                        sub_140af2b60()
                        var_fc5 = sub_140b21a10(&data_143dbb3f0, u"ForceQuitAfterEarlyReads")
                        sub_1423e5d30()
                        char var_fc6_2
                        
                        if (var_fb8 == 0 || var_fb8 == 1)
                            var_fc6_2 = 0
                        else
                            var_fc6_2 = 1
                            
                            if (sub_140a546e0(var_fc0, &data_142d404b0, 1) == 0)
                                var_fc6_2 = 0
                        
                        if (sub_140a54810() != 0)
                            void var_958
                            pdb_internal::Array<struct DBI1::SrcMap>::Array<struct DBI1::SrcMap>(
                                &var_958)
                            data_143db7ac8 = sub_140a69900()
                            int32_t rax_137 = sub_140b70e10()
                            int64_t* rcx_202 = data_143db7ac8
                            (**rcx_202)(rcx_202, zx.q(rax_137), 0x20000, 5)
                            void*** rax_138 = sub_140a69900()
                            data_143db7ad8 = rax_138
                            (**rax_138)(rax_138, 2, 0x20000, 4)
                            pdb_internal::Array<struct FileLCRec* __ptr64>::~Array<struct FileLCRec* __ptr64>(
                                &var_958)
                        
                        data_143ddb410 = data_143cd5ab8
                        void var_940
                        pdb_internal::Array<struct DBI1::SrcMap>::Array<struct DBI1::SrcMap>(
                            &var_940)
                        void var_b20
                        int64_t* rax_140 = sub_140b58260(&var_b20, u"Engine", 1)
                        j_sub_140b3db50()
                        sub_140b407e0(&data_143de7d78, *rax_140)
                        void var_b18
                        int64_t* rax_141 = sub_140b58260(&var_b18, u"Renderer", 1)
                        j_sub_140b3db50()
                        sub_140b407e0(&data_143de7d78, *rax_141)
                        void var_cb0
                        int64_t* rax_142 = sub_140b58260(&var_cb0, u"AnimGraphRuntime", 1)
                        j_sub_140b3db50()
                        sub_140b407e0(&data_143de7d78, *rax_142)
                        sub_140d7f1a0()
                        
                        if (data_143f0f1d4 == 0)
                            j_sub_140b3db50()
                            void var_b10
                            int64_t rbx_36 = *sub_140b58170(&var_b10, "SlateRHIRenderer", 1)
                            j_sub_140b3db50()
                            j_sub_140b407e0(&data_143de7d78, rbx_36)
                        
                        void var_cd8
                        int64_t* rax_144 = sub_140b58260(&var_cd8, u"Landscape", 1)
                        j_sub_140b3db50()
                        sub_140b407e0(&data_143de7d78, *rax_144)
                        void var_cd0
                        int64_t* rax_145 = sub_140b58260(&var_cd0, u"RenderCore", 1)
                        j_sub_140b3db50()
                        sub_140b407e0(&data_143de7d78, *rax_145)
                        pdb_internal::Array<struct FileLCRec* __ptr64>::~Array<struct FileLCRec* __ptr64>(
                            &var_940)
                        void var_cc8
                        sub_1405966e0(&data_14399fd60, &var_cc8, sub_140594850)
                        void var_cc0
                        sub_1405966e0(&data_14399fd90, &var_cc0, sub_1405a6080)
                        sub_140b3cdd0()
                        sub_140b3fa40()
                        sub_14059c370()
                        void var_928
                        pdb_internal::Array<struct DBI1::SrcMap>::Array<struct DBI1::SrcMap>(
                            &var_928)
                        char rax_147
                        int512_t zmm2_1
                        int128_t zmm6_1
                        int128_t zmm7_1
                        rax_147, zmm2_1, zmm6_1, zmm7_1 = sub_140598890()
                        pdb_internal::Array<struct FileLCRec* __ptr64>::~Array<struct FileLCRec* __ptr64>(
                            &var_928)
                        
                        if (rax_147 != 0)
                            int128_t var_48_1 = zmm6_1
                            int128_t var_58_1 = zmm7_1
                            char rax_148
                            int512_t zmm1_2
                            rax_148, zmm1_2 = sub_140a54810()
                            
                            if (rax_148 != 0)
                                void var_910
                                pdb_internal::Array<struct DBI1::SrcMap>::Array<struct DBI1::SrcMap>(
                                    &var_910)
                                data_143db7ad0 = sub_140a69900()
                                int64_t* rcx_217 = data_143db7ad0
                                (**rcx_217)(rcx_217, 4, 0x18000, 1)
                                pdb_internal::Array<struct FileLCRec* __ptr64>::~Array<struct FileLCRec* __ptr64>(
                                    &var_910)
                            
                            zmm2_1.o = 0x3f000000
                            zmm1_2.o = 0x3dcccccd
                            void var_8f8
                            pdb_internal::Array<struct DBI1::SrcMap>::Array<struct DBI1::SrcMap>(
                                &var_8f8)
                            sub_1423b2370(&data_143a30000, 0)
                            int16_t* const rdx_98 = &data_142d40450
                            
                            if (data_143de5788 != 0)
                                rdx_98 = data_143de5780
                            
                            sub_140aeaee0(u"/Script/Engine.RendererSettings", rdx_98, 0x3000000, 0)
                            int16_t* const rdx_99 = &data_142d40450
                            
                            if (data_143de5788 != 0)
                                rdx_99 = data_143de5780
                            
                            sub_140aeaee0(/Script/Engine.RendererOverrideSettings", rdx_99, 
                                0x3000000, 0)
                            int16_t* const rdx_100 = &data_142d40450
                            
                            if (data_143de5788 != 0)
                                rdx_100 = data_143de5780
                            
                            sub_140aeaee0(/Script/Engine.StreamingSettings", rdx_100, 0x3000000, 0)
                            int16_t* const rdx_101 = &data_142d40450
                            
                            if (data_143de5788 != 0)
                                rdx_101 = data_143de5780
                            
                            sub_140aeaee0(/Script/Engine.GarbageCollectionSettings", rdx_101, 
                                0x3000000, 0)
                            int16_t* const rdx_102 = &data_142d40450
                            
                            if (data_143de5788 != 0)
                                rdx_102 = data_143de5780
                            
                            sub_140aeaee0(u"/Script/Engine.NetworkSettings", rdx_102, 0x3000000, 0)
                            
                            if (data_143de5426 == 0)
                                sub_142037da0()
                            
                            pdb_internal::Array<struct FileLCRec* __ptr64>::~Array<struct FileLCRec* __ptr64>(
                                &var_8f8)
                            void var_8e0
                            pdb_internal::Array<struct DBI1::SrcMap>::Array<struct DBI1::SrcMap>(
                                &var_8e0)
                            sub_1422eaa60()
                            pdb_internal::Array<struct FileLCRec* __ptr64>::~Array<struct FileLCRec* __ptr64>(
                                &var_8e0)
                            void var_8c8
                            pdb_internal::Array<struct DBI1::SrcMap>::Array<struct DBI1::SrcMap>(
                                &var_8c8)
                            sub_141fe7910(0)
                            pdb_internal::Array<struct FileLCRec* __ptr64>::~Array<struct FileLCRec* __ptr64>(
                                &var_8c8)
                            void var_8b0
                            pdb_internal::Array<struct DBI1::SrcMap>::Array<struct DBI1::SrcMap>(
                                &var_8b0)
                            sub_1422eb7e0(&data_143de5840)
                            pdb_internal::Array<struct FileLCRec* __ptr64>::~Array<struct FileLCRec* __ptr64>(
                                &var_8b0)
                            char rax_150 = sub_140a54ff0()
                            char rcx_228 = data_143f138f5
                            
                            if (rax_150 != 0)
                                rcx_228 = 1
                            
                            data_143f138f5 = rcx_228
                            void var_898
                            pdb_internal::Array<struct DBI1::SrcMap>::Array<struct DBI1::SrcMap>(
                                &var_898)
                            sub_140af8ab0()
                            pdb_internal::Array<struct FileLCRec* __ptr64>::~Array<struct FileLCRec* __ptr64>(
                                &var_898)
                            void var_880
                            pdb_internal::Array<struct DBI1::SrcMap>::Array<struct DBI1::SrcMap>(
                                &var_880)
                            sub_140b71320()
                            InitPhaseCallbacks()
                            int512_t zmm2_2
                            int128_t zmm6_2
                            int128_t zmm7_2
                            zmm2_2, zmm6_2, zmm7_2 = sub_140b6e0e0()
                            pdb_internal::Array<struct FileLCRec* __ptr64>::~Array<struct FileLCRec* __ptr64>(
                                &var_880)
                            void* rsi_7 = data_143ddb410
                            uint32_t rbx_39
                            
                            if (rsi_7 != 0)
                                if (data_143de5838 != 0)
                                    rdi_15 = data_143de5830
                                
                                if (*(rsi_7 + 0x10) != rdi_15)
                                    if (rdi_15 == 0 || *rdi_15 == 0)
                                        rbx_39 = 0
                                    else
                                        int64_t rbx_40 = -1
                                        
                                        do
                                            rbx_40 += 1
                                        while (rdi_15[rbx_40] != 0)
                                        
                                        rbx_39 = rbx_40.d + 1
                                    
                                    int32_t rdx_108 = 0
                                    *(rsi_7 + 0x18) = 0
                                    
                                    if (*(rsi_7 + 0x1c) != rbx_39)
                                        sub_1405947f0(rsi_7 + 0x10, rbx_39)
                                        rdx_108 = *(rsi_7 + 0x18)
                                    
                                    int32_t rax_151 = rbx_39 + rdx_108
                                    *(rsi_7 + 0x18) = rax_151
                                    
                                    if (rax_151 s> *(rsi_7 + 0x1c))
                                        sub_140594770(rsi_7 + 0x10)
                                    
                                    if (rbx_39 != 0)
                                        memcpy(*(rsi_7 + 0x10), rdi_15, rbx_39 * 2)
                            
                            zmm2_2.o = zmm6_2
                            int512_t zmm1_3
                            zmm1_3.o = zmm7_2
                            
                            if (sub_140b65b30() == 0)
                                sub_140b721f0(0)
                            
                            rdi_15.b = 0
                            data_143de5429 = 1
                            char var_fc8_1 = 0
                            data_143de542a = 1
                            data_143de5426 = 1
                            sub_140af2b60()
                            data_143de5427 =
                                sub_140b21a10(&data_143dbb3f0, AllowCommandletRendering")
                            sub_140af2b60()
                            char rax_154
                            int32_t rcx_237
                            rax_154, rcx_237 = sub_140b21a10(&data_143dbb3f0, AllowCommandletAudio")
                            data_143de5428 = rax_154
                            
                            if (var_fc6_2 == 0)
                                rbx_39.b = 0
                            else
                                char rax_155
                                rax_155, rcx_237 = sub_140a237d0(&var_fc0, u"Commandlet", 1)
                                
                                if (rax_155 == 0)
                                    rbx_39.b = 0
                                else
                                    rbx_39 = 1
                            
                            int32_t var_fd8
                            
                            if (var_fc6_2 == 0)
                                if (sub_140a32ae0(&var_fc0, u"run=", 1) != 0)
                                    int32_t r8_26
                                    
                                    if (var_fb8 == 0)
                                        r8_26 = 0
                                    else
                                        r8_26 = var_fb8 - 1
                                    
                                    if (r8_26 s> 4)
                                        r8_26 = 4
                                    
                                    sub_1405a4810(&var_fc0, 0, r8_26, 0)
                                    
                                    if (sub_140a237d0(&var_fc0, u"Commandlet", 1) == 0)
                                        sub_140a20ba0(&var_fc0, u"Commandlet", 0xa)
                                else if (rbx_39.b == 0)
                                label_1405a2c04:
                                    rdi_15 = 1
                                    var_fc8_1 = 1
                                    data_143de5429 = 1
                                    data_143de542a = 0
                                    data_143de5426 = 0
                            else if (rbx_39.b == 0)
                                int16_t* rdx_112 = var_fc0
                                uint64_t var_ee0 = 0
                                var_fd8 = sbb.d(rcx_237, rcx_237, var_fb8 != 0) + 0xb
                                sub_140596860(&var_ee0, rdx_112, var_fb8, 0, var_fd8)
                                sub_140a20ba0(&var_ee0, u"Commandlet", 0xa)
                                uint64_t rdx_113 = &data_142d40450
                                uint64_t rbx_41 = var_ee0
                                var_ee0 = 0
                                int32_t var_ed8
                                
                                if (var_ed8 != 0)
                                    rdx_113 = rbx_41
                                
                                var_ed8.q = 0
                                int16_t* rax_162 = sub_1405968d0(-ffffffffffffffff, rdx_113, 0)
                                
                                if (rbx_41 != 0)
                                    sub_140a74f90(rbx_41)
                                
                                if (rax_162 == 0)
                                    goto label_1405a2c04
                                
                                sub_140a20ba0(&var_fc0, u"Commandlet", 0xa)
                                rdi_15.b = 0
                            
                            if (data_143cd5ac0 == 0 && rdi_15.b == 0)
                                void var_868
                                pdb_internal::Array<struct DBI1::SrcMap>::Array<struct DBI1::SrcMap>(
                                    &var_868)
                                sub_14059c620()
                                pdb_internal::Array<struct FileLCRec* __ptr64>::~Array<struct FileLCRec* __ptr64>(
                                    &var_868)
                            
                            char rsi_9
                            
                            if (i_6 == 0)
                                rsi_9 = 0
                                var_fc7 = 0
                            else
                                int16_t* rcx_245 = &data_142d40450
                                
                                if (var_fb8 != 0)
                                    rcx_245 = var_fc0
                                
                                if (sub_140a54510(rcx_245, u"cookcommandlet") != 0)
                                    rsi_9 = 0
                                    var_fc7 = 0
                                else
                                    rsi_9 = 1
                                    var_fc7 = 1
                            
                            void var_850
                            pdb_internal::Array<struct DBI1::SrcMap>::Array<struct DBI1::SrcMap>(
                                &var_850)
                            
                            if (data_143cd5b40 == 0)
                                int16_t* rax_163 = sub_140b6b7a0()
                                
                                if (rax_163 == 0)
                                    void*** rax_176 = j_sub_140a82f30(8)
                                    
                                    if (rax_176 == 0)
                                        data_143cd5b40 = 0
                                    else
                                        *rax_176 = &data_142d40800
                                        data_143cd5b40 = rax_176
                                else
                                    void var_cb8
                                    int64_t rbx_42 = *sub_140b58260(&var_cb8, rax_163, 1)
                                    j_sub_140b3db50()
                                    data_143cd5b40 = j_sub_140b407e0(&data_143de7d78, rbx_42)
                            
                            pdb_internal::Array<struct FileLCRec* __ptr64>::~Array<struct FileLCRec* __ptr64>(
                                &var_850)
                            void var_838
                            pdb_internal::Array<struct DBI1::SrcMap>::Array<struct DBI1::SrcMap>(
                                &var_838)
                            uint64_t rbx_43 = zx.q(sub_14226f9a0())
                            pdb_internal::Array<struct FileLCRec* __ptr64>::~Array<struct FileLCRec* __ptr64>(
                                &var_838)
                            
                            if (rbx_43.b == 0)
                                r15 = 1
                            else
                                if (data_14399fa58 != 0)
                                    sub_140af2b60()
                                    
                                    if (sub_140b21a10(&data_143dbb3f0, u"Multiprocess") == 0)
                                        void var_820
                                        pdb_internal::Array<struct DBI1::SrcMap>::Array<struct DBI1::SrcMap>(
                                            &var_820)
                                        performanceCount_1 = &data_1439c9630
                                        int64_t* performanceCount_3 = &data_1439c9630
                                        int32_t var_de8 = 0
                                        int32_t var_de4_1 = 1
                                        int32_t rdx_119 = data_1439c9658.d
                                        void* r8_28 = &data_1439c9640
                                        var_e78 = &data_1439c9640
                                        void* var_de0_1 = &data_1439c9640
                                        int32_t var_dd8_1 = 0xffffffff
                                        int64_t var_dd4_1 = 0
                                        
                                        if (rdx_119 != 0)
                                            sub_14059bdd0(&var_de8)
                                            rdx_119 = data_1439c9658.d
                                            r8_28 = &data_1439c9640
                                        
                                        double zmm2_3[0x2] = var_dd8_1.o
                                        double var_d18_1[0x2] = zmm2_3
                                        int128_t zmm1_4 = var_de8.o
                                        int128_t var_d28_1
                                        var_d28_1:0xc.d = rdx_119
                                        var_d28_1:8.d = 0xffffffff << (rdx_119.b & 0x1f)
                                        uint64_t performanceCount_2 = var_d28_1:8.q u>> 0x20
                                        zmm2_3 = _mm_unpackhi_pd(zmm2_3, zmm2_3[0])
                                        performanceCount = performanceCount_2
                                        int128_t var_d88 = (&data_1439c9630).o
                                        int128_t var_d78_1 = zmm1_4
                                        int64_t var_d68_1 = zmm2_3.q
                                        
                                        while (true)
                                            int64_t rax_168 = sx.q(var_d78_1:0xc.d)
                                            int64_t* rcx_261 = var_d88.q
                                            
                                            if (rax_168.d == performanceCount_2.d
                                                    && var_d78_1.q == r8_28
                                                    && rcx_261 == performanceCount_3)
                                                break
                                            
                                            int64_t r13_1 = *rcx_261
                                            int64_t r12_6 = rax_168 * 5
                                            sub_140b65060()
                                            int32_t rax_169 = 0
                                            int64_t var_f80 = 0
                                            int32_t rdi_16 = 0
                                            int64_t var_f78_1 = 0
                                            
                                            if (data_143e189c0 != 0)
                                                int64_t rbx_44 = -1
                                                
                                                do
                                                    rbx_44 += 1
                                                while ((&data_143e189c0)[rbx_44] != 0)
                                                
                                                if (rbx_44.d + 1 s> 0)
                                                    sub_1405947f0(&var_f80, rbx_44.d + 1)
                                                    rax_169 = var_f78_1:4.d
                                                    rdi_16 = var_f78_1.d
                                                
                                                rdi_16 += rbx_44.d + 1
                                                var_f78_1.d = rdi_16
                                                
                                                if (rdi_16 s> rax_169)
                                                    sub_140594770(&var_f80)
                                                    rdi_16 = var_f78_1.d
                                                
                                                UnDecorator::getReferenceType(var_f80, 
                                                    &data_143e189c0, (rbx_44.d + 1) * 2)
                                            
                                            int32_t rax_170 = *(r13_1 + (r12_6 << 3) + 0x18)
                                            int32_t rbx_46 = rax_170 - 1
                                            
                                            if (rax_170 == 0)
                                                rbx_46 = 0
                                            
                                            int32_t rax_172
                                            
                                            if (rdi_16 == 0)
                                                rax_172 = rdi_16 + 2
                                            
                                            if (rdi_16 != 0 || rbx_46 == 0xffffffff)
                                                rax_172 = 1
                                            
                                            int16_t* var_ed0
                                            sub_140596690(&var_ed0, &var_f80, rax_172 + rbx_46)
                                            sub_140a2cf70(&var_ed0, *(r13_1 + (r12_6 << 3) + 0x10), 
                                                rbx_46)
                                            int64_t rcx_267 = var_f80
                                            
                                            if (rcx_267 != 0)
                                                sub_140a74f90(rcx_267)
                                            
                                            sub_140a464c0()
                                            int16_t* const r8_33 = &data_142d40450
                                            int32_t var_ec8
                                            
                                            if (var_ec8 != 0)
                                                r8_33 = var_ed0
                                            
                                            char const (* r9_9)[0x4] = data_14399ea08
                                            int16_t* var_e68
                                            (*(r9_9 + 0x100))(&data_14399ea08, &var_e68, r8_33, 
                                                r9_9, var_fd8)
                                            Concurrency::details::UMSThreadProxy::InternalSwitchTo(
                                                &var_ed0)
                                            int16_t* const rdx_126 = &data_142d40450
                                            int16_t* const rcx_269 = &data_142d40450
                                            int32_t var_e60
                                            
                                            if (var_e60 != 0)
                                                rdx_126 = var_e68
                                            
                                            if (var_ec8 != 0)
                                                rcx_269 = var_ed0
                                            
                                            if (sub_140a54510(rcx_269, rdx_126) != 0)
                                                sub_140a464c0()
                                                int16_t* const rdx_127 = &data_142d40450
                                                
                                                if (var_e60 != 0)
                                                    rdx_127 = var_e68
                                                
                                                (*(data_14399ea08 + 0x60))(&data_14399ea08, 
                                                    rdx_127, 0, 1)
                                            
                                            int16_t* rcx_270 = var_e68
                                            
                                            if (rcx_270 != 0)
                                                sub_140a74f90(rcx_270)
                                            
                                            int16_t* rcx_271 = var_ed0
                                            
                                            if (rcx_271 != 0)
                                                sub_140a74f90(rcx_271)
                                            
                                            var_d78_1:8.d &= not.d(var_d88:0xc.d)
                                            sub_14059bdd0(&var_d88:8)
                                            performanceCount_2 = performanceCount
                                            r8_28 = var_e78
                                            performanceCount_3 = performanceCount_1
                                        
                                        sub_140a3fa40()
                                        pdb_internal::Array<struct FileLCRec* __ptr64>::~Array<struct FileLCRec* __ptr64>(
                                            &var_820)
                                        r13 = var_fa0
                                        rsi_9 = var_fc7
                                
                                sub_140b19e60()
                                void* r8_34 = data_1439a8bd0
                                (*(r8_34 + 0x60))(&data_1439a8bd0, 0, r8_34)
                                sub_140ab2760()
                                sub_140e6aa80(0)
                                int128_t zmm7_4 = sub_142099300()
                                
                                if (sub_140b011d0() != 0)
                                    void* rcx_274 = data_143ddb400
                                    var_fd8.q = &data_143de5780
                                    var_fc7 = 0
                                    zmm7_4 = sub_140af2fd0(rcx_274, Audio", UseAudioThread"
                                        , &var_fc7, var_fd8)
                                    sub_141e87c30(var_fc7)
                                
                                if (sub_140a54810() == 0)
                                    goto label_1405a3191
                                
                                int512_t zmm1_5
                                int512_t zmm2_4
                                int128_t zmm6_4
                                
                                if (var_fc8_1 == 0)
                                    sub_140d4a9f0()
                                    zmm1_5, zmm2_4, zmm6_4 = sub_140e219b0()
                                else
                                    void var_808
                                    pdb_internal::Array<struct DBI1::SrcMap>::Array<struct DBI1::SrcMap>(
                                        &var_808)
                                    sub_140d887f0()
                                    pdb_internal::Array<struct FileLCRec* __ptr64>::~Array<struct FileLCRec* __ptr64>(
                                        &var_808)
                                label_1405a3191:
                                    
                                    if (var_fc8_1 == 0)
                                        sub_140d4a9f0()
                                        zmm1_5, zmm2_4, zmm6_4 = sub_140e219b0()
                                    else
                                        void var_7f0
                                        pdb_internal::Array<struct DBI1::SrcMap>::Array<struct DBI1::SrcMap>(
                                            &var_7f0)
                                        zmm2_4, zmm6_4, zmm7_4 = sub_140e5ce70()
                                        pdb_internal::Array<struct FileLCRec* __ptr64>::~Array<struct FileLCRec* __ptr64>(
                                            &var_7f0)
                                
                                zmm2_4.o = zmm6_4
                                zmm1_5.o = zmm7_4
                                int64_t* rax_179 = j_sub_140a82f30(0x68)
                                int64_t* rdi_17 = rax_179
                                void var_7d8
                                
                                if (rax_179 == 0)
                                    rdi_17 = nullptr
                                else
                                    r13 |= 0x10
                                    var_fd8.q = data_143ddb418
                                    sub_140b2f260(rdi_17, 0x42c80000, 
                                        _vfprintf_p_l(&var_7d8, Initializing...", EngineLoop"), 1, 
                                        var_fd8)
                                    sub_140b40000(rdi_17)
                                
                                void* r12_7 = var_e70
                                *(r12_7 + 0x80) = rdi_17
                                
                                if ((r13.b & 0x10) != 0)
                                    r13 &= 0xffffffef
                                    sub_1405970a0(&var_7d8)
                                    rdi_17 = *(r12_7 + 0x80)
                                
                                void var_7c0
                                sub_140b389c0(rdi_17, 0x41200000, sub_140a96170(&var_7c0))
                                sub_1405970a0(&var_7c0)
                                int64_t var_608_1 = 0
                                void** const var_5f8_1 = &data_142d42d18
                                int64_t (* var_618)(int64_t arg1, void* arg2) = j_sub_140597e60
                                sub_140ba93d0()
                                sub_140babc80(&data_143e1a5e0, &var_618)
                                void var_7a8
                                pdb_internal::Array<struct DBI1::SrcMap>::Array<struct DBI1::SrcMap>(
                                    &var_7a8)
                                sub_1419d1610()
                                pdb_internal::Array<struct FileLCRec* __ptr64>::~Array<struct FileLCRec* __ptr64>(
                                    &var_7a8)
                                void var_790
                                pdb_internal::Array<struct DBI1::SrcMap>::Array<struct DBI1::SrcMap>(
                                    &var_790)
                                sub_14197f0c0(0)
                                pdb_internal::Array<struct FileLCRec* __ptr64>::~Array<struct FileLCRec* __ptr64>(
                                    &var_790)
                                void var_778
                                pdb_internal::Array<struct DBI1::SrcMap>::Array<struct DBI1::SrcMap>(
                                    &var_778)
                                sub_1419aa8d0()
                                pdb_internal::Array<struct FileLCRec* __ptr64>::~Array<struct FileLCRec* __ptr64>(
                                    &var_778)
                                void var_760
                                pdb_internal::Array<struct DBI1::SrcMap>::Array<struct DBI1::SrcMap>(
                                    &var_760)
                                sub_1419d02b0(data_143f0f1a0)
                                pdb_internal::Array<struct FileLCRec* __ptr64>::~Array<struct FileLCRec* __ptr64>(
                                    &var_760)
                                void var_748
                                pdb_internal::Array<struct DBI1::SrcMap>::Array<struct DBI1::SrcMap>(
                                    &var_748)
                                int128_t zmm7_3 = sub_1419d14d0(data_143f0f1a0)
                                pdb_internal::Array<struct FileLCRec* __ptr64>::~Array<struct FileLCRec* __ptr64>(
                                    &var_748)
                                sub_140af2b60()
                                rbx_43.b = sub_140b21a10(&data_143dbb3f0, u"NoShaderCompile") == 0
                                void var_730
                                pdb_internal::Array<struct DBI1::SrcMap>::Array<struct DBI1::SrcMap>(
                                    &var_730)
                                sub_142006940()
                                pdb_internal::Array<struct FileLCRec* __ptr64>::~Array<struct FileLCRec* __ptr64>(
                                    &var_730)
                                
                                if (rbx_43.b != 0)
                                    void var_718
                                    pdb_internal::Array<struct DBI1::SrcMap>::Array<struct DBI1::SrcMap>(
                                        &var_718)
                                    sub_1419d2010()
                                    pdb_internal::Array<struct FileLCRec* __ptr64>::~Array<struct FileLCRec* __ptr64>(
                                        &var_718)
                                
                                sub_140b26d80(5)
                                void var_700
                                int512_t zmm2_5
                                int128_t zmm6_3
                                zmm2_5, zmm6_3 =
                                    sub_140b389c0(rdi_17, 0x41f00000, sub_140a96170(&var_700))
                                sub_1405970a0(&var_700)
                                
                                if (rbx_43.b == 0 || rsi_9 != 0)
                                    goto label_1405a3514
                                
                                void var_b50
                                pdb_internal::Array<struct DBI1::SrcMap>::Array<struct DBI1::SrcMap>(
                                    &var_b50)
                                zmm2_5, zmm6_3, zmm7_3 = sub_1422dfe10(0)
                                void* rcx_309 = &var_b50
                                
                                if (data_143de5432 == rsi_9)
                                    pdb_internal::Array<struct FileLCRec* __ptr64>::~Array<struct FileLCRec* __ptr64>(
                                        rcx_309)
                                label_1405a3514:
                                    void var_6e8
                                    pdb_internal::Array<struct DBI1::SrcMap>::Array<struct DBI1::SrcMap>(
                                        &var_6e8)
                                    sub_141d873e0()
                                    pdb_internal::Array<struct FileLCRec* __ptr64>::~Array<struct FileLCRec* __ptr64>(
                                        &var_6e8)
                                    
                                    if (sub_1418b0630() != 0)
                                        void var_6d0
                                        pdb_internal::Array<struct DBI1::SrcMap>::Array<struct DBI1::SrcMap>(
                                            &var_6d0)
                                        sub_1405997a0()
                                        pdb_internal::Array<struct FileLCRec* __ptr64>::~Array<struct FileLCRec* __ptr64>(
                                            &var_6d0)
                                    
                                    void var_6b8
                                    pdb_internal::Array<struct DBI1::SrcMap>::Array<struct DBI1::SrcMap>(
                                        &var_6b8)
                                    sub_14059e8e0()
                                    pdb_internal::Array<struct FileLCRec* __ptr64>::~Array<struct FileLCRec* __ptr64>(
                                        &var_6b8)
                                    
                                    if (data_143f138f5 != 0)
                                        if (data_143f0f223 != 0)
                                            data_143f01c90 = 1
                                            sub_140af2b60()
                                            
                                            if (sub_140b21a10(&data_143dbb3f0, u"rhithread") == 0)
                                                sub_140af2b60()
                                                char rax_187 =
                                                    sub_140b21a10(&data_143dbb3f0, norhithread")
                                                char rdx_142 = data_143f01c90
                                                
                                                if (rax_187 != 0)
                                                    rdx_142 = 0
                                                
                                                data_143f01c90 = rdx_142
                                            else
                                                data_143f01c90 = 1
                                        
                                        void var_6a0
                                        pdb_internal::Array<struct DBI1::SrcMap>::Array<struct DBI1::SrcMap>(
                                            &var_6a0)
                                        zmm2_5, zmm6_3, zmm7_3 = sub_1419af2a0()
                                        pdb_internal::Array<struct FileLCRec* __ptr64>::~Array<struct FileLCRec* __ptr64>(
                                            &var_6a0)
                                    
                                    zmm2_5.o = zmm6_3
                                    int512_t zmm1_9
                                    zmm1_9.o = zmm7_3
                                    
                                    if (data_143de5426 != 0)
                                    label_1405a38cb:
                                        *(r12_7 + 0x58) = rax_131
                                        *(r12_7 + 0x59) = rax_132
                                        *(r12_7 + 0x5a) = var_fc5
                                        *(r12_7 + 0x5f) = var_fc6_2
                                        *(r12_7 + 0x5b) = 0
                                        *(r12_7 + 0x5d) = 0
                                        *(r12_7 + 0x5e) = var_fc8_1
                                        sub_140597df0(r12_7 + 0x60, &var_fc0)
                                        *(r12_7 + 0x70) = var_ec0
                                        *(r12_7 + 0x78) = var_fa8.q
                                        r15 = 0
                                    else
                                        void var_b98
                                        void var_b88
                                        int64_t* rax_189
                                        void* rdx_145
                                        int32_t r13_2
                                        
                                        if (data_143f0f1d4 == 0)
                                            j_sub_140b3db50()
                                            int64_t rbx_48 =
                                                *sub_140b58170(&var_fa0, "SlateRHIRenderer", 1)
                                            j_sub_140b3db50()
                                            rax_189 = sub_140b3da90(&data_143de7d78, rbx_48)
                                            r13_2 = r13 | 0x40
                                            rdx_145 = &var_b98
                                        else
                                            j_sub_140b3db50()
                                            int64_t rbx_47 =
                                                *sub_140b58170(&var_e70, "SlateNullRenderer", 1)
                                            j_sub_140b3db50()
                                            rax_189 = j_sub_140b407e0(&data_143de7d78, rbx_47)
                                            r13_2 = r13 | 0x20
                                            rdx_145 = &var_b88
                                        
                                        int64_t r8_38 = *rax_189
                                        int64_t* rax_191 =
                                            (*(r8_38 + 0x40))(rax_189, rdx_145, r8_38)
                                        void* rbx_49 = rax_191[1]
                                        int64_t rdi_18 = *rax_191
                                        int64_t var_df8 = rdi_18
                                        void* var_df0_1 = rbx_49
                                        
                                        if (rbx_49 != 0)
                                            *(rbx_49 + 8) += 1
                                        
                                        if ((r13_2.b & 0x40) != 0)
                                            r13_2 &= 0xffffffbf
                                            sub_140597060(&var_b98)
                                        
                                        if ((r13_2.b & 0x20) != 0)
                                            sub_140597060(&var_b88)
                                        
                                        int64_t var_da8 = rdi_18
                                        void* var_da0_1 = rbx_49
                                        
                                        if (rbx_49 != 0)
                                            *(rbx_49 + 8) += 1
                                        
                                        void var_688
                                        pdb_internal::Array<struct DBI1::SrcMap>::Array<struct DBI1::SrcMap>(
                                            &var_688)
                                        int64_t* rcx_333 = data_143e29f28
                                        int64_t var_cf8 = rdi_18
                                        void* var_cf0_1 = rbx_49
                                        
                                        if (rbx_49 != 0)
                                            *(rbx_49 + 8) += 1
                                        
                                        (*(*rcx_333 + 0x198))(rcx_333, &var_cf8, 0)
                                        pdb_internal::Array<struct FileLCRec* __ptr64>::~Array<struct FileLCRec* __ptr64>(
                                            &var_688)
                                        void var_670
                                        pdb_internal::Array<struct DBI1::SrcMap>::Array<struct DBI1::SrcMap>(
                                            &var_670)
                                        sub_142404980()
                                        pdb_internal::Array<struct FileLCRec* __ptr64>::~Array<struct FileLCRec* __ptr64>(
                                            &var_670)
                                        void var_b38
                                        pdb_internal::Array<struct DBI1::SrcMap>::Array<struct DBI1::SrcMap>(
                                            &var_b38)
                                        int64_t* rax_193 = sub_140b7c590()
                                        int64_t r8_39 = *rax_193
                                        char rax_194 = (*(r8_39 + 0x18))(rax_193, 2, r8_39)
                                        char rax_195
                                        
                                        if (rax_194 != 0)
                                            sub_140b7c510()
                                            int64_t r8_40 = data_143e19eb0
                                            rax_195 = (*(r8_40 + 0x18))(&data_143e19eb0, 2, r8_40)
                                        
                                        if (rax_194 != 0 && rax_195 != 0)
                                            pdb_internal::Array<struct FileLCRec* __ptr64>::~Array<struct FileLCRec* __ptr64>(
                                                &var_b38)
                                            void var_ad8
                                            pdb_internal::Array<struct DBI1::SrcMap>::Array<struct DBI1::SrcMap>(
                                                &var_ad8)
                                            
                                            if (data_143efaed8 != 0)
                                                void var_af0
                                                pdb_internal::Array<struct DBI1::SrcMap>::Array<struct DBI1::SrcMap>(
                                                    &var_af0)
                                                sub_1418b4a80(data_143efaed8, rdi_18)
                                                double zmm0_4[0x2] = pdb_internal::Array<struct FileLCRec* __ptr64>::~Array<struct FileLCRec* __ptr64>(
                                                    &var_af0)
                                                
                                                if (sub_1418b49e0(data_143efaed8, 0) != 0)
                                                    sub_1418b70a0(data_143efaed8, 0, zmm0_4)
                                            
                                            pdb_internal::Array<struct FileLCRec* __ptr64>::~Array<struct FileLCRec* __ptr64>(
                                                &var_ad8)
                                            int128_t zmm1_10 = var_df8.o
                                            int128_t var_db8 = zmm1_10
                                            
                                            if (rbx_49 != 0)
                                                *(rbx_49 + 8) += 1
                                            
                                            if (&var_db8 != r12_7 + 0x88)
                                                int128_t zmm0_5 = *(r12_7 + 0x88)
                                                *(r12_7 + 0x88) = zmm1_10
                                                var_db8 = zmm0_5
                                            
                                            int64_t* rbx_50 = var_db8:8.q
                                            
                                            if (rbx_50 != 0)
                                                rbx_50[1].d -= 1
                                                
                                                if (rbx_50[1].d == 1)
                                                    (**rbx_50)(rbx_50)
                                                    int32_t temp5_1 = *(rbx_50 + 0xc)
                                                    *(rbx_50 + 0xc) -= 1
                                                    
                                                    if (temp5_1 == 1)
                                                        (*(*rbx_50 + 8))(rbx_50, 1)
                                            
                                            sub_140597060(&var_da8)
                                            sub_140597060(&var_df8)
                                            goto label_1405a38cb
                                        
                                        pdb_internal::Array<struct FileLCRec* __ptr64>::~Array<struct FileLCRec* __ptr64>(
                                            &var_b38)
                                        sub_140597060(&var_da8)
                                        sub_140597060(&var_df8)
                                        r15 = 1
                                else
                                    pdb_internal::Array<struct FileLCRec* __ptr64>::~Array<struct FileLCRec* __ptr64>(
                                        rcx_309)
                                    r15 = 1
                        else
                            r15 = 1
                    else
                        r15 = 1
                else
                    void var_b68
                    pdb_internal::Array<struct DBI1::SrcMap>::Array<struct DBI1::SrcMap>(&var_b68)
                    int64_t* rax_117 = sub_140b7c590()
                    int64_t var_bc8
                    char rax_119 = (*(*rax_117 + 0x10))(rax_117, sub_140b1aa20(&var_bc8))
                    int64_t rcx_175 = var_bc8
                    int64_t* rbx_27
                    rbx_27.b = rax_119 == 0
                    
                    if (rcx_175 != 0)
                        sub_140a74f90(rcx_175)
                    
                    if (rbx_27.b == 0)
                        int64_t* rax_120 = sub_140b7c590()
                        int64_t rdx_76 = *rax_120
                        char rax_121 = (*(rdx_76 + 0x98))(rax_120, rdx_76)
                        int64_t var_bb8
                        char rax_123
                        
                        if (rax_121 != 0)
                            r13 |= 8
                            var_fa0 = r13
                            rax_123 = sub_140b12f50(sub_140b14620(&var_bb8))
                        
                        if (rax_121 == 0 || rax_123 == 0)
                            rbx_27.b = 0
                        else
                            rbx_27 = 1
                        
                        if ((r13.b & 8) != 0)
                            r13 &= 0xfffffff7
                            var_fa0 = r13
                            int64_t rcx_180 = var_bb8
                            
                            if (rcx_180 != 0)
                                sub_140a74f90(rcx_180)
                        
                        if (rbx_27.b != 0)
                            int64_t var_ba8
                            int64_t* rax_124 = sub_140b14620(&var_ba8)
                            int16_t* const var_498
                            
                            if (rax_124[1].d == 0)
                                var_498 = &data_142d40450
                            else
                                var_498 = *rax_124
                            
                            wchar16 const* const var_488_1 = u"Win64"
                            wchar16 const* const var_490_1 = u"Binaries"
                            uint64_t var_eb8 = 0
                            int32_t var_eb0_1 = 0
                            sub_140b0f5f0(&var_eb8, &var_498, 3)
                            int16_t* const rbx_28 = &data_142d40450
                            
                            if (var_eb0_1 != 0)
                                rbx_28 = var_eb8
                            
                            j_sub_140b3db50()
                            sub_140b32c90(&data_143de7d78, rbx_28, 0)
                            uint64_t rcx_184 = var_eb8
                            
                            if (rcx_184 != 0)
                                sub_140a74f90(rcx_184)
                            
                            int64_t rcx_185 = var_ba8
                            
                            if (rcx_185 != 0)
                                sub_140a74f90(rcx_185)
                        
                        pdb_internal::Array<struct FileLCRec* __ptr64>::~Array<struct FileLCRec* __ptr64>(
                            &var_b68)
                        goto label_1405a23eb
                    
                    pdb_internal::Array<struct FileLCRec* __ptr64>::~Array<struct FileLCRec* __ptr64>(
                        &var_b68)
                    r15 = 1
                
                int16_t* rcx_310 = var_f10
                
                if (rcx_310 != 0)
                    sub_140a74f90(rcx_310)
                
                sub_140597000(&var_ea8)
                sub_140597000(&var_e98)
                int16_t* rcx_313 = var_fc0
                
                if (rcx_313 != 0)
                    sub_140a74f90(rcx_313)
            else
                int32_t rdx_41 = 0
                int32_t rcx_70 = 0
                int32_t var_f68_1 = 0
                int32_t var_f64_1 = 0
                int64_t var_f70 = 0
                
                if ((*u"Embers")[0] != 0)
                    int64_t rbx_9 = -1
                    
                    do
                        rbx_9 += 1
                    while ((*u"Embers")[rbx_9] != 0)
                    
                    if (rbx_9.d + 1 s> 0)
                        sub_1405947f0(&var_f70, rbx_9.d + 1)
                        rcx_70 = var_f64_1
                        rdx_41 = var_f68_1
                    
                    int32_t rax_39 = rdx_41 + rbx_9.d + 1
                    int32_t var_f68_2 = rax_39
                    
                    if (rax_39 s> rcx_70)
                        sub_140594770(&var_f70)
                    
                    UnDecorator::getReferenceType(var_f70, u"Embers", (rbx_9.d + 1) * 2)
                
                int64_t var_d48
                sub_140aae2f0(&var_d48, &var_f70)
                int64_t rcx_75 = var_f70
                
                if (rcx_75 != 0)
                    sub_140a74f90(rcx_75)
                
                int64_t rdi_1 = var_d48
                int64_t* var_d40
                
                if (var_d40 != 0)
                    var_d40[1].d += 1
                
                void var_9a0
                char* var_658
                char** rax_41 = sub_140a96390(&var_658, 
                    _vfprintf_p_l(&var_9a0, 
                        Error: UE4Editor does not append 'Game' to the passed in game name.\nYou must use "
                "the full name.\nYou specified '{0}', use '{0}Game'.", 
                    LaunchEngineLoop"))
                int32_t var_5d8_1 = 4
                
                if (var_d40 != 0)
                    var_d40[1].d += 1
                
                int32_t* var_e38 = nullptr
                char var_5b0_1 = 1
                int32_t var_e30_1 = 1
                sub_1405a4b40(&var_e38, 1, 0)
                int32_t* rcx_79 = var_e38
                *rcx_79 = var_5d8_1
                int64_t var_5d0
                *(rcx_79 + 8) = var_5d0
                *(rcx_79 + 8) = var_5d0
                rcx_79[2] = var_5d0.d
                *(rcx_79 + 8) = var_5d0
                rcx_79[0xa].b = 0
                
                if (var_5b0_1 != 0)
                    *(rcx_79 + 0x10) = rdi_1
                    *(rcx_79 + 0x18) = var_d40
                    
                    if (var_d40 != 0)
                        var_d40[1].d += 1
                    
                    int32_t var_d38
                    rcx_79[8] = var_d38
                    rcx_79[0xa].b = 1
                
                char* var_ce8 = *rax_41
                void* rax_49 = rax_41[1]
                void* var_ce0_1 = rax_49
                
                if (rax_49 != 0)
                    *(rax_49 + 8) += 1
                
                void var_a60
                int64_t* rax_50 = sub_140aac870(&var_a60, &var_ce8, &var_e38)
                int64_t var_d60 = *rax_50
                int64_t* rcx_82 = rax_50[1]
                
                if (rcx_82 != 0)
                    rcx_82[1].d += 1
                
                int32_t var_d50_1 = rax_50[2].d
                int64_t* var_a58
                
                if (var_a58 != 0)
                    var_a58[1].d -= 1
                    
                    if (var_a58[1].d == 1)
                        (**var_a58)(var_a58)
                        int32_t rax_54 = *(var_a58 + 0xc)
                        *(var_a58 + 0xc) -= 1
                        
                        if (rax_54 == 1)
                            (*(*var_a58 + 8))(var_a58, 1)
                
                sub_140596f50(&var_e38)
                
                if (var_5b0_1 != 0)
                    char var_5b0_2 = 0
                    
                    if (var_d40 != 0)
                        var_d40[1].d -= 1
                        
                        if (var_d40[1].d == 1)
                            (**var_d40)(var_d40)
                            int32_t rax_58 = *(var_d40 + 0xc)
                            *(var_d40 + 0xc) -= 1
                            
                            if (rax_58 == 1)
                                (*(*var_d40 + 8))(var_d40, 1)
                
                int64_t* rdi_4 = rax_41[1]
                
                if (rdi_4 != 0)
                    rdi_4[1].d -= 1
                    
                    if (rdi_4[1].d == 1)
                        (**rdi_4)(rdi_4)
                        int32_t rax_62 = *(rdi_4 + 0xc)
                        *(rdi_4 + 0xc) -= 1
                        
                        if (rax_62 == 1)
                            (*(*rdi_4 + 8))(rdi_4, 1)
                
                if (var_d40 != 0)
                    var_d40[1].d -= 1
                    
                    if (var_d40[1].d == 1)
                        (**var_d40)(var_d40)
                        int32_t rax_66 = *(var_d40 + 0xc)
                        *(var_d40 + 0xc) -= 1
                        
                        if (rax_66 == 1)
                            (*(*var_d40 + 8))(var_d40, 1)
                
                sub_140b21610(0, &var_d60, nullptr)
                
                if (rcx_82 != 0)
                    rcx_82[1].d -= 1
                    
                    if (rcx_82[1].d == 1)
                        (**rcx_82)(rcx_82)
                        int32_t rax_70 = *(rcx_82 + 0xc)
                        *(rcx_82 + 0xc) -= 1
                        
                        if (rax_70 == 1)
                            (*(*rcx_82 + 8))(rcx_82, 1)
                
                int64_t* var_998
                
                if (var_998 != 0)
                    var_998[1].d -= 1
                    
                    if (var_998[1].d == 1)
                        (**var_998)(var_998)
                        int32_t r15_1 = *(var_998 + 0xc)
                        *(var_998 + 0xc) -= 1
                        
                        if (r15_1 == 1)
                            (*(*var_998 + 8))(var_998, 1)
                
                sub_1405970a0(&var_d48)
                r15 = 1
        else
            r15 = 1
    else
        r15 = 1
    
    uint64_t rcx_314 = var_e88
    
    if (rcx_314 != 0)
        sub_140a74f90(rcx_314)

pdb_internal::Array<struct FileLCRec* __ptr64>::~Array<struct FileLCRec* __ptr64>(&var_9b8)
__security_check_cookie(rax_1 ^ &var_ff8)
return zx.q(r15)
