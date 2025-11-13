// 函数: sub_140b8ef70
// 地址: 0x140b8ef70
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* r15 = arg1
sub_140944e70(arg2)
int32_t i_6 = 0
int64_t var_58 = 0
int32_t var_50 = 0
sub_1405947f0(&var_58, 5)
int32_t rax = var_50 + 5
var_50 = rax

if (rax s> 0)
    sub_140594770(&var_58)

UnDecorator::getReferenceType(var_58, u"Name", 0xa)
void var_48
sub_140918d50(arg2, &var_58, sub_140596d10(&var_48, r15))
int64_t rcx_6 = var_58

if (rcx_6 != 0)
    sub_140a74f90(rcx_6)

var_58 = 0
int32_t var_50_1 = 0
sub_1405947f0(&var_58, 8)
int32_t rax_2 = var_50_1 + 8
var_50_1 = rax_2

if (rax_2 s> 0)
    sub_140594770(&var_58)

UnDecorator::getReferenceType(var_58, u"Enabled", 0x10)
sub_140668ff0(arg2, &var_58, r15[2].b)
int64_t rcx_11 = var_58

if (rcx_11 != 0)
    sub_140a74f90(rcx_11)

if (r15[2].b != 0 && *(r15 + 0x11) != 0)
    var_58 = 0
    int32_t var_50_2 = 0
    sub_1405947f0(&var_58, 9)
    int32_t rax_3 = var_50_2 + 9
    var_50_2 = rax_3
    
    if (rax_3 s> 0)
        sub_140594770(&var_58)
    
    UnDecorator::getReferenceType(var_58, u"Optional", 0x12)
    sub_140668ff0(arg2, &var_58, *(r15 + 0x11))
    int64_t rcx_16 = var_58
    
    if (rcx_16 != 0)
        sub_140a74f90(rcx_16)

int32_t rax_4 = r15[4].d

if (rax_4 != 0 && rax_4 - 1 s> 0)
    var_58 = 0
    int32_t var_50_3 = 0
    sub_1405947f0(&var_58, 0xc)
    int32_t rax_6 = var_50_3 + 0xc
    var_50_3 = rax_6
    
    if (rax_6 s> 0)
        sub_140594770(&var_58)
    
    UnDecorator::getReferenceType(var_58, u"Description", 0x18)
    sub_140918d50(arg2, &var_58, sub_140596d10(&var_48, &r15[3]))
    int64_t rcx_22 = var_58
    
    if (rcx_22 != 0)
        sub_140a74f90(rcx_22)

int32_t rax_8 = r15[6].d

if (rax_8 != 0 && rax_8 - 1 s> 0)
    var_58 = 0
    int32_t var_50_4 = 0
    sub_1405947f0(&var_58, 0xf)
    int32_t rax_10 = var_50_4 + 0xf
    var_50_4 = rax_10
    
    if (rax_10 s> 0)
        sub_140594770(&var_58)
    
    UnDecorator::getReferenceType(var_58, u"MarketplaceURL", 0x1e)
    sub_140918d50(arg2, &var_58, sub_140596d10(&var_48, &r15[5]))
    int64_t rcx_28 = var_58
    
    if (rcx_28 != 0)
        sub_140a74f90(rcx_28)

int16_t arg_18

if (r15[8].d s> 0)
    var_58 = 0
    int32_t var_50_5 = 0
    sub_1405947f0(&var_58, 0x13)
    int32_t rax_12 = var_50_5 + 0x13
    var_50_5 = rax_12
    
    if (rax_12 s> 0)
        sub_140594770(&var_58)
    
    UnDecorator::getReferenceType(var_58, u"WhitelistPlatforms", 0x26)
    sub_1409391d0(arg2, &var_58)
    int64_t rcx_33 = var_58
    
    if (rcx_33 != 0)
        sub_140a74f90(rcx_33)
    
    int32_t i = 0
    
    if (r15[8].d s> 0)
        int32_t rcx_34 = arg2[4].d
        
        do
            int64_t r13_1 = r15[7]
            
            if (((rcx_34 - 2) & 0xfffffff5) != 0 || rcx_34 == 0xa)
                int64_t* rcx_35 = arg2[1]
                arg_18 = 0x2c
                (*(*rcx_35 + 0x150))(rcx_35, &arg_18, 2)
            
            sub_14067f880(arg2[1])
            int32_t j_6 = *(arg2 + 0x24)
            int64_t* rsi_1 = arg2[1]
            
            if (j_6 s> 0)
                uint64_t j_3 = zx.q(j_6)
                uint64_t j
                
                do
                    int64_t rax_15 = *rsi_1
                    arg_18 = 9
                    (*(rax_15 + 0x150))(rsi_1, &arg_18, 2)
                    j = j_3
                    j_3 -= 1
                while (j != 1)
                r15 = arg1
            
            (*(*arg2 + 0x10))(arg2, (sx.q(i) << 4) + r13_1)
            i += 1
            arg2[4].d = 7
            rcx_34 = 7
        while (i s< r15[8].d)
    
    sub_140938f70(arg2)

if (r15[0xa].d s> 0)
    var_58 = 0
    int32_t var_50_6 = 0
    sub_1405947f0(&var_58, 0x13)
    int32_t rax_17 = var_50_6 + 0x13
    var_50_6 = rax_17
    
    if (rax_17 s> 0)
        sub_140594770(&var_58)
    
    UnDecorator::getReferenceType(var_58, u"BlacklistPlatforms", 0x26)
    sub_1409391d0(arg2, &var_58)
    int64_t rcx_44 = var_58
    
    if (rcx_44 != 0)
        sub_140a74f90(rcx_44)
    
    int32_t i_1 = 0
    
    if (r15[0xa].d s> 0)
        int32_t rcx_45 = arg2[4].d
        
        do
            int64_t r13_2 = r15[9]
            
            if (((rcx_45 - 2) & 0xfffffff5) != 0 || rcx_45 == 0xa)
                int64_t* rcx_46 = arg2[1]
                arg_18 = 0x2c
                (*(*rcx_46 + 0x150))(rcx_46, &arg_18, 2)
            
            sub_14067f880(arg2[1])
            int32_t j_7 = *(arg2 + 0x24)
            int64_t* rsi_2 = arg2[1]
            
            if (j_7 s> 0)
                uint64_t j_4 = zx.q(j_7)
                uint64_t j_1
                
                do
                    int64_t rax_20 = *rsi_2
                    arg_18 = 9
                    (*(rax_20 + 0x150))(rsi_2, &arg_18, 2)
                    j_1 = j_4
                    j_4 -= 1
                while (j_1 != 1)
                r15 = arg1
            
            (*(*arg2 + 0x10))(arg2, (sx.q(i_1) << 4) + r13_2)
            rcx_45 = 7
            arg2[4].d = 7
            i_1 += 1
        while (i_1 s< r15[0xa].d)
    
    sub_140938f70(arg2)

if (r15[0xc].d s> 0)
    var_58 = 0
    int64_t var_50_7 = 0
    sub_1405947f0(&var_58, 0x1e)
    int32_t rax_22 = var_50_7.d + 0x1e
    var_50_7.d = rax_22
    
    if (rax_22 s> 0)
        sub_140594770(&var_58)
    
    UnDecorator::getReferenceType(var_58, u"WhitelistTargetConfigurations", 0x3c)
    sub_1409391d0(arg2, &var_58)
    int64_t rcx_55 = var_58
    
    if (rcx_55 != 0)
        sub_140a74f90(rcx_55)
    
    int32_t i_2 = 0
    
    if (r15[0xc].d s> 0)
        int64_t r13_3 = 0
        
        do
            int16_t* rax_24 = sub_140a4af10(r15[0xb][r13_3])
            var_58 = 0
            int32_t rdx_29 = 0
            var_50_7.d = 0
            int32_t rcx_57 = 0
            var_50_7:4.d = 0
            
            if (rax_24 != 0 && *rax_24 != 0)
                int64_t rbx_1 = -1
                
                do
                    rbx_1 += 1
                while (rax_24[rbx_1] != 0)
                
                if (rbx_1.d + 1 s> 0)
                    sub_1405947f0(&var_58, rbx_1.d + 1)
                    rcx_57 = var_50_7:4.d
                    rdx_29 = var_50_7.d
                
                int32_t rax_25 = rbx_1.d + 1 + rdx_29
                var_50_7.d = rax_25
                
                if (rax_25 s> rcx_57)
                    sub_140594770(&var_58)
                
                UnDecorator::getReferenceType(var_58, rax_24, (rbx_1.d + 1) * 2)
            
            sub_140944f80(arg2, &var_58)
            int64_t rcx_62 = var_58
            
            if (rcx_62 != 0)
                sub_140a74f90(rcx_62)
            
            i_2 += 1
            r13_3 += 1
        while (i_2 s< r15[0xc].d)
    
    sub_140938f70(arg2)

if (r15[0xe].d s> 0)
    var_58 = 0
    int64_t var_50_8 = 0
    sub_1405947f0(&var_58, 0x1e)
    int32_t rax_26 = var_50_8.d + 0x1e
    var_50_8.d = rax_26
    
    if (rax_26 s> 0)
        sub_140594770(&var_58)
    
    UnDecorator::getReferenceType(var_58, u"BlacklistTargetConfigurations", 0x3c)
    sub_1409391d0(arg2, &var_58)
    int64_t rcx_68 = var_58
    
    if (rcx_68 != 0)
        sub_140a74f90(rcx_68)
    
    int32_t i_3 = 0
    
    if (r15[0xe].d s> 0)
        int64_t r13_4 = 0
        
        do
            int16_t* rax_28 = sub_140a4af10(r15[0xd][r13_4])
            var_58 = 0
            int32_t rdx_35 = 0
            var_50_8.d = 0
            int32_t rcx_70 = 0
            var_50_8:4.d = 0
            
            if (rax_28 != 0 && *rax_28 != 0)
                int64_t rbx_3 = -1
                
                do
                    rbx_3 += 1
                while (rax_28[rbx_3] != 0)
                
                if (rbx_3.d + 1 s> 0)
                    sub_1405947f0(&var_58, rbx_3.d + 1)
                    rcx_70 = var_50_8:4.d
                    rdx_35 = var_50_8.d
                
                int32_t rax_29 = rdx_35 + rbx_3.d + 1
                var_50_8.d = rax_29
                
                if (rax_29 s> rcx_70)
                    sub_140594770(&var_58)
                
                UnDecorator::getReferenceType(var_58, rax_28, (rbx_3.d + 1) * 2)
            
            sub_140944f80(arg2, &var_58)
            int64_t rcx_75 = var_58
            
            if (rcx_75 != 0)
                sub_140a74f90(rcx_75)
            
            i_3 += 1
            r13_4 += 1
        while (i_3 s< r15[0xe].d)
    
    sub_140938f70(arg2)

if (r15[0x10].d s> 0)
    var_58 = 0
    int64_t var_50_9 = 0
    sub_1405947f0(&var_58, 0x11)
    int32_t rax_30 = var_50_9.d + 0x11
    var_50_9.d = rax_30
    
    if (rax_30 s> 0)
        sub_140594770(&var_58)
    
    UnDecorator::getReferenceType(var_58, u"WhitelistTargets", 0x22)
    sub_1409391d0(arg2, &var_58)
    int64_t rcx_81 = var_58
    
    if (rcx_81 != 0)
        sub_140a74f90(rcx_81)
    
    int32_t i_4 = 0
    
    if (r15[0x10].d s> 0)
        int64_t r13_5 = 0
        
        do
            int16_t* rax_32 = sub_140a4af60(r15[0xf][r13_5])
            var_58 = 0
            int32_t rdx_41 = 0
            var_50_9.d = 0
            int32_t rcx_83 = 0
            var_50_9:4.d = 0
            
            if (rax_32 != 0 && *rax_32 != 0)
                int64_t rbx_5 = -1
                
                do
                    rbx_5 += 1
                while (rax_32[rbx_5] != 0)
                
                if (rbx_5.d + 1 s> 0)
                    sub_1405947f0(&var_58, rbx_5.d + 1)
                    rcx_83 = var_50_9:4.d
                    rdx_41 = var_50_9.d
                
                int32_t rax_33 = rbx_5.d + 1 + rdx_41
                var_50_9.d = rax_33
                
                if (rax_33 s> rcx_83)
                    sub_140594770(&var_58)
                
                UnDecorator::getReferenceType(var_58, rax_32, (rbx_5.d + 1) * 2)
            
            sub_140944f80(arg2, &var_58)
            int64_t rcx_88 = var_58
            
            if (rcx_88 != 0)
                sub_140a74f90(rcx_88)
            
            i_4 += 1
            r13_5 += 1
        while (i_4 s< r15[0x10].d)
    
    sub_140938f70(arg2)

if (r15[0x12].d s> 0)
    var_58 = 0
    int64_t var_50_10 = 0
    sub_1405947f0(&var_58, 0x11)
    int32_t rax_34 = var_50_10.d + 0x11
    var_50_10.d = rax_34
    
    if (rax_34 s> 0)
        sub_140594770(&var_58)
    
    UnDecorator::getReferenceType(var_58, u"BlacklistTargets", 0x22)
    sub_1409391d0(arg2, &var_58)
    int64_t rcx_94 = var_58
    
    if (rcx_94 != 0)
        sub_140a74f90(rcx_94)
    
    int32_t i_5 = 0
    
    if (r15[0x12].d s> 0)
        int64_t r13_6 = 0
        
        do
            int16_t* rax_36 = sub_140a4af60(r15[0x11][r13_6])
            var_58 = 0
            int32_t rdx_47 = 0
            var_50_10.d = 0
            int32_t rcx_96 = 0
            var_50_10:4.d = 0
            
            if (rax_36 != 0 && *rax_36 != 0)
                int64_t rbx_7 = -1
                
                do
                    rbx_7 += 1
                while (rax_36[rbx_7] != 0)
                
                if (rbx_7.d + 1 s> 0)
                    sub_1405947f0(&var_58, rbx_7.d + 1)
                    rcx_96 = var_50_10:4.d
                    rdx_47 = var_50_10.d
                
                int32_t rax_37 = rbx_7.d + 1 + rdx_47
                var_50_10.d = rax_37
                
                if (rax_37 s> rcx_96)
                    sub_140594770(&var_58)
                
                UnDecorator::getReferenceType(var_58, rax_36, (rbx_7.d + 1) * 2)
            
            sub_140944f80(arg2, &var_58)
            int64_t rcx_101 = var_58
            
            if (rcx_101 != 0)
                sub_140a74f90(rcx_101)
            
            i_5 += 1
            r13_6 += 1
        while (i_5 s< r15[0x12].d)
    
    sub_140938f70(arg2)

if (r15[0x14].d s> 0)
    var_58 = 0
    int32_t var_50_11 = 0
    sub_1405947f0(&var_58, 0x19)
    int32_t rax_38 = var_50_11 + 0x19
    var_50_11 = rax_38
    
    if (rax_38 s> 0)
        sub_140594770(&var_58)
    
    UnDecorator::getReferenceType(var_58, u"SupportedTargetPlatforms", 0x32)
    sub_1409391d0(arg2, &var_58)
    int64_t rcx_107 = var_58
    
    if (rcx_107 != 0)
        sub_140a74f90(rcx_107)
    
    if (r15[0x14].d s> 0)
        int32_t rcx_108 = arg2[4].d
        
        do
            int64_t r12_1 = r15[0x13]
            
            if (((rcx_108 - 2) & 0xfffffff5) != 0 || rcx_108 == 0xa)
                int64_t* rcx_109 = arg2[1]
                arg_18 = 0x2c
                (*(*rcx_109 + 0x150))(rcx_109, &arg_18, 2)
            
            sub_14067f880(arg2[1])
            int32_t j_8 = *(arg2 + 0x24)
            int64_t* rsi_7 = arg2[1]
            
            if (j_8 s> 0)
                uint64_t j_5 = zx.q(j_8)
                uint64_t j_2
                
                do
                    int64_t rax_41 = *rsi_7
                    arg_18 = 9
                    (*(rax_41 + 0x150))(rsi_7, &arg_18, 2)
                    j_2 = j_5
                    j_5 -= 1
                while (j_2 != 1)
                r15 = arg1
            
            (*(*arg2 + 0x10))(arg2, (sx.q(i_6) << 4) + r12_1)
            i_6 += 1
            arg2[4].d = 7
            rcx_108 = 7
        while (i_6 s< r15[0x14].d)
    
    sub_140938f70(arg2)

return sub_1409399d0(arg2) __tailcall
