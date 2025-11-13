// 函数: sub_142bbdfa0
// 地址: 0x142bbdfa0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

char arg_10 = 1
char var_54 = 0
char var_53 = 0
void* r15 = *(*(arg2 + 0x90) + 8)
int64_t* rax_1 = sub_142b92360(r15, "sfnt")

if (rax_1 == 0)
    return 0xb

int64_t rax_2 = sub_142b99bf0(*(arg2 + 0x90), "postscript-cmaps", 1)
int64_t* var_50 = sub_142b92360(r15, "pshinter")
int64_t* rax_4 = sub_142b92360(r15, "psaux")

if (rax_4 == 0)
    return 0xb

int64_t* rcx_4 = *(arg2 + 0x90)
*(arg2 + 0x2f0) = rax_4
int64_t rax_5 = sub_142b99bf0(rcx_4, "cff-load", 1)
int32_t rax_6 = sub_142b97060(arg1, 0, arg5)
int32_t var_58 = rax_6

if (rax_6 != 0)
    return zx.q(rax_6)

int64_t var_78_1 = arg6
int32_t rax_7 = rax_1[1](arg1, arg2, zx.q(arg3), zx.q(arg4), var_78_1)
var_58 = rax_7
int32_t rdx

if (rax_7 != 0)
    int32_t rax_12 = sub_142b97060(arg1, 0, arg5)
    
    if (rax_12 != 0)
        return zx.q(rax_12)
    
    var_58 = rax_12
else
    if (arg2[0x3c] != 0x4f54544f)
        return zx.q(rax_7 + 2)
    
    if (arg3 s< 0)
        return 0
    
    var_53 = 1
    int32_t rax_8 = (*(arg2 + 0x2a0))(arg2, 0x68656164, arg1, 0)
    var_58 = rax_8
    int32_t rax_9
    
    if (rax_8 != 0)
        rax_9 = rax_1[8](arg2, arg1)
    else
        arg_10 = rax_8.b
        var_78_1 = arg6
        rax_9 = rax_1[2](arg1, arg2, zx.q(arg3), zx.q(arg4), var_78_1)
    
    var_58 = rax_9
    
    if (rax_9 != 0)
        return zx.q(rax_9)
    
    int32_t rax_10 = (*(arg2 + 0x2a0))(arg2, 0x43464632, arg1, 0, var_78_1)
    var_58 = rax_10
    rdx = rax_10
    
    if (rax_10 == 0)
        var_54 = 1
        arg2[0x102].b = 1
    
    if (rax_10.b == 0x8e)
        int32_t rax_11 = (*(arg2 + 0x2a0))(arg2, 0x43464620, arg1, 0)
        rdx = rax_11
        var_58 = rax_11
    
    if (rdx != 0)
        return zx.q(rdx)

int32_t* r12_2 = *(arg2 + 0x98)
int32_t* var_48 = r12_2
int64_t* rax_13 = sub_142b99860(r12_2, 0x1140, &var_58)
rdx = var_58

if (rdx != 0)
    return zx.q(rdx)

*(arg2 + 0x3e8) = rax_13
int32_t rax_15
int512_t zmm0_1
int512_t zmm1
rax_15, zmm0_1, zmm1 = sub_142bbf9c0(r15, arg1, arg3, rax_13, arg5, arg2, arg_10, var_54)
var_58 = rax_15

if (rax_15 != 0)
    return zx.q(rax_15)

if (arg3 s< 0)
    *arg2 = *(rax_13 + 0x1c)
    return 0

rax_13[0x21b] = var_50
rax_13[0x21d] = rax_5
rax_13[0x21c] = rax_2
uint32_t r15_1 = zx.d(arg3.w)
arg2[1] = r15_1
arg2[4] = rax_13[4].d
var_50.d = r15_1

if (*(rax_13 + 0x664) == 0xffff && rax_2 == 0)
    return 0xb

int64_t rax_20 = *(arg2 + 0x2e0)
int64_t r14_1 = *(arg2 + 0x2e8)
uint32_t rdi_1 = arg3 u>> 0x10

if ((arg2[2] & 0x100) == 0 || rax_20 == 0 || rdi_1 == 0)
label_142bbe278:
    
    if (rax_13[0xc4].b == 0)
        uint32_t rax_22 = 0x3e8
        
        if (arg_10 == 0)
            rax_22 = zx.d(arg2[0x1a].w)
        
        *(rax_13 + 0x624) = rax_22
    
    int32_t rdi_2 = *(rax_13 + 0x61c)
    bool cond:1_1 = rdi_2 s>= 0
    
    if (rdi_2 == 0)
        rdi_2 = rax_13[0xc3].d
        cond:1_1 = rdi_2 s>= 0
    
    if (not(cond:1_1))
        rdi_2 = neg.d(rdi_2)
    
    if (rdi_2 != 0x10000)
        *(rax_13 + 0x624) = sub_142b91790(*(rax_13 + 0x624), rdi_2)
        rax_13[0xc2].d = sub_142b91790(rax_13[0xc2].d, rdi_2)
        rax_13[0xc3].d = sub_142b91790(rax_13[0xc3].d, rdi_2)
        uint32_t rax_26 = sub_142b91790(*(rax_13 + 0x614), rdi_2)
        int32_t rcx_22 = *(rax_13 + 0x61c)
        *(rax_13 + 0x614) = rax_26
        *(rax_13 + 0x61c) = sub_142b91790(rcx_22, rdi_2)
        rax_13[0xc5].d = sub_142b91790(rax_13[0xc5].d, rdi_2)
        *(rax_13 + 0x62c) = sub_142b91790(*(rax_13 + 0x62c), rdi_2)
    
    rax_13[0xc5].d = sx.d(*(rax_13 + 0x62a))
    *(rax_13 + 0x62c) = sx.d(*(rax_13 + 0x62e))
    uint64_t r13_2 = zx.q(rax_13[0x116].d)
    
    if (r13_2.d != 0)
        do
            r13_2 = zx.q(r13_2.d - 1)
            void* r14_2 = rax_13[r13_2 + 0x117]
            
            if (*(r14_2 + 0x40) == 0)
                zmm0_1.o = *(rax_13 + 0x610)
                *(r14_2 + 0x30) = zmm0_1.o
                *(r14_2 + 0x48) = rax_13[0xc5]
                *(r14_2 + 0x44) = *(rax_13 + 0x624)
            else if (rax_13[0xc4].b != 0)
                int32_t rax_32 = *(rax_13 + 0x624)
                int32_t r15_2
                
                if (rax_32 u> 1)
                    r15_2 = *(r14_2 + 0x44)
                
                if (rax_32 u<= 1 || r15_2 u<= 1)
                    r15_2 = 1
                else if (rax_32 u< r15_2)
                    r15_2 = rax_32
                
                sub_142b93a90(&rax_13[0xc2], r14_2 + 0x30, r15_2)
                sub_142b97730(r14_2 + 0x48, &rax_13[0xc2], r15_2)
                *(r14_2 + 0x44) = sub_142b93dd0(*(r14_2 + 0x44), *(rax_13 + 0x624), r15_2)
            
            int32_t rdi_3 = *(r14_2 + 0x3c)
            bool cond:2_1 = rdi_3 s>= 0
            
            if (rdi_3 == 0)
                rdi_3 = *(r14_2 + 0x38)
                cond:2_1 = rdi_3 s>= 0
            
            if (not(cond:2_1))
                rdi_3 = neg.d(rdi_3)
            
            if (rdi_3 != 0x10000)
                *(r14_2 + 0x44) = sub_142b91790(*(r14_2 + 0x44), rdi_3)
                uint32_t rax_36 = sub_142b91790(*(r14_2 + 0x30), rdi_3)
                int32_t rcx_30 = *(r14_2 + 0x38)
                *(r14_2 + 0x30) = rax_36
                uint32_t rax_37 = sub_142b91790(rcx_30, rdi_3)
                int32_t rcx_31 = *(r14_2 + 0x34)
                *(r14_2 + 0x38) = rax_37
                uint32_t rax_38 = sub_142b91790(rcx_31, rdi_3)
                int32_t rcx_32 = *(r14_2 + 0x3c)
                *(r14_2 + 0x34) = rax_38
                *(r14_2 + 0x3c) = sub_142b91790(rcx_32, rdi_3)
                uint32_t rax_40 = sub_142b91790(*(r14_2 + 0x48), rdi_3)
                int32_t rcx_34 = *(r14_2 + 0x4c)
                *(r14_2 + 0x48) = rax_40
                *(r14_2 + 0x4c) = sub_142b91790(rcx_34, rdi_3)
            
            *(r14_2 + 0x48) = sx.d(*(r14_2 + 0x4a))
            *(r14_2 + 0x4c) = sx.d(*(r14_2 + 0x4e))
        while (r13_2.d != 0)
        
        r12_2 = var_48
        r15_1 = var_50.d
    
    char r9_4 = arg_10
    
    if (r9_4 != 0)
        *arg2 = *(rax_13 + 0x1c)
        int32_t rax_46
        
        if (*(rax_13 + 0x664) == 0xffff)
            rax_46 = rax_13[0xa0].d
        else
            rax_46 = rax_13[0x9d].d + 1
        
        arg2[4] = rax_46
        arg2[0x16] = sx.d(*(rax_13 + 0x636))
        arg2[0x17] = sx.d(*(rax_13 + 0x63a))
        int32_t r9_3 = sx.d(arg2[0x17].w)
        arg2[0x18] = (*(rax_13 + 0x63c) + 0xffff) s>> 0x10
        arg2[0x19] = (rax_13[0xc8].d + 0xffff) s>> 0x10
        uint64_t rax_55 = zx.q(*(rax_13 + 0x624))
        int32_t r8_12 = sx.d(arg2[0x19].w)
        arg2[0x1a].w = rax_55.w
        *(arg2 + 0x6a) = r8_12.w
        arg2[0x1b].w = r9_3.w
        int16_t rdx_25 = (((rax_55 * 3).d << 2) s/ 0xa).w
        *(arg2 + 0x6e) = rdx_25
        
        if (sx.d(rdx_25) s< r8_12 - r9_3)
            r8_12.w -= r9_3.w
            *(arg2 + 0x6e) = r8_12.w
        
        arg2[0x1d].w = *(rax_13 + 0x602)
        *(arg2 + 0x76) = *(rax_13 + 0x606)
        int32_t rdx_26 = rax_13[0xbe].d
        
        if (rdx_26 != 0)
            char* rax_61
            rax_61, zmm0_1 = sub_142bc0630(rax_13, rdx_26, r8_12)
            
            if (rax_61 != 0)
                int64_t rax_62
                rax_62, zmm0_1 = sub_142b99bb0(r12_2, rax_61, &var_50)
                *(arg2 + 0x18) = rax_62
        
        if (*(arg2 + 0x18) == 0)
            char* rax_63 = sub_142bc03c0(rax_13, r15_1, zmm0_1, zmm1)
            *(arg2 + 0x18) = rax_63
            
            if (rax_63 != 0)
                sub_142bc2a00(rax_63)
        
        if (*(arg2 + 0x18) == 0)
            char* rax_66 = sub_142bc0630(rax_13, zx.q(*(rax_13 + 0x68c)))
            
            if (rax_66 != 0)
                *(arg2 + 0x18) = sub_142b99bb0(r12_2, rax_66, &var_50)
            
        labelid_5e:
            *(arg2 + 0x20) = sub_142b99bb0(r12_2, "Regular", &var_50)
        else
            char* rax_64 = sub_142bc0630(rax_13, zx.q(*(rax_13 + 0x5ec)))
            char* rcx_44 = *(arg2 + 0x18)
            
            if (rax_64 == 0 || rcx_44 == 0 || *rax_64 == 0)
            label_142bbe6a0:
                *(arg2 + 0x20) = sub_142b99bb0(r12_2, "Regular", &var_50)
            else
                while (true)
                    char rdx_30 = *rax_64
                    char r8_14 = *rcx_44
                    
                    if (rdx_30 == r8_14)
                        rcx_44 = &rcx_44[1]
                        rax_64 = &rax_64[1]
                    else if (rdx_30 == 0x20 || rdx_30 == 0x2d)
                        rax_64 = &rax_64[1]
                    else
                        if (r8_14 != 0x20 && r8_14 != 0x2d)
                            break
                        
                        rcx_44 = &rcx_44[1]
                    
                    if (*rax_64 == 0)
                        goto label_142bbe6a0_2
                
                if (*rcx_44 != 0 || *rax_64 == 0)
                label_142bbe6a0_1:
                    *(arg2 + 0x20) = sub_142b99bb0(r12_2, "Regular", &var_50)
                else
                    char* rax_65 = sub_142b99bb0(r12_2, rax_64, &var_50)
                    sub_142bc2920(*(arg2 + 0x18), rax_65)
                    
                    if (rax_65 == 0)
                    label_142bbe6a0_2:
                        *(arg2 + 0x20) = sub_142b99bb0(r12_2, "Regular", &var_50)
                    else
                        *(arg2 + 0x20) = rax_65
        
        int32_t rcx_50 = 0x819
        
        if (var_53 == 0)
            rcx_50 = 0x811
        
        int32_t rax_70 = rcx_50 | 4
        
        if (rax_13[0xbf].b == 0)
            rax_70 = rcx_50
        
        arg2[2] |= rax_70
        int32_t rcx_51 = *(rax_13 + 0x5f4)
        int32_t r14_3
        r14_3.b = *(rax_13 + 0x5fc) != 0
        int32_t rdi_5
        
        if (rcx_51 != 0xffff)
            char* r8_18
            
            if (rcx_51 u> 0x186)
                uint64_t rcx_52 = zx.q(rcx_51 - 0x187)
                
                if (rcx_52.d u>= rax_13[0xb8].d)
                    r8_18 = nullptr
                else
                    r8_18 = *(rax_13[0xb9] + (rcx_52 << 3))
                
                goto label_142bbe73b
            
            int64_t rax_72 = rax_13[0x21c]
            
            if (rax_72 != 0)
                r8_18 = (*(rax_72 + 0x28))()
            label_142bbe73b:
                rdi_5 = r14_3
                
                if (r8_18 != 0)
                    int64_t rdx_35 = 0
                    
                    while (true)
                        char rcx_53 = r8_18[rdx_35]
                        rdx_35 += 1
                        
                        if (rcx_53 != data_143685240[7][rdx_35])
                            int64_t rcx_54 = 0
                            
                            while (true)
                                char rax_74 = r8_18[rcx_54]
                                rcx_54 += 1
                                
                                if (rax_74 != *(rcx_54 + 0x14368524f))
                                    break
                                
                                if (rcx_54 == 6)
                                    goto label_142bbe788
                            
                            break
                        
                        if (rdx_35 == 5)
                        label_142bbe788:
                            rdi_5 = r14_3 | 2
                            break
            else
                rdi_5 = r14_3
        else
            rdi_5 = r14_3
        
        if ((rdi_5.b & 2) == 0)
            char* _Str1 = *(arg2 + 0x20)
            
            if (_Str1 != 0)
                int32_t rax_75 = strncmp(_Str1, "Bold", 4)
                int32_t rax_76
                
                if (rax_75 != 0)
                    rax_76 = strncmp(*(arg2 + 0x20), "Black", 5)
                
                if (rax_75 == 0 || rax_76 == 0)
                    rdi_5 |= 2
        
        r9_4 = arg_10
        arg2[3] = rdi_5
    
    if (*(rax_13 + 0x664) == 0xffff)
        arg2[2] |= 0x200
    
    if ((*(rax_13 + 0x664) != 0xffff || *(rax_13 + 0x664) != 0xffff) && r9_4 != 0)
        arg2[2] |= 0x1000
    
    uint64_t rdi_7 = zx.q(arg2[0xe])
    int32_t rcx_56 = 0
    
    if (rdi_7.d != 0)
        while (true)
            void* rdx_36 = *(*(arg2 + 0x40) + (zx.q(rcx_56) << 3))
            int16_t rax_78 = *(rdx_36 + 0xc)
            
            if ((rax_78 == 3 && *(rdx_36 + 0xe) == 1) || rax_78 == 0)
                rdx = var_58
                goto label_142bbe8c0
            
            rcx_56 += 1
            
            if (rcx_56 u>= rdi_7.d)
                break
            
            continue
    
    if (r9_4 == 0 || *(rax_13 + 0x664) == 0xffff)
        var_48 = arg2
        int32_t var_3c = 0x10003
        int32_t var_40
        __builtin_strncpy(&var_40, "cinu", 4)
        int32_t rax_79 = sub_142b91640(&data_1436852b0, 0, &var_48, nullptr)
        rdx = rax_79
        uint32_t rax_80
        
        if (rax_79 != 0)
            rax_80 = zx.d(rax_79.b)
        
        if (rax_79 == 0 || rax_80 == 0xa3 || rax_80 == 7)
            bool cond:3_1 = *(arg2 + 0x88) != 0
            rdx = 0
            var_58 = 0
            
            if (not(cond:3_1) && rdi_7.d != arg2[0xe])
                *(arg2 + 0x88) = *(*(arg2 + 0x40) + (rdi_7 << 3))
            
        label_142bbe8c0:
            
            if (rax_13[0x19].d u> 0)
                var_48 = arg2
                var_3c.w = 7
                int32_t rax_82 = *(rax_13 + 0xc4)
                
                if (rax_82 == 0)
                    var_3c:2.w = 0
                    int32_t var_40_1
                    __builtin_strncpy(&var_40_1, "BODA", 4)
                else if (rax_82 != 1)
                    int32_t var_40_3
                    __builtin_strncpy(&var_40_3, "CBDA", 4)
                    var_3c:2.w = 2
                else
                    var_3c:2.w = 1
                    int32_t var_40_2
                    __builtin_strncpy(&var_40_2, "EBDA", 4)
                
                rdx = sub_142b91640(&data_143685260, 0, &var_48, nullptr)
    else
        rdx = var_58
else
    int32_t rax_21 = (*(rax_20 + 0x38))(arg2, zx.q(rdi_1))
    var_58 = rax_21
    rdx = rax_21
    
    if (rax_21 == 0)
        if (r14_1 != 0)
            (*(r14_1 + 0x38))(arg2)
        
        goto label_142bbe278

return zx.q(rdx)
