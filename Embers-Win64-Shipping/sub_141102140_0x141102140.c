// 函数: sub_141102140
// 地址: 0x141102140
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_238
int64_t rax_1 = __security_cookie ^ &var_238
uint64_t* r14 = *(arg1 + 0xa0)
int32_t rcx_1 = r14[0x15b].d
int32_t rbx = *(arg2 + 0x8c)
int64_t* var_1e8 = &data_143ec4c60

if (rbx != rcx_1)
    bool cond:0_1 = *(arg2 + 0x14) u> 0
    *(arg2 + 0x8c) = rcx_1
    
    if (cond:0_1)
        void*** rdx_2 = (*(arg2 + 0x30) + 7) & 0xfffffffffffffff8
        void* rax_4 = &rdx_2[3]
        
        if (rax_4 u> *(arg2 + 0x38))
            sub_140b0e3d0(arg2 + 0x30, 0x20)
            rdx_2 = (*(arg2 + 0x30) + 7) & 0xfffffffffffffff8
            rax_4 = &rdx_2[3]
        
        *(arg2 + 0x30) = rax_4
        int64_t* rax_5 = *(arg2 + 8)
        *(arg2 + 0x14) += 1
        *rax_5 = rdx_2
        int32_t rax_6 = *(arg2 + 0x8c)
        *(arg2 + 8) = &rdx_2[1]
        rdx_2[1] = 0
        *rdx_2 = &data_142f11588
        rdx_2[2].d = rax_6
    else
        *(arg2 + 0x90) = rcx_1

char rax_8
char rdx_6
rax_8, rdx_6 = sub_14110e330(r14[0x2a9].d, sub_1422e5a30(r14))
uint64_t rdi

if (rax_8 == 0 || *(arg1 + 0xa8) != 1 || r14[1] == 0 || 1f f<= *(r14 + 0x2bc) || data_143a2dd48 == 0
        || *(*(arg1 + 8) + 0x18b0) == 0)
    rdi.b = 0
else
    bool cond:2_1 = data_143e51029 == 0
    data_143e51028 = 0
    
    if (not(cond:2_1))
        data_143e51029 = 0
        sub_141fe98a0(&data_143a2dd30, rdx_6)
    
    if (data_1439b55b4 != 0 && data_1439b55a0 s>= 2)
        sub_1411238d0(arg2, *(arg1 + 8), r14, arg3, &data_143e570a0)
    
    int64_t* var_1f0 = nullptr
    char var_200_1 = 0
    char var_208_1 = 1
    int64_t rcx_7 = data_143ec4fdc
    char var_210_1 = 1
    int32_t temp0_1
    int32_t temp1_1
    temp0_1:temp1_1 = sx.q(rcx_7.d)
    int16_t var_190_1 = 0
    int128_t var_1c8 = data_1439c7b20
    int32_t temp2_1
    int32_t temp3_1
    temp2_1:temp3_1 = sx.q((rcx_7 u>> 0x20).d)
    int32_t var_1b8_1 = data_1439c7b30
    int32_t var_1ac_1 = 0
    int32_t var_1a4_1 = 0x10000
    int32_t var_1a8_1 = 1
    int16_t var_1a0_1 = 1
    wchar16 const* const var_188_1 = u"UnknownTexture2D"
    int32_t var_198_1 = data_143ed33bc
    int32_t var_19c_1 = 0xa
    int32_t var_194_1 = 0x10009
    int16_t var_180_1 = 1
    char var_17e_1 = 0
    sub_1419a0ce0(&data_1439c9260, arg2, &var_1c8, &var_1f0, DistanceFieldNormal", var_210_1, 
        var_208_1, var_200_1)
    sub_1410ef010(arg2, arg1 + 0xa0, &var_1f0[1], arg3)
    
    if (data_1439b55b4 != 0 && data_1439b55a0 s>= 2)
        sub_14111ebe0(arg2, *(arg1 + 8), arg1 + 0xa0, &var_1f0[1], arg3)
    
    uint64_t var_1f8 = 0
    var_208_1.q = &var_1f8
    var_210_1.q = &var_1f0
    sub_141137fe0(arg1, arg2, r14, arg3, arg4, var_210_1, var_208_1)
    char rcx_13 = data_143f0f1c7
    
    if (rcx_13 != 0 && *(data_143ed2e18 + 4) != 0 && data_1439b55b4 != 0 && data_1439b55a0 s>= 2)
        void* rdi_1 = data_143e570f8
        
        if (*(rdi_1 + 0x11) != 0)
            int64_t* rcx_14 = data_143f0f180
            (*(*rcx_14 + 0x628))(rcx_14, rdi_1)
            *(rdi_1 + 0x11) = 0
            rcx_13 = data_143f0f1c7
        
        void* rdi_2 = data_143e57118
        
        if (*(rdi_2 + 0x11) != 0)
            if (rcx_13 != 0)
                int64_t* rcx_15 = data_143f0f180
                (*(*rcx_15 + 0x628))(rcx_15, rdi_2)
            
            *(rdi_2 + 0x11) = 0
            rcx_13 = data_143f0f1c7
        
        if (data_143e570b0 != 0)
            void* rdi_3 = data_143e57138
            
            if (*(rdi_3 + 0x11) != 0)
                if (rcx_13 != 0)
                    int64_t* rcx_16 = data_143f0f180
                    (*(*rcx_16 + 0x628))(rcx_16, rdi_3)
                
                *(rdi_3 + 0x11) = 0
                rcx_13 = data_143f0f1c7
        
        void* rdi_4 = *(r14[1] + 0xd40)
        void* r14_1 = *(rdi_4 + 0x10)
        
        if (*(r14_1 + 0x11) != 0)
            if (rcx_13 != 0)
                int64_t* rcx_17 = data_143f0f180
                (*(*rcx_17 + 0x630))(rcx_17, r14_1)
            
            *(r14_1 + 0x11) = 0
            rcx_13 = data_143f0f1c7
        
        void* r14_2 = *(rdi_4 + 0x30)
        
        if (*(r14_2 + 0x11) != 0)
            if (rcx_13 != 0)
                int64_t* rcx_18 = data_143f0f180
                (*(*rcx_18 + 0x630))(rcx_18, r14_2)
            
            *(r14_2 + 0x11) = 0
            rcx_13 = data_143f0f1c7
        
        void* r14_3 = *(rdi_4 + 0x50)
        
        if (*(r14_3 + 0x11) != 0)
            if (rcx_13 != 0)
                int64_t* rcx_19 = data_143f0f180
                (*(*rcx_19 + 0x630))(rcx_19, r14_3)
            
            *(r14_3 + 0x11) = 0
            rcx_13 = data_143f0f1c7
        
        void* r14_4 = *(rdi_4 + 0x70)
        
        if (*(r14_4 + 0x11) != 0)
            if (rcx_13 != 0)
                int64_t* rcx_20 = data_143f0f180
                (*(*rcx_20 + 0x630))(rcx_20, r14_4)
            
            *(r14_4 + 0x11) = 0
            rcx_13 = data_143f0f1c7
        
        void* rdi_5 = *(rdi_4 + 0x90)
        
        if (*(rdi_5 + 0x11) != 0)
            if (rcx_13 != 0)
                int64_t* rcx_21 = data_143f0f180
                (*(*rcx_21 + 0x630))(rcx_21, rdi_5)
            
            *(rdi_5 + 0x11) = 0
    
    sub_1410b1550(arg1, arg2, &var_1f8)
    
    if (arg7 == 0)
        int64_t rdi_6 = *(var_1e8[8] + 8)
        int64_t* rax_30 = sub_14139d690(var_1e8)
        int128_t zmm1_1 = data_142d3f5a0
        int64_t rcx_24 = *rax_30
        int64_t var_178 = rcx_24
        int32_t var_a0_1 = 0
        int32_t var_9c
        __builtin_memset(&var_9c, 0xff, 0x14)
        int128_t var_88_1 = zmm1_1
        int64_t var_78
        __builtin_memset(&var_78, 0, 0x19)
        int64_t var_170_1 = 0
        int32_t var_168_1 = 0xffffffff
        int16_t var_164_1 = 0x500
        int64_t var_b8_1 = rdi_6
        bool var_5f_1 = *(rcx_24 + 0x38) u> 1
        int64_t var_b0_1 = 0
        char var_a8_1 = 0x45
        int32_t var_a4_1 = 0x21
        void var_160
        memset(&var_160, 0, 0xa8)
        int64_t rdi_9 = (*(arg2 + 0x30) + 1) & 0xfffffffffffffffe
        int64_t rax_31 = rdi_9 + 0x20
        
        if (rax_31 u> *(arg2 + 0x38))
            sub_140b0e3d0(arg2 + 0x30, 0x22)
            rdi_9 = (*(arg2 + 0x30) + 1) & 0xfffffffffffffffe
            rax_31 = rdi_9 + 0x20
        
        wchar16 const* const rcx_27 = u"DistanceFieldAO"
        *(arg2 + 0x30) = rax_31
        wchar16 const i
        
        do
            i = *rcx_27
            *(rcx_27 + rdi_9 - u"DistanceFieldAO") = i
            rcx_27 = &rcx_27[1]
        while (i != 0)
        void*** rcx_30 = (*(arg2 + 0x30) + 7) & 0xfffffffffffffff8
        void* rax_32 = &rcx_30[0x27]
        
        if (rax_32 u> *(arg2 + 0x38))
            sub_140b0e3d0(arg2 + 0x30, 0x140)
            rcx_30 = (*(arg2 + 0x30) + 7) & 0xfffffffffffffff8
            rax_32 = &rcx_30[0x27]
        
        *(arg2 + 0x30) = rax_32
        void**** rax_33 = *(arg2 + 8)
        *(arg2 + 0x14) += 1
        *rax_33 = rcx_30
        *(arg2 + 8) = &rcx_30[1]
        sub_1405d11b0(rcx_30, &var_178, rdi_9)
        *(arg2 + 0x1c4) = 1
        sub_1405d19b0(arg2, &var_178)
        int64_t var_68
        *(arg2 + 0x178) = var_68:7.b
        *(arg2 + 0x179) = 0
        *(arg2 + 0x1c4) = 1
        int64_t var_70
        sub_1405d1550(&var_70)
    else
        int64_t* var_218_4
        var_218_4.b = 1
        sub_141394ae0(var_1e8, arg2, 0, 0x11, var_218_4.b)
    
    if (arg6 != 0)
        if (arg7 != 0)
            sub_14115e170(arg2, arg1 + 0xa0, &var_1f8, 0)
        else
            sub_14115e170(arg2, arg1 + 0xa0, &var_1f8, 1)
    else if (arg7 != 0)
        sub_14115e170(arg2, arg1 + 0xa0, &var_1f8, 0)
    
    uint64_t rcx_37 = var_1f8
    rdi = *arg5
    *arg5 = rcx_37
    
    if (rcx_37 != 0)
        (*(*rcx_37 + 0x30))()
    
    if (rdi != 0)
        (*(*rdi + 0x38))(rdi)
    
    if (arg7 == 0)
        sub_141096650(arg2)
        uint64_t rax_38 = *arg5
        int128_t zmm1_2 = data_142d3f800
        int64_t rdi_13 = *(arg2 + 0x30) + 7
        var_1c8 = data_142d57d10
        rdi = rdi_13 & 0xfffffffffffffff8
        var_1b8_1.o = zmm1_2
        var_1a8_1.o = data_142d57920
        int64_t r12_1 = *(rax_38 + 0x10)
        int64_t* r15_2 = *(rax_38 + 8)
        int64_t rax_39 = rdi + 0x50
        
        if (rax_39 u> *(arg2 + 0x38))
            sub_140b0e3d0(arg2 + 0x30, 0x58)
            rdi = (*(arg2 + 0x30) + 7) & 0xfffffffffffffff8
            rax_39 = rdi + 0x50
        
        *(arg2 + 0x30) = rax_39
        uint64_t* rax_40 = *(arg2 + 8)
        *(arg2 + 0x14) += 1
        *rax_40 = rdi
        *(arg2 + 8) = rdi + 8
        *(rdi + 8) = 0
        *rdi = &data_142d56628
        *(rdi + 0x10) = var_1c8.d
        *(rdi + 0x14) = var_1c8:4.d
        *(rdi + 0x18) = var_1c8:8.d
        *(rdi + 0x1c) = var_1c8:0xc.d
        *(rdi + 0x20) = var_1b8_1
        *(rdi + 0x24) = (temp1_1 - temp0_1) s>> 1
        *(rdi + 0x28) = (temp3_1 - temp2_1) s>> 1
        *(rdi + 0x2c) = var_1ac_1
        *(rdi + 0x30) = var_1a8_1
        *(rdi + 0x34) = var_1a4_1
        *(rdi + 0x38) = var_1a0_1.d
        *(rdi + 0x3c) = var_19c_1
        *(rdi + 0x40) = r15_2
        *(rdi + 0x48) = r12_1
        
        if ((*(*r15_2 + 8))(r15_2) == 0)
            int64_t* rcx_43 = *(rdi + 0x40)
            
            if ((*(*rcx_43 + 0x18))(rcx_43) == 0)
                int64_t* rcx_44 = *(rdi + 0x40)
                
                if ((*(*rcx_44 + 0x20))(rcx_44) == 0)
                    int64_t* rcx_45 = *(rdi + 0x40)
                    (*(*rcx_45 + 0x10))(rcx_45)
        
        int64_t* rcx_46 = *(rdi + 0x48)
        
        if ((*(*rcx_46 + 8))(rcx_46) == 0)
            int64_t* rcx_47 = *(rdi + 0x48)
            
            if ((*(*rcx_47 + 0x18))(rcx_47) == 0)
                int64_t* rcx_48 = *(rdi + 0x48)
                
                if ((*(*rcx_48 + 0x20))(rcx_48) == 0)
                    int64_t* rcx_49 = *(rdi + 0x48)
                    (*(*rcx_49 + 0x10))(rcx_49)
    else
        sub_14139bc50(var_1e8, arg2)
    
    uint64_t rcx_50 = var_1f8
    
    if (rcx_50 != 0)
        (*(*rcx_50 + 0x38))(rcx_50)
    
    int64_t* rcx_51 = var_1f0
    
    if (rcx_51 != 0)
        (*(*rcx_51 + 0x38))(rcx_51)
    
    rdi.b = 1

if (*(arg2 + 0x8c) != rbx)
    bool cond:1_1 = *(arg2 + 0x14) u> 0
    *(arg2 + 0x8c) = rbx
    
    if (cond:1_1)
        void*** rdx_32 = (*(arg2 + 0x30) + 7) & 0xfffffffffffffff8
        void* rax_70 = &rdx_32[3]
        
        if (rax_70 u> *(arg2 + 0x38))
            sub_140b0e3d0(arg2 + 0x30, 0x20)
            rdx_32 = (*(arg2 + 0x30) + 7) & 0xfffffffffffffff8
            rax_70 = &rdx_32[3]
        
        *(arg2 + 0x30) = rax_70
        int64_t* rax_71 = *(arg2 + 8)
        *(arg2 + 0x14) += 1
        *rax_71 = rdx_32
        int32_t rax_72 = *(arg2 + 0x8c)
        *(arg2 + 8) = &rdx_32[1]
        rdx_32[1] = 0
        *rdx_32 = &data_142f11588
        rdx_32[2].d = rax_72
    else
        *(arg2 + 0x90) = rbx

__security_check_cookie(rax_1 ^ &var_238)
return zx.q(rdi.b)
