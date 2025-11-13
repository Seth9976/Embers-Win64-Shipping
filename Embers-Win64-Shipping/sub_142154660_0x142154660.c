// 函数: sub_142154660
// 地址: 0x142154660
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

sub_140ce8e10(arg1, arg2)
(*(*arg2 + 0x130))(arg2, arg1 + 0x68)
int32_t rdi = 0
int64_t* r14 = *(arg1 + 0x1310)
int64_t r15 = 0
void* result = &r14[sx.q(*(arg1 + 0x1318))]
uint64_t r12_1 = sx.q(*(arg1 + 0x1318)) << 3 u>> 3

if (r14 u> result)
    r12_1 = 0

int64_t arg_8

if (r12_1 != 0)
    do
        arg_8 = *r14
        result = (*(*arg2 + 0x130))(arg2, &arg_8)
        r15 += 1
        r14 = &r14[1]
    while (r15 != r12_1)

if (*(arg2 + 0x2a) s< 0)
    (*(*arg2 + 8))(arg2, sx.q(*(arg1 + 0x1318)) << 3, sx.q(*(arg1 + 0x131c)) << 3)
    (*(*arg2 + 8))(arg2, sx.q(*(arg1 + 0x198)) * 2, sx.q(*(arg1 + 0x19c)) * 2)
    (*(*arg2 + 8))(arg2, sx.q(*(arg1 + 0x1a8)) * 2, sx.q(*(arg1 + 0x1ac)) * 2)
    (*(*arg2 + 8))(arg2, sx.q(*(arg1 + 0x1c0)) * 2, sx.q(*(arg1 + 0x1c4)) * 2)
    (*(*(arg1 + 0x540) + 0x210))(arg1 + 0x540, arg2)
    (*(*arg2 + 8))(arg2, sx.q(*(arg1 + 0x1318)) << 3, sx.q(*(arg1 + 0x131c)) << 3)
    (*(*arg2 + 8))(arg2, sx.q(*(arg1 + 0x1328)) << 2, sx.q(*(arg1 + 0x132c)) << 2)
    (*(*arg2 + 8))(arg2, sx.q(*(arg1 + 0x1338)) << 2, sx.q(*(arg1 + 0x133c)) << 2)
    (*(*arg2 + 8))(arg2, sx.q(*(arg1 + 0x1348)) << 2, sx.q(*(arg1 + 0x134c)) << 2)
    int64_t r9_1 = *arg2
    (*(r9_1 + 8))(arg2, sx.q(*(arg1 + 0x1378)) * 0x18, sx.q(*(arg1 + 0x137c)) * 0x18, r9_1)
    int64_t r9_2 = *arg2
    (*(r9_2 + 8))(arg2, zx.q(*(arg1 + 0x1398) + 0x1f) u>> 5 << 2, 
        zx.q(*(arg1 + 0x139c) + 0x1f) u>> 5 << 2, r9_2)
    int64_t rdx_26 = sx.q(*(arg1 + 0x13b8)) << 2
    (*(*arg2 + 8))(arg2, rdx_26, rdx_26)
    int64_t r9_3 = *arg2
    (*(r9_3 + 8))(arg2, sx.q(*(arg1 + 0x13d0)) * 0xc, sx.q(*(arg1 + 0x13d4)) * 0xc, r9_3)
    int64_t r9_4 = *arg2
    (*(r9_4 + 8))(arg2, zx.q(*(arg1 + 0x13f0) + 0x1f) u>> 5 << 2, 
        zx.q(*(arg1 + 0x13f4) + 0x1f) u>> 5 << 2, r9_4)
    int64_t rdx_34 = sx.q(*(arg1 + 0x1410)) << 2
    (*(*arg2 + 8))(arg2, rdx_34, rdx_34)
    (*(*arg2 + 8))(arg2, sx.q(*(arg1 + 0x1420)) << 5, sx.q(*(arg1 + 0x1424)) << 5)
    int64_t r9_5 = *arg2
    (*(r9_5 + 8))(arg2, zx.q(*(arg1 + 0x1440) + 0x1f) u>> 5 << 2, 
        zx.q(*(arg1 + 0x1444) + 0x1f) u>> 5 << 2, r9_5)
    int64_t rdx_42 = sx.q(*(arg1 + 0x1460)) << 2
    (*(*arg2 + 8))(arg2, rdx_42, rdx_42)
    int32_t var_94_1 = 1
    int32_t r11_1 = *(arg1 + 0x1440)
    int32_t rcx_20 = 0
    int32_t var_98_1 = 0
    int32_t r8_38 = 0
    int32_t var_88_1 = 0xffffffff
    int64_t var_84_1 = 0
    
    if (r11_1 != 0)
        void* rax_21 = *(arg1 + 0x1438)
        void* r9_6 = arg1 + 0x1428
        
        if (rax_21 != 0)
            r9_6 = rax_21
        
        int32_t temp0_1
        int32_t temp1_1
        temp0_1:temp1_1 = sx.q(r11_1 - 1)
        int32_t rdx_45 = *r9_6
        
        if (rdx_45 != 0)
        label_1421549d8:
            int32_t rax_28 = neg.d(rdx_45) & rdx_45
            uint64_t rflags_1
            int32_t temp0_2
            temp0_2, rflags_1 = _bit_scan_reverse(rax_28)
            int32_t var_94_2 = rax_28
            int32_t rax_29
            
            if (rax_28 == 0)
                rax_29 = 0x20
            else
                rax_29 = 0x1f - temp0_2
            
            var_84_1.d = r8_38 - rax_29 + 0x1f
            
            if (r8_38 - rax_29 + 0x1f s> r11_1)
                var_84_1.d = r11_1
        else
            while (true)
                int64_t rdx_46 = sx.q(rcx_20)
                r8_38 += 0x20
                rcx_20 += 1
                var_84_1:4.d = r8_38
                var_98_1 = rcx_20
                
                if (rdx_46.d s>= (temp1_1 + (temp0_1 & 0x1f)) s>> 5)
                    break
                
                rdx_45 = *(r9_6 + (rdx_46 << 2) + 4)
                int32_t var_88_2 = 0xffffffff
                
                if (rdx_45 != 0)
                    goto label_1421549d8
            
            var_84_1.d = r11_1
    
    int32_t rdx_47 = *(arg1 + 0x1440)
    var_84_1.d = rdx_47
    int32_t r9_7 = 0xffffffff << (rdx_47.b & 0x1f)
    arg_8.d = r9_7
    int32_t var_88_3 = r9_7
    int128_t var_48_1 = var_98_1.o
    int32_t r9_9 = rdx_47 & 0xffffffe0
    int32_t r8_41 = rdx_47 s>> 5
    int128_t var_38_1 = 0xffffffff
    int64_t var_58_1 = _mm_unpackhi_pd(0xffffffff, 0xffffffff)
    int512_t zmm1
    zmm1.o = var_48_1
    int128_t var_78 = (arg1 + 0x1418).o
    int96_t var_68_1 = zmm1.12
    
    if (rdx_47 != r11_1)
        void* rax_31 = *(arg1 + 0x1438)
        void* r10_1 = arg1 + 0x1428
        
        if (rax_31 != 0)
            r10_1 = rax_31
        
        int32_t temp2_1
        int32_t temp3_1
        temp2_1:temp3_1 = sx.q(r11_1 - 1)
        int32_t rdx_51 = *(r10_1 + (sx.q(r8_41) << 2)) & arg_8.d
        
        if (rdx_51 != 0)
        label_142154ab2:
            int32_t rax_38 = neg.d(rdx_51) & rdx_51
            uint64_t rflags_2
            int32_t temp0_4
            temp0_4, rflags_2 = _bit_scan_reverse(rax_38)
            int32_t rax_39
            
            if (rax_38 == 0)
                rax_39 = 0x20
            else
                rax_39 = 0x1f - temp0_4
            
            var_84_1.d = r9_9 - rax_39 + 0x1f
            
            if (r9_9 - rax_39 + 0x1f s> r11_1)
                var_84_1.d = r11_1
        else
            while (true)
                int64_t rcx_25 = sx.q(r8_41)
                r9_9 += 0x20
                r8_41 += 1
                
                if (rcx_25.d s>= (temp3_1 + (temp2_1 & 0x1f)) s>> 5)
                    break
                
                rdx_51 = *(r10_1 + (rcx_25 << 2) + 4)
                var_88_3 = 0xffffffff
                
                if (rdx_51 != 0)
                    goto label_142154ab2
            
            var_84_1.d = r11_1
    
    int32_t var_5c
    
    while (true)
        int64_t rcx_27 = sx.q(var_5c)
        int64_t* rax_41 = var_78.q
        
        if (rcx_27.d == (var_88_3.q u>> 0x20).d && var_68_1.q == arg1 + 0x1428
                && rax_41 == arg1 + 0x1418)
            break
        
        int64_t rax_42 = *rax_41
        int64_t r9_11 = *arg2
        int64_t rcx_28 = rcx_27 << 5
        (*(r9_11 + 8))(arg2, sx.q(*(rcx_28 + rax_42 + 0x10)) << 3, 
            sx.q(*(rcx_28 + rax_42 + 0x14)) << 3, r9_11, var_98_1, arg1 + 0x1428, var_88_3)
        var_68_1:8.d &= not.d(var_78:0xc.d)
        sub_14059bdd0(&var_78:8)
    
    (*(*arg2 + 8))(arg2, sx.q(*(arg1 + 0x1470)) << 5, sx.q(*(arg1 + 0x1474)) << 5)
    int64_t r9_12 = *arg2
    (*(r9_12 + 8))(arg2, zx.q(*(arg1 + 0x1490) + 0x1f) u>> 5 << 2, 
        zx.q(*(arg1 + 0x1494) + 0x1f) u>> 5 << 2, r9_12, var_98_1, arg1 + 0x1428, var_88_3)
    int64_t rdx_61 = sx.q(*(arg1 + 0x14b0)) << 2
    (*(*arg2 + 8))(arg2, rdx_61, rdx_61)
    (*(*arg2 + 8))(arg2, sx.q(*(arg1 + 0x14c0)) << 4, sx.q(*(arg1 + 0x14c4)) << 4)
    int64_t r9_13 = *arg2
    (*(r9_13 + 8))(arg2, zx.q(*(arg1 + 0x14e0) + 0x1f) u>> 5 << 2, 
        zx.q(*(arg1 + 0x14e4) + 0x1f) u>> 5 << 2, r9_13)
    int64_t rdx_69 = sx.q(*(arg1 + 0x1500)) << 2
    (*(*arg2 + 8))(arg2, rdx_69, rdx_69)
    int64_t r9_14 = *arg2
    (*(r9_14 + 8))(arg2, sx.q(*(arg1 + 0x1560)) * 0x18, sx.q(*(arg1 + 0x1564)) * 0x18, r9_14)
    int64_t r9_15 = *arg2
    (*(r9_15 + 8))(arg2, zx.q(*(arg1 + 0x1580) + 0x1f) u>> 5 << 2, 
        zx.q(*(arg1 + 0x1584) + 0x1f) u>> 5 << 2, r9_15)
    int64_t rdx_77 = sx.q(*(arg1 + 0x15a0)) << 2
    (*(*arg2 + 8))(arg2, rdx_77, rdx_77)
    int64_t r9_16 = *arg2
    (*(r9_16 + 8))(arg2, sx.q(*(arg1 + 0x15b8)) * 0x28, sx.q(*(arg1 + 0x15bc)) * 0x28, r9_16)
    int64_t r9_17 = *arg2
    (*(r9_17 + 8))(arg2, zx.q(*(arg1 + 0x15d8) + 0x1f) u>> 5 << 2, 
        zx.q(*(arg1 + 0x15dc) + 0x1f) u>> 5 << 2, r9_17)
    int64_t rdx_85 = sx.q(*(arg1 + 0x15f8)) << 2
    (*(*arg2 + 8))(arg2, rdx_85, rdx_85)
    int32_t var_98_2 = 0
    int32_t r10_2 = *(arg1 + 0x15d8)
    int32_t var_94_3 = 1
    int32_t rcx_43 = 0
    int32_t var_88_4 = 0xffffffff
    var_84_1.d = 0
    var_84_1:4.d = 0
    
    if (r10_2 != 0)
        void* rax_55 = *(arg1 + 0x15d0)
        void* r8_72 = arg1 + 0x15c0
        
        if (rax_55 != 0)
            r8_72 = rax_55
        
        int32_t temp4_1
        int32_t temp5_1
        temp4_1:temp5_1 = sx.q(r10_2 - 1)
        int32_t rdx_88 = *r8_72
        
        if (rdx_88 != 0)
        label_142154d46:
            int32_t rax_62 = neg.d(rdx_88) & rdx_88
            uint64_t rflags_3
            int32_t temp0_5
            temp0_5, rflags_3 = _bit_scan_reverse(rax_62)
            int32_t var_94_4 = rax_62
            int32_t rax_63
            
            if (rax_62 == 0)
                rax_63 = 0x20
            else
                rax_63 = 0x1f - temp0_5
            
            var_84_1.d = rcx_43 - rax_63 + 0x1f
            
            if (rcx_43 - rax_63 + 0x1f s> r10_2)
                var_84_1.d = r10_2
        else
            while (true)
                int64_t rdx_89 = sx.q(rdi)
                rcx_43 += 0x20
                rdi += 1
                var_84_1:4.d = rcx_43
                var_98_2 = rdi
                
                if (rdx_89.d s>= (temp5_1 + (temp4_1 & 0x1f)) s>> 5)
                    break
                
                rdx_88 = *(r8_72 + (rdx_89 << 2) + 4)
                int32_t var_88_5 = 0xffffffff
                
                if (rdx_88 != 0)
                    goto label_142154d46
            
            var_84_1.d = r10_2
    
    int32_t rdx_91 = *(arg1 + 0x15d8)
    int128_t var_38_2 = 0xffffffff
    int32_t r15_3 = 0xffffffff << (rdx_91.b & 0x1f)
    int128_t var_48_2 = var_98_2.o
    int32_t r8_74 = rdx_91 s>> 5
    int32_t r9_19 = rdx_91 & 0xffffffe0
    int64_t var_58_2 = _mm_unpackhi_pd(0xffffffff, 0xffffffff)
    int32_t var_88_6 = r15_3
    var_84_1.d = rdx_91
    zmm1.o = var_48_2
    var_78 = (arg1 + 0x15b0).o
    int96_t var_68_2 = zmm1.12
    
    if (rdx_91 != r10_2)
        void* rax_65 = *(arg1 + 0x15d0)
        void* r10_3 = arg1 + 0x15c0
        
        if (rax_65 != 0)
            r10_3 = rax_65
        
        int32_t temp6_1
        int32_t temp7_1
        temp6_1:temp7_1 = sx.q(r10_2 - 1)
        int32_t rdx_95 = *(r10_3 + (sx.q(r8_74) << 2)) & r15_3
        
        if (rdx_95 != 0)
        label_142154e12:
            int32_t rax_72 = neg.d(rdx_95) & rdx_95
            uint64_t rflags_4
            int32_t temp0_7
            temp0_7, rflags_4 = _bit_scan_reverse(rax_72)
            int32_t r12_2
            
            if (rax_72 == 0)
                r12_2 = 0x20
            else
                r12_2 = 0x1f - temp0_7
            
            var_84_1.d = r9_19 - r12_2 + 0x1f
            
            if (r9_19 - r12_2 + 0x1f s> r10_2)
                var_84_1.d = r10_2
        else
            while (true)
                int64_t rcx_48 = sx.q(r8_74)
                r9_19 += 0x20
                r8_74 += 1
                
                if (rcx_48.d s>= (temp7_1 + (temp6_1 & 0x1f)) s>> 5)
                    break
                
                rdx_95 = *(r10_3 + (rcx_48 << 2) + 4)
                var_88_6 = 0xffffffff
                
                if (rdx_95 != 0)
                    goto label_142154e12
            
            var_84_1.d = r10_2
    
    while (true)
        int64_t rax_74 = sx.q(var_5c)
        int64_t* rdx_96 = var_78.q
        
        if (rax_74.d == (var_88_6.q u>> 0x20).d && var_68_2.q == arg1 + 0x15c0
                && rdx_96 == arg1 + 0x15b0)
            break
        
        uint64_t* rdi_2 = *rdx_96 + rax_74 * 0x28
        zmm1 = sub_140a1d9d0(arg2, rdi_2, zmm1)
        (*(*arg2 + 8))(arg2, sx.q(rdi_2[3].d) << 2, sx.q(*(rdi_2 + 0x1c)) << 2)
        var_68_2:8.d &= not.d(var_78:0xc.d)
        sub_14059bdd0(&var_78:8)
    
    (*(*arg2 + 8))(arg2, sx.q(*(arg1 + 0x1608)) << 4, sx.q(*(arg1 + 0x160c)) << 4)
    int64_t r9_21 = *arg2
    (*(r9_21 + 8))(arg2, zx.q(*(arg1 + 0x1628) + 0x1f) u>> 5 << 2, 
        zx.q(*(arg1 + 0x162c) + 0x1f) u>> 5 << 2, r9_21, var_98_2, arg1 + 0x15c0, var_88_6)
    int64_t rdx_107 = sx.q(*(arg1 + 0x1648)) << 2
    (*(*arg2 + 8))(arg2, rdx_107, rdx_107)
    (*(*arg2 + 8))(arg2, sx.q(*(arg1 + 0x1708)) << 3, sx.q(*(arg1 + 0x170c)) << 3)
    int64_t rdx_111 = sx.q(*(arg1 + 0x1728)) << 2
    (*(*arg2 + 8))(arg2, rdx_111, rdx_111)
    (*(*(arg1 + 0x280) + 0x210))(arg1 + 0x280, arg2)
    result = (*(*(arg1 + 0x398) + 0x210))(arg1 + 0x398, arg2)
    int64_t* rcx_61 = *(arg1 + 0x140)
    
    if (rcx_61 != 0)
        return (*(*rcx_61 + 8))(rcx_61, arg2)

return result
