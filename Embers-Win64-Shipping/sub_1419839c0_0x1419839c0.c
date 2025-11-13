// 函数: sub_1419839c0
// 地址: 0x1419839c0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

__chkstk(0x1760)
void var_1798
int64_t rax_1 = __security_cookie ^ &var_1798
int64_t* var_1710 = arg6
int64_t performanceCount
QueryPerformanceCounter(&performanceCount)
uint32_t rdi = arg2[1].d
int64_t rbx = *arg2
int32_t r8 = 0
int16_t* var_16e0 = nullptr
uint64_t var_1688 = 0
uint32_t var_1758 = rdi

if (rdi != 0)
    sub_1405a4c70(&var_1688, rdi, 0)
    int16_t* rax_3 = var_1688
    var_16e0 = rax_3
    memcpy(rax_3, rbx, rdi * 2)
    int32_t var_167c
    r8 = var_167c
    var_1758 = rdi
else
    int32_t var_167c_1 = 0

uint32_t rdx_2

if (arg3 != 1 || &var_1688 == &arg1[0x23])
    rdx_2 = var_1758
else
    rdx_2 = arg1[0x24].d
    int64_t rbx_1 = arg1[0x23]
    var_1758 = rdx_2
    
    if (rdx_2 != 0 || r8 != 0)
        sub_1405a4c70(&var_1688, rdx_2, r8)
        int16_t* rax_4 = var_1688
        var_16e0 = rax_4
        memcpy(rax_4, rbx_1, var_1758 * 2)
        var_1758 = rdx_2
    else
        int32_t var_167c_2 = r8

rdi.b = 0
int64_t* rax_2
rax_2.b = 1

if (arg3 == 0)
    *(arg6 + 0x34)
    int32_t rax_6
    
    if (arg6[1].d == *(arg6 + 0x34) && arg7 == arg1[0x10].d)
        rax_6 = arg8[1].d
        rax_2 = zx.q(rax_6 - *(arg8 + 0x34))
    
    if (arg6[1].d != *(arg6 + 0x34) || arg7 != arg1[0x10].d || rax_6 != *(arg8 + 0x34))
        rax_2.b = 1
    
    rdi.b = rax_2.b ^ 1

if (arg3 != 0 || rax_2.b != 0)
    int32_t var_15b4_1 = 0
    int16_t* var_1720_1 = nullptr
    int64_t var_15c0_1 = 0
    uint32_t var_1708_1 = 0
    int32_t var_15b8_1 = 0
    int128_t var_11a4
    
    if (arg3 != 1)
        uint64_t var_1628
        int32_t rax_7
        uint32_t r12_1
        int16_t* r14_1
        
        if (rdx_2 s> 1)
            int32_t rbx_3 = data_143f01ef0
            int32_t rbx_4
            
            if (rbx_3 == 0)
                rbx_4 = 0
            else
                rbx_4 = rbx_3 - 1
            
            int32_t rax_8
            
            if (rdx_2 == 0)
                rax_8 = rdx_2 + 1
            
            if (rdx_2 != 0 || rbx_4 == 0)
                rax_8 = 0
            
            int16_t* var_1650 = nullptr
            int32_t rcx_7 = rax_8 + rbx_4
            int32_t var_1644
            
            if (rdx_2 != 0 || rcx_7 != 0)
                sub_1405a4c70(&var_1650, rdx_2 + rcx_7, 0)
                memcpy(var_1650, var_16e0, var_1758 * 2)
            else
                var_1644 = 0
            
            sub_140a20ba0(&var_1650, data_143f01ee8, rbx_4)
            r14_1 = var_1650
            rax_7 = var_1644
            var_1650 = nullptr
            r12_1 = rdx_2
            uint32_t var_1648_1
            var_1648_1.q = 0
            var_1720_1 = r14_1
            var_1708_1 = r12_1
        else
            int64_t rbx_2 = data_143f01ee8
            r14_1 = nullptr
            var_1720_1 = nullptr
            var_1628 = 0
            r12_1 = data_143f01ef0
            var_1708_1 = r12_1
            
            if (r12_1 != 0)
                sub_1405a4c70(&var_1628, r12_1, 0)
                r14_1 = var_1628
                var_1720_1 = r14_1
                memcpy(r14_1, rbx_2, r12_1 * 2)
                int32_t var_161c
                rax_7 = var_161c
                var_1708_1 = r12_1
            else
                rax_7 = 0
        
        int16_t* var_15c0_2 = r14_1
        var_1628 = 0
        uint32_t var_15b8_2 = r12_1
        int32_t var_15b4_2 = rax_7
        uint32_t var_1620
        var_1620.q = 0
        sub_140a464c0()
        int16_t* const rdx_9 = &data_142d40450
        
        if (r12_1 != 0)
            rdx_9 = r14_1
        
        int64_t* rax_10 = (*(data_14399ea08 + 0x20))(&data_14399ea08, rdx_9, 0)
        int128_t zmm0_1 = *(arg1 + 0xd8)
        int32_t var_11b0_1 = 0x11
        int64_t var_1190_1 = 0
        int64_t var_11b8
        __builtin_strncpy(&var_11b8, "HCACEPIP", 8)
        int32_t var_11ac_1 = data_143f01cb0
        char var_11a8_1 = (arg1[2].d).b
        var_11a4 = zmm0_1
        sub_141963290(rax_10, &var_11b8, arg5)
        (*(*rax_10 + 0x1b8))(rax_10)
        (**rax_10)(rax_10, 1)
        sub_140a464c0()
        int16_t* const rdx_11 = &data_142d40450
        
        if (r12_1 != 0)
            rdx_11 = r14_1
        
        rax_2 = (*(data_14399ea08 + 0x48))(&data_14399ea08, rdx_11)
    
    int16_t* rbx_41
    
    if (rax_2.b == 0)
        rbx_41 = var_1720_1
    label_141986b10:
        
        if (rbx_41 != 0)
            sub_140a74f90(rbx_41)
    else
        int64_t var_1048
        int64_t* rax_16 = sub_140b63b70(arg1 + 0x14, &var_1048)
        
        if (rax_16[1].d != 0)
            *rax_16
        
        int16_t* const r8_11
        
        if (arg1[1].d == 0)
            r8_11 = &data_142d40450
        else
            r8_11 = *arg1
        
        int16_t* var_12d0
        sub_140a2e390(&var_12d0, u"%s_%s.stable.upipelinecache", r8_11)
        int64_t var_6b8_1 = 0
        int16_t var_7b8[0x80]
        int16_t (* var_6b0_1)[0x80] = &var_7b8
        int32_t var_6a8_1 = 7
        sub_1405a7220(&var_7b8, 8, "Windows", 8, 0x3f)
        int64_t var_1058
        int64_t* rax_17 = sub_140b25050(&var_1058)
        bool cond:2_1 = rax_17[1].d == 0
        int16_t* var_16a8 = *rax_17
        *rax_17 = 0
        int32_t rcx_19 = rax_17[1].d
        int32_t rcx_20 = *(rax_17 + 0xc)
        int32_t rcx_21
        rcx_21.b = cond:2_1
        rax_17[1] = 0
        int32_t rdx_16 = rcx_19 + 0xf + rcx_21
        
        if (rdx_16 s> rcx_20)
            sub_1405947f0(&var_16a8, rdx_16)
        
        sub_140a2cf70(&var_16a8, u"PipelineCaches", 0xe)
        int64_t rbx_6 = -1
        
        do
            rbx_6 += 1
        while ((*var_6b0_1)[rbx_6] != 0)
        
        int32_t r12_2 = 2
        int32_t rdx_17
        
        if (rcx_19 == 0)
            rdx_17 = 2
        
        if (rcx_19 != 0 || (rbx_6 + 1).d == 0)
            rdx_17 = 1
        
        int16_t* var_1660 = var_16a8
        int32_t rdx_19 = rdx_17 + rbx_6.d + rcx_19
        var_16a8 = nullptr
        int32_t var_16a0_1
        var_16a0_1.q = 0
        
        if (rdx_19 s> rcx_20)
            sub_1405947f0(&var_1660, rdx_19)
        
        sub_140a2cf70(&var_1660, var_6b0_1, rbx_6.d)
        int32_t var_12c8
        int32_t rbx_8
        
        if (var_12c8 == 0)
            rbx_8 = 0
        else
            rbx_8 = var_12c8 - 1
        
        int32_t r8_13
        
        if (rcx_19 == 0)
            r8_13 = rcx_19 + 1
        
        if (rcx_19 != 0 || rbx_8 == 0xffffffff)
            r8_13 = 0
        
        int16_t* var_1640 = var_1660
        int32_t rdx_23 = rbx_8 + 1 + rcx_19 + r8_13
        var_1660 = nullptr
        int32_t var_1634_1 = rcx_20
        int32_t var_1658_1
        var_1658_1.q = 0
        
        if (rdx_23 s> rcx_20)
            sub_1405947f0(&var_1640, rdx_23)
        
        sub_140a2cf70(&var_1640, var_12d0, rbx_8)
        int16_t* rcx_30 = var_1660
        
        if (rcx_30 != 0)
            sub_140a74f90(rcx_30)
        
        int16_t* rcx_31 = var_16a8
        
        if (rcx_31 != 0)
            sub_140a74f90(rcx_31)
        
        int64_t rcx_32 = var_1058
        
        if (rcx_32 != 0)
            sub_140a74f90(rcx_32)
        
        if (var_6b8_1 != 0)
            sub_140a74f90(var_6b8_1)
        
        int16_t* rcx_34 = var_12d0
        
        if (rcx_34 != 0)
            sub_140a74f90(rcx_34)
        
        int64_t rcx_35 = var_1048
        
        if (rcx_35 != 0)
            sub_140a74f90(rcx_35)
        
        int64_t var_1088
        int64_t* rax_23 = sub_140b63b70(arg1 + 0x14, &var_1088)
        
        if (rax_23[1].d != 0)
            *rax_23
        
        int16_t* const r8_15
        
        if (arg1[1].d == 0)
            r8_15 = &data_142d40450
        else
            r8_15 = *arg1
        
        int16_t* var_12c0
        sub_140a2e390(&var_12c0, u"%s_%s.upipelinecache", r8_15)
        int64_t var_598_1 = 0
        int16_t var_698[0x80]
        int16_t (* var_590_1)[0x80] = &var_698
        int32_t var_588_1 = 7
        int16_t var_1778_2 = 0x3f
        sub_1405a7220(&var_698, 8, "Windows", 8, var_1778_2)
        int64_t var_1098
        int64_t* rax_24
        int512_t zmm1
        rax_24, zmm1 = sub_140b25050(&var_1098)
        bool cond:3_1 = rax_24[1].d == 0
        int16_t* var_16c8 = *rax_24
        *rax_24 = 0
        int32_t rcx_41 = rax_24[1].d
        int32_t rcx_42 = *(rax_24 + 0xc)
        rax_24[1] = 0
        int32_t rcx_43
        rcx_43.b = cond:3_1
        int32_t rdx_28 = rcx_41 + 0xf + rcx_43
        
        if (rdx_28 s> rcx_42)
            sub_1405947f0(&var_16c8, rdx_28)
        
        sub_140a2cf70(&var_16c8, u"PipelineCaches", 0xe)
        int64_t rbx_9 = -1
        
        do
            rbx_9 += 1
        while ((*var_590_1)[rbx_9] != 0)
        
        int32_t rdx_29 = (rbx_9 + 1).d
        int32_t r8_16
        
        if (rcx_41 != 0 || rdx_29 == 0)
            r8_16 = 0
        else
            r8_16 = rcx_41 + 1
        
        int16_t* var_1670 = var_16c8
        int32_t rdx_31 = rdx_29 + rcx_41 + r8_16
        var_16c8 = nullptr
        int32_t var_16c0_1
        var_16c0_1.q = 0
        
        if (rdx_31 s> rcx_42)
            sub_1405947f0(&var_1670, rdx_31)
        
        sub_140a2cf70(&var_1670, var_590_1, rbx_9.d)
        int32_t var_12b8
        int32_t rbx_11
        
        if (var_12b8 == 0)
            rbx_11 = 0
        else
            rbx_11 = var_12b8 - 1
        
        if (rcx_41 != 0 || rbx_11 == 0xffffffff)
            r12_2 = 1
        
        int16_t* var_16d8 = var_1670
        int32_t rdx_34 = rbx_11 + r12_2 + rcx_41
        var_1670 = nullptr
        int32_t var_16d0_1 = rcx_41
        int32_t var_1668_1
        var_1668_1.q = 0
        
        if (rdx_34 s> rcx_42)
            sub_1405947f0(&var_16d8, rdx_34)
        
        sub_140a2cf70(&var_16d8, var_12c0, rbx_11)
        int16_t* rcx_52 = var_1670
        
        if (rcx_52 != 0)
            zmm1 = sub_140a74f90(rcx_52)
        
        int16_t* rcx_53 = var_16c8
        
        if (rcx_53 != 0)
            zmm1 = sub_140a74f90(rcx_53)
        
        int64_t rcx_54 = var_1098
        
        if (rcx_54 != 0)
            zmm1 = sub_140a74f90(rcx_54)
        
        if (var_598_1 != 0)
            zmm1 = sub_140a74f90(var_598_1)
        
        int16_t* rcx_56 = var_12c0
        
        if (rcx_56 != 0)
            zmm1 = sub_140a74f90(rcx_56)
        
        int64_t rcx_57 = var_1088
        
        if (rcx_57 != 0)
            zmm1 = sub_140a74f90(rcx_57)
        
        TEB* gsbase
        
        if (data_143f0fb58
                s> *(0x14 + *(gsbase->ThreadLocalStoragePointer + (zx.q(data_14401b1a0) << 3))))
            _Init_thread_header(&data_143f0fb58)
            
            if (data_143f0fb58 == 0xffffffff)
                zmm1 = sub_140af2b60()
                data_143f0fb54 = sub_140b21a10(&data_143dbb3f0, u"nostablepipelinecache")
                _Init_thread_footer(&data_143f0fb58)
        
        if (data_143f0fb54 == 0)
            sub_140a464c0()
            int16_t* const rdx_36 = &data_142d40450
            
            if (rcx_19 != 0)
                rdx_36 = var_1640
            
            char const (* r8_19)[0x4] = data_14399ea08
            
            if ((*(r8_19 + 0x48))(&data_14399ea08, rdx_36, r8_19) != 0)
                int16_t* rsi_3 = var_1640
                var_16d0_1 = rcx_19
                
                if (rcx_19 != 0 || rcx_42 != 0)
                    sub_1405a4c70(&var_16d8, rcx_19, rcx_42)
                    memcpy(var_16d8, rsi_3, rcx_19 * 2)
                else
                    int32_t var_16cc_2 = 0
        
        sub_140a464c0()
        int16_t* const rdx_39 = &data_142d40450
        
        if (var_16d0_1 != 0)
            rdx_39 = var_16d8
        
        char const (* r8_23)[0x4] = data_14399ea08
        int64_t rax_33 = (*(r8_23 + 0x108))(&data_14399ea08, rdx_39, r8_23)
        char* var_1698 = nullptr
        int32_t var_1690_1 = 0
        sub_140a464c0()
        arg2[1].d
        int64_t rax_35 = (*(data_14399ea08 + 0x108))()
        char* var_16b8 = nullptr
        int32_t var_16b0_1 = 0
        char* var_1770
        
        if (arg3 != 0)
            if (rax_33 s> 0)
                if (arg1[0x21] == 0)
                    int16_t* rdx_42 = &data_142d40450
                    
                    if (var_16d0_1 != 0)
                        rdx_42 = var_16d8
                    
                    sub_140b1ef70(&var_1698, rdx_42, 0)
                else
                    int64_t r14_2 = sx.q(var_1690_1)
                    int32_t rax_36 = (r14_2 + rax_33).d
                    var_1690_1 = rax_36
                    
                    if (rax_36 s> 0)
                        sub_1405daba0(&var_1698)
                    
                    memset(&var_1698[r14_2], 0, sx.q(rax_33.d))
                    int64_t* rcx_65 = arg1[0x21]
                    var_1770 = var_1698
                    var_1778_2.q = 0
                    int64_t* rax_38 =
                        (*(*rcx_65 + 0x10))(rcx_65, 0, rax_33, 3, var_1778_2, var_1770)
                    
                    if (*(rax_38 + 0x61) == 0)
                        zmm1.o = zx.o(0)
                        (*(*rax_38 + 8))(rax_38, zmm1)
                    
                    int64_t r8_26 = *rax_38
                    (*r8_26)(rax_38, 1, r8_26)
            
            if (rax_35 s> 0)
                if (arg1[0x1f] == 0)
                    int16_t* const rdx_45
                    
                    if (arg2[1].d == 0)
                        rdx_45 = &data_142d40450
                    else
                        rdx_45 = *arg2
                    
                    sub_140b1ef70(&var_16b8, rdx_45, 0)
                else
                    int64_t rbx_15 = sx.q(var_16b0_1)
                    int32_t rax_39 = (rbx_15 + rax_35).d
                    var_16b0_1 = rax_39
                    
                    if (rax_39 s> 0)
                        sub_1405daba0(&var_16b8)
                    
                    memset(&var_16b8[rbx_15], 0, sx.q(rax_35.d))
                    int64_t* rcx_72 = arg1[0x1f]
                    var_1770 = var_16b8
                    var_1778_2.q = 0
                    int64_t* rax_41 =
                        (*(*rcx_72 + 0x10))(rcx_72, 0, rax_35, 3, var_1778_2, var_1770)
                    
                    if (*(rax_41 + 0x61) == 0)
                        zmm1.o = zx.o(0)
                        (*(*rax_41 + 8))(rax_41, zmm1)
                    
                    int64_t r8_29 = *rax_41
                    (*r8_29)(rax_41, 1, r8_29)
        
        uint32_t r14_12 = var_1758
        int32_t rsi_5 = 0
        int64_t var_1608 = 0
        int32_t var_1600_1 = 0
        uint64_t var_16f8 = 0
        uint32_t var_16f0_1 = r14_12
        int16_t* rbx_17
        
        if (r14_12 != 0)
            sub_1405a4c70(&var_16f8, r14_12, 0)
            rbx_17 = var_16e0
            memcpy(var_16f8, rbx_17, r14_12 * 2)
        else
            rbx_17 = var_16e0
            int32_t var_16ec_1 = 0
        
        int64_t* var_1700_1
        int64_t* r13_1
        
        if (arg3 != 1)
            sub_140a464c0()
            int16_t* const rdx_51 = &data_142d40450
            
            if (var_16f0_1 != 0)
                rdx_51 = var_16f8
            
            char const (* r9_5)[0x4] = data_14399ea08
            int64_t* rax_45 =
                (*(r9_5 + 0x20))(&data_14399ea08, rdx_51, 8, r9_5, var_1778_2, var_1770)
            r13_1 = rax_45
            var_1700_1 = rax_45
        else
            int64_t* rax_42 = j_sub_140a82f30(0xa8)
            var_1700_1 = rax_42
            r13_1 = rax_42
            
            if (rax_42 == 0)
                goto label_1419868d6
            
            int16_t* const rdx_48 = &data_142d40450
            
            if (r14_12 != 0)
                rdx_48 = rbx_17
            
            void var_1060
            int64_t* rax_43
            rax_43, zmm1 = sub_140b58260(&var_1060, rdx_48, arg3)
            int64_t rbx_18 = *rax_43
            memset(r13_1, 0, 0x90)
            sub_140b4c2a0(r13_1)
            r13_1[0x12] = 0
            *r13_1 = &data_142d6ad48
            r13_1[0x14] = rbx_18
            r13_1[0x13] = &var_1608
            sub_140b552b0(r13_1, arg3.b)
            (*(*r13_1 + 0xd8))(r13_1, zx.q(arg3.b))
        
        if (r13_1 == 0)
            goto label_1419868d6
        
        int64_t r8_33 = *r13_1
        (*(r8_33 + 0x100))(r13_1, 0x11, r8_33)
        int64_t r8_34 = *r13_1
        (*(r8_34 + 0x178))(r13_1, 0, r8_34)
        double zmm0_2[0x2] = *(arg1 + 0xd8)
        int32_t var_1440_1 = 0x11
        int64_t var_1448
        __builtin_strncpy(&var_1448, "HCACEPIP", 8)
        int32_t var_143c_1 = data_143f01cb0
        char var_1438_1 = (arg1[2].d).b
        double var_1434_1[0x2] = zmm0_2
        int64_t var_1420_1 = 0
        sub_141963290(r13_1, &var_1448, zmm1)
        int64_t rax_49 = (*(*r13_1 + 0x20))(r13_1)
        int64_t r12_4 = rax_49
        int32_t rbx_19 = arg3
        
        if (arg1[4] u>= rax_49)
            r12_4 = arg1[4]
        
        arg1[4] = r12_4
        int32_t var_1750
        double var_1740[0x2]
        
        if (rbx_19 == 0)
            (*(*r13_1 + 0x178))(r13_1, r12_4)
            int32_t rcx_282 = 0
            int32_t rbx_37 = var_1710[5].d
            void* r9_17 = &var_1710[2]
            int32_t r10_5 = 0
            int32_t var_15e0_1 = 0
            int32_t r8_82 = 0
            int32_t var_15dc_1 = 1
            rsi_5 = var_1710[1].d - *(var_1710 + 0x34)
            var_1750 = rsi_5
            void* var_15d8_1 = r9_17
            int32_t var_15d0_1 = 0xffffffff
            int64_t var_15cc_1 = 0
            
            if (rbx_37 != 0)
                void* rax_222 = *(r9_17 + 0x10)
                r10_5 = rbx_37
                
                if (rax_222 != 0)
                    r9_17 = rax_222
                
                int32_t temp5_1
                int32_t temp6_1
                temp5_1:temp6_1 = sx.q(rbx_37 - 1)
                int32_t rdx_147 = *r9_17
                
                if (rdx_147 != 0)
                label_14198623e:
                    int32_t rax_229 = ((rdx_147 - 1) & rdx_147) ^ rdx_147
                    uint64_t rflags_1
                    int32_t temp0_16
                    temp0_16, rflags_1 = _bit_scan_reverse(rax_229)
                    int32_t var_15dc_2 = rax_229
                    int32_t rax_230
                    
                    if (rax_229 == 0)
                        rax_230 = 0x20
                    else
                        rax_230 = 0x1f - temp0_16
                    
                    int32_t rax_231 = r8_82 - rax_230 + 0x1f
                    
                    if (rax_231 s> rbx_37)
                        rax_231 = rbx_37
                    
                    r10_5 = rax_231
                    var_15cc_1.d = rax_231
                else
                    while (true)
                        int64_t rdx_148 = sx.q(rcx_282)
                        r8_82 += 0x20
                        rcx_282 += 1
                        var_15cc_1:4.d = r8_82
                        var_15e0_1 = rcx_282
                        
                        if (rdx_148.d s>= (temp6_1 + (temp5_1 & 0x1f)) s>> 5)
                            var_15cc_1.d = rbx_37
                            break
                        
                        rdx_147 = *(r9_17 + (rdx_148 << 2) + 4)
                        int32_t var_15d0_2 = 0xffffffff
                        
                        if (rdx_147 != 0)
                            goto label_14198623e
            
            int64_t* var_1538_2 = var_1710
            var_1740 = var_15e0_1.o
            int128_t var_1730_12 = 0xffffffff
            int64_t var_1540_1 = (_mm_unpackhi_pd(0xffffffff, 0xffffffff)).q
            zmm1.o = var_1740
            double var_1560[0x2] = var_1710.o
            int128_t var_1550_1 = zmm1.o
            
            if (r10_5 s< rbx_37)
                int32_t r14_10 = var_1550_1:0xc.d
                
                while (true)
                    int32_t* rbx_39 = sx.q(r14_10) * 0x1c4 + *var_1560[0]
                    int64_t rsi_20 = sx.q(sub_141973920(rbx_39))
                    
                    if (arg4[1].d != *(arg4 + 0x34))
                        void* rdx_149 = arg4[8]
                        void* r9_18 = &arg4[7]
                        
                        if (rdx_149 != 0)
                            r9_18 = rdx_149
                        
                        int32_t i = *(r9_18 + (((sx.q(arg4[9].d) - 1) & rsi_20) << 2))
                        
                        if (i != 0xffffffff)
                            int64_t r8_87 = *arg4
                            
                            do
                                int64_t i_4 = sx.q(i)
                                int64_t rdx_150 = i_4 * 3
                                
                                if (*(r8_87 + (rdx_150 << 3)) == rsi_20.d)
                                    if (i != 0xffffffff)
                                        void* rax_236 = r8_87 + i_4 * 0x18
                                        
                                        if (rax_236 != 0)
                                            void* rax_237 = *(rax_236 + 8)
                                            
                                            if (rax_237 != 0 && *(rax_237 + 0x18) s> 0)
                                                int64_t var_918
                                                sub_141961760(&var_918)
                                                int32_t rcx_288 = *rbx_39
                                                int32_t var_8d8_1 = rsi_20.d
                                                double var_908_1[0x2] = *(arg1 + 0xd8)
                                                var_918 = r12_4
                                                void var_8d0
                                                int32_t rax_247
                                                int64_t* rcx_302
                                                int32_t* rdx_160
                                                
                                                if (rcx_288 == 0)
                                                    int32_t var_10e8
                                                    sub_14186d450(&var_8d0, &var_10e8)
                                                    int64_t* var_10e0
                                                    rcx_302 = var_10e0
                                                    void var_12dc
                                                    rdx_160 = &var_12dc
                                                    var_1770 = nullptr
                                                    *rcx_302 = *(rbx_39 + 4)
                                                    rcx_302[2].d = rbx_39[5]
                                                    rax_247 = var_10e8
                                                label_1419865f2:
                                                    *(rcx_302 + 0x14) = 0xffffffff
                                                    var_1778_2.d = rax_247
                                                    zmm1 = sub_14187f510(&var_8d0, rdx_160, 
                                                        *rcx_302, rcx_302, var_1778_2, var_1770)
                                                else if (rcx_288 == 1)
                                                    if (*(rbx_39 + 0x18) != 0
                                                            || *(rbx_39 + 0x20) != 0
                                                            || rbx_39[0xa] != 0)
                                                        int32_t var_10c8
                                                        sub_14186d450(&var_8d0, &var_10c8)
                                                        var_1770 = nullptr
                                                        int64_t* var_10c0
                                                        *var_10c0 = *(rbx_39 + 0x18)
                                                        var_10c0[2].d = rbx_39[0xa]
                                                        int32_t rax_239 = var_10c8
                                                        *(var_10c0 + 0x14) = 0xffffffff
                                                        var_1778_2.d = rax_239
                                                        void var_12f0
                                                        zmm1 = sub_14187f510(&var_8d0, &var_12f0, 
                                                            *var_10c0, var_10c0, var_1778_2, 
                                                            var_1770)
                                                    
                                                    if (*(rbx_39 + 0x2c) != 0
                                                            || *(rbx_39 + 0x34) != 0
                                                            || rbx_39[0xf] != 0)
                                                        int32_t var_10b8
                                                        sub_14186d450(&var_8d0, &var_10b8)
                                                        var_1770 = nullptr
                                                        int64_t* var_10b0
                                                        *var_10b0 = *(rbx_39 + 0x2c)
                                                        var_10b0[2].d = rbx_39[0xf]
                                                        int32_t rax_241 = var_10b8
                                                        *(var_10b0 + 0x14) = 0xffffffff
                                                        var_1778_2.d = rax_241
                                                        void var_12ec
                                                        zmm1 = sub_14187f510(&var_8d0, &var_12ec, 
                                                            *var_10b0, var_10b0, var_1778_2, 
                                                            var_1770)
                                                    
                                                    if (*(rbx_39 + 0x54) != 0
                                                            || *(rbx_39 + 0x5c) != 0
                                                            || rbx_39[0x19] != 0)
                                                        int32_t var_10a8
                                                        sub_14186d450(&var_8d0, &var_10a8)
                                                        var_1770 = nullptr
                                                        int64_t* var_10a0
                                                        *var_10a0 = *(rbx_39 + 0x54)
                                                        var_10a0[2].d = rbx_39[0x19]
                                                        int32_t rax_243 = var_10a8
                                                        *(var_10a0 + 0x14) = 0xffffffff
                                                        var_1778_2.d = rax_243
                                                        void var_12e8
                                                        zmm1 = sub_14187f510(&var_8d0, &var_12e8, 
                                                            *var_10a0, var_10a0, var_1778_2, 
                                                            var_1770)
                                                    
                                                    if (*(rbx_39 + 0x68) != 0
                                                            || *(rbx_39 + 0x70) != 0
                                                            || rbx_39[0x1e] != 0)
                                                        int32_t var_1138
                                                        sub_14186d450(&var_8d0, &var_1138)
                                                        var_1770 = nullptr
                                                        int64_t* var_1130
                                                        *var_1130 = *(rbx_39 + 0x68)
                                                        var_1130[2].d = rbx_39[0x1e]
                                                        int32_t rax_245 = var_1138
                                                        *(var_1130 + 0x14) = 0xffffffff
                                                        var_1778_2.d = rax_245
                                                        void var_12e4
                                                        zmm1 = sub_14187f510(&var_8d0, &var_12e4, 
                                                            *var_1130, var_1130, var_1778_2, 
                                                            var_1770)
                                                    
                                                    if (*(rbx_39 + 0x40) != 0
                                                            || *(rbx_39 + 0x48) != 0
                                                            || rbx_39[0x14] != 0)
                                                        int32_t var_10d8
                                                        sub_14186d450(&var_8d0, &var_10d8)
                                                        int64_t* var_10d0
                                                        rcx_302 = var_10d0
                                                        void var_12e0
                                                        rdx_160 = &var_12e0
                                                        var_1770 = nullptr
                                                        *rcx_302 = *(rbx_39 + 0x40)
                                                        rcx_302[2].d = rbx_39[0x14]
                                                        rax_247 = var_10d8
                                                        goto label_1419865f2
                                                int64_t var_15a0 = 0
                                                int64_t var_1598_1 = 0
                                                int64_t var_1630_2 = 0
                                                void** const var_f48
                                                memset(&var_f48, 0, 0x90)
                                                sub_140b4c2a0(&var_f48)
                                                int64_t var_eb8_1 = 0
                                                var_f48 = &data_142d6ad48
                                                int64_t* var_eb0_1 = &var_15a0
                                                int64_t var_ea8_1 = var_1630_2
                                                sub_140b552b0(&var_f48, 1)
                                                var_f48[0x1b](&var_f48, 0)
                                                var_f48[0x20](&var_f48, 0x11)
                                                sub_141963420(&var_f48, rbx_39, zmm1)
                                                int64_t r9_24 = *r13_1
                                                (*(r9_24 + 0x150))(r13_1, var_15a0, 
                                                    sx.q(var_eb0_1[1].d), r9_24, var_1778_2, 
                                                    var_1770)
                                                int64_t rcx_312 = sx.q(var_eb0_1[1].d)
                                                int32_t var_1128
                                                sub_141966360(&arg1[0x11], &var_1128)
                                                int32_t* var_1120
                                                *var_1120 = rsi_20.d
                                                sub_1419616a0(&var_1120[2], &var_918)
                                                int32_t rax_254 = var_1128
                                                var_1120[0x2c] = 0xffffffff
                                                var_1770 = nullptr
                                                var_1778_2.d = rax_254
                                                void var_12d8
                                                sub_14196c020(&arg1[0x11], &var_12d8, *var_1120, 
                                                    var_1120, var_1778_2, var_1770)
                                                r12_4 += rcx_312
                                                sub_141982e10(var_1710, r14_10)
                                                sub_140b4cb40(&var_f48)
                                                int64_t rcx_318 = var_15a0
                                                
                                                if (rcx_318 != 0)
                                                    sub_140a74f90(rcx_318)
                                                
                                                zmm1 = sub_1419627f0(&var_918)
                                    
                                    break
                                
                                i = *(r8_87 + (rdx_150 << 3) + 0x10)
                            while (i != 0xffffffff)
                    
                    var_1550_1:8.d &= not.d(var_1560[1]:4.d)
                    sub_14059bdd0(&var_1560[1])
                    r14_10 = var_1550_1:0xc.d
                    
                    if (r14_10 s>= *(var_1550_1.q + 0x18))
                        break
                    
                    var_1710 = var_1538_2
                
                rsi_5 = var_1750
            
            int32_t r14_11 = arg7
            
            if (r14_11 == 0)
                r14_11 = 0
            else
                sub_141989140(&arg1[0x11], r14_11)
            
            r9_17.b = 1
            arg1[0x10].d = r14_11
            int512_t zmm1_6 = sub_141978410(arg1, arg8, &arg1[0x11], r9_17.b)
            arg1[4] = r12_4
            int64_t var_1420_4 = r12_4
            (*(*r13_1 + 0x178))(r13_1, r12_4)
            zmm1 = sub_141963e70(r13_1, &arg1[0x10], zmm1_6)
            r14_12 = var_1758
            rbx_19 = arg3
        else
            double zmm2_1[0x2]
            
            if (rbx_19 == 1)
                void** var_d58
                sub_141820d30(&var_d58, &var_16b8, 0)
                void** var_e08
                sub_141820d30(&var_e08, &var_1698, 0)
                var_d58[0x20](&var_d58, 0x11)
                var_e08[0x20](&var_e08, 0x11)
                int32_t var_b48
                sub_1419617f0(&var_b48, &arg1[0x10])
                int32_t var_b6c_1 = 0x80
                int64_t var_b98
                __builtin_memset(&var_b98, 0, 0x2c)
                int32_t var_b64_1 = 0
                int64_t var_b58_1 = 0
                int32_t var_b50_1 = 0
                int32_t var_b68_1 = 0xffffffff
                void var_e20
                double (* rax_147)[0x2] = sub_140b214c0(&var_e20)
                void* rsi_15 = &var_1710[2]
                int32_t var_1378 = 0
                int32_t var_1374_1 = 1
                void* var_1370_1 = rsi_15
                int32_t var_1368_1 = 0xffffffff
                double var_1434_2[0x2] = *rax_147
                int32_t r8_61 = *(rsi_15 + 0x18)
                int64_t var_1364_1 = 0
                
                if (r8_61 != 0)
                    sub_14059bdd0(&var_1378)
                    r8_61 = *(rsi_15 + 0x18)
                
                int32_t rdx_99 = var_1710[5].d
                double zmm0_5[0x2] = var_1378.o
                zmm2_1 = var_1368_1.o
                int32_t var_14c8 = rdx_99 s>> 5
                char rcx_200 = rdx_99.b & 0x1f
                var_1740 = zmm0_5
                int32_t var_14c4_1 = 1 << rcx_200
                double var_1730_7[0x2] = zmm2_1
                int64_t var_11d8_1 = (_mm_unpackhi_pd(zmm2_1, zmm2_1[0])).q
                int32_t var_14b4_1 = rdx_99
                int32_t var_14b0_1 = rdx_99 & 0xffffffe0
                double zmm1_3[0x2] = var_1740
                double var_11f8[0x2] = var_1710.o
                double var_11e8_1[0x2] = zmm1_3
                
                if (rdx_99 != r8_61)
                    sub_14059bdd0(&var_14c8)
                
                zmm2_1 = (0xffffffff << rcx_200).o
                double r14_6 = zmm2_1[0]
                var_1740 = var_14c8.o
                double var_1730_8[0x2] = zmm2_1
                zmm1_3 = var_1740
                double var_e70_1[0x2] = var_1710.o
                int64_t var_e50_1 = (_mm_unpackhi_pd(zmm2_1, zmm2_1[0])).q
                double var_e60_1[0x2] = zmm1_3
                int64_t var_b40
                
                while (true)
                    int64_t rdx_100 = sx.q(var_11e8_1[1]:4.d)
                    int32_t rax_153
                    
                    if (rdx_100.d != (r14_6 u>> 0x20).d || var_11e8_1[0] != rsi_15)
                        rax_153.b = 0
                    else
                        rax_153.b = 1
                    
                    double rcx_202 = var_11f8[0]
                    
                    if (rax_153.b == 0 || rcx_202 != var_1710)
                        rax_153.b = 1
                    else
                        rax_153.b = 0
                    
                    if (rax_153.b == 0)
                        break
                    
                    int32_t* rdi_11 = rdx_100 * 0x1c4 + *rcx_202
                    int64_t var_9c8
                    sub_141961760(&var_9c8)
                    int32_t rax_154 = sub_141973920(rdi_11)
                    int32_t rcx_205 = *rdi_11
                    int32_t var_988 = rax_154
                    double var_9b8_1[0x2] = var_1434_2
                    var_9c8 = 0
                    int64_t var_9c0_1 = 0
                    void var_980
                    int32_t rax_164
                    int128_t* rcx_219
                    void* rdx_110
                    
                    if (rcx_205 == 0)
                        int32_t var_1158
                        sub_14186d450(&var_980, &var_1158)
                        int128_t* var_1150
                        rcx_219 = var_1150
                        void var_1300
                        rdx_110 = &var_1300
                        *rcx_219 = *(rdi_11 + 4)
                        rcx_219[1].d = rdi_11[5]
                        rax_164 = var_1158
                        int32_t var_1304_1 = rax_164
                    label_1419858e9:
                        *(rcx_219 + 0x14) = 0xffffffff
                        var_1778_2.d = rax_164
                        sub_14187f510(&var_980, rdx_110, *rcx_219, rcx_219, var_1778_2, nullptr)
                    else if (rcx_205 == 1)
                        int64_t var_a38
                        __builtin_memset(&var_a38, 0, 0x14)
                        
                        if (*(rdi_11 + 0x18) != 0 || *(rdi_11 + 0x20) != 0 || rdi_11[0xa] != 0)
                            int32_t var_10f8
                            sub_14186d450(&var_980, &var_10f8)
                            char* var_1770_1 = nullptr
                            int64_t* var_10f0
                            *var_10f0 = *(rdi_11 + 0x18)
                            var_10f0[2].d = rdi_11[0xa]
                            int32_t rax_156 = var_10f8
                            *(var_10f0 + 0x14) = 0xffffffff
                            int32_t var_11cc_1 = rax_156
                            var_1778_2.d = rax_156
                            void var_11c8
                            sub_14187f510(&var_980, &var_11c8, *var_10f0, var_10f0, var_1778_2, 
                                var_1770_1)
                        
                        int64_t var_a24
                        __builtin_memset(&var_a24, 0, 0x14)
                        
                        if (*(rdi_11 + 0x2c) != 0 || *(rdi_11 + 0x34) != 0 || rdi_11[0xf] != 0)
                            int32_t var_1108
                            sub_14186d450(&var_980, &var_1108)
                            char* var_1770_2 = nullptr
                            int64_t* var_1100
                            *var_1100 = *(rdi_11 + 0x2c)
                            var_1100[2].d = rdi_11[0xf]
                            int32_t rax_158 = var_1108
                            *(var_1100 + 0x14) = 0xffffffff
                            int32_t var_12b0_1 = rax_158
                            var_1778_2.d = rax_158
                            void var_11c4
                            sub_14187f510(&var_980, &var_11c4, *var_1100, var_1100, var_1778_2, 
                                var_1770_2)
                        
                        int64_t var_a10
                        __builtin_memset(&var_a10, 0, 0x14)
                        
                        if (*(rdi_11 + 0x54) != 0 || *(rdi_11 + 0x5c) != 0 || rdi_11[0x19] != 0)
                            int32_t var_1188
                            sub_14186d450(&var_980, &var_1188)
                            char* var_1770_3 = nullptr
                            int64_t* var_1180
                            *var_1180 = *(rdi_11 + 0x54)
                            var_1180[2].d = rdi_11[0x19]
                            int32_t rax_160 = var_1188
                            *(var_1180 + 0x14) = 0xffffffff
                            int32_t var_11c0_1 = rax_160
                            var_1778_2.d = rax_160
                            void var_1318
                            sub_14187f510(&var_980, &var_1318, *var_1180, var_1180, var_1778_2, 
                                var_1770_3)
                        
                        int64_t var_9fc
                        __builtin_memset(&var_9fc, 0, 0x14)
                        
                        if (*(rdi_11 + 0x68) != 0 || *(rdi_11 + 0x70) != 0 || rdi_11[0x1e] != 0)
                            int32_t var_1178
                            sub_14186d450(&var_980, &var_1178)
                            char* var_1770_4 = nullptr
                            int64_t* var_1170
                            *var_1170 = *(rdi_11 + 0x68)
                            var_1170[2].d = rdi_11[0x1e]
                            int32_t rax_162 = var_1178
                            *(var_1170 + 0x14) = 0xffffffff
                            int32_t var_1314_1 = rax_162
                            var_1778_2.d = rax_162
                            void var_1310
                            sub_14187f510(&var_980, &var_1310, *var_1170, var_1170, var_1778_2, 
                                var_1770_4)
                        
                        int64_t var_9e8
                        __builtin_memset(&var_9e8, 0, 0x14)
                        
                        if (*(rdi_11 + 0x40) != 0 || *(rdi_11 + 0x48) != 0 || rdi_11[0x14] != 0)
                            int32_t var_1168
                            sub_14186d450(&var_980, &var_1168)
                            int128_t* var_1160
                            rcx_219 = var_1160
                            void var_1308
                            rdx_110 = &var_1308
                            *rcx_219 = *(rdi_11 + 0x40)
                            rcx_219[1].d = rdi_11[0x14]
                            rax_164 = var_1168
                            int32_t var_130c_1 = rax_164
                            goto label_1419858e9
                    int32_t var_1148
                    sub_141966360(&var_b40, &var_1148)
                    int32_t* var_1140
                    *var_1140 = var_988
                    sub_1419616a0(&var_1140[2], &var_9c8)
                    int32_t rax_167 = var_1148
                    var_1140[0x2c] = 0xffffffff
                    var_1770 = nullptr
                    int32_t var_12fc_1 = rax_167
                    var_1778_2.d = rax_167
                    void var_12f8
                    sub_14196c020(&var_b40, &var_12f8, *var_1140, var_1140, var_1778_2, var_1770)
                    sub_14195c010(&var_b98, &var_988, rdi_11)
                    sub_1419627f0(&var_9c8)
                    var_11e8_1[1].d &= not.d(var_11f8[1]:4.d)
                    sub_14059bdd0(&var_11f8[1])
                
                sub_141978410(arg1, arg8, &var_b40, 0)
                int32_t r8_70 = arg4[5].d
                void* rsi_16 = &arg4[2]
                int32_t var_1358 = 0
                int32_t var_1354_1 = 1
                void* var_1350_1 = rsi_16
                int32_t var_1348_1 = 0xffffffff
                int64_t var_1344_1 = 0
                
                if (r8_70 != 0)
                    sub_14059bdd0(&var_1358)
                    r8_70 = *(rsi_16 + 0x18)
                
                int32_t rdx_117 = arg4[5].d
                double zmm0_12[0x2] = var_1358.o
                double zmm2_4[0x2] = var_1348_1.o
                int32_t var_14a8 = rdx_117 s>> 5
                char rcx_231 = rdx_117.b & 0x1f
                var_1740 = zmm0_12
                int32_t var_14a4_1 = 1 << rcx_231
                double var_1730_9[0x2] = zmm2_4
                int64_t var_1568_1 = (_mm_unpackhi_pd(zmm2_4, zmm2_4[0])).q
                int32_t var_1494_1 = rdx_117
                int32_t var_1490_1 = rdx_117 & 0xffffffe0
                int512_t zmm1_4
                zmm1_4.o = var_1740
                double var_1588[0x2] = arg4.o
                int128_t var_1578_1 = zmm1_4.o
                
                if (rdx_117 != r8_70)
                    sub_14059bdd0(&var_14a8)
                
                zmm2_4 = (0xffffffff << rcx_231).o
                double var_1730_10[0x2] = zmm2_4
                var_1740 = var_14a8.o
                zmm1_4.o = var_1740
                double var_e48_1[0x2] = arg4.o
                double r12_12 = zmm2_4[0]
                int64_t var_e28_1 = (_mm_unpackhi_pd(zmm2_4, zmm2_4[0])).q
                int128_t var_e38_1 = zmm1_4.o
                
                while (true)
                    int64_t rcx_233 = sx.q(var_1578_1:0xc.d)
                    int32_t rax_175
                    
                    if (rcx_233.d != (r12_12 u>> 0x20).d || var_1578_1.q != rsi_16)
                        rax_175.b = 0
                    else
                        rax_175.b = 1
                    
                    double rdi_13 = var_1588[0]
                    
                    if (rax_175.b == 0 || rdi_13 != arg4)
                        rax_175.b = 1
                    else
                        rax_175.b = 0
                    
                    if (rax_175.b == 0)
                        break
                    
                    int64_t rdi_14 = *rdi_13
                    int64_t rbx_33 = rcx_233 * 3
                    int32_t var_1614
                    sub_141970fb0(&var_b40, &var_1614, *(rdi_14 + (rbx_33 << 3)))
                    int64_t rax_176 = sx.q(var_1614)
                    
                    if (rax_176.d != 0xffffffff)
                        int64_t r8_72 = rax_176 * 0xb8
                        void* r8_73 = r8_72 + var_b40
                        
                        if (r8_72 != neg.q(var_b40) && r8_73 != -8)
                            *(r8_73 + 0x38) += *(*(rdi_14 + (rbx_33 << 3) + 8) + 0x10)
                            int64_t* rax_178 = *(rdi_14 + (rbx_33 << 3) + 8)
                            int64_t rcx_236 = *rax_178
                            
                            if (rcx_236 s> *(r8_73 + 0x28))
                                *(r8_73 + 0x28) = rcx_236
                                rax_178 = *(rdi_14 + (rbx_33 << 3) + 8)
                            
                            int64_t rcx_237 = rax_178[1]
                            
                            if (rcx_237 s> *(r8_73 + 0x30))
                                *(r8_73 + 0x30) = rcx_237
                                rax_178 = *(rdi_14 + (rbx_33 << 3) + 8)
                            
                            int64_t rax_179 = rax_178[3]
                            int64_t rdx_119 = 0
                            int64_t rcx_238 = *(r8_73 + 0x40)
                            
                            if (rax_179 s>= 0)
                                rdx_119 = rax_179
                            
                            int64_t rax_180 = 0
                            
                            if (rcx_238 s>= 0)
                                rax_180 = rcx_238
                            
                            int64_t rdx_120 = rdx_119 + rax_180
                            
                            if (rdx_120 u>= 0x7fffffffffffffff)
                                rdx_120 = 0x7fffffffffffffff
                            
                            *(r8_73 + 0x40) = rdx_120
                    
                    var_1578_1:8.d &= not.d(var_1588[1]:4.d)
                    sub_14059bdd0(&var_1588[1])
                
                r13_1 = var_1700_1
                void var_b30
                void* var_1330_1 = &var_b30
                int32_t var_1328_1 = 0xffffffff
                int32_t var_1338 = 0
                int32_t var_1334_1 = 1
                int64_t var_1324_1 = 0
                int32_t var_b18
                
                if (var_b18 != 0)
                    sub_14059bdd0(&var_1338)
                
                uint128_t zmm4_2 = var_1328_1.o
                int16_t var_14f0_1 = 0
                int64_t* var_1748_11 = &var_b40
                int64_t* var_1538_1 = &var_b40
                zmm1_4.o = zmm4_2
                var_1740 = var_1338.o
                int64_t var_1540
                zmm0_12 = var_1540.o
                int64_t* var_14f8_1 = &var_b40
                int64_t var_1730_11 = zmm4_2.q
                double zmm3_2[0x2] = var_1740
                zmm1_4.o = _mm_unpackhi_pd(zmm1_4.o, zmm4_2.q)
                zmm0_12[0] = (zmm1_4.o).q
                zmm4_2 = _mm_bsrli_si128(zmm4_2, 4)
                double rax_183 = zmm3_2[0]
                double var_1528[0x2] = var_1748_11.o
                var_1540.o = zmm0_12
                
                if (zmm4_2.d s< *(rax_183 i+ 0x18))
                    int32_t i_1 = zmm3_2[1]:4.d
                    
                    do
                        double r14_8 = var_1528[0]
                        int64_t rbx_34 = sx.q(i_1) * 0xb8
                        int32_t* rdi_15 = *r14_8
                        int32_t r12_14 = rdi_15[sx.q(i_1) * 0x2e]
                        int32_t var_1610
                        sub_141838f70(arg4, &var_1610, r12_14)
                        int64_t rax_185 = sx.q(var_1610)
                        
                        if (rax_185.d == 0xffffffff)
                            zmm1_4 = sub_141982730(zmm0_12[1], i_1)
                            var_14f0_1.b = 1
                        else
                            void* rax_187 = *arg4 + rax_185 * 0x18
                            
                            if (rax_187 == 0)
                                zmm1_4 = sub_141982730(zmm0_12[1], i_1)
                                var_14f0_1.b = 1
                            else
                                void* rax_188 = *(rax_187 + 8)
                                void var_12f4
                                
                                if (rax_188 == 0 || *(rax_188 + 0x18) s<= 0)
                                    zmm1_4 = sub_141982730(zmm0_12[1], i_1)
                                    var_14f0_1.b = 1
                                else if (*sub_141970f30(&var_b98, &var_12f4, r12_14) == 0xffffffff)
                                    int32_t r9_16 = rdi_15[sx.q(i_1) * 0x2e + 8]
                                    int32_t r10_4 = rdi_15[sx.q(i_1) * 0x2e + 7]
                                    int32_t r8_77 = rdi_15[sx.q(i_1) * 0x2e + 9]
                                    int32_t rdx_124 = rdi_15[sx.q(i_1) * 0x2e + 6]
                                    
                                    if (((*(arg1 + 0xdc) ^ r10_4) | (arg1[0x1c].d ^ r9_16)
                                            | (*(arg1 + 0xe4) ^ r8_77) | (rdx_124 ^ arg1[0x1b].d)) == 0)
                                        int64_t var_cc8_1 = *(rdi_15 + rbx_34 + 8)
                                        int64_t var_3b8
                                        __builtin_memset(&var_3b8, 0, 0x14)
                                        void var_3a4
                                        sub_1419620f0(&var_3a4)
                                        int32_t var_204_1 = 0
                                        void var_3bc
                                        sub_141963420(&var_d58, &var_3bc, zmm1_4)
                                        zmm1_4 = sub_14195c010(&var_b98, *r14_8 + rbx_34, &var_3bc)
                                    else if (((*(arg1 + 0xf4) ^ r8_77) | (*(arg1 + 0xec) ^ r10_4)
                                            | (arg1[0x1e].d ^ r9_16) | (rdx_124 ^ arg1[0x1d].d)) != 0)
                                        zmm1_4 = sub_141982730(zmm0_12[1], i_1)
                                        var_14f0_1.b = 1
                                    else
                                        int64_t var_d78_1 = *(rdi_15 + rbx_34 + 8)
                                        int64_t var_1fc
                                        __builtin_memset(&var_1fc, 0, 0x14)
                                        void var_1e8
                                        sub_1419620f0(&var_1e8)
                                        int32_t var_48_1 = 0
                                        void var_200
                                        sub_141963420(&var_e08, &var_200, zmm1_4)
                                        zmm1_4 = sub_14195c010(&var_b98, *r14_8 + rbx_34, &var_200)
                        
                        zmm3_2[1].d &= not.d(var_1528[1]:4.d)
                        sub_14059bdd0(&var_1528[1])
                        i_1 = zmm3_2[1]:4.d
                    while (i_1 s< *(zmm3_2[0] i+ 0x18))
                    
                    r13_1 = var_1700_1
                    
                    if (var_14f0_1.b != 0 && var_14f0_1:1.b != 0)
                        sub_141967fb0(var_14f8_1, var_14f8_1[1].d - *(var_14f8_1 + 0x34), 1)
                
                int32_t var_b38
                int32_t var_b0c
                var_1750 = var_b38 - var_b0c
                sub_141989140(&var_b40, arg7)
                int64_t rax_207 = *r13_1
                var_b48 = arg7
                int32_t rdx_136 = var_b18
                int64_t r14_9 = (*(rax_207 + 0x20))(r13_1)
                int32_t var_1418 = 0
                void* var_1410_1 = &var_b30
                int32_t var_1414_1 = 1
                int32_t var_1408_1 = 0xffffffff
                int64_t var_1404_1 = 0
                
                if (rdx_136 != 0)
                    sub_14059bdd0(&var_1418)
                    rdx_136 = var_b18
                
                double zmm0_13[0x2] = var_1418.o
                int32_t var_1004_1 = rdx_136
                double zmm2_5[0x2] = var_1408_1.o
                var_1588[0] = &var_b40
                var_1588 = zmm0_13
                zmm0_13 = var_1588
                int512_t zmm1_5
                zmm1_5.o = zmm2_5
                zmm2_5 = _mm_unpackhi_pd(zmm2_5, zmm2_5[0])
                var_1748_11.o = zmm0_13
                var_1740 = zmm1_5.o
                var_1730_11 = zmm2_5.q
                
                while (true)
                    int64_t rdx_137 = sx.q(var_1730_11:4.d)
                    char rax_210
                    
                    if (rdx_137.d != ((0xffffffff << (rdx_136.b & 0x1f)).q u>> 0x20).d
                            || var_1740[1] != &var_b30)
                        rax_210 = 0
                    else
                        rax_210 = 1
                    
                    if (rax_210 == 0 || var_1748_11 != &var_b40)
                        rax_210 = 1
                    else
                        rax_210 = 0
                    
                    if (rax_210 == 0)
                        break
                    
                    int32_t* rdi_18 = rdx_137 * 0xb8 + *var_1748_11
                    int32_t var_15f4
                    sub_141970f30(&var_b98, &var_15f4, *rdi_18)
                    int64_t rax_211 = sx.q(var_15f4)
                    void* const rsi_18
                    
                    if (rax_211.d == 0xffffffff)
                        rsi_18 = nullptr
                    else
                        rsi_18 = rax_211 * 0x1c8 + var_b98
                    
                    (*(*r13_1 + 0x178))(r13_1, r14_9)
                    *(rdi_18 + 8) = r14_9
                    *(rdi_18 + 0x18) = var_1434_2
                    int64_t rax_214 = (*(*r13_1 + 0x20))(r13_1)
                    zmm1_5 = sub_141963420(r13_1, rsi_18 + 4, zmm1_5)
                    int64_t rdx_141 = *r13_1
                    int64_t rax_216 = (*(rdx_141 + 0x20))(r13_1, rdx_141) - rax_214
                    *(rdi_18 + 0x10) = rax_216
                    r14_9 += rax_216
                    var_1730_11.d &= not.d(var_1740[0]:4.d)
                    sub_14059bdd0(&var_1740)
                
                int64_t var_1420_3 = r14_9
                (*(*r13_1 + 0x178))(r13_1, r14_9)
                sub_141963e70(r13_1, &var_b48, zmm1_5)
                int32_t var_b50_2 = 0
                
                if (var_b58_1 != 0)
                    sub_140a74f90(var_b58_1)
                
                sub_141962510(&var_b98)
                sub_141962320(&var_b40)
                sub_140b4cb40(&var_e08)
                zmm1 = sub_140b4cb40(&var_d58)
                rsi_5 = var_1750
                r14_12 = var_1758
                rbx_19 = arg3
            else if (rbx_19 == 2)
                void* rdi_1 = &arg1[0x11]
                int64_t var_ae8
                __builtin_memset(&var_ae8, 0, 0x2c)
                void* r14_3 = rdi_1 + 0x10
                int32_t var_abc_1 = 0x80
                int32_t var_ab8_1 = 0xffffffff
                int32_t var_ab4_1 = 0
                int64_t var_aa8_1 = 0
                int32_t var_aa0_1 = 0
                int32_t r8_35 = *(r14_3 + 0x18)
                int32_t var_13f8 = 0
                int32_t var_13f4_1 = rbx_19 - 1
                void* var_13f0_1 = r14_3
                int32_t var_13e8_1 = 0xffffffff
                int64_t var_13e4_1 = 0
                
                if (r8_35 != 0)
                    sub_14059bdd0(&var_13f8)
                    r8_35 = *(r14_3 + 0x18)
                
                int32_t rdx_53 = *(rdi_1 + 0x28)
                zmm0_2 = var_13f8.o
                zmm2_1 = var_13e8_1.o
                int32_t var_14e8 = rdx_53 s>> 5
                char rcx_89 = rdx_53.b & 0x1f
                var_1740 = zmm0_2
                int32_t var_14e4_1 = 1 << rcx_89
                double var_1730_1[0x2] = zmm2_1
                int64_t var_1278_1 = (_mm_unpackhi_pd(zmm2_1, zmm2_1[0])).q
                int32_t var_14d4_1 = rdx_53
                int32_t var_14d0_1 = rdx_53 & 0xffffffe0
                zmm1.o = var_1740
                double var_1298[0x2] = rdi_1.o
                int128_t var_1288_1 = zmm1.o
                
                if (rdx_53 != r8_35)
                    sub_14059bdd0(&var_14e8)
                
                zmm2_1 = (0xffffffff << rcx_89).o
                double var_1730_2[0x2] = zmm2_1
                var_1740 = var_14e8.o
                zmm1.o = var_1740
                double var_e98_1[0x2] = rdi_1.o
                double r12_5 = zmm2_1[0]
                int64_t var_e78_1 = (_mm_unpackhi_pd(zmm2_1, zmm2_1[0])).q
                int128_t var_e88_1 = zmm1.o
                
                while (true)
                    int64_t rdx_54 = sx.q(var_1288_1:0xc.d)
                    int32_t rax_57
                    
                    if (rdx_54.d != (r12_5 u>> 0x20).d || var_1288_1.q != r14_3)
                        rax_57.b = 0
                    else
                        rax_57.b = 1
                    
                    double rcx_91 = var_1298[0]
                    
                    if (rax_57.b == 0 || rcx_91 != rdi_1)
                        rax_57.b = 1
                    else
                        rax_57.b = 0
                    
                    if (rax_57.b == 0)
                        break
                    
                    int64_t var_574
                    __builtin_memset(&var_574, 0, 0x14)
                    int32_t* rbx_21 = rdx_54 * 0xb8 + *rcx_91
                    void var_560
                    sub_1419620f0(&var_560)
                    int32_t var_3c0_1 = 0
                    int32_t rcx_97 = (rbx_21[9] ^ *(arg1 + 0xe4)) | (rbx_21[8] ^ arg1[0x1c].d)
                        | (rbx_21[7] ^ *(arg1 + 0xdc)) | (rbx_21[6] ^ arg1[0x1b].d)
                    
                    if (rcx_97 == 0)
                        uint32_t count = rbx_21[4]
                        void* rsi_7 = &var_16b8[sx.q(rbx_21[2])]
                        int64_t var_15f0 = 0
                        uint32_t count_1 = count
                        
                        if (count != 0)
                            sub_1405da9e0(&var_15f0, count, 0)
                            memcpy(var_15f0, rsi_7, count)
                        else
                            int32_t var_15e4_1 = 0
                        
                        void** var_c48
                        sub_141820d30(&var_c48, &var_15f0, 0)
                        var_c48[0x20](&var_c48, 0x11)
                        void var_578
                        sub_141963420(&var_c48, &var_578, zmm1)
                        sub_14195c010(&var_ae8, rbx_21, &var_578)
                        zmm1 = sub_140b4cb40(&var_c48)
                        int64_t rcx_105 = var_15f0
                        
                        if (rcx_105 != 0)
                            zmm1 = sub_140a74f90(rcx_105)
                        
                        rdi_1 = &arg1[0x11]
                    
                    var_1288_1:8.d &= not.d(var_1298[1]:4.d)
                    sub_14059bdd0(&var_1298[1])
                
                int32_t r8_38 = var_1710[5].d
                void* rdi_2 = &var_1710[2]
                int32_t var_13d8 = 0
                int32_t var_13d4_1 = 1
                void* var_13d0_1 = rdi_2
                int32_t var_13c8_1 = 0xffffffff
                int64_t var_13c4_1 = 0
                
                if (r8_38 != 0)
                    sub_14059bdd0(&var_13d8)
                    r8_38 = *(rdi_2 + 0x18)
                
                int32_t rdx_60 = var_1710[5].d
                zmm0_2 = var_13d8.o
                zmm2_1 = var_13c8_1.o
                int32_t var_13b8 = rdx_60 s>> 5
                char rcx_109 = rdx_60.b & 0x1f
                var_1740 = zmm0_2
                int32_t var_13b4_1 = 1 << rcx_109
                double var_1730_3[0x2] = zmm2_1
                int64_t var_1250_1 = (_mm_unpackhi_pd(zmm2_1, zmm2_1[0])).q
                int32_t var_13a4_1 = rdx_60
                int32_t var_13a0_1 = rdx_60 & 0xffffffe0
                zmm1.o = var_1740
                double var_1270[0x2] = var_1710.o
                int128_t var_1260_1 = zmm1.o
                
                if (rdx_60 != r8_38)
                    sub_14059bdd0(&var_13b8)
                
                while (true)
                    int64_t rdx_61 = sx.q(var_1260_1:0xc.d)
                    int32_t rax_72
                    
                    if (rdx_61.d != ((0xffffffff << rcx_109).q u>> 0x20).d || var_1260_1.q != rdi_2)
                        rax_72.b = 0
                    else
                        rax_72.b = 1
                    
                    double rcx_111 = var_1270[0]
                    
                    if (rax_72.b == 0 || rcx_111 != var_1710)
                        rax_72.b = 1
                    else
                        rax_72.b = 0
                    
                    if (rax_72.b == 0)
                        break
                    
                    int32_t* rbx_23 = rdx_61 * 0x1c4 + *rcx_111
                    int64_t var_868
                    sub_141961760(&var_868)
                    int32_t rax_73 = sub_141973920(rbx_23)
                    zmm0_2 = *(arg1 + 0xd8)
                    int32_t rcx_114 = *rbx_23
                    int32_t var_828 = rax_73
                    double var_858_1[0x2] = zmm0_2
                    var_868 = 0
                    int64_t var_860_1 = 0
                    void var_11d0
                    void var_820
                    
                    if (rcx_114 == 0)
                        sub_141859c90(&var_820, &var_11d0, &rbx_23[1], nullptr)
                    else if (rcx_114 == 1)
                        void var_12ac
                        
                        if (*(rbx_23 + 0x18) != 0 || *(rbx_23 + 0x20) != 0 || rbx_23[0xa] != 0)
                            sub_141859c90(&var_820, &var_12ac, &rbx_23[6], nullptr)
                        void var_12a8
                        
                        if (*(rbx_23 + 0x2c) != 0 || *(rbx_23 + 0x34) != 0 || rbx_23[0xf] != 0)
                            sub_141859c90(&var_820, &var_12a8, &rbx_23[0xb], nullptr)
                        void var_12a4
                        
                        if (*(rbx_23 + 0x54) != 0 || *(rbx_23 + 0x5c) != 0 || rbx_23[0x19] != 0)
                            sub_141859c90(&var_820, &var_12a4, &rbx_23[0x15], nullptr)
                        void var_12a0
                        
                        if (*(rbx_23 + 0x68) != 0 || *(rbx_23 + 0x70) != 0 || rbx_23[0x1e] != 0)
                            sub_141859c90(&var_820, &var_12a0, &rbx_23[0x1a], nullptr)
                        void* r8_43 = &rbx_23[0x10]
                        void var_129c
                        
                        if (*r8_43 != 0 || *(r8_43 + 8) != 0 || *(r8_43 + 0x10) != 0)
                            sub_141859c90(&var_820, &var_129c, r8_43, nullptr)
                    sub_14195c0a0(&arg1[0x11], &var_828, &var_868)
                    sub_14195c010(&var_ae8, &var_828, rbx_23)
                    sub_1419627f0(&var_868)
                    var_1260_1:8.d &= not.d(var_1270[1]:4.d)
                    sub_14059bdd0(&var_1270[1])
                
                sub_141978410(arg1, arg8, &arg1[0x11], 1)
                int32_t var_a98
                sub_1419617f0(&var_a98, &arg1[0x10])
                void* r12_8 = &arg4[2]
                int32_t var_ca8[0x8]
                int32_t* rax_76 = sub_1406c8970(&var_ca8, r12_8, 0)
                int32_t rdx_72 = arg4[5].d
                char rcx_128 = rdx_72.b & 0x1f
                double zmm0_3[0x2] = *rax_76
                double zmm2_2[0x2] = *(rax_76 + 0x10)
                int32_t var_1398 = rdx_72 s>> 5
                int32_t var_1394_1 = 1 << rcx_128
                var_1740 = zmm0_3
                int32_t var_1384_1 = rdx_72
                int32_t var_1380_1 = rdx_72 & 0xffffffe0
                double var_1730_4[0x2] = zmm2_2
                double zmm1_1[0x2] = var_1740
                zmm2_2 = _mm_unpackhi_pd(zmm2_2, zmm2_2[0])
                double var_1248[0x2] = arg4.o
                int64_t var_1228_1 = zmm2_2.q
                
                if (rdx_72 != *(r12_8 + 0x18))
                    sub_14059bdd0(&var_1398)
                
                int64_t var_a90
                
                while (true)
                    int64_t rcx_130 = sx.q(zmm1_1[1]:4.d)
                    int32_t rax_81
                    
                    if (rcx_130.d != ((0xffffffff << rcx_128).q u>> 0x20).d || zmm1_1[0] != r12_8)
                        rax_81.b = 0
                    else
                        rax_81.b = 1
                    
                    double rdi_3 = var_1248[0]
                    
                    if (rax_81.b == 0 || rdi_3 != arg4)
                        rax_81.b = 1
                    else
                        rax_81.b = 0
                    
                    if (rax_81.b == 0)
                        break
                    
                    int64_t rdi_4 = *rdi_3
                    int64_t rbx_26 = rcx_130 * 3
                    sub_141970fb0(&var_a90, &var_1750, *(rdi_4 + (rbx_26 << 3)))
                    int64_t rax_82 = sx.q(var_1750)
                    
                    if (rax_82.d != 0xffffffff)
                        int64_t r8_48 = rax_82 * 0xb8
                        void* r8_49 = r8_48 + var_a90
                        
                        if (r8_48 != neg.q(var_a90) && r8_49 != -8)
                            *(r8_49 + 0x38) += *(*(rdi_4 + (rbx_26 << 3) + 8) + 0x10)
                            int64_t* rax_84 = *(rdi_4 + (rbx_26 << 3) + 8)
                            int64_t rcx_133 = *rax_84
                            
                            if (rcx_133 s> *(r8_49 + 0x28))
                                *(r8_49 + 0x28) = rcx_133
                                rax_84 = *(rdi_4 + (rbx_26 << 3) + 8)
                            
                            int64_t rcx_134 = rax_84[1]
                            
                            if (rcx_134 s> *(r8_49 + 0x30))
                                *(r8_49 + 0x30) = rcx_134
                                rax_84 = *(rdi_4 + (rbx_26 << 3) + 8)
                            
                            int64_t rax_85 = rax_84[3]
                            int64_t rdx_74 = 0
                            int64_t rcx_135 = *(r8_49 + 0x40)
                            
                            if (rax_85 s>= 0)
                                rdx_74 = rax_85
                            
                            int64_t rax_86 = 0
                            
                            if (rcx_135 s>= 0)
                                rax_86 = rcx_135
                            
                            int64_t rdx_75 = rdx_74 + rax_86
                            
                            if (rdx_75 u>= 0x7fffffffffffffff)
                                rdx_75 = 0x7fffffffffffffff
                            
                            *(r8_49 + 0x40) = rdx_75
                    
                    zmm1_1[1].d &= not.d(var_1248[1]:4.d)
                    sub_14059bdd0(&var_1248[1])
                
                int32_t var_c68[0x8]
                void var_a80
                int32_t* rax_89 = sub_1406c8970(&var_c68, &var_a80, 0)
                r13_1 = var_1700_1
                int64_t* var_1748_5 = &var_a90
                int16_t var_1450_1 = 0
                double zmm4_1[0x2] = *(rax_89 + 0x10)
                int64_t* var_1190_2 = &var_a90
                var_1740 = *rax_89
                zmm0_3 = var_11a4
                int64_t* var_1458_1 = &var_a90
                double var_1730_5[0x2] = zmm4_1
                double zmm3_1[0x2] = var_1740
                zmm1_1 = _mm_unpackhi_pd(zmm4_1, zmm4_1[0])
                zmm4_1 = _mm_bsrli_si128(zmm4_1, 4)
                double rax_90 = zmm3_1[0]
                int32_t rcx_138 = zmm4_1[0].d
                zmm0_3[0] = zmm1_1.q
                double var_1488[0x2] = var_1748_5.o
                int32_t var_16e8
                
                if (rcx_138 s< *(rax_90 i+ 0x18))
                    int32_t i_2 = zmm3_1[1]:4.d
                    
                    do
                        int32_t* rbx_27 = sx.q(i_2) * 0xb8
                        int64_t rdi_5 = *var_1488[0]
                        sub_141970fb0(&arg1[6], &var_16e8, *(rbx_27 + rdi_5))
                        int64_t rax_93 = sx.q(var_16e8)
                        int64_t rax_94
                        
                        if (rax_93.d != 0xffffffff)
                            rax_94 = rax_93 * 0xb8
                        
                        void* rdx_78
                        
                        if (rax_93.d == 0xffffffff || rax_94 == neg.q(arg1[6]))
                            rdx_78 = nullptr
                        else
                            rdx_78 = rax_94 + arg1[6] + 8
                        
                        int32_t r10_3 = *(rbx_27 + rdi_5 + 0x1c)
                        int32_t r11_1 = *(rbx_27 + rdi_5 + 0x18)
                        int32_t r9_7 = *(rbx_27 + rdi_5 + 0x20)
                        int32_t r8_52 = *(rbx_27 + rdi_5 + 0x24)
                        
                        if (((r11_1 ^ arg1[0x1b].d) | (r10_3 ^ *(arg1 + 0xdc))
                                | (r9_7 ^ arg1[0x1c].d) | (r8_52 ^ *(arg1 + 0xe4))) == 0 || ((
                                *(arg1 + 0xf4) ^ r8_52) | (*(arg1 + 0xec) ^ r10_3) | (arg1[0x1e].d ^ r9_7)
                                | (arg1[0x1d].d ^ r11_1)) == 0)
                            int64_t rax_108 = *(rbx_27 + rdi_5 + 0x40)
                            
                            if (rax_108 s< 0)
                                sub_141982730(zmm0_3[1], i_2)
                                var_1450_1.b = 1
                            else if (rdx_78 != 0 && rax_108 == *(rdx_78 + 0x38))
                                sub_141982730(zmm0_3[1], i_2)
                                var_1450_1.b = 1
                        else
                            sub_141982730(zmm0_3[1], i_2)
                            var_1450_1.b = 1
                        
                        zmm3_1[1].d &= not.d(var_1488[1]:4.d)
                        sub_14059bdd0(&var_1488[1])
                        i_2 = zmm3_1[1]:4.d
                    while (i_2 s< *(zmm3_1[0] i+ 0x18))
                    
                    if (var_1450_1.b != 0 && var_1450_1:1.b != 0)
                        sub_141967fb0(var_1458_1, var_1458_1[1].d - *(var_1458_1 + 0x34), 1)
                
                int32_t var_a88
                int32_t var_a5c
                var_1750 = var_a88 - var_a5c
                sub_141989140(&var_a90, arg7)
                arg1[0x10].d = arg7
                int64_t rax_112 = *r13_1
                var_a98 = arg7
                int64_t rax_113 = (*(rax_112 + 0x20))(r13_1)
                int64_t var_1718_1 = rax_113
                int64_t rbx_29 = rax_113
                arg1[4] = rax_113
                int32_t var_c88[0x8]
                int32_t* rax_114 = sub_1406c8970(&var_c88, &var_a80, 0)
                int64_t* var_1748_6 = &var_a90
                double zmm2_3[0x2] = *(rax_114 + 0x10)
                int32_t var_a68
                int32_t rax_115 = var_a68
                var_1740 = *rax_114
                var_16e8 = rax_115
                double var_1730_6[0x2] = zmm2_3
                int512_t zmm1_2
                zmm1_2.o = var_1740
                zmm2_3 = _mm_unpackhi_pd(zmm2_3, zmm2_3[0])
                double var_1220[0x2] = var_1748_6.o
                int128_t var_1210_1 = zmm1_2.o
                int64_t var_1200_1 = zmm2_3.q
                
                while (true)
                    int64_t rdx_84 = sx.q(var_1210_1:0xc.d)
                    
                    if (rdx_84.d != rax_115 || var_1210_1.q != &var_a80)
                        rax_115.b = 0
                    else
                        rax_115.b = 1
                    
                    double rcx_156 = var_1220[0]
                    
                    if (rax_115.b == 0 || rcx_156 != &var_a90)
                        rax_115.b = 1
                    else
                        rax_115.b = 0
                    
                    if (rax_115.b == 0)
                        break
                    
                    int32_t* r12_10 = rdx_84 * 0xb8 + *rcx_156
                    int32_t var_1618
                    sub_141970fb0(&arg1[0x11], &var_1618, *r12_10)
                    int64_t rax_116 = sx.q(var_1618)
                    void* const r14_5
                    
                    if (rax_116.d == 0xffffffff)
                        r14_5 = nullptr
                    else
                        r14_5 = rax_116 * 0xb8 + arg1[0x11]
                    
                    int32_t rcx_162 = (*(r14_5 + 0x24) ^ *(arg1 + 0xe4))
                        | (*(r14_5 + 0x20) ^ arg1[0x1c].d) | (*(r14_5 + 0x1c) ^ *(arg1 + 0xdc))
                        | (arg1[0x1b].d ^ *(r14_5 + 0x18))
                    
                    if (rcx_162 == 0)
                        *(r14_5 + 8) = rbx_29
                        int32_t r8_55 = *r12_10
                        *(r12_10 + 8) = rbx_29
                        int32_t var_15f8
                        sub_141970f30(&var_ae8, &var_15f8, r8_55)
                        int64_t rax_123 = sx.q(var_15f8)
                        void* const rax_125
                        
                        if (rax_123.d == 0xffffffff)
                            rax_125 = nullptr
                        else
                            rax_125 = rax_123 * 0x1c8 + var_ae8
                        
                        (*(*r13_1 + 0x178))(r13_1, rbx_29)
                        int64_t var_15b0 = 0
                        int64_t var_15a8_1 = 0
                        int64_t var_1590_1 = 0
                        void** const var_ff8
                        memset(&var_ff8, 0, 0x90)
                        sub_140b4c2a0(&var_ff8)
                        int64_t var_f68_1 = 0
                        var_ff8 = &data_142d6ad48
                        int64_t* var_f60_1 = &var_15b0
                        int64_t var_f58_1 = var_1590_1
                        sub_140b552b0(&var_ff8, 1)
                        var_ff8[0x1b](&var_ff8, 0)
                        var_ff8[0x20](&var_ff8, 0x11)
                        sub_141963420(&var_ff8, rax_125 + 4, zmm1_2)
                        
                        if (var_1710[1].d != *(var_1710 + 0x34))
                            int32_t rax_131 = sub_141973920(rax_125 + 4)
                            void* r13_3 = &var_1710[7]
                            void* rdx_90 = *(r13_3 + 8)
                            int64_t r8_56 = sx.q(var_1710[9].d - 1)
                            void* rax_132 = r13_3
                            int64_t rcx_175 = sx.q(rax_131) & r8_56
                            
                            if (rdx_90 != 0)
                                rax_132 = rdx_90
                            
                            void* rdi_7 = rax_132 + (rcx_175 << 2)
                            int32_t i_3 = *(rax_132 + (rcx_175 << 2))
                            
                            if (i_3 != 0xffffffff)
                                void* rsi_14 = *var_1710
                                
                                do
                                    void* rbx_31 = sx.q(i_3) * 0x1c4 + rsi_14
                                    
                                    if (sub_141965570(rbx_31, rax_125 + 4) != 0)
                                        int64_t rdx_92 = sx.q(*rdi_7)
                                        
                                        if (var_1710[1].d != *(var_1710 + 0x34))
                                            void* rax_136 = *(r13_3 + 8)
                                            int64_t r9_8 = rdx_92 * 0x1c4
                                            
                                            if (rax_136 != 0)
                                                r13_3 = rax_136
                                            
                                            void* r8_58 = ((sx.q(*(r9_8 + rsi_14 + 0x1c0)) & r8_56)
                                                << 2) + r13_3
                                            
                                            for (int32_t j = *r8_58; j != 0xffffffff; j = *r8_58)
                                                if (j == rdx_92.d)
                                                    *r8_58 = *(r9_8 + rsi_14 + 0x1bc)
                                                    break
                                                
                                                r8_58 = rsi_14 + 0x1bc + sx.q(j) * 0x1c4
                                        
                                        sub_1419830d0(var_1710, rdx_92.d, 1)
                                        break
                                    
                                    rdi_7 = rbx_31 + 0x1bc
                                    i_3 = *rdi_7
                                while (i_3 != 0xffffffff)
                                
                                rbx_29 = var_1718_1
                            
                            r13_1 = var_1700_1
                        
                        int64_t r9_9 = *r13_1
                        (*(r9_9 + 0x150))(r13_1, var_15b0, sx.q(var_f60_1[1].d), r9_9, var_1778_2, 
                            var_1770)
                        *(r14_5 + 0x10) = sx.q(var_f60_1[1].d)
                        int64_t rax_141 = sx.q(var_f60_1[1].d)
                        rbx_29 += rax_141
                        var_1718_1 = rbx_29
                        *(r12_10 + 0x10) = rax_141
                        zmm1_2 = sub_140b4cb40(&var_ff8)
                        int64_t rcx_186 = var_15b0
                        
                        if (rcx_186 != 0)
                            zmm1_2 = sub_140a74f90(rcx_186)
                    
                    var_1210_1:8.d &= not.d(var_1220[1]:4.d)
                    sub_14059bdd0(&var_1220[1])
                    rax_115 = var_16e8
                
                arg1[4] = rbx_29
                int64_t var_1420_2 = rbx_29
                (*(*r13_1 + 0x178))(r13_1, rbx_29)
                sub_141963e70(r13_1, &var_a98, zmm1_2)
                sub_141962870(&var_a98)
                zmm1 = sub_1419622d0(&var_ae8)
                rsi_5 = var_1750
                r14_12 = var_1758
                rbx_19 = arg3
        (*(*r13_1 + 0x178))(r13_1, 0)
        sub_141963290(r13_1, &var_1448, zmm1)
        (*(*r13_1 + 0x1b0))(r13_1)
        rdi.b = not.b(*(r13_1 + 0x29))
        rdi.b &= 1
        void* lpPerformanceCount
        
        if ((*(*r13_1 + 0x1b8))(r13_1) == 0)
            rdi.b = 0
        label_14198689d:
            (**r13_1)(r13_1, 1)
            sub_140a464c0()
            int16_t* const rdx_174 = &data_142d40450
            var_1778_2.b = 0
            
            if (var_16f0_1 != 0)
                rdx_174 = var_16f8
            
            (*(data_14399ea08 + 0x30))(&data_14399ea08, rdx_174, 0, 0, var_1778_2, var_1770)
            void var_1038
            lpPerformanceCount = &var_1038
            goto label_1419868d0
        
        if (rdi.b == 0)
            goto label_14198689d
        
        int16_t* rsi_21
        
        if (rbx_19 != 1)
            rsi_21 = &data_142d40450
        label_141986a42:
            
            if (rdi.b == 0)
                goto label_14198689d
            
            (**r13_1)(r13_1, 1)
            int16_t* rdx_176 = &data_142d40450
            int16_t* rcx_347 = &data_142d40450
            
            if (var_16f0_1 != 0)
                rdx_176 = var_16f8
            
            if (r14_12 != 0)
                rcx_347 = var_16e0
            
            int32_t rax_270 = sub_140a54510(rcx_347, rdx_176)
            char var_1768
            char rax_271
            
            if (rax_270 != 0)
                sub_140a464c0()
                int16_t* const r8_96 = &data_142d40450
                var_1768 = 1
                int64_t r9_26
                r9_26.b = 1
                
                if (var_16f0_1 != 0)
                    r8_96 = var_16f8
                
                var_1770.b = 1
                
                if (r14_12 != 0)
                    rsi_21 = var_16e0
                
                var_1778_2.b = 1
                rax_271 = (*(data_14399ea08 + 0x40))(&data_14399ea08, rsi_21, r8_96, r9_26, 
                    var_1778_2, var_1770, var_1768)
            
            if (rax_270 == 0 || rax_271 != 0)
                int64_t performanceCount_1
                QueryPerformanceCounter(&performanceCount_1)
                
                if (var_1708_1 == 0 || var_1708_1 == 1)
                    goto label_1419868d6
                
                sub_140a464c0()
                rbx_41 = var_1720_1
                var_1778_2.b = 0
                (*(data_14399ea08 + 0x30))(&data_14399ea08, rbx_41, 0, 0, var_1778_2, var_1770, 
                    var_1768)
            else
                void var_1028
                lpPerformanceCount = &var_1028
            label_1419868d0:
                QueryPerformanceCounter(lpPerformanceCount)
            label_1419868d6:
                rbx_41 = var_1720_1
            
            uint64_t rcx_330 = var_16f8
            
            if (rcx_330 != 0)
                sub_140a74f90(rcx_330)
            
            int64_t rcx_331 = var_1608
            
            if (rcx_331 != 0)
                sub_140a74f90(rcx_331)
            
            char* rcx_332 = var_16b8
            
            if (rcx_332 != 0)
                sub_140a74f90(rcx_332)
            
            char* rcx_333 = var_1698
            
            if (rcx_333 != 0)
                sub_140a74f90(rcx_333)
            
            int16_t* rcx_334 = var_16d8
            
            if (rcx_334 != 0)
                sub_140a74f90(rcx_334)
            
            int16_t* rcx_335 = var_1640
            
            if (rcx_335 != 0)
                sub_140a74f90(rcx_335)
            
            goto label_141986b10
        
        if (rsi_5 != 0)
            rsi_21 = &data_142d40450
            int16_t* const rbx_42 = &data_142d40450
            
            if (var_16f0_1 != 0)
                rbx_42 = var_16f8
            
            int32_t var_1110_1 = var_1600_1
            double var_1078[0x2] = var_1608.o
            sub_140a464c0()
            rdi = zx.d(sub_140b27070(&var_1078, rbx_42, &data_14399ea08, 0))
            goto label_141986a42
        
        (**r13_1)(r13_1, 1)
        int64_t performanceCount_2[0x3]
        QueryPerformanceCounter(&performanceCount_2)
        uint64_t rcx_339 = var_16f8
        
        if (rcx_339 != 0)
            sub_140a74f90(rcx_339)
        
        int64_t rcx_340 = var_1608
        
        if (rcx_340 != 0)
            sub_140a74f90(rcx_340)
        
        char* rcx_341 = var_16b8
        
        if (rcx_341 != 0)
            sub_140a74f90(rcx_341)
        
        char* rcx_342 = var_1698
        
        if (rcx_342 != 0)
            sub_140a74f90(rcx_342)
        
        int16_t* rcx_343 = var_16d8
        
        if (rcx_343 != 0)
            sub_140a74f90(rcx_343)
        
        int16_t* rcx_344 = var_1640
        
        if (rcx_344 != 0)
            sub_140a74f90(rcx_344)
        
        if (var_1720_1 != 0)
            sub_140a74f90(var_1720_1)
        
        rdi.b = 0

if (var_16e0 != 0)
    sub_140a74f90(var_16e0)

__security_check_cookie(rax_1 ^ &var_1798)
return zx.q(rdi.b)
