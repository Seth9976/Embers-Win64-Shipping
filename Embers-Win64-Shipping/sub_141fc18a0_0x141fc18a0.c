// 函数: sub_141fc18a0
// 地址: 0x141fc18a0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* rax = arg1[0x28]
int64_t* rsi = arg1
arg1.b = 1
int32_t var_98 = 0x2cf5a13d
int32_t var_94 = 0xe
int64_t* r15 = *(rax + 0x188)
int32_t var_90 = sub_140b1a070(arg1.b)
int32_t var_8c = sub_140b19bb0()
int32_t var_88 = sub_140b19e50()
int64_t var_84 = 0
int64_t var_7c = 0
int64_t* rax_4 = j_sub_140b17d00()
int32_t var_68 = rax_4[1].d
int64_t var_70 = *rax_4
int64_t var_60
sub_140596d10(&var_60, &rax_4[2])
int32_t var_50 = 0
int64_t* var_48 = nullptr
int32_t i_4 = 0
int64_t* var_38 = nullptr
int32_t i_5 = 0
int512_t zmm1 = FPM::add(&rsi[0x17c], &var_98)
int32_t i_2 = i_5
int64_t* rbx = var_38

if (i_2 != 0)
    int32_t i
    
    do
        int64_t rcx_3 = *rbx
        
        if (rcx_3 != 0)
            zmm1 = sub_140a74f90(rcx_3)
        
        rbx = &rbx[2]
        i = i_2
        i_2 -= 1
    while (i != 1)

if (var_38 != 0)
    zmm1 = sub_140a74f90(var_38)

int32_t i_3 = i_4
int64_t* rbx_1 = var_48

if (i_3 != 0)
    int32_t i_1
    
    do
        int64_t rcx_5 = *rbx_1
        
        if (rcx_5 != 0)
            zmm1 = sub_140a74f90(rcx_5)
        
        rbx_1 = &rbx_1[3]
        i_1 = i_3
        i_3 -= 1
    while (i_1 != 1)

if (var_48 != 0)
    zmm1 = sub_140a74f90(var_48)

int64_t rcx_7 = var_60

if (rcx_7 != 0)
    zmm1 = sub_140a74f90(rcx_7)

int64_t* rcx_8 = rsi[0xee]
int64_t* rax_6 = (*(*rcx_8 + 0x18))(rcx_8)
int64_t var_a8
int64_t rdx_3

if (rax_6 != 0)
    sub_141fa7730(rax_6, &rsi[0x17c], zmm1)
    
    if ((*(rax_6 + 0x29) & 1) != 0)
        var_a8 = 0
        int64_t var_a0_2 = 0
        sub_1405947f0(&var_a8, 0x15)
        int32_t r14 = var_a0_2:4.d
        int32_t rsi_1 = var_a0_2.d + 0x15
        var_a0_2.d = rsi_1
        
        if (rsi_1 s> r14)
            sub_140594770(&var_a8)
            r14 = var_a0_2:4.d
            rsi_1 = var_a0_2.d
        
        int64_t rbx_3 = var_a8
        UnDecorator::getReferenceType(rbx_3, u"Demo file is corrupt", 0x2a)
        
        if (arg2 != &var_a8)
            int64_t rcx_19 = *arg2
            
            if (rcx_19 != 0)
                sub_140a74f90(rcx_19)
            
            *arg2 = rbx_3
            arg2[1].d = rsi_1
            *(arg2 + 0xc) = r14
        else if (rbx_3 != 0)
            sub_140a74f90(rbx_3)
        
        (*(*r15 + 0x2e0))(r15, 2, arg2)
        return 0
    
    int32_t rcx_22 = rsi[0x185].d
    uint8_t rcx_23 = (rcx_22 u>> 2).b & 1
    rsi[0x1c5].b = (rcx_22 u>> 1).b & 1
    *(rsi + 0xe29) = rcx_23
    char rax_16
    
    if (rcx_23 != 0)
        int64_t* rcx_24 = rsi[0xee]
        int64_t rdx_5
        rdx_5.b = 1
        rax_16 = (*(*rcx_24 + 0x48))(rcx_24, rdx_5)
    
    if (rcx_23 == 0 || rax_16 != 0)
        void* rcx_30 = rsi[0x11]
        *(rsi + 0xe2a) = (rsi[0x185].d u>> 3).b & 1
        *(rcx_30 + 0x1358) = *(rsi + 0xbec)
        *(rsi[0x11] + 0x135c) = rsi[0x17e].d
        
        if ((*(*rsi + 0x448))(rsi, &rsi[0x188], arg2) != 0)
            return 1
        
        (*(*r15 + 0x2e0))(r15, 5, arg2)
        return 0
    
    var_a8 = 0
    int32_t var_a0_3 = 0
    sub_1405947f0(&var_a8, 8)
    int32_t rax_17 = var_a0_3 + 8
    var_a0_3 = rax_17
    
    if (rax_17 s> 0)
        sub_140594770(&var_a8)
    
    UnDecorator::getReferenceType(var_a8, u"Generic", 0x10)
    rdx_3 = 0
else
    int16_t* const r8_1
    
    if (rsi[0x173].d == rax_6.d)
        r8_1 = &data_142d40450
    else
        r8_1 = rsi[0x172]
    
    sub_140a2e390(&var_a8, u"Couldn't open demo file %s for reading", r8_1)
    
    if (arg2 == &var_a8)
        int64_t rcx_11 = var_a8
        
        if (rcx_11 != 0)
            sub_140a74f90(rcx_11)
    else
        int64_t rcx_10 = *arg2
        
        if (rcx_10 != 0)
            sub_140a74f90(rcx_10)
        
        *arg2 = var_a8
        int64_t var_a0
        arg2[1].d = var_a0.d
        *(arg2 + 0xc) = var_a0:4.d
    
    var_a8 = 0
    int32_t var_a0_1 = 0
    sub_1405947f0(&var_a8, 0xd)
    int32_t rax_10 = var_a0_1 + 0xd
    var_a0_1 = rax_10
    
    if (rax_10 s> 0)
        sub_140594770(&var_a8)
    
    UnDecorator::getReferenceType(var_a8, u"DemoNotFound", 0x1a)
    rdx_3 = 1

(*(*r15 + 0x2e0))(r15, rdx_3, &var_a8)
int64_t rcx_29 = var_a8

if (rcx_29 != 0)
    sub_140a74f90(rcx_29)

return 0
