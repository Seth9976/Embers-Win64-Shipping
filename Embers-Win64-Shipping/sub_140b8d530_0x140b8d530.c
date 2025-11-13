// 函数: sub_140b8d530
// 地址: 0x140b8d530
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t* r13 = arg1
sub_140944e70(arg2)
int32_t i_8 = 0
int64_t var_58 = 0
int32_t var_50 = 0
sub_1405947f0(&var_58, 5)
int32_t rax = var_50 + 5
var_50 = rax

if (rax s> 0)
    sub_140594770(&var_58)

UnDecorator::getReferenceType(var_58, u"Name", 0xa)
int64_t var_48
sub_140918d50(arg2, &var_58, sub_140b63b70(r13, &var_48))
int64_t rcx_6 = var_58

if (rcx_6 != 0)
    sub_140a74f90(rcx_6)

var_58 = 0
int32_t var_50_1 = 0
sub_1405947f0(&var_58, 5)
int32_t rax_2 = var_50_1 + 5
var_50_1 = rax_2

if (rax_2 s> 0)
    sub_140594770(&var_58)

UnDecorator::getReferenceType(var_58, u"Type", 0xa)
int16_t* rax_3 = sub_140b8b6f0(r13[2])
var_48 = 0
int32_t rdx_4 = 0
int32_t var_40 = 0
int32_t rcx_11 = 0
int32_t var_3c = 0

if (rax_3 != 0 && *rax_3 != 0)
    int64_t rbx_1 = -1
    
    do
        rbx_1 += 1
    while (rax_3[rbx_1] != 0)
    
    if (rbx_1.d + 1 s> 0)
        sub_1405947f0(&var_48, rbx_1.d + 1)
        rcx_11 = var_3c
        rdx_4 = var_40
    
    int32_t rax_4 = rdx_4 + rbx_1.d + 1
    int32_t var_40_1 = rax_4
    
    if (rax_4 s> rcx_11)
        sub_140594770(&var_48)
    
    UnDecorator::getReferenceType(var_48, rax_3, (rbx_1.d + 1) * 2)

sub_140918d50(arg2, &var_58, &var_48)
int64_t rcx_16 = var_58

if (rcx_16 != 0)
    sub_140a74f90(rcx_16)

var_58 = 0
int32_t var_50_2 = 0
sub_1405947f0(&var_58, 0xd)
int32_t rax_5 = var_50_2 + 0xd
var_50_2 = rax_5

if (rax_5 s> 0)
    sub_140594770(&var_58)

UnDecorator::getReferenceType(var_58, u"LoadingPhase", 0x1a)
int16_t* rax_6 = sub_140b8b7c0(r13[3])
var_48 = 0
int32_t rdx_9 = 0
int32_t var_40_2 = 0
int32_t rcx_21 = 0
int32_t var_3c_1 = 0

if (rax_6 != 0 && *rax_6 != 0)
    int64_t rbx_3 = -1
    
    do
        rbx_3 += 1
    while (rax_6[rbx_3] != 0)
    
    if (rbx_3.d + 1 s> 0)
        sub_1405947f0(&var_48, rbx_3.d + 1)
        rcx_21 = var_3c_1
        rdx_9 = var_40_2
    
    int32_t rax_7 = rbx_3.d + 1 + rdx_9
    int32_t var_40_3 = rax_7
    
    if (rax_7 s> rcx_21)
        sub_140594770(&var_48)
    
    UnDecorator::getReferenceType(var_48, rax_6, (rbx_3.d + 1) * 2)

sub_140918d50(arg2, &var_58, &var_48)
int64_t rcx_26 = var_58

if (rcx_26 != 0)
    sub_140a74f90(rcx_26)

int16_t arg_18

if (r13[6] s> 0)
    var_58 = 0
    int32_t var_50_3 = 0
    sub_1405947f0(&var_58, 0x13)
    int32_t rax_8 = var_50_3 + 0x13
    var_50_3 = rax_8
    
    if (rax_8 s> 0)
        sub_140594770(&var_58)
    
    UnDecorator::getReferenceType(var_58, u"WhitelistPlatforms", 0x26)
    sub_1409391d0(arg2, &var_58)
    int64_t rcx_31 = var_58
    
    if (rcx_31 != 0)
        sub_140a74f90(rcx_31)
    
    int32_t i = 0
    
    if (r13[6] s> 0)
        int32_t rcx_32 = arg2[4].d
        
        do
            int64_t r12_1 = *(r13 + 0x10)
            
            if (((rcx_32 - 2) & 0xfffffff5) != 0 || rcx_32 == 0xa)
                int64_t* rcx_33 = arg2[1]
                arg_18 = 0x2c
                (*(*rcx_33 + 0x150))(rcx_33, &arg_18, 2)
            
            sub_14067f880(arg2[1])
            int32_t j_10 = *(arg2 + 0x24)
            int64_t* rsi_2 = arg2[1]
            
            if (j_10 s> 0)
                uint64_t j_5 = zx.q(j_10)
                uint64_t j
                
                do
                    int64_t rax_11 = *rsi_2
                    arg_18 = 9
                    (*(rax_11 + 0x150))(rsi_2, &arg_18, 2)
                    j = j_5
                    j_5 -= 1
                while (j != 1)
                r13 = arg1
            
            (*(*arg2 + 0x10))(arg2, (sx.q(i) << 4) + r12_1)
            i += 1
            arg2[4].d = 7
            rcx_32 = 7
        while (i s< r13[6])
    
    sub_140938f70(arg2)

if (r13[0xa] s> 0)
    var_58 = 0
    int32_t var_50_4 = 0
    sub_1405947f0(&var_58, 0x13)
    int32_t rax_13 = var_50_4 + 0x13
    var_50_4 = rax_13
    
    if (rax_13 s> 0)
        sub_140594770(&var_58)
    
    UnDecorator::getReferenceType(var_58, u"BlacklistPlatforms", 0x26)
    sub_1409391d0(arg2, &var_58)
    int64_t rcx_42 = var_58
    
    if (rcx_42 != 0)
        sub_140a74f90(rcx_42)
    
    int32_t i_1 = 0
    
    if (r13[0xa] s> 0)
        int32_t rcx_43 = arg2[4].d
        
        do
            int64_t r12_2 = *(r13 + 0x20)
            
            if (((rcx_43 - 2) & 0xfffffff5) != 0 || rcx_43 == 0xa)
                int64_t* rcx_44 = arg2[1]
                arg_18 = 0x2c
                (*(*rcx_44 + 0x150))(rcx_44, &arg_18, 2)
            
            sub_14067f880(arg2[1])
            int32_t j_11 = *(arg2 + 0x24)
            int64_t* rsi_3 = arg2[1]
            
            if (j_11 s> 0)
                uint64_t j_6 = zx.q(j_11)
                uint64_t j_1
                
                do
                    int64_t rax_16 = *rsi_3
                    arg_18 = 9
                    (*(rax_16 + 0x150))(rsi_3, &arg_18, 2)
                    j_1 = j_6
                    j_6 -= 1
                while (j_1 != 1)
                r13 = arg1
            
            (*(*arg2 + 0x10))(arg2, (sx.q(i_1) << 4) + r12_2)
            rcx_43 = 7
            arg2[4].d = 7
            i_1 += 1
        while (i_1 s< r13[0xa])
    
    sub_140938f70(arg2)

if (r13[0xe] s> 0)
    var_58 = 0
    int64_t var_50_5 = 0
    sub_1405947f0(&var_58, 0x11)
    int32_t rax_18 = var_50_5.d + 0x11
    var_50_5.d = rax_18
    
    if (rax_18 s> 0)
        sub_140594770(&var_58)
    
    UnDecorator::getReferenceType(var_58, u"WhitelistTargets", 0x22)
    sub_1409391d0(arg2, &var_58)
    int64_t rcx_53 = var_58
    
    if (rcx_53 != 0)
        sub_140a74f90(rcx_53)
    
    int32_t i_2 = 0
    
    if (r13[0xe] s> 0)
        char* r12_3 = nullptr
        
        do
            int16_t* rax_20 = sub_140a4af60(r12_3[*(r13 + 0x30)])
            var_58 = 0
            int32_t rdx_29 = 0
            var_50_5.d = 0
            int32_t rcx_55 = 0
            var_50_5:4.d = 0
            
            if (rax_20 != 0 && *rax_20 != 0)
                int64_t rbx_5 = -1
                
                do
                    rbx_5 += 1
                while (rax_20[rbx_5] != 0)
                
                if (rbx_5.d + 1 s> 0)
                    sub_1405947f0(&var_58, rbx_5.d + 1)
                    rcx_55 = var_50_5:4.d
                    rdx_29 = var_50_5.d
                
                int32_t rax_21 = rdx_29 + rbx_5.d + 1
                var_50_5.d = rax_21
                
                if (rax_21 s> rcx_55)
                    sub_140594770(&var_58)
                
                UnDecorator::getReferenceType(var_58, rax_20, (rbx_5.d + 1) * 2)
            
            sub_140944f80(arg2, &var_58)
            int64_t rcx_60 = var_58
            
            if (rcx_60 != 0)
                sub_140a74f90(rcx_60)
            
            i_2 += 1
            r12_3 = &r12_3[1]
        while (i_2 s< r13[0xe])
    
    sub_140938f70(arg2)

if (r13[0x12] s> 0)
    var_58 = 0
    int64_t var_50_6 = 0
    sub_1405947f0(&var_58, 0x11)
    int32_t rax_22 = var_50_6.d + 0x11
    var_50_6.d = rax_22
    
    if (rax_22 s> 0)
        sub_140594770(&var_58)
    
    UnDecorator::getReferenceType(var_58, u"BlacklistTargets", 0x22)
    sub_1409391d0(arg2, &var_58)
    int64_t rcx_66 = var_58
    
    if (rcx_66 != 0)
        sub_140a74f90(rcx_66)
    
    int32_t i_3 = 0
    
    if (r13[0x12] s> 0)
        char* r12_4 = nullptr
        
        do
            int16_t* rax_24 = sub_140a4af60(r12_4[*(r13 + 0x40)])
            var_58 = 0
            int32_t rdx_35 = 0
            var_50_6.d = 0
            int32_t rcx_68 = 0
            var_50_6:4.d = 0
            
            if (rax_24 != 0 && *rax_24 != 0)
                int64_t rbx_7 = -1
                
                do
                    rbx_7 += 1
                while (rax_24[rbx_7] != 0)
                
                if (rbx_7.d + 1 s> 0)
                    sub_1405947f0(&var_58, rbx_7.d + 1)
                    rcx_68 = var_50_6:4.d
                    rdx_35 = var_50_6.d
                
                int32_t rax_25 = rdx_35 + rbx_7.d + 1
                var_50_6.d = rax_25
                
                if (rax_25 s> rcx_68)
                    sub_140594770(&var_58)
                
                UnDecorator::getReferenceType(var_58, rax_24, (rbx_7.d + 1) * 2)
            
            sub_140944f80(arg2, &var_58)
            int64_t rcx_73 = var_58
            
            if (rcx_73 != 0)
                sub_140a74f90(rcx_73)
            
            i_3 += 1
            r12_4 = &r12_4[1]
        while (i_3 s< r13[0x12])
    
    sub_140938f70(arg2)

if (r13[0x16] s> 0)
    var_58 = 0
    int64_t var_50_7 = 0
    sub_1405947f0(&var_58, 0x1e)
    int32_t rax_26 = var_50_7.d + 0x1e
    var_50_7.d = rax_26
    
    if (rax_26 s> 0)
        sub_140594770(&var_58)
    
    UnDecorator::getReferenceType(var_58, u"WhitelistTargetConfigurations", 0x3c)
    sub_1409391d0(arg2, &var_58)
    int64_t rcx_79 = var_58
    
    if (rcx_79 != 0)
        sub_140a74f90(rcx_79)
    
    int32_t i_4 = 0
    
    if (r13[0x16] s> 0)
        char* r12_5 = nullptr
        
        do
            int16_t* rax_28 = sub_140a4af10(r12_5[*(r13 + 0x50)])
            var_58 = 0
            int32_t rdx_41 = 0
            var_50_7.d = 0
            int32_t rcx_81 = 0
            var_50_7:4.d = 0
            
            if (rax_28 != 0 && *rax_28 != 0)
                int64_t rbx_9 = -1
                
                do
                    rbx_9 += 1
                while (rax_28[rbx_9] != 0)
                
                if (rbx_9.d + 1 s> 0)
                    sub_1405947f0(&var_58, rbx_9.d + 1)
                    rcx_81 = var_50_7:4.d
                    rdx_41 = var_50_7.d
                
                int32_t rax_29 = rdx_41 + rbx_9.d + 1
                var_50_7.d = rax_29
                
                if (rax_29 s> rcx_81)
                    sub_140594770(&var_58)
                
                UnDecorator::getReferenceType(var_58, rax_28, (rbx_9.d + 1) * 2)
            
            sub_140944f80(arg2, &var_58)
            int64_t rcx_86 = var_58
            
            if (rcx_86 != 0)
                sub_140a74f90(rcx_86)
            
            i_4 += 1
            r12_5 = &r12_5[1]
        while (i_4 s< r13[0x16])
    
    sub_140938f70(arg2)

if (r13[0x1a] s> 0)
    var_58 = 0
    int64_t var_50_8 = 0
    sub_1405947f0(&var_58, 0x1e)
    int32_t rax_30 = var_50_8.d + 0x1e
    var_50_8.d = rax_30
    
    if (rax_30 s> 0)
        sub_140594770(&var_58)
    
    UnDecorator::getReferenceType(var_58, u"BlacklistTargetConfigurations", 0x3c)
    sub_1409391d0(arg2, &var_58)
    int64_t rcx_92 = var_58
    
    if (rcx_92 != 0)
        sub_140a74f90(rcx_92)
    
    int32_t i_5 = 0
    
    if (r13[0x1a] s> 0)
        char* r12_6 = nullptr
        
        do
            int16_t* rax_32 = sub_140a4af10(r12_6[*(r13 + 0x60)])
            var_58 = 0
            int32_t rdx_47 = 0
            var_50_8.d = 0
            int32_t rcx_94 = 0
            var_50_8:4.d = 0
            
            if (rax_32 != 0 && *rax_32 != 0)
                int64_t rbx_11 = -1
                
                do
                    rbx_11 += 1
                while (rax_32[rbx_11] != 0)
                
                if (rbx_11.d + 1 s> 0)
                    sub_1405947f0(&var_58, rbx_11.d + 1)
                    rcx_94 = var_50_8:4.d
                    rdx_47 = var_50_8.d
                
                int32_t rax_33 = rdx_47 + rbx_11.d + 1
                var_50_8.d = rax_33
                
                if (rax_33 s> rcx_94)
                    sub_140594770(&var_58)
                
                UnDecorator::getReferenceType(var_58, rax_32, (rbx_11.d + 1) * 2)
            
            sub_140944f80(arg2, &var_58)
            int64_t rcx_99 = var_58
            
            if (rcx_99 != 0)
                sub_140a74f90(rcx_99)
            
            i_5 += 1
            r12_6 = &r12_6[1]
        while (i_5 s< r13[0x1a])
    
    sub_140938f70(arg2)

if (r13[0x1e] s> 0)
    var_58 = 0
    int32_t var_50_9 = 0
    sub_1405947f0(&var_58, 0x12)
    int32_t rax_34 = var_50_9 + 0x12
    var_50_9 = rax_34
    
    if (rax_34 s> 0)
        sub_140594770(&var_58)
    
    UnDecorator::getReferenceType(var_58, u"WhitelistPrograms", 0x24)
    sub_1409391d0(arg2, &var_58)
    int64_t rcx_105 = var_58
    
    if (rcx_105 != 0)
        sub_140a74f90(rcx_105)
    
    int32_t i_6 = 0
    
    if (r13[0x1e] s> 0)
        int32_t rcx_106 = arg2[4].d
        
        do
            int64_t r12_7 = *(r13 + 0x70)
            
            if (((rcx_106 - 2) & 0xfffffff5) != 0 || rcx_106 == 0xa)
                int64_t* rcx_107 = arg2[1]
                arg_18 = 0x2c
                (*(*rcx_107 + 0x150))(rcx_107, &arg_18, 2)
            
            sub_14067f880(arg2[1])
            int32_t j_12 = *(arg2 + 0x24)
            int64_t* rsi_8 = arg2[1]
            
            if (j_12 s> 0)
                uint64_t j_7 = zx.q(j_12)
                uint64_t j_2
                
                do
                    int64_t rax_37 = *rsi_8
                    arg_18 = 9
                    (*(rax_37 + 0x150))(rsi_8, &arg_18, 2)
                    j_2 = j_7
                    j_7 -= 1
                while (j_2 != 1)
                r13 = arg1
            
            (*(*arg2 + 0x10))(arg2, (sx.q(i_6) << 4) + r12_7)
            i_6 += 1
            arg2[4].d = 7
            rcx_106 = 7
        while (i_6 s< r13[0x1e])
        
        i_8 = 0
    
    sub_140938f70(arg2)

if (r13[0x22] s> 0)
    var_58 = 0
    int32_t var_50_10 = 0
    sub_1405947f0(&var_58, 0x12)
    int32_t rax_39 = var_50_10 + 0x12
    var_50_10 = rax_39
    
    if (rax_39 s> 0)
        sub_140594770(&var_58)
    
    UnDecorator::getReferenceType(var_58, u"BlacklistPrograms", 0x24)
    sub_1409391d0(arg2, &var_58)
    int64_t rcx_116 = var_58
    
    if (rcx_116 != 0)
        sub_140a74f90(rcx_116)
    
    int32_t i_7 = 0
    
    if (r13[0x22] s> 0)
        int32_t rcx_117 = arg2[4].d
        
        do
            int64_t r12_8 = *(r13 + 0x80)
            
            if (((rcx_117 - 2) & 0xfffffff5) != 0 || rcx_117 == 0xa)
                int64_t* rcx_118 = arg2[1]
                arg_18 = 0x2c
                (*(*rcx_118 + 0x150))(rcx_118, &arg_18, 2)
            
            sub_14067f880(arg2[1])
            int32_t j_13 = *(arg2 + 0x24)
            int64_t* rsi_9 = arg2[1]
            
            if (j_13 s> 0)
                uint64_t j_8 = zx.q(j_13)
                uint64_t j_3
                
                do
                    int64_t rax_42 = *rsi_9
                    arg_18 = 9
                    (*(rax_42 + 0x150))(rsi_9, &arg_18, 2)
                    j_3 = j_8
                    j_8 -= 1
                while (j_3 != 1)
                r13 = arg1
            
            (*(*arg2 + 0x10))(arg2, (sx.q(i_7) << 4) + r12_8)
            i_7 += 1
            arg2[4].d = 7
            rcx_117 = 7
        while (i_7 s< r13[0x22])
        
        i_8 = 0
    
    sub_140938f70(arg2)

if (r13[0x26] s> 0)
    var_58 = 0
    int32_t var_50_11 = 0
    sub_1405947f0(&var_58, 0x17)
    int32_t rax_44 = var_50_11 + 0x17
    var_50_11 = rax_44
    
    if (rax_44 s> 0)
        sub_140594770(&var_58)
    
    UnDecorator::getReferenceType(var_58, u"AdditionalDependencies", 0x2e)
    sub_1409391d0(arg2, &var_58)
    int64_t rcx_127 = var_58
    
    if (rcx_127 != 0)
        sub_140a74f90(rcx_127)
    
    if (r13[0x26] s> 0)
        int32_t rcx_128 = arg2[4].d
        
        do
            int64_t r15_1 = *(r13 + 0x90)
            
            if (((rcx_128 - 2) & 0xfffffff5) != 0 || rcx_128 == 0xa)
                int64_t* rcx_129 = arg2[1]
                arg_18 = 0x2c
                (*(*rcx_129 + 0x150))(rcx_129, &arg_18, 2)
            
            sub_14067f880(arg2[1])
            int32_t j_14 = *(arg2 + 0x24)
            int64_t* rsi_10 = arg2[1]
            
            if (j_14 s> 0)
                uint64_t j_9 = zx.q(j_14)
                uint64_t j_4
                
                do
                    int64_t rax_47 = *rsi_10
                    arg_18 = 9
                    (*(rax_47 + 0x150))(rsi_10, &arg_18, 2)
                    j_4 = j_9
                    j_9 -= 1
                while (j_4 != 1)
                r13 = arg1
            
            (*(*arg2 + 0x10))(arg2, (sx.q(i_8) << 4) + r15_1)
            i_8 += 1
            arg2[4].d = 7
            rcx_128 = 7
        while (i_8 s< r13[0x26])
    
    sub_140938f70(arg2)

return sub_1409399d0(arg2) __tailcall
