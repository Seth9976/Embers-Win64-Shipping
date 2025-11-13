// 函数: sub_1420300a0
// 地址: 0x1420300a0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

*(arg1 + 0x78) = *(arg2 + 0x278)
int64_t* rcx = *(arg2 + 0x268)
int64_t rdx = sx.q(*(arg2 + 0x270))
int64_t* r9 = rcx
void* rax_1 = &rcx[rdx]

if (rcx != rax_1)
    while (*r9 != arg1 + 0x78)
        r9 = &r9[1]
        
        if (r9 == rax_1)
            goto label_14203011d

if (rcx == rax_1 || ((r9 - rcx) s>> 3).d == 0xffffffff)
label_14203011d:
    int32_t rax_2 = (rdx + 1).d
    *(arg2 + 0x270) = rax_2
    
    if (rax_2 s> *(arg2 + 0x274))
        sub_1405a4d70(arg2 + 0x268)
    
    *((rdx << 3) + *(arg2 + 0x268)) = arg1 + 0x78

*(arg1 + 0x80) = arg3
int64_t* rax_4 = sub_1424c7800()
void* rax_5 = rax_4[0x23]

if (rax_5 == 0)
    int64_t rdx_1 = *rax_4
    (*(rdx_1 + 0x390))(rax_4, rdx_1)
    rax_5 = rax_4[0x23]

int32_t rdi_1 = 0
*(arg1 + 0x32a) = *(rax_5 + 0x70)
int16_t* var_60 = nullptr
int32_t var_58 = 0
sub_140af2b60()
void* arg_8

if (sub_140b2acc0(&data_143dbb3f0, u"DefaultViewportMouseCaptureMode=", &var_60, 1) != 0)
    int64_t* rax_8 = sub_1424a6210()
    
    if (rax_8 != 0)
        int16_t* const rdx_2 = &data_142d40450
        
        if (var_58 != 0)
            rdx_2 = var_60
        
        int64_t rax_10 = sub_140be0d00(rax_8, *sub_140b58260(&arg_8, rdx_2, 1), 0)
        
        if (rax_10 != -1)
            *(arg1 + 0x32a) = rax_10.b

int64_t* rax_11 = sub_1424c7800()
void* rax_12 = rax_11[0x23]

if (rax_12 == 0)
    int64_t rdx_4 = *rax_11
    (*(rdx_4 + 0x390))(rax_11, rdx_4)
    rax_12 = rax_11[0x23]

uint64_t rcx_6 = zx.q(data_14401b1a0)
*(arg1 + 0x32c) = *(rax_12 + 0x71)
TEB* gsbase

if (data_143cd80cc s> *(0x14 + *(gsbase->ThreadLocalStoragePointer + (rcx_6 << 3))))
    _Init_thread_header(&data_143cd80cc)
    
    if (data_143cd80cc == 0xffffffff)
        sub_140af2b60()
        data_143cd80c8 = sub_140b21a10(&data_143dbb3f0, u"nullrhi")
        _Init_thread_footer(&data_143cd80cc)

if (data_143de5426 == 0)
    if (data_143cd80c8 != 0)
        *(arg1 + 0x32a) = 0
        *(arg1 + 0x32c) = 0
else if (data_143de5427 == 0 || data_143cd80c8 != 0)
    *(arg1 + 0x32a) = 0
    *(arg1 + 0x32c) = 0

if (*(data_143e29f28 + 0x172) != 0)
    *(arg1 + 0x32c) = 0

int64_t* rax_17 = sub_1425b9240()
void* r12 = rax_17[0x23]
arg_8 = r12

if (r12 == 0)
    int64_t rdx_5 = *rax_17
    (*(rdx_5 + 0x390))(rax_17, rdx_5)
    r12 = rax_17[0x23]
    arg_8 = r12

void* rcx_9 = data_143f5b298
int32_t var_a8
int128_t var_88

if (rcx_9 != 0)
    void* rax_18 = sub_1423dcff0(rcx_9)
    
    if (rax_18 != 0)
        sub_141e7d290(rax_18, &var_88)
        var_88.q = *(arg1 + 0x78)
        sub_141e72190(arg1 + 0x90, sub_141e85320(rax_18, &var_a8, &var_88))
        sub_141e71cd0(&var_a8)
        
        if (sub_141e80b60(arg1 + 0x90) != 0)
            void* rcx_16 = *(arg1 + 0x78)
            
            if (rcx_16 != 0)
                void* rax_21
                char r8_3
                rax_21, r8_3 = sub_142437e30(rcx_16, 0, 1)
                sub_141e86640(sub_1405948a0(arg1 + 0x90), *(rax_21 + 0x2e0), r8_3)
                sub_142444a90(*(arg1 + 0x78), arg1 + 0x90)
            
            *(arg2 + 0x250) = sub_1405f8ab0(arg1 + 0x90)

int32_t var_a4 = 1
int32_t r11 = *(r12 + 0xb8)
void* var_a0 = r12 + 0xa0
int32_t rcx_21 = 0
var_a8 = 0
int32_t r8_4 = 0
int32_t var_98 = 0xffffffff
int64_t var_94 = 0

if (r11 != 0)
    void* rax_24 = *(r12 + 0xb0)
    void* r9_4 = r12 + 0xa0
    
    if (rax_24 != 0)
        r9_4 = rax_24
    
    int32_t temp0_1
    int32_t temp1_1
    temp0_1:temp1_1 = sx.q(r11 - 1)
    int32_t rdx_13 = *r9_4
    
    if (rdx_13 != 0)
    label_1420303f8:
        int32_t rax_31 = neg.d(rdx_13) & rdx_13
        uint64_t rflags_1
        int32_t temp0_2
        temp0_2, rflags_1 = _bit_scan_reverse(rax_31)
        int32_t var_a4_1 = rax_31
        int32_t rax_32
        
        if (rax_31 == 0)
            rax_32 = 0x20
        else
            rax_32 = 0x1f - temp0_2
        
        var_94.d = r8_4 - rax_32 + 0x1f
        
        if (r8_4 - rax_32 + 0x1f s> r11)
            var_94.d = r11
    else
        while (true)
            int64_t rdx_14 = sx.q(rcx_21)
            r8_4 += 0x20
            rcx_21 += 1
            var_94:4.d = r8_4
            var_a8 = rcx_21
            
            if (rdx_14.d s>= (temp1_1 + (temp0_1 & 0x1f)) s>> 5)
                break
            
            rdx_13 = *(r9_4 + (rdx_14 << 2) + 4)
            var_98 = 0xffffffff
            
            if (rdx_13 != 0)
                goto label_1420303f8
        
        var_94.d = r11

int32_t rdx_15 = *(r12 + 0xb8)
double zmm2[0x2] = var_98.o
double var_38[0x2] = zmm2
int32_t r13_1 = 0xffffffff << (rdx_15.b & 0x1f)
int128_t var_48 = var_a8.o
int32_t r8_7 = rdx_15 s>> 5
int32_t r9_6 = rdx_15 & 0xffffffe0
int64_t var_68 = (_mm_unpackhi_pd(zmm2, zmm2[0])).q
int32_t var_98_1 = r13_1
var_94.d = rdx_15
var_88 = (r12 + 0x90).o
int128_t var_78 = var_48

if (rdx_15 != r11)
    void* rax_34 = *(r12 + 0xb0)
    void* r10_1 = r12 + 0xa0
    
    if (rax_34 != 0)
        r10_1 = rax_34
    
    int32_t temp2_1
    int32_t temp3_1
    temp2_1:temp3_1 = sx.q(r11 - 1)
    int32_t rdx_19 = *(r10_1 + (sx.q(r8_7) << 2)) & r13_1
    
    if (rdx_19 != 0)
    label_1420304d2:
        int32_t rax_41 = neg.d(rdx_19) & rdx_19
        uint64_t rflags_2
        int32_t temp0_4
        temp0_4, rflags_2 = _bit_scan_reverse(rax_41)
        int32_t rax_42
        
        if (rax_41 == 0)
            rax_42 = 0x20
        else
            rax_42 = 0x1f - temp0_4
        
        var_94.d = r9_6 - rax_42 + 0x1f
        
        if (r9_6 - rax_42 + 0x1f s> r11)
            var_94.d = r11
    else
        while (true)
            int64_t rcx_26 = sx.q(r8_7)
            r9_6 += 0x20
            r8_7 += 1
            
            if (rcx_26.d s>= (temp3_1 + (temp2_1 & 0x1f)) s>> 5)
                break
            
            rdx_19 = *(r10_1 + (rcx_26 << 2) + 4)
            var_98_1 = 0xffffffff
            
            if (rdx_19 != 0)
                goto label_1420304d2
        
        var_94.d = r11

while (true)
    int64_t rax_44 = sx.q(var_78:0xc.d)
    int64_t* rdx_20 = var_88.q
    
    if (rax_44.d == (var_98_1.q u>> 0x20).d && var_78.q == r12 + 0xa0 && rdx_20 == r12 + 0x90)
        int32_t rcx_31 = 0
        void* r15_3 = arg_8 + 0x40
        var_a8 = 0
        int32_t r10_2 = *(r15_3 + 0x28)
        int32_t var_a4_2 = 1
        void* var_a0_1 = r15_3 + 0x10
        int32_t var_98_2 = 0xffffffff
        var_94.d = 0
        var_94:4.d = 0
        
        if (r10_2 != 0)
            void* rax_48 = *(r15_3 + 0x20)
            void* r8_10 = r15_3 + 0x10
            
            if (rax_48 != 0)
                r8_10 = rax_48
            
            int32_t temp4_1
            int32_t temp5_1
            temp4_1:temp5_1 = sx.q(r10_2 - 1)
            int32_t rdx_24 = *r8_10
            
            if (rdx_24 != 0)
            label_1420305c6:
                int32_t rax_55 = neg.d(rdx_24) & rdx_24
                uint64_t rflags_3
                int32_t temp0_5
                temp0_5, rflags_3 = _bit_scan_reverse(rax_55)
                int32_t var_a4_3 = rax_55
                int32_t rax_56
                
                if (rax_55 == 0)
                    rax_56 = 0x20
                else
                    rax_56 = 0x1f - temp0_5
                
                var_94.d = rcx_31 - rax_56 + 0x1f
                
                if (rcx_31 - rax_56 + 0x1f s> r10_2)
                    var_94.d = r10_2
            else
                while (true)
                    int64_t rdx_25 = sx.q(rdi_1)
                    rcx_31 += 0x20
                    rdi_1 += 1
                    var_94:4.d = rcx_31
                    var_a8 = rdi_1
                    
                    if (rdx_25.d s>= (temp5_1 + (temp4_1 & 0x1f)) s>> 5)
                        break
                    
                    rdx_24 = *(r8_10 + (rdx_25 << 2) + 4)
                    var_98_2 = 0xffffffff
                    
                    if (rdx_24 != 0)
                        goto label_1420305c6
                
                var_94.d = r10_2
        
        int32_t rdx_27 = *(r15_3 + 0x28)
        zmm2 = var_98_2.o
        double var_38_1[0x2] = zmm2
        int32_t rdi_2 = 0xffffffff << (rdx_27.b & 0x1f)
        int128_t var_48_1 = var_a8.o
        int32_t r8_12 = rdx_27 s>> 5
        int32_t r9_9 = rdx_27 & 0xffffffe0
        int64_t var_68_1 = (_mm_unpackhi_pd(zmm2, zmm2[0])).q
        int32_t var_98_3 = rdi_2
        var_94.d = rdx_27
        var_88 = r15_3.o
        int128_t var_78_1 = var_48_1
        
        if (rdx_27 != r10_2)
            void* rax_58 = *(r15_3 + 0x20)
            void* r10_3 = r15_3 + 0x10
            
            if (rax_58 != 0)
                r10_3 = rax_58
            
            int32_t temp6_1
            int32_t temp7_1
            temp6_1:temp7_1 = sx.q(r10_2 - 1)
            int32_t rdx_31 = *(r10_3 + (sx.q(r8_12) << 2)) & rdi_2
            
            if (rdx_31 != 0)
            label_142030692:
                int32_t rax_65 = neg.d(rdx_31) & rdx_31
                uint64_t rflags_4
                int32_t temp0_7
                temp0_7, rflags_4 = _bit_scan_reverse(rax_65)
                int32_t r12_1
                
                if (rax_65 == 0)
                    r12_1 = 0x20
                else
                    r12_1 = 0x1f - temp0_7
                
                var_94.d = r9_9 - r12_1 + 0x1f
                
                if (r9_9 - r12_1 + 0x1f s> r10_2)
                    var_94.d = r10_2
            else
                while (true)
                    int64_t rcx_36 = sx.q(r8_12)
                    r9_9 += 0x20
                    r8_12 += 1
                    
                    if (rcx_36.d s>= (temp7_1 + (temp6_1 & 0x1f)) s>> 5)
                        break
                    
                    rdx_31 = *(r10_3 + (rcx_36 << 2) + 4)
                    var_98_3 = 0xffffffff
                    
                    if (rdx_31 != 0)
                        goto label_142030692
                
                var_94.d = r10_2
        
        while (true)
            int64_t result = sx.q(var_78_1:0xc.d)
            int64_t rcx_38 = var_88.q
            
            if (result.d == (var_98_3.q u>> 0x20).d && var_78_1.q == r15_3 + 0x10
                    && rcx_38 == r15_3)
                int16_t* rcx_41 = var_60
                
                if (rcx_41 == 0)
                    return result
                
                return sub_140a74f90(rcx_41)
            
            char* r8_14 = result * 0x1c + *rcx_38
            sub_14203c640(arg1, zx.d(*r8_14), *(r8_14 + 4), *(r8_14 + 0xc))
            var_78_1:8.d &= not.d(var_88:0xc.d)
            sub_14059bdd0(&var_88:8)
    
    int64_t rcx_28 = rax_44 * 5
    int64_t rax_45 = *rdx_20
    sub_14201c920(arg1, zx.d(*(rax_45 + (rcx_28 << 3))), rax_45 + 8 + (rcx_28 << 3))
    var_78:8.d &= not.d(var_88:0xc.d)
    sub_14059bdd0(&var_88:8)
