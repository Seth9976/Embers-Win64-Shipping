// 函数: sub_1428141f0
// 地址: 0x1428141f0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

char const* const r9 = "target"

if (arg3 == 1)
    r9 = "source"

sub_142817350(*arg1, 1, "Loading %s meta-data...\n", r9)
arg1[1].d = arg3
arg1[9].b = 0
int32_t var_258
int64_t r9_1 = (**arg2)(arg2, &var_258, 4)
int32_t rax_1 = var_258

if (rax_1 != 0x4154454d)
    if (rax_1 != 0x4d455441)
        sub_142817350(*arg1, 4, "PxBinaryConverter: invalid meta-data file!\n", r9_1)
        int64_t rax_149
        rax_149.b = 0
        return rax_149
    
    arg1[9].b = 1
else
    arg1[9].b = 0

if (arg3 == 1 && arg1[9].b != 0)
    sub_142817350(*arg1, arg3 + 3, 
        "PxBinaryConverter: source meta data needs to match endianness with current system!", r9_1)
    int64_t rax_2
    rax_2.b = 0
    return rax_2

(**arg2)(arg2, &arg1[6], 4)
(**arg2)(arg2, arg1 + 0x34, 4)

if (arg1[9].b != 0)
    arg1[6].b = *(arg1 + 0x33)
    char rax_6 = *(arg1 + 0x32)
    *(arg1 + 0x33) = arg1[6].b
    char rcx_6 = *(arg1 + 0x31)
    *(arg1 + 0x31) = rax_6
    *(arg1 + 0x32) = rcx_6
    char rcx_7 = *(arg1 + 0x34)
    *(arg1 + 0x34) = *(arg1 + 0x37)
    char rax_8 = *(arg1 + 0x36)
    *(arg1 + 0x37) = rcx_7
    char rcx_8 = *(arg1 + 0x35)
    *(arg1 + 0x35) = rax_8
    *(arg1 + 0x36) = rcx_8

void** rax_11

if (sub_1427f5760(arg1[6].d, *(arg1 + 0x34)) != 0)
    (**arg2)(arg2, &arg1[7], 4)
    
    if (arg1[9].b != 0)
        arg1[7].b = *(arg1 + 0x3b)
        char rax_14 = *(arg1 + 0x3a)
        *(arg1 + 0x3b) = arg1[7].b
        char rcx_14 = *(arg1 + 0x39)
        *(arg1 + 0x39) = rax_14
        *(arg1 + 0x3a) = rcx_14
    
    (**arg2)(arg2, arg1 + 0x3c, 4)
    
    if (arg1[9].b != 0)
        char rcx_16 = *(arg1 + 0x3c)
        *(arg1 + 0x3c) = *(arg1 + 0x3f)
        char rax_17 = *(arg1 + 0x3e)
        *(arg1 + 0x3f) = rcx_16
        char rcx_17 = *(arg1 + 0x3d)
        *(arg1 + 0x3d) = rax_17
        *(arg1 + 0x3e) = rcx_17
    
    int64_t r9_3 = (**arg2)(arg2, &arg1[8], 4)
    
    if (arg1[9].b != 0)
        arg1[8].b = *(arg1 + 0x43)
        char rax_20 = *(arg1 + 0x42)
        *(arg1 + 0x43) = arg1[8].b
        char rdx_9 = *(arg1 + 0x41)
        *(arg1 + 0x41) = rax_20
        *(arg1 + 0x42) = rdx_9
    
    if (sub_1427f56f0(arg1[8].d) != 0)
        (**arg2)(arg2, arg1 + 0x44, 4)
        
        if (arg1[9].b != 0)
            char rcx_22 = *(arg1 + 0x44)
            *(arg1 + 0x44) = *(arg1 + 0x47)
            char rax_24 = *(arg1 + 0x46)
            *(arg1 + 0x47) = rcx_22
            char rcx_23 = *(arg1 + 0x45)
            *(arg1 + 0x45) = rax_24
            *(arg1 + 0x46) = rcx_23
        
        (**arg2)(arg2, arg1 + 0xc, 4)
        
        if (arg1[9].b != 0)
            char rcx_25 = *(arg1 + 0xc)
            *(arg1 + 0xc) = *(arg1 + 0xf)
            char rax_27 = *(arg1 + 0xe)
            *(arg1 + 0xf) = rcx_25
            char rcx_26 = *(arg1 + 0xd)
            *(arg1 + 0xd) = rax_27
            *(arg1 + 0xe) = rcx_26
        
        uint64_t rsi_1 = zx.q(*(arg1 + 0xc))
        int64_t rdi_1 = 0x28 * rsi_1
        
        if (mulu.dp.q(0x28, rsi_1) u>> 0x40 != zx.o(0))
            rdi_1 = -1
        
        int32_t var_308
        int64_t rax_33
        int64_t rdi_2
        
        if (rdi_1 != 0)
            class physx::PxAllocatorCallback* rax_29 = physx::shdfnd::getAllocator()
            int64_t rax_30 = PxGetFoundation()
            int64_t rdx_12 = *rax_30
            char const* const rax_32
            
            if ((*(rdx_12 + 0x28))(rax_30, rdx_12) != 0)
                rax_32 = __std_type_info_name(&data_143ccd1f8, &data_14401b730)
            else
                rax_32 = "<allocation names disabled>"
            
            var_308 = 0x176
            rax_33 = (*(*rax_29 + 8))(rax_29, rdi_1, rax_32, 
                "D:\Build\++Fortnite\Sync\Engine\Source\ThirdParty\PhysX3\PhysX_3.4\Source\P"
            "hysXExtensions\src\serialization\Binary\SnConvX_MetaData.cpp", 
                0x176)
            rdi_2 = rax_33
        
        if (rdi_1 == 0 || rax_33 == 0)
            rdi_2 = 0
        else if (rsi_1 != 0)
            memset(rax_33, 0, rsi_1 * 0x28)
        
        bool cond:3_1 = *(arg1 + 0x3c) != 8
        int32_t i = 0
        arg1[2] = rdi_2
        int32_t var_2d8
        int32_t var_2c8
        int32_t var_2d4
        int32_t var_2d0
        int32_t var_2cc
        int32_t var_2c4
        int32_t var_2c0
        int32_t var_2bc
        
        if (cond:3_1)
            if (*(arg1 + 0xc) s> 0)
                int64_t* rdi_4 = nullptr
                
                do
                    (**arg2)(arg2, &var_2d8, 0x20)
                    
                    if (arg1[9].b != 0)
                        var_2d8.b = var_2d8:3.b
                        var_2d8:3.b = var_2d8.b
                        var_2d8:1.b = var_2d8:2.b
                        var_2d8:2.b = var_2d8:1.b
                        char rcx_50 = var_2d4.b
                        var_2d4.b = var_2d4:3.b
                        char rax_55 = var_2d4:2.b
                        var_2d4:3.b = rcx_50
                        char rcx_51 = var_2d4:1.b
                        var_2d4:1.b = rax_55
                        var_2d4:2.b = rcx_51
                    
                    i += 1
                    *(rdi_4 + arg1[2]) = sx.q(var_2d8)
                    *(rdi_4 + arg1[2] + 8) = sx.q(var_2d4)
                    *(rdi_4 + arg1[2] + 0x10) = var_2d0
                    *(rdi_4 + arg1[2] + 0x14) = var_2cc
                    *(rdi_4 + arg1[2] + 0x18) = var_2c8
                    *(rdi_4 + arg1[2] + 0x1c) = var_2c4
                    *(rdi_4 + arg1[2] + 0x20) = var_2c0
                    *(rdi_4 + arg1[2] + 0x24) = var_2bc
                    rdi_4 = &rdi_4[5]
                while (i s< *(arg1 + 0xc))
        else if (*(arg1 + 0xc) s> 0)
            int64_t* rdi_3 = nullptr
            
            do
                (**arg2)(arg2, &var_2d8, 0x28)
                
                if (arg1[9].b != 0)
                    var_2d8.b = var_2d4:3.b
                    char rax_36 = var_2d4:2.b
                    var_2d4:3.b = var_2d8.b
                    var_2d8:1.b = rax_36
                    char rax_37 = var_2d4:1.b
                    var_2d4:2.b = var_2d8:1.b
                    var_2d8:2.b = rax_37
                    char rax_38 = var_2d4.b
                    var_2d4:1.b = var_2d8:2.b
                    var_2d8:3.b = rax_38
                    var_2d4.b = var_2d8:3.b
                    char rcx_35 = var_2d0.b
                    var_2d0.b = var_2cc:3.b
                    char rax_40 = var_2cc:2.b
                    var_2cc:3.b = rcx_35
                    char rcx_36 = var_2d0:1.b
                    var_2d0:1.b = rax_40
                    char rax_41 = var_2cc:1.b
                    var_2cc:2.b = rcx_36
                    char rcx_37 = var_2d0:2.b
                    var_2d0:2.b = rax_41
                    char rax_42 = var_2cc.b
                    var_2cc:1.b = rcx_37
                    char rcx_38 = var_2d0:3.b
                    var_2d0:3.b = rax_42
                    var_2cc.b = rcx_38
                
                i += 1
                *(rdi_3 + arg1[2]) = var_2d8.q
                *(rdi_3 + arg1[2] + 8) = var_2d0.q
                *(rdi_3 + arg1[2] + 0x10) = var_2c8
                *(rdi_3 + arg1[2] + 0x14) = var_2c4
                *(rdi_3 + arg1[2] + 0x18) = var_2c0
                *(rdi_3 + arg1[2] + 0x1c) = var_2bc
                int32_t var_2b8
                *(rdi_3 + arg1[2] + 0x20) = var_2b8
                int32_t var_2b4
                *(rdi_3 + arg1[2] + 0x24) = var_2b4
                rdi_3 = &rdi_3[5]
            while (i s< *(arg1 + 0xc))
        
        if (arg1[9].b != 0)
            int32_t i_1 = 0
            
            if (*(arg1 + 0xc) s> 0)
                int64_t r8_3 = 0
                
                do
                    i_1 += 1
                    void* rdx_17 = arg1[2] + r8_3
                    char rcx_60 = *(rdx_17 + 0x10)
                    *(rdx_17 + 0x10) = *(rdx_17 + 0x13)
                    char rax_65 = *(rdx_17 + 0x12)
                    *(rdx_17 + 0x13) = rcx_60
                    char rcx_61 = *(rdx_17 + 0x11)
                    *(rdx_17 + 0x11) = rax_65
                    *(rdx_17 + 0x12) = rcx_61
                    void* rdx_19 = arg1[2] + r8_3
                    char rcx_62 = *(rdx_19 + 0x14)
                    *(rdx_19 + 0x14) = *(rdx_19 + 0x17)
                    char rax_67 = *(rdx_19 + 0x16)
                    *(rdx_19 + 0x17) = rcx_62
                    char rcx_63 = *(rdx_19 + 0x15)
                    *(rdx_19 + 0x15) = rax_67
                    *(rdx_19 + 0x16) = rcx_63
                    void* rdx_21 = arg1[2] + r8_3
                    char rcx_64 = *(rdx_21 + 0x18)
                    *(rdx_21 + 0x18) = *(rdx_21 + 0x1b)
                    char rax_69 = *(rdx_21 + 0x1a)
                    *(rdx_21 + 0x1b) = rcx_64
                    char rcx_65 = *(rdx_21 + 0x19)
                    *(rdx_21 + 0x19) = rax_69
                    *(rdx_21 + 0x1a) = rcx_65
                    void* rdx_23 = arg1[2] + r8_3
                    char rcx_66 = *(rdx_23 + 0x1c)
                    *(rdx_23 + 0x1c) = *(rdx_23 + 0x1f)
                    char rax_71 = *(rdx_23 + 0x1e)
                    *(rdx_23 + 0x1f) = rcx_66
                    char rcx_67 = *(rdx_23 + 0x1d)
                    *(rdx_23 + 0x1d) = rax_71
                    *(rdx_23 + 0x1e) = rcx_67
                    void* rdx_25 = arg1[2] + r8_3
                    char rcx_68 = *(rdx_25 + 0x20)
                    *(rdx_25 + 0x20) = *(rdx_25 + 0x23)
                    char rax_73 = *(rdx_25 + 0x22)
                    *(rdx_25 + 0x23) = rcx_68
                    char rcx_69 = *(rdx_25 + 0x21)
                    *(rdx_25 + 0x21) = rax_73
                    *(rdx_25 + 0x22) = rcx_69
                    void* rdx_27 = arg1[2] + r8_3
                    r8_3 += 0x28
                    char rcx_70 = *(rdx_27 + 0x24)
                    *(rdx_27 + 0x24) = *(rdx_27 + 0x27)
                    char rax_75 = *(rdx_27 + 0x26)
                    *(rdx_27 + 0x27) = rcx_70
                    char rcx_71 = *(rdx_27 + 0x25)
                    *(rdx_27 + 0x25) = rax_75
                    *(rdx_27 + 0x26) = rcx_71
                while (i_1 s< *(arg1 + 0xc))
        
        int32_t arg_8
        (**arg2)(arg2, &arg_8, 4)
        
        if (arg1[9].b != 0)
            arg_8.b = arg_8:3.b
            arg_8:3.b = arg_8.b
            arg_8:1.b = arg_8:2.b
            arg_8:2.b = arg_8:1.b
        
        int32_t rsi_2 = 0
        uint32_t var_288
        int32_t i_5
        int32_t arg_20
        
        if (arg_8 s> 0)
            do
                (**arg2)(arg2, &i_5, 2)
                (**arg2)(arg2, &arg_20, 4)
                
                if (arg1[9].b != 0)
                    i_5.b = i_5:1.b
                    i_5:1.b = i_5.b
                    arg_20.b = arg_20:3.b
                    arg_20:3.b = arg_20.b
                    arg_20:1.b = arg_20:2.b
                    arg_20:2.b = arg_20:1.b
                
                uint64_t rcx_80 = zx.q(arg1[0xb].d)
                int32_t rax_85 = *(arg1 + 0x5c) & 0x7fffffff
                uint32_t r8_4 = zx.d(i_5.w)
                int32_t r9_4 = arg_20
                var_288 = r8_4
                int32_t var_284_1 = r9_4
                
                if (rax_85 u> rcx_80.d)
                    uint32_t* rdx_32 = arg1[0xa] + (rcx_80 << 3)
                    
                    if (rdx_32 != 0)
                        *rdx_32 = r8_4
                        rdx_32[1] = r9_4
                    
                    arg1[0xb].d += 1
                else
                    sub_142816190(&arg1[0xa], &var_288)
                
                rsi_2 += 1
            while (rsi_2 s< arg_8)
        
        int32_t arg_10
        (**arg2)(arg2, &arg_10, 4)
        
        if (arg1[9].b != 0)
            arg_10.b = arg_10:3.b
            arg_10:3.b = arg_10.b
            arg_10:1.b = arg_10:2.b
            arg_10:2.b = arg_10:1.b
        
        int64_t r8_5 = sx.q(arg_10)
        int64_t rax_90
        
        if (r8_5.d != 0)
            class physx::PxAllocatorCallback* rax_91 = physx::shdfnd::getAllocator()
            var_308 = 0x1cd
            rax_90 = (*(*rax_91 + 8))(rax_91, r8_5, "NonTrackedAlloc", 
                "D:\Build\++Fortnite\Sync\Engine\Source\ThirdParty\PhysX3\PhysX_3.4\Source\P"
            "hysXExtensions\src\serialization\Binary\SnConvX_MetaData.cpp", 
                0x1cd)
            r8_5 = zx.q(arg_10)
        else
            rax_90 = 0
        
        arg1[3] = rax_90
        int64_t r9_5 = *arg2
        (*r9_5)(arg2, rax_90, r8_5, r9_5, var_308)
        int64_t var_2f0_1 = 0
        void (* var_2f8)(void* arg1, int64_t arg2, void* arg3) = sub_142816cc0
        int64_t var_298_1 = 0.q
        uint128_t var_2a8 = var_2f8.o
        var_308.q = &var_2a8
        sub_142815730(arg1, "bool", 1, 0, var_308)
        var_2f8 = sub_142816cc0
        int64_t var_2f0_2 = 0
        var_2a8 = var_2f8.o
        int64_t var_298_2 = 0.q
        var_308.q = &var_2a8
        sub_142815730(arg1, "char", 1, 0, var_308)
        int64_t var_2f0_3 = 0
        var_2f8 = sub_142816d70
        var_2a8 = var_2f8.o
        int64_t var_298_3 = 0.q
        var_308.q = &var_2a8
        sub_142815730(arg1, "short", 2, 0, var_308)
        int64_t var_2f0_4 = 0
        var_2f8 = sub_142816e10
        var_2a8 = var_2f8.o
        int64_t var_298_4 = 0.q
        var_308.q = &var_2a8
        sub_142815730(arg1, &data_1434d2c64, 4, 0, var_308)
        int64_t var_2f0_5 = 0
        var_2f8 = sub_142816ec0
        var_2a8 = var_2f8.o
        int64_t var_298_5 = 0.q
        var_308.q = &var_2a8
        sub_142815730(arg1, "PxU64", 8, 0, var_308)
        var_2f8 = sub_142816fb0
        int64_t var_2f0_6 = 0
        var_2a8 = var_2f8.o
        int64_t var_298_6 = 0.q
        var_308.q = &var_2a8
        sub_142815730(arg1, "float", 4, 0, var_308)
        int64_t var_2f0_7 = 0
        var_2f8 = sub_142816d00
        var_2a8 = var_2f8.o
        int64_t var_298_7 = 0.q
        var_308.q = &var_2a8
        sub_142815730(arg1, "paddingByte", 1, 0, var_308)
        bool cond:4_1 = *(arg1 + 0xc) s<= 0
        int128_t* r13_1 = nullptr
        i_5 = 0
        uint128_t var_280
        
        if (not(cond:4_1))
            int64_t* rdi_6 = nullptr
            int32_t i_2
            
            do
                int64_t* rcx_94 = arg1[2]
                uint64_t rax_92 = zx.q(*(rcx_94 + rdi_6))
                int64_t rax_93
                
                if (rax_92.d != 0xffffffff)
                    rax_93 = rax_92 + arg1[3]
                else
                    rax_93 = 0
                
                *(rcx_94 + rdi_6) = rax_93
                int64_t rcx_95 = arg1[2]
                uint64_t rax_94 = zx.q(*(rcx_95 + rdi_6 + 8))
                int64_t rax_95
                
                if (rax_94.d != 0xffffffff)
                    rax_95 = rax_94 + arg1[3]
                else
                    rax_95 = 0
                
                *(rcx_95 + rdi_6 + 8) = rax_95
                int64_t* rdx_37 = arg1[2] + rdi_6
                int32_t rax_96 = rdx_37[4].d
                
                if ((rax_96.b & 4) != 0)
                    var_308.q = *rdx_37
                    sub_142817350(*arg1, 1, "Found typedef: %s => %s\n", rdx_37[1])
                    int64_t* r15_2 = arg1[2]
                    uint64_t r9_7 = 0
                    int32_t r11_1 = arg1[5].d
                    int64_t rbx_1 = *(r15_2 + rdi_6 + 8)
                    
                    if (r11_1 == 0)
                    label_142814da1:
                        sub_142817350(*arg1, 0x20, 
                            "PxBinaryConverter: Invalid typedef - Missing metadata for: %s, please check "
                        "the source metadata.\n", 
                            rbx_1)
                    else
                        while (true)
                            uint128_t* j_11 = *(arg1[4] + (r9_7 << 3))
                            char* rax_98 = j_11[2].q
                            void* r8_7 = rbx_1 - rax_98
                            uint32_t j
                            uint32_t rdx_38
                            
                            do
                                rdx_38 = zx.d(*rax_98)
                                j = zx.d(*(rax_98 + r8_7))
                                
                                if (rdx_38 != j)
                                    break
                                
                                rax_98 = &rax_98[1]
                            while (j != 0)
                            
                            if (rdx_38 - j == 0)
                                for (uint128_t* j_1 = *(j_11 + 0x18); j_1 != 0; j_1 = *(j_1 + 0x18))
                                    j_11 = j_1
                                
                                int32_t r8_8 = *(j_11 + 0x28)
                                uint128_t zmm1_7 = zx.o(j_11[1].q)
                                int64_t rdx_40 = *(r15_2 + rdi_6)
                                var_2a8 = *j_11
                                uint64_t var_298_8 = zmm1_7.q
                                var_308.q = &var_2a8
                                sub_142815730(arg1, rdx_40, r8_8, j_11, var_308)
                                break
                            
                            r9_7 = zx.q(r9_7.d + 1)
                            
                            if (r9_7.d u>= r11_1)
                                goto label_142814da1
                else if ((rax_96.b & 1) == 0)
                    if (not(test_bit(rax_96, 8)))
                        goto label_142814fb5
                    
                    void* rcx_108 = *arg1
                    
                    if (*(rdx_37 + 0x14) != 0)
                        sub_142816390(rcx_108, *rdx_37)
                    label_142814fb5:
                        uint128_t* rdx_49 = arg1[2] + rdi_6
                        uint64_t rcx_109 = zx.q(*(r13_1 + 0x48))
                        int32_t rbx_3 = rdx_49[2].d & 0x200
                        
                        if ((*(r13_1 + 0x4c) & 0x7fffffff) u> rcx_109.d)
                            uint128_t* r9_15 = r13_1[4].q + rcx_109 * 0x28
                            
                            if (r9_15 != 0)
                                *r9_15 = *rdx_49
                                r9_15[1] = rdx_49[1]
                                r9_15[2].q = rdx_49[2].q
                            
                            *(r13_1 + 0x48) += 1
                        else
                            sub_142816070(&r13_1[4], rdx_49)
                        
                        int64_t* r9_16 = arg1[2]
                        void* const rax_111
                        char* r8_11
                        
                        if (rbx_3 == 0)
                            char rax_112 = (*(r9_16 + rdi_6 + 0x20)).b
                            r8_11 = " - contains extra data: %s%s\n"
                            
                            if ((rax_112 & 0x10) == 0)
                                r8_11 = " - contains field: %s%s\n"
                            
                            rax_111 = &data_1434cce10
                            
                            if ((rax_112 & 8) != 0)
                                rax_111 = &data_1434d2d58
                        else
                            rax_111 = *(r9_16 + rdi_6 + 8)
                            r8_11 = " - contains padding: %s - %s\n"
                        
                        var_308.q = rax_111
                        sub_142817350(*arg1, 1, r8_11, *(r9_16 + rdi_6))
                    else
                        rdx_37[2].d
                        sub_142816430(rcx_108, *rdx_37, rdx_37[1])
                else
                    int64_t r9_10 = rdx_37[1]
                    void* rcx_99 = *arg1
                    
                    if (r9_10 != 0)
                        sub_142817350(rcx_99, 1, " - inherits from: %s\n", r9_10)
                        int128_t* r9_13 = arg1[2] + rdi_6
                        uint64_t rcx_105 = zx.q(*(r13_1 + 0x38))
                        
                        if ((*(r13_1 + 0x3c) & 0x7fffffff) u> rcx_105.d)
                            uint128_t* rdx_45 = r13_1[3].q + rcx_105 * 0x28
                            
                            if (rdx_45 != 0)
                                *rdx_45 = *r9_13
                                rdx_45[1] = r9_13[1]
                                rdx_45[2].q = r9_13[2].q
                            
                            *(r13_1 + 0x38) += 1
                        else
                            sub_142816070(&r13_1[3], r9_13)
                    else
                        sub_142817350(rcx_99, 1, "Found class: %s\n", *rdx_37)
                        int64_t rax_99 = arg1[2]
                        var_308.q = &var_2d8
                        var_2f8 = nullptr
                        int64_t var_2f0_8 = 0
                        var_2d8.o = var_2f8.o
                        var_2c8.q = 0xffffffff.q
                        r13_1 = sub_142815730(arg1, *(rdi_6 + rax_99), *(rdi_6 + rax_99 + 0x14), 0, 
                            var_308)
                        
                        if ((*(rdi_6 + arg1[2] + 0x20) & 2) != 0)
                            uint64_t rcx_102 = zx.q(*(r13_1 + 0x48))
                            int128_t var_270
                            var_270.q = 0
                            var_270:8.q = 0
                            int64_t var_260_1 = 0
                            var_270:4.d = *(arg1 + 0x3c)
                            var_280.q = "v-table ptr"
                            var_280:8.q = "v-table ptr"
                            var_270.d = 0
                            var_270:8.d = 1
                            var_260_1.d = 8
                            
                            if ((*(r13_1 + 0x4c) & 0x7fffffff) u> rcx_102.d)
                                uint128_t* rdx_43 = r13_1[4].q + rcx_102 * 0x28
                                
                                if (rdx_43 != 0)
                                    *rdx_43 = var_280
                                    rdx_43[1] = 0
                                    rdx_43[2].q = var_260_1
                                
                                *(r13_1 + 0x48) += 1
                            else
                                sub_142816070(&r13_1[4], &var_280)
                
                i_2 = i_5 + 1
                rdi_6 = &rdi_6[5]
                i_5 = i_2
            while (i_2 s< *(arg1 + 0xc))
        
        uint64_t _NumOfElements_1 = zx.q(arg1[5].d)
        int32_t rbx_4 = 0
        
        if (_NumOfElements_1.d == 0)
        label_1428150e7:
            qsort(arg1[4], _NumOfElements_1, 8, sub_142815f70)
            uint64_t rax_115 = zx.q(arg1[5].d)
            
            if (rax_115.d != 0)
                int64_t* rsi_5 = nullptr
                var_288.q = rax_115
                arg_20.q = 0
                uint64_t i_7 = zx.q(rax_115.d)
                uint64_t i_3
                
                do
                    int64_t rax_116 = arg1[4]
                    void (* r15_3)(void* arg1, int64_t arg2, void* arg3) = nullptr
                    int32_t r8_12 = 0
                    var_2f8 = nullptr
                    int32_t r12_1 = 0
                    int64_t var_2f0_9 = 0
                    void* rdi_8 = *(rsi_5 + rax_116)
                    var_258.q = rdi_8
                    uint64_t rax_117 = zx.q(*(rdi_8 + 0x38))
                    
                    if (rax_117.d != 0)
                        int64_t rcx_115 = 0
                        arg_10.q = rax_117
                        arg_8.q = 0
                        bool cond:6_1
                        
                        do
                            uint64_t r10_3 = 0
                            int32_t r11_2 = arg1[5].d
                            void* r13_3 = *(rdi_8 + 0x30) + rcx_115
                            void* const j_7
                            
                            if (r11_2 == 0)
                            label_1428151a3:
                                j_7 = nullptr
                            else
                                while (true)
                                    j_7 = *(arg1[4] + (r10_3 << 3))
                                    char* rax_118 = *(j_7 + 0x20)
                                    void* r9_20 = *(r13_3 + 8) - rax_118
                                    uint32_t j_2
                                    uint32_t rdx_53
                                    
                                    do
                                        rdx_53 = zx.d(*rax_118)
                                        j_2 = zx.d(*(rax_118 + r9_20))
                                        
                                        if (rdx_53 != j_2)
                                            break
                                        
                                        rax_118 = &rax_118[1]
                                    while (j_2 != 0)
                                    
                                    if (rdx_53 - j_2 == 0)
                                        for (void* j_3 = *(j_7 + 0x18); j_3 != 0; 
                                                j_3 = *(j_3 + 0x18))
                                            j_7 = j_3
                                        
                                        break
                                    
                                    r10_3 = zx.q(r10_3.d + 1)
                                    
                                    if (r10_3.d u>= r11_2)
                                        goto label_1428151a3
                            
                            int32_t j_12 = *(j_7 + 0x48)
                            
                            if (j_12 != 0)
                                int128_t* rdi_10 = nullptr
                                uint64_t j_8 = zx.q(j_12)
                                uint64_t j_4
                                
                                do
                                    int64_t rax_119 = *(j_7 + 0x40)
                                    uint128_t zmm2 = *(rdi_10 + rax_119)
                                    int64_t zmm3 = *(rdi_10 + rax_119 + 0x20)
                                    int64_t var_260_2 = zmm3
                                    int32_t rcx_116 = (*(rdi_10 + rax_119 + 0x10)).d
                                    var_280 = zmm2
                                    
                                    if (zmm2.q != "v-table ptr" || rcx_116 != 0
                                            || *(r13_3 + 0x10) != rcx_116)
                                        uint128_t var_270_1
                                        var_270_1.d = rcx_116 + *(r13_3 + 0x10)
                                        
                                        if ((r12_1 & 0x7fffffff) u> r8_12)
                                            void* rax_124 = r15_3 + zx.q(r8_12) * 0x28
                                            
                                            if (rax_124 != 0)
                                                *rax_124 = zmm2
                                                *(rax_124 + 0x10) = var_270_1
                                                *(rax_124 + 0x20) = zmm3
                                            
                                            r8_12 += 1
                                            var_2f0_9.d = r8_12
                                        else
                                            sub_142816070(&var_2f8, &var_280)
                                            r8_12 = var_2f0_9.d
                                            r12_1 = var_2f0_9:4.d
                                            r15_3 = var_2f8
                                    
                                    rdi_10 += 0x28
                                    j_4 = j_8
                                    j_8 -= 1
                                while (j_4 != 1)
                            
                            rdi_8 = var_258.q
                            rcx_115 = arg_8.q + 0x28
                            arg_10.q -= 1
                            cond:6_1 = arg_10.q != 1
                            arg_8.q = rcx_115
                            *(rdi_8 + 0x50) = 1
                        while (cond:6_1)
                        rsi_5 = arg_20.q
                        i_7 = var_288.q
                    
                    uint64_t rbx_5 = 0
                    
                    if (*(rdi_8 + 0x48) u> 0)
                        do
                            int128_t* rdx_56 = *(rdi_8 + 0x40) + rbx_5 * 0x28
                            
                            if ((r12_1 & 0x7fffffff) u> r8_12)
                                uint128_t* rax_129 = r15_3 + zx.q(r8_12) * 0x28
                                
                                if (rax_129 != 0)
                                    *rax_129 = *rdx_56
                                    rax_129[1] = rdx_56[1]
                                    rax_129[2].q = rdx_56[2].q
                                
                                r8_12 += 1
                                var_2f0_9.d = r8_12
                            else
                                sub_142816070(&var_2f8, rdx_56)
                                r8_12 = var_2f0_9.d
                                r12_1 = var_2f0_9:4.d
                                r15_3 = var_2f8
                            
                            rbx_5 = zx.q(rbx_5.d + 1)
                        while (rbx_5.d u< *(rdi_8 + 0x48))
                    
                    *(rdi_8 + 0x48) = 0
                    sub_142816350(rdi_8 + 0x40, (zx.q(r8_12) * 0x28 s/ 0x28).d)
                    int64_t r9_21 = *(rdi_8 + 0x40)
                    int64_t rdx_60 = r9_21 + zx.q(*(rdi_8 + 0x48)) * 0x28
                    
                    if (rdx_60 u> r9_21)
                        memcpy(r9_21, r15_3, ((rdx_60 - r9_21) s/ 0x28 * 5).d << 3)
                    
                    if ((r12_1 & 0x7fffffff) != 0 && r12_1 s>= 0 && r15_3 != 0)
                        class physx::PxAllocatorCallback* rax_138 = physx::shdfnd::getAllocator()
                        int64_t r8_15 = *rax_138
                        (*(r8_15 + 0x10))(rax_138, r15_3, r8_15)
                    
                    rsi_5 = &rsi_5[1]
                    i_3 = i_7
                    i_7 -= 1
                    arg_20.q = rsi_5
                    var_288.q = i_7
                while (i_3 != 1)
            
            int32_t rsi_7 = arg1[5].d
            int32_t rbx_7 = 0
            
            if (rsi_7 != 0)
                int64_t** rdi_11 = nullptr
                
                do
                    if (sub_142813a20(*(rdi_11 + arg1[4]), arg1).b == 0)
                        goto label_14281549f
                    
                    rbx_7 += 1
                    rdi_11 = &rdi_11[1]
                while (rbx_7 u< rsi_7)
            
            rax_11 = zx.q(arg1[5].d)
            
            if (rax_11.d != 0)
                int64_t r13_4 = 0
                arg_8.q = rax_11
                uint64_t i_6 = zx.q(rax_11.d)
                uint64_t i_4
                
                do
                    void* r15_4 = *(arg1[4] + r13_4)
                    uint64_t j_13 = zx.q(*(r15_4 + 0x48))
                    
                    if (j_13.d u>= 2)
                        uint128_t* _Base = *(r15_4 + 0x40)
                        uint64_t j_9 = zx.q(j_13.d)
                        int64_t rbx_8 = 0x28 * j_13
                        
                        if (mulu.dp.q(0x28, j_13) u>> 0x40 != zx.o(0))
                            rbx_8 = -1
                        
                        int64_t rax_145
                        int64_t rbx_9
                        
                        if (rbx_8 != 0)
                            class physx::PxAllocatorCallback* rax_141 =
                                physx::shdfnd::getAllocator()
                            int64_t rax_142 = PxGetFoundation()
                            int64_t rdx_68 = *rax_142
                            char const* const rax_144
                            
                            if ((*(rdx_68 + 0x28))(rax_142, rdx_68) != 0)
                                rax_144 = __std_type_info_name(&data_143ccd1f8, &data_14401b730)
                            else
                                rax_144 = "<allocation names disabled>"
                            
                            rax_145 = (*(*rax_141 + 8))(rax_141, rbx_8, rax_144, 
                                "D:\Build\++Fortnite\Sync\Engine\Source\ThirdParty\PhysX3\PhysX_3.4\S"
                            "ource\PhysXExtensions\src\serialization\Binary\SnConvX_MetaData.cpp", 
                                0x2b0)
                            rbx_9 = rax_145
                        
                        if (rbx_8 == 0 || rax_145 == 0)
                            rbx_9 = 0
                        else if (j_13.d != 0)
                            memset(rax_145, 0, j_13 * 0x28)
                        
                        uint64_t r8_19 = 0
                        
                        if (j_13.d != 0)
                            uint128_t* _Base_1 = _Base
                            uint64_t j_10 = j_13
                            uint64_t j_5
                            
                            do
                                if ((_Base_1[2].b & 0x10) == 0)
                                    uint64_t rcx_134 = r8_19 * 5
                                    r8_19 = zx.q(r8_19.d + 1)
                                    *(rbx_9 + (rcx_134 << 3)) = *_Base_1
                                    *(rbx_9 + (rcx_134 << 3) + 0x10) = _Base_1[1]
                                    *(rbx_9 + (rcx_134 << 3) + 0x20) = _Base_1[2].q
                                
                                _Base_1 += 0x28
                                j_5 = j_10
                                j_10 -= 1
                            while (j_5 != 1)
                        
                        uint64_t _NumOfElements = zx.q(r8_19.d)
                        
                        if (j_13.d != 0)
                            uint128_t* _Base_2 = _Base
                            uint64_t j_6
                            
                            do
                                if ((_Base_2[2].b & 0x10) != 0)
                                    uint64_t rcx_135 = r8_19 * 5
                                    r8_19 = zx.q(r8_19.d + 1)
                                    *(rbx_9 + (rcx_135 << 3)) = *_Base_2
                                    *(rbx_9 + (rcx_135 << 3) + 0x10) = _Base_2[1]
                                    *(rbx_9 + (rcx_135 << 3) + 0x20) = _Base_2[2].q
                                
                                _Base_2 += 0x28
                                j_6 = j_9
                                j_9 -= 1
                            while (j_6 != 1)
                        
                        memcpy(_Base, rbx_9, (r8_19 * 5).d << 3)
                        
                        if (rbx_9 != 0)
                            class physx::PxAllocatorCallback* rax_148 =
                                physx::shdfnd::getAllocator()
                            int64_t r8_21 = *rax_148
                            (*(r8_21 + 0x10))(rax_148, rbx_9, r8_21)
                        
                        qsort(_Base, _NumOfElements, 0x28, sub_142815f80)
                        i_6 = arg_8.q
                    
                    r13_4 += 8
                    i_4 = i_6
                    i_6 -= 1
                    arg_8.q = i_6
                while (i_4 != 1)
            
            rax_11.b = 1
        else
            void** rdi_7 = nullptr
            
            while (true)
                void* rsi_4 = *(rdi_7 + arg1[4])
                i_5 = 0
                
                if (sub_142815c60(arg1, rsi_4, 0, &i_5).b == 0)
                label_14281549f:
                    rax_11.b = 0
                    break
                
                rbx_4 += 1
                rdi_7 = &rdi_7[1]
                *(rsi_4 + 0x2c) = i_5
                
                if (rbx_4 u>= _NumOfElements_1.d)
                    goto label_1428150e7
    else
        sub_142817350(*arg1, 4, "PxBinaryConverter: Unknown meta data platform tag", r9_3)
        rax_11.b = 0
else
    char var_248[0x20]
    sub_1427f57a0(&var_248, 0x200)
    char (* var_300_1)[0x20] = &var_248
    int32_t var_308_1 = *(arg1 + 0x34)
    sub_142817350(*arg1, 4, 
        "PxBinaryConverter: data version (%x-%d) is incompatible with this PhysX sdk.\n These versions "
    "would be compatible: %s", 
        zx.q(arg1[6].d))
    rax_11.b = 0

return rax_11
