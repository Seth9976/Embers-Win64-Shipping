// 函数: sub_141fcb320
// 地址: 0x141fcb320
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t rcx = *(arg1 + 0x140)
float zmm7[0x4] = arg2.o
uint64_t rax
float zmm6[0x4]

if (rcx != 0)
    rax, arg2, zmm6, zmm7 = sub_14243ae00(rcx)

if (rcx != 0 && rax.b != 0)
    return 

if (*(arg1 + 0xb0c) == 0)
    rax = *(arg1 + 0x88)
    
    if (rax != 0 && *(rax + 0x134) != 1)
        goto label_141fcb37c
    
    return 

label_141fcb37c:

if (*(arg1 + 0x10c8) != 0)
    return 

float var_38_1[0x4] = zmm6
sub_1418c35f0(*(arg1 + 0x150), *data_143f3d498 s> 0)
zmm6 = zx.o(0)
arg2.o = *data_143f3d3a8
float (** var_b8)[0x4]
int32_t var_b0

if (not(arg2.d f< zmm6[0]))
    var_b8 = nullptr
    var_b0 = 0
    arg2, zmm6 = sub_141fb6490(arg1, arg2, &var_b8)
    int64_t* rcx_3 = data_143f3d3a0
    (*(*rcx_3 + 0x80))(rcx_3, &data_142e22d04, 0x9000000)

arg2.o = *data_143f3d378

if (not(__andps_xmmxud_memxud(arg2.o, data_142d3f770)[0] f<= zmm6[0]))
    arg2.d = arg2.d f+ *(arg1 + 0x750)
    var_b8 = nullptr
    var_b0 = 0
    sub_141fb6490(arg1, arg2, &var_b8)
    int64_t* rcx_5 = data_143f3d370
    (*(*rcx_5 + 0x80))(rcx_5, &(*U"RGBXYZF10|")[8], 0x9000000)

int512_t zmm1 = sub_141fbf5b0(arg1)
int64_t* rcx_7 = *(arg1 + 0x770)

if ((*(*rcx_7 + 0x60))(rcx_7) != 0)
    int64_t* rcx_8 = *(arg1 + 0x770)
    *(arg1 + 0x74c) = float.s(zx.q((*(*rcx_8 + 0x60))(rcx_8))) f* 0.00100000005f

float zmm6_1[0x4]
rax, zmm6_1 = sub_141fbfea0(arg1, zmm1)

if (rax.b == 0)
    return 

int64_t* rcx_10 = *(arg1 + 0x770)
int64_t* rdi
int64_t* arg_18 = rdi
int64_t* rax_12 = (*(*rcx_10 + 0x20))(rcx_10)

if (rax_12 != 0)
    int64_t rdx_1 = *rax_12
    char rax_13 = (*(rdx_1 + 0x30))(rax_12, rdx_1)
    
    if (rax_13 != 0 && *(arg1 + 0xa60) != 0)
        zmm7[0] = zmm7[0] f+ *(arg1 + 0x750)
    
    if (rax_13 == 0 || (*(arg1 + 0xa60) != 0 && zmm7[0] f< *(arg1 + 0x74c)))
        rdi.b = 0
    else
        rdi.b = 1
    
    int64_t* rcx_12 = *(arg1 + 0x770)
    
    if ((*(*rcx_12 + 0x128))(rcx_12) == 0 && rdi.b != 0)
        sub_140599090(arg1 + 0x9c0)
        int32_t rcx_14 = data_143f3d160
        rdi = *(arg1 + 0x998)
        
        if (rcx_14 s<= 1)
            sub_140af2b60()
            
            if (sub_140b21a10(&data_143dbb3f0, ExitAfterReplay") != 0
                    && (rdi == 0 || *(rdi + 0x14) == rdi[4].d))
                sub_140b721f0(0)
            else if (*data_143f3d4f8 s> 0)
                if (rdi == 0)
                    goto label_141fcb597
                
                if (*(rdi + 0x14) == rdi[4].d)
                    sub_142153090(rdi)
        else if (rdi == 0)
            data_143f3d160 = rcx_14 - 1
        label_141fcb597:
            var_b8 = nullptr
            zmm1.o = zx.o(0)
            var_b0 = 0
            zmm1, zmm6_1 = sub_141fb6490(arg1, zmm1, &var_b8)
        else if (*(rdi + 0x14) == rdi[4].d)
            data_143f3d160 = rcx_14 - 1
            sub_142153090(rdi)

void* rcx_19 = *(arg1 + 0x140)

if (rcx_19 != 0 && sub_142437e30(rcx_19, 0, 1) != 0
        && *(sub_142437e30(*(arg1 + 0x140), 0, 1) + 0x370) == 0)
    zmm7[0] = zmm7[0] f+ *(arg1 + 0x750)
    *(arg1 + 0x750) = zmm7[0]

zmm1.o = *(arg1 + 0x750)
float zmm0_2[0x4]

if (not(zmm1.d f< zmm6_1[0]))
    zmm0_2 = *(arg1 + 0x74c)
    zmm0_2[0] = zmm0_2[0] + 0.00999999978f
    zmm6_1 = _mm_min_ss(zmm0_2[0], zmm1.d)

int64_t* rcx_21 = *(arg1 + 0x770)
*(arg1 + 0x750) = zmm6_1[0]
zmm6_1[0] = zmm6_1[0] * 1000f
(*(*rcx_21 + 0x58))(rcx_21, int.q(zmm6_1[0]))
char rax_25

if (*(arg1 + 0xa60) s<= 0)
    int64_t* rcx_22 = *(arg1 + 0x770)
    rax_25 = (*(*rcx_22 + 0x68))(rcx_22, zmm1)

if (*(arg1 + 0xa60) s> 0 || rax_25 != 0)
    rdi.b = 1
else
    rdi.b = 0

int64_t rsi_1 = data_143f3d650
int64_t rcx_23

if (data_143de5480 == 0)
    rcx_23 = 0
else
    rcx_23.b = GetCurrentThreadId() != data_143de5470

bool cond:2_1

if (*(rsi_1 + (rcx_23 << 2)) != 0)
    cond:2_1 = rdi.b == 0
label_141fcb6ca:
    
    if (not(cond:2_1))
        goto label_141fcb6d5
    
    sub_141fbf040(arg1, 1)
    return 

if (rdi.b == 0)
    zmm0_2 = *(arg1 + 0x750)
    int64_t* rcx_24 = *(arg1 + 0x770)
    zmm0_2[0] = zmm0_2[0] * 1000f
    int64_t r9_1 = *rcx_24
    int32_t rax_27 = (int.q(zmm0_2[0])).d
    cond:2_1 = (*(r9_1 + 0x78))(rcx_24, zx.q(rax_27), zx.q(rax_27), r9_1) == 0
    goto label_141fcb6ca

label_141fcb6d5:
int512_t zmm1_1 = sub_141fbf040(arg1, 0)
int64_t performanceCount
QueryPerformanceCounter(&performanceCount)
int64_t* rcx_27 = *(arg1 + 0x770)
zmm7 = zx.o(0)
zmm7[0].q = float.d(performanceCount)
zmm7[0].q = zmm7[0].q f* data_143d796f8
zmm7[0].q = zmm7[0].q f+ 16777216.0
int64_t* rax_30 = (*(*rcx_27 + 0x20))(rcx_27)

if (rax_30 != 0)
    int64_t r8_7 = *rax_30
    (*(r8_7 + 0xf8))(rax_30, zx.q(*(arg1 + 0xbec)), r8_7)
    int64_t r8_8 = *rax_30
    (*(r8_8 + 0x100))(rax_30, zx.q(*(arg1 + 0xbf0)), r8_8)

zmm6_1 = 0x40a00000
int64_t var_c8
int64_t rdx_8
int128_t zmm0_3
char i

do
    int64_t* rcx_30 = *(arg1 + 0x770)
    int64_t* rax_32 = (*(*rcx_30 + 0x20))(rcx_30)
    
    if (*(arg1 + 0xa60) s> 0)
        zmm1_1.o = *(arg1 + 0x750)
        zmm0_3 = *((sx.q(*(arg1 + 0xa60)) << 5) + *(arg1 + 0xa58) - 0x10)
        
        if (not(zmm0_3.d f<= zmm1_1.d))
            zmm0_3.d = zmm0_3.d f- zmm1_1.d
            
            if (zmm0_3.d f> zmm6_1[0])
                break
    
    var_c8 = 0
    i, rdx_8, zmm1_1, zmm6_1, zmm7 = sub_141fc0ee0(arg1, rax_32, arg1 + 0xa58, 0, zmm1_1, nullptr)
while (i != 0)

while (true)
    int64_t rcx_33 = sx.q(*(arg1 + 0xe84))
    
    if (rcx_33.d s< 0 || rcx_33.d s>= *(arg1 + 0xa60))
        rdx_8.b = 1
        sub_141fbf040(arg1, rdx_8.b)
        break
    
    int64_t* rdi_4 = (rcx_33 << 5) + *(arg1 + 0xa58)
    
    if (rdi_4[2].d.d f> *(arg1 + 0x750))
        break
    
    if (*(rdi_4 + 0x14) != *(arg1 + 0x760))
        int64_t* rcx_35 = *(*(arg1 + 0x140) + 0x188)
        (*(*rcx_35 + 0x2e8))(rcx_35)
        int32_t rdx_11 = *(rdi_4 + 0x14)
        *(arg1 + 0x760) = rdx_11
        zmm1_1, zmm7 = sub_141fc00f0(arg1, rdx_11)
        break
    
    *(arg1 + 0xe84) = (rcx_33 + 1).d
    char rax_35
    rax_35, rdx_8, zmm1_1 = sub_141fbfb60(arg1, rdi_4)
    
    if (rax_35 == 0)
        break
    
    *(arg1 + 0x748) += 1
    continue

int64_t r8_10 = sx.q(*(arg1 + 0xe84))

if (r8_10.d s> 0)
    *(arg1 + 0xe20) = *((r8_10 << 5) + *(arg1 + 0xa58) - 0x10)
    sub_14177d850(arg1 + 0xa58, 0, r8_10.d, 1)
    *(arg1 + 0xe84) = 0

var_b8:4.d = 1
int32_t r11_1 = *(arg1 + 0xcc0)
void* r9_3 = arg1 + 0xca8
var_b0.q = r9_3
int32_t rcx_39 = 0
var_b8.d = 0
int32_t r8_11 = 0
int32_t var_a8_1 = 0xffffffff
int64_t var_a4_1 = 0

if (r11_1 != 0)
    void* rax_39 = *(r9_3 + 0x10)
    
    if (rax_39 != 0)
        r9_3 = rax_39
    
    int32_t temp0_3
    int32_t temp1_1
    temp0_3:temp1_1 = sx.q(r11_1 - 1)
    int32_t rdx_17 = *r9_3
    
    if (rdx_17 != 0)
    label_141fcb8e8:
        int32_t rax_46 = neg.d(rdx_17) & rdx_17
        uint64_t rflags_1
        int32_t temp0_4
        temp0_4, rflags_1 = _bit_scan_reverse(rax_46)
        var_b8:4.d = rax_46
        int32_t rax_47
        
        if (rax_46 == 0)
            rax_47 = 0x20
        else
            rax_47 = 0x1f - temp0_4
        
        var_a4_1.d = r8_11 - rax_47 + 0x1f
        
        if (r8_11 - rax_47 + 0x1f s> r11_1)
            var_a4_1.d = r11_1
    else
        while (true)
            int64_t rdx_18 = sx.q(rcx_39)
            r8_11 += 0x20
            rcx_39 += 1
            var_a4_1:4.d = r8_11
            var_b8.d = rcx_39
            
            if (rdx_18.d s>= (temp1_1 + (temp0_3 & 0x1f)) s>> 5)
                break
            
            rdx_17 = *(r9_3 + (rdx_18 << 2) + 4)
            var_a8_1 = 0xffffffff
            
            if (rdx_17 != 0)
                goto label_141fcb8e8
        
        var_a4_1.d = r11_1

int128_t zmm4_1 = var_a8_1.o
void* var_50_1 = arg1 + 0xc98
zmm0_3 = var_b8.o
int128_t var_60_1 = zmm4_1
int16_t var_80_1 = 0
rax = zmm0_3.q
var_a8_1.o = zmm0_3
zmm1_1.o = zmm4_1
var_b8.o = (arg1 + 0xc98).o
zmm1_1.o = _mm_unpackhi_pd(zmm1_1.o, zmm4_1.q)
zmm0_3.q = (zmm1_1.o).q

if ((zmm4_1.q u>> 0x20).d s< *(rax + 0x18))
    int32_t i_2
    int32_t i_1 = i_2
    
    do
        float (* r12_1)[0x4] = *var_b8
        zmm6_1 = r12_1[sx.q(i_1) * 6][0]
        
        if (not(zmm6_1[0] f> *(arg1 + 0x750)))
            if (*(arg1 + 0xb09) == 0)
                char r15_1 = 0
                int32_t rdx_19 = data_143a30468
                int32_t rcx_44 = data_143a30474 + 1
                int64_t r13_1 = *(arg1 + 0x140)
                data_143a30474 = rcx_44
                int64_t rsi_2 = sx.q(rdx_19 - 1)
                
                if (rdx_19 - 1 s>= 0)
                    int64_t rdi_7 = rsi_2 << 4
                    int64_t temp2_1
                    
                    do
                        int64_t rcx_45 = data_143a30460
                        
                        if (*(rdi_7 + rcx_45 + 8) == 0)
                            r15_1 = 1
                        else
                            int64_t* rcx_46 = *(rdi_7 + rcx_45)
                            
                            if (rcx_46 == 0)
                                r15_1 = 1
                            else
                                char rax_53
                                rax_53, r9_3 = (*(*rcx_46 + 0x50))(rcx_46, r13_1, zmm6_1, 
                                    &(*r12_1)[2 + sx.q(i_1) * 0x18], var_c8)
                                
                                if (rax_53 == 0)
                                    r15_1 = 1
                        
                        rdi_7 -= 0x10
                        temp2_1 = rsi_2
                        rsi_2 -= 1
                    while (temp2_1 - 1 s>= 0)
                    rcx_44 = data_143a30474
                    rdx_19 = data_143a30468
                
                data_143a30474 = rcx_44 - 1
                
                if (r15_1 != 0 && rcx_44 - 1 s<= 0)
                    int32_t r14_3 = rdx_19
                    int32_t rsi_3 = 0
                    
                    if (rdx_19 s> 0)
                        int64_t* rdi_8 = nullptr
                        
                        do
                            int64_t rcx_48 = data_143a30460
                            
                            if (*(rdi_8 + rcx_48 + 8) == 0)
                                r9_3.b = 1
                                sub_1405a4880(&data_143a30460, rsi_3, 1, r9_3.b)
                            else
                                int64_t* rcx_49 = *(rdi_8 + rcx_48)
                                
                                if (rcx_49 == 0)
                                    r9_3.b = 1
                                    sub_1405a4880(&data_143a30460, rsi_3, 1, r9_3.b)
                                else
                                    char rax_55
                                    rax_55, r9_3 = (*(*rcx_49 + 0x20))(rcx_49)
                                    
                                    if (rax_55 != 0)
                                        r9_3.b = 1
                                        sub_1405a4880(&data_143a30460, rsi_3, 1, r9_3.b)
                                    else
                                        rsi_3 += 1
                                        rdi_8 = &rdi_8[2]
                            
                            rdx_19 = data_143a30468
                        while (rsi_3 s< rdx_19)
                    
                    int32_t rax_56 = rdx_19 * 2
                    
                    if (rax_56 s<= 2)
                        rax_56 = 2
                    
                    data_143a30470 = rax_56
                    
                    if (r14_3 s> rax_56 && data_143a3046c != rdx_19)
                        sub_1405a5410(&data_143a30460, rdx_19)
            
            sub_141fc3540(zmm0_3:8.q, i_2)
            var_80_1.b = 1
        
        int32_t var_ac
        var_a4_1:4.d &= not.d(var_ac)
        sub_14059bdd0(&var_b0)
        i_1 = i_2
    while (i_1 s< *(var_a8_1.q + 0x18))
    
    if (var_80_1.b != 0 && var_80_1:1.b != 0)
        rax, zmm1_1 = sub_141fab290(arg1 + 0xc98, *(arg1 + 0xca0) - *(arg1 + 0xccc), 1)

if (*(arg1 + 0xb09) != 0)
    zmm1_1.o = zmm7
    sub_141fb25e0(arg1, zmm1_1.o)
