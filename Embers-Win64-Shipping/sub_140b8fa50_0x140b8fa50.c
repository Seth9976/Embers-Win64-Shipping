// 函数: sub_140b8fa50
// 地址: 0x140b8fa50
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* r14 = arg3
sub_140944e70(arg2)
int64_t var_58 = 0
int32_t var_50 = 0
sub_1405947f0(&var_58, 0xc)
int32_t rax = var_50 + 0xc
var_50 = rax

if (rax s> 0)
    sub_140594770(&var_58)

UnDecorator::getReferenceType(var_58, u"FileVersion", 0x18)
sub_140b771c0(arg2, &var_58, 3)
int64_t rcx_5 = var_58

if (rcx_5 != 0)
    sub_140a74f90(rcx_5)

var_58 = 0
int32_t var_50_1 = 0
sub_1405947f0(&var_58, 0x12)
int32_t rax_1 = var_50_1 + 0x12
var_50_1 = rax_1

if (rax_1 s> 0)
    sub_140594770(&var_58)

UnDecorator::getReferenceType(var_58, u"EngineAssociation", 0x24)
void var_48
sub_140918d50(arg2, &var_58, sub_140596d10(&var_48, arg1 + 8))
int64_t rcx_11 = var_58

if (rcx_11 != 0)
    sub_140a74f90(rcx_11)

var_58 = 0
int32_t var_50_2 = 0
sub_1405947f0(&var_58, 9)
int32_t rax_3 = var_50_2 + 9
var_50_2 = rax_3

if (rax_3 s> 0)
    sub_140594770(&var_58)

UnDecorator::getReferenceType(var_58, u"Category", 0x12)
sub_140918d50(arg2, &var_58, sub_140596d10(&var_48, arg1 + 0x18))
int64_t rcx_17 = var_58

if (rcx_17 != 0)
    sub_140a74f90(rcx_17)

var_58 = 0
int32_t var_50_3 = 0
sub_1405947f0(&var_58, 0xc)
int32_t rax_5 = var_50_3 + 0xc
var_50_3 = rax_5

if (rax_5 s> 0)
    sub_140594770(&var_58)

UnDecorator::getReferenceType(var_58, u"Description", 0x18)
sub_140918d50(arg2, &var_58, sub_140596d10(&var_48, arg1 + 0x28))
int64_t rcx_23 = var_58

if (rcx_23 != 0)
    sub_140a74f90(rcx_23)

if (*(arg1 + 0x110) != 0)
    var_58 = 0
    int32_t var_50_4 = 0
    sub_1405947f0(&var_58, 0xb)
    int32_t rax_7 = var_50_4 + 0xb
    var_50_4 = rax_7
    
    if (rax_7 s> 0)
        sub_140594770(&var_58)
    
    UnDecorator::getReferenceType(var_58, u"Enterprise", 0x16)
    sub_140668ff0(arg2, &var_58, *(arg1 + 0x110))
    int64_t rcx_28 = var_58
    
    if (rcx_28 != 0)
        sub_140a74f90(rcx_28)

if (*(arg1 + 0x40) s> 0)
    var_58 = 0
    int32_t var_50_5 = 0
    sub_1405947f0(&var_58, 8)
    int32_t rax_8 = var_50_5 + 8
    var_50_5 = rax_8
    
    if (rax_8 s> 0)
        sub_140594770(&var_58)
    
    UnDecorator::getReferenceType(var_58, u"Modules", 0x10)
    sub_1409391d0(arg2, &var_58)
    int64_t rcx_33 = var_58
    
    if (rcx_33 != 0)
        sub_140a74f90(rcx_33)
    
    int32_t i = 0
    
    if (*(arg1 + 0x40) s> 0)
        do
            sub_140b8d530(sx.q(i) * 0xa0 + *(arg1 + 0x38), arg2)
            i += 1
        while (i s< *(arg1 + 0x40))
    
    sub_140938f70(arg2)

if (*(arg1 + 0x50) s> 0)
    var_58 = 0
    int32_t var_50_6 = 0
    sub_1405947f0(&var_58, 8)
    int32_t rax_10 = var_50_6 + 8
    var_50_6 = rax_10
    
    if (rax_10 s> 0)
        sub_140594770(&var_58)
    
    UnDecorator::getReferenceType(var_58, u"Plugins", 0x10)
    sub_1409391d0(arg2, &var_58)
    int64_t rcx_42 = var_58
    
    if (rcx_42 != 0)
        sub_140a74f90(rcx_42)
    
    int32_t i_1 = 0
    
    if (*(arg1 + 0x50) s> 0)
        do
            sub_140b8ef70(sx.q(i_1) * 0xa8 + *(arg1 + 0x48), arg2)
            i_1 += 1
        while (i_1 s< *(arg1 + 0x50))
    
    sub_140938f70(arg2)

int16_t arg_8
void* arg_20

if (*(arg1 + 0x120) s> 0)
    var_58 = 0
    int32_t var_50_7 = 0
    sub_1405947f0(&var_58, 0x1c)
    int32_t rax_12 = var_50_7 + 0x1c
    var_50_7 = rax_12
    
    if (rax_12 s> 0)
        sub_140594770(&var_58)
    
    UnDecorator::getReferenceType(var_58, u"AdditionalPluginDirectories", 0x38)
    sub_1409391d0(arg2, &var_58)
    int64_t rcx_50 = var_58
    
    if (rcx_50 != 0)
        sub_140a74f90(rcx_50)
    
    int64_t* i_2 = *(arg1 + 0x118)
    void* r12_3 = &i_2[sx.q(*(arg1 + 0x120)) * 2]
    arg_20 = r12_3
    
    for (; i_2 != r12_3; i_2 = &i_2[2])
        int64_t* rax_13 = sub_140b80fd0(arg1, &var_58, i_2, r14)
        int32_t rdx_22 = arg2[4].d
        
        if (((rdx_22 - 2) & 0xfffffff5) != 0 || rdx_22 == 0xa)
            int64_t* rcx_53 = arg2[1]
            arg_8 = 0x2c
            int64_t r9_2 = *rcx_53
            (*(r9_2 + 0x150))(rcx_53, &arg_8, 2, r9_2)
        
        sub_14067f880(arg2[1])
        int32_t j_6 = *(arg2 + 0x24)
        int64_t* r14_1 = arg2[1]
        
        if (j_6 s> 0)
            uint64_t j_3 = zx.q(j_6)
            uint64_t j
            
            do
                int64_t rax_14 = *r14_1
                arg_8 = 9
                (*(rax_14 + 0x150))(r14_1, &arg_8, 2)
                j = j_3
                j_3 -= 1
            while (j != 1)
            r12_3 = arg_20
        
        (*(*arg2 + 0x10))(arg2, rax_13)
        int64_t rcx_57 = var_58
        arg2[4].d = 7
        
        if (rcx_57 != 0)
            sub_140a74f90(rcx_57)
        
        r14 = arg3
    
    sub_140938f70(arg2)

if (*(arg1 + 0x130) s> 0)
    var_58 = 0
    int32_t var_50_8 = 0
    sub_1405947f0(&var_58, 0x1a)
    int32_t rax_16 = var_50_8 + 0x1a
    var_50_8 = rax_16
    
    if (rax_16 s> 0)
        sub_140594770(&var_58)
    
    UnDecorator::getReferenceType(var_58, u"AdditionalRootDirectories", 0x34)
    sub_1409391d0(arg2, &var_58)
    int64_t rcx_63 = var_58
    
    if (rcx_63 != 0)
        sub_140a74f90(rcx_63)
    
    int64_t* i_3 = *(arg1 + 0x128)
    void* r12_6 = &i_3[sx.q(*(arg1 + 0x130)) * 2]
    arg_20 = r12_6
    
    for (; i_3 != r12_6; i_3 = &i_3[2])
        int64_t* rax_17 = sub_140b80fd0(arg1, &var_58, i_3, r14)
        int32_t rdx_29 = arg2[4].d
        
        if (((rdx_29 - 2) & 0xfffffff5) != 0 || rdx_29 == 0xa)
            int64_t* rcx_66 = arg2[1]
            arg_8 = 0x2c
            int64_t r9_4 = *rcx_66
            (*(r9_4 + 0x150))(rcx_66, &arg_8, 2, r9_4)
        
        sub_14067f880(arg2[1])
        int32_t j_7 = *(arg2 + 0x24)
        int64_t* r14_2 = arg2[1]
        
        if (j_7 s> 0)
            uint64_t j_4 = zx.q(j_7)
            uint64_t j_1
            
            do
                int64_t rax_18 = *r14_2
                arg_8 = 9
                (*(rax_18 + 0x150))(r14_2, &arg_8, 2)
                j_1 = j_4
                j_4 -= 1
            while (j_1 != 1)
            r12_6 = arg_20
        
        (*(*arg2 + 0x10))(arg2, rax_17)
        int64_t rcx_70 = var_58
        arg2[4].d = 7
        
        if (rcx_70 != 0)
            sub_140a74f90(rcx_70)
        
        r14 = arg3
    
    sub_140938f70(arg2)

if (*(arg1 + 0x60) s> 0)
    var_58 = 0
    int32_t var_50_9 = 0
    sub_1405947f0(&var_58, 0x10)
    int32_t rax_20 = var_50_9 + 0x10
    var_50_9 = rax_20
    
    if (rax_20 s> 0)
        sub_140594770(&var_58)
    
    UnDecorator::getReferenceType(var_58, u"TargetPlatforms", 0x20)
    sub_1409391d0(arg2, &var_58)
    int64_t rcx_76 = var_58
    
    if (rcx_76 != 0)
        sub_140a74f90(rcx_76)
    
    int32_t i_4 = 0
    
    if (*(arg1 + 0x60) s> 0)
        do
            int64_t* rax_22 = sub_140b63b70(*(arg1 + 0x58) + (sx.q(i_4) << 3), &var_58)
            int32_t rdx_36 = arg2[4].d
            
            if (((rdx_36 - 2) & 0xfffffff5) != 0 || rdx_36 == 0xa)
                int64_t* rcx_80 = arg2[1]
                arg_8 = 0x2c
                int64_t r9_5 = *rcx_80
                (*(r9_5 + 0x150))(rcx_80, &arg_8, 2, r9_5)
            
            sub_14067f880(arg2[1])
            int32_t j_8 = *(arg2 + 0x24)
            int64_t* r14_3 = arg2[1]
            
            if (j_8 s> 0)
                uint64_t j_5 = zx.q(j_8)
                uint64_t j_2
                
                do
                    int64_t rax_23 = *r14_3
                    arg_8 = 9
                    (*(rax_23 + 0x150))(r14_3, &arg_8, 2)
                    j_2 = j_5
                    j_5 -= 1
                while (j_2 != 1)
            
            (*(*arg2 + 0x10))(arg2, rax_22)
            int64_t rcx_84 = var_58
            arg2[4].d = 7
            
            if (rcx_84 != 0)
                sub_140a74f90(rcx_84)
            
            i_4 += 1
        while (i_4 s< *(arg1 + 0x60))
    
    sub_140938f70(arg2)

if (*(arg1 + 0x68) != 0)
    var_58 = 0
    int32_t var_50_10 = 0
    sub_1405947f0(&var_58, 0x13)
    int32_t rax_25 = var_50_10 + 0x13
    var_50_10 = rax_25
    
    if (rax_25 s> 0)
        sub_140594770(&var_58)
    
    UnDecorator::getReferenceType(var_58, u"EpicSampleNameHash", 0x26)
    sub_140a2e390(&var_48, u"%u", zx.q(*(arg1 + 0x68)))
    sub_140918d50(arg2, &var_58, &var_48)
    int64_t rcx_91 = var_58
    
    if (rcx_91 != 0)
        sub_140a74f90(rcx_91)

if (*(arg1 + 0x78) != *(arg1 + 0xa4))
    var_58 = 0
    int32_t var_50_11 = 0
    sub_1405947f0(&var_58, 0xe)
    int32_t rax_27 = var_50_11 + 0xe
    var_50_11 = rax_27
    
    if (rax_27 s> 0)
        sub_140594770(&var_58)
    
    UnDecorator::getReferenceType(var_58, u"PreBuildSteps", 0x1c)
    sub_140b8cf50(arg1 + 0x70, arg2, &var_58)
    int64_t rcx_96 = var_58
    
    if (rcx_96 != 0)
        sub_140a74f90(rcx_96)

if (*(arg1 + 0xc8) != *(arg1 + 0xf4))
    var_58 = 0
    int32_t var_50_12 = 0
    sub_1405947f0(&var_58, 0xf)
    int32_t rax_29 = var_50_12 + 0xf
    var_50_12 = rax_29
    
    if (rax_29 s> 0)
        sub_140594770(&var_58)
    
    UnDecorator::getReferenceType(var_58, u"PostBuildSteps", 0x1e)
    sub_140b8cf50(arg1 + 0xc0, arg2, &var_58)
    int64_t rcx_101 = var_58
    
    if (rcx_101 != 0)
        sub_140a74f90(rcx_101)

return sub_1409399d0(arg2) __tailcall
