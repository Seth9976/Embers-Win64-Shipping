// 函数: sub_142153a30
// 地址: 0x142153a30
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_8b8
int64_t rax_1 = __security_cookie ^ &var_8b8
void* r8
int512_t zmm1
r8, zmm1 = sub_140ce8e10(arg1, arg2)
void* rax_2
int64_t rax_3
void* rdx

if (*(arg1 + 0x20) != 0)
    rax_2 = sub_1424851f0()
    rdx = *(*(arg1 + 0x20) + 0x10)
    rax_3 = sx.q(*(rax_2 + 0x38))

if (*(arg1 + 0x20) == 0 || rax_3.d s> *(rdx + 0x38)
        || *(*(rdx + 0x30) + (rax_3 << 3)) != rax_2 + 0x30)
    r8.b = 0
else
    r8.b = 1

char var_894
sub_141ff4780(&var_894, arg2, r8.b, 0xd6)
int64_t* rax_6 = sub_1408d9160(sub_1408d9160(arg2, arg1 + 0x238, zmm1), arg1 + 0x244, zmm1)
int64_t* rdx_4 = rax_6[1]
int32_t* rax_7 = *rdx_4

if (&rax_7[1] u<= rdx_4[1])
    *(arg1 + 0x250) = *rax_7
    int64_t* rax_8 = rax_6[1]
    *rax_8 += 4
else if ((*(rax_6 + 0x29) & 0x20) != 0)
    sub_140b54070(rax_6, arg1 + 0x250, zmm1)
else
    (*(*rax_6 + 0x150))(rax_6, arg1 + 0x250, 4)

int64_t var_890
void* var_880
int64_t var_878
int64_t var_858
void* rbx_3

if ((arg2[5].b & 1) == 0 || arg2[8].d s>= 0x1d9)
    sub_1409b1e20(arg1 + 0x48, arg2, 0, zmm1)
    sub_1409b1e20(arg1 + 0x58, arg2, 0, zmm1)
    rbx_3 = arg1 + 0x28
    sub_14213e430(rbx_3, arg2, 0, zmm1)
else
    var_890 = 0
    int32_t var_888_1 = 0
    var_880 = arg1
    var_858 = 0
    int32_t var_850_1 = 0
    void* var_848_1 = arg1
    var_878 = 0
    int32_t var_870_1 = 0
    void* var_868_1 = arg1
    sub_1409b1e20(&var_890, arg2, 0, zmm1)
    sub_1409b1e20(&var_858, arg2, 0, zmm1)
    sub_14213e430(&var_878, arg2, 0, zmm1)
    
    if (arg1 + 0x48 != &var_890)
        int64_t rsi_1 = sx.q(var_888_1)
        int32_t r8_1 = *(arg1 + 0x54)
        *(arg1 + 0x50) = rsi_1.d
        
        if (rsi_1.d != 0 || r8_1 != 0)
            sub_1407c3650(arg1 + 0x48, rsi_1.d, r8_1)
            memcpy(*(arg1 + 0x48), var_890, (rsi_1 * 0xc).d)
        else
            *(arg1 + 0x54) = 0
    
    int64_t r12_1 = var_858
    
    if (arg1 + 0x58 != &var_858)
        int64_t rsi_2 = sx.q(var_850_1)
        int32_t r8_4 = *(arg1 + 0x64)
        *(arg1 + 0x60) = rsi_2.d
        
        if (rsi_2.d != 0 || r8_4 != 0)
            sub_1407c3650(arg1 + 0x58, rsi_2.d, r8_4)
            memcpy(*(arg1 + 0x58), r12_1, (rsi_2 * 0xc).d)
        else
            *(arg1 + 0x64) = rsi_2.d
    
    int64_t rsi_3 = var_878
    rbx_3 = arg1 + 0x28
    
    if (rbx_3 != &var_878)
        int64_t r15_1 = sx.q(var_870_1)
        int32_t r8_7 = *(rbx_3 + 0xc)
        *(rbx_3 + 8) = r15_1.d
        
        if (r15_1.d != 0 || r8_7 != 0)
            sub_1407c35c0(rbx_3, r15_1.d, r8_7)
            memcpy(*rbx_3, rsi_3, (r15_1 << 6).d)
        else
            *(rbx_3 + 0xc) = r15_1.d
    
    if (rsi_3 != 0)
        zmm1 = sub_140a74f90(rsi_3)
    
    if (r12_1 != 0)
        zmm1 = sub_140a74f90(r12_1)
    
    if (var_890 != 0)
        zmm1 = sub_140a74f90(var_890)

char rax_11 = arg2[5].b

if ((rax_11 & 1) == 0)
    sub_142139fc0(arg2, arg1 + 0x68, zmm1)
    sub_14213ec10(arg1 + 0x38, arg2, 0, zmm1)
else
    int32_t i = 0
    
    if (*(arg1 + 0x30) s> 0)
        int64_t rcx_20 = 0
        
        do
            int64_t rax_10 = *rbx_3
            rcx_20 += 0x40
            i += 1
            *(rcx_20 + rax_10 - 9) &= 0x1f
        while (i s< *(arg1 + 0x30))
        
        rax_11 = arg2[5].b
    
    if ((rax_11 & 1) == 0 || arg2[8].d s>= 0x1d9)
        sub_142139fc0(arg2, arg1 + 0x68, zmm1)
        sub_14213ec10(arg1 + 0x38, arg2, 0, zmm1)
    else
        int64_t rax_12 = *arg2
        var_890 = 0
        int32_t var_888_2 = 0
        var_880 = arg1
        var_878 = 0
        int32_t var_870_2 = 0
        void* var_868_2 = arg1
        (*(rax_12 + 0x130))(arg2, &var_880)
        sub_142139fc0(arg2, &var_890, zmm1)
        sub_14213ec10(&var_878, arg2, 0, zmm1)
        
        if (arg1 + 0x68 != &var_890)
            int64_t rsi_4 = sx.q(var_888_2)
            int64_t r15_2 = var_890
            int32_t r8_10 = *(arg1 + 0x74)
            *(arg1 + 0x70) = rsi_4.d
            
            if (rsi_4.d != 0 || r8_10 != 0)
                sub_140808ed0(arg1 + 0x68, rsi_4.d, r8_10)
                memcpy(*(arg1 + 0x68), r15_2, (rsi_4 * 0x50).d)
            else
                *(arg1 + 0x74) = 0
        
        int64_t r15_3 = var_878
        
        if (arg1 + 0x38 != &var_878)
            int64_t rsi_5 = sx.q(var_870_2)
            int32_t r8_13 = *(arg1 + 0x44)
            *(arg1 + 0x40) = rsi_5.d
            
            if (rsi_5.d != 0 || r8_13 != 0)
                sub_140808f70(arg1 + 0x38, rsi_5.d, r8_13)
                memcpy(*(arg1 + 0x38), r15_3, (rsi_5 * 0x18).d)
            else
                *(arg1 + 0x44) = 0
        
        if (r15_3 != 0)
            zmm1 = sub_140a74f90(r15_3)
        
        int64_t rcx_32 = var_890
        
        if (rcx_32 != 0)
            zmm1 = sub_140a74f90(rcx_32)

int32_t var_898

if ((arg2[5].b & 1) == 0 || arg2[8].d s>= 0x14a)
    int64_t* rcx_48 = arg2[1]
    int32_t* r8_18 = *rcx_48
    
    if (&r8_18[1] u<= rcx_48[1])
        *(arg1 + 0x234) = *r8_18
        int64_t* rax_34 = arg2[1]
        *rax_34 += 4
    else if ((*(arg2 + 0x29) & 0x20) != 0)
        sub_140b54070(arg2, arg1 + 0x234, zmm1)
    else
        (*(*arg2 + 0x150))(arg2, arg1 + 0x234, 4)
else
    int64_t* rcx_35 = arg2[1]
    int32_t* r8_16 = *rcx_35
    
    if (&r8_16[1] u<= rcx_35[1])
        *(arg1 + 0x234) = *r8_16
        int64_t* rax_15 = arg2[1]
        *rax_15 += 4
    else if ((*(arg2 + 0x29) & 0x20) != 0)
        sub_140b54070(arg2, arg1 + 0x234, zmm1)
    else
        (*(*arg2 + 0x150))(arg2, arg1 + 0x234, 4)
    
    int64_t* rcx_37 = arg2[1]
    int32_t* rdx_28 = *rcx_37
    
    if (&rdx_28[1] u> rcx_37[1])
        int32_t* rdx_29 = &var_898
        
        if ((*(arg2 + 0x29) & 0x20) != 0)
            sub_140b54070(arg2, rdx_29, zmm1)
        else
            (*(*arg2 + 0x150))(arg2, rdx_29, 4)
    else
        var_898 = *rdx_28
        *rcx_37 += 4
    
    int64_t var_828_1 = 0
    int64_t var_820 = 0
    int64_t var_808_1 = 0
    int64_t var_800_1 = 0
    int64_t var_7e8_1 = 0
    int64_t var_7e0_1 = 0
    int64_t var_7c8_1 = 0
    int64_t var_7c0_1 = 0
    int64_t var_7a8_1 = 0
    int64_t var_7a0_1 = 0
    int64_t var_788_1 = 0
    int64_t var_780_1 = 0
    int64_t var_768_1 = 0
    int64_t var_760_1 = 0
    int64_t var_748_1 = 0
    int64_t var_740_1 = 0
    int64_t var_728_1 = 0
    int64_t var_720_1 = 0
    int64_t var_708_1 = 0
    int64_t var_700_1 = 0
    int64_t var_6e8_1 = 0
    int64_t var_6e0_1 = 0
    int64_t var_6c8_1 = 0
    int64_t var_6c0_1 = 0
    int64_t var_6a8_1 = 0
    int64_t var_6a0_1 = 0
    int64_t var_688_1 = 0
    int64_t var_680_1 = 0
    int64_t var_668_1 = 0
    int64_t var_660_1 = 0
    int64_t var_648_1 = 0
    int64_t var_640_1 = 0
    int64_t var_628_1 = 0
    int64_t var_620_1 = 0
    int64_t var_608_1 = 0
    int64_t var_600_1 = 0
    int64_t var_5e8_1 = 0
    int64_t var_5e0_1 = 0
    int64_t var_5c8_1 = 0
    int64_t var_5c0_1 = 0
    int64_t var_5a8_1 = 0
    int64_t var_5a0_1 = 0
    int64_t var_588_1 = 0
    int64_t var_580_1 = 0
    int64_t var_568_1 = 0
    int64_t var_560_1 = 0
    int64_t var_548_1 = 0
    int64_t var_540_1 = 0
    int64_t var_528_1 = 0
    int64_t var_520_1 = 0
    int64_t var_508_1 = 0
    int64_t var_500_1 = 0
    int64_t var_4e8_1 = 0
    int64_t var_4e0_1 = 0
    int64_t var_4c8_1 = 0
    int64_t var_4c0_1 = 0
    int64_t var_4a8_1 = 0
    int64_t var_4a0_1 = 0
    int64_t var_488_1 = 0
    int64_t var_480_1 = 0
    int64_t var_468_1 = 0
    int64_t var_460_1 = 0
    int64_t var_448_1 = 0
    int64_t var_440_1 = 0
    int64_t var_428_1 = 0
    int64_t var_420_1 = 0
    int64_t var_408_1 = 0
    int64_t var_400_1 = 0
    int64_t var_3e8_1 = 0
    int64_t var_3e0_1 = 0
    int64_t var_3c8_1 = 0
    int64_t var_3c0_1 = 0
    int64_t var_3a8_1 = 0
    int64_t var_3a0_1 = 0
    int64_t var_388_1 = 0
    int64_t var_380_1 = 0
    int64_t var_368_1 = 0
    int64_t var_360_1 = 0
    int64_t var_348_1 = 0
    int64_t var_340_1 = 0
    int64_t var_328_1 = 0
    int32_t r15_4 = 0
    int64_t var_320_1 = 0
    int64_t var_308_1 = 0
    int64_t var_300_1 = 0
    int64_t var_2e8_1 = 0
    int64_t var_2e0_1 = 0
    int64_t var_2c8_1 = 0
    int64_t var_2c0_1 = 0
    int64_t var_2a8_1 = 0
    int64_t var_2a0_1 = 0
    int64_t var_288_1 = 0
    int64_t var_280_1 = 0
    int64_t var_268_1 = 0
    int64_t var_260_1 = 0
    int64_t var_248_1 = 0
    int64_t var_240_1 = 0
    int64_t var_228_1 = 0
    int64_t var_220_1 = 0
    int64_t var_208_1 = 0
    int64_t var_200_1 = 0
    int64_t var_1e8_1 = 0
    int64_t var_1e0_1 = 0
    int64_t var_1c8_1 = 0
    int64_t var_1c0_1 = 0
    int64_t var_1a8_1 = 0
    int64_t var_1a0_1 = 0
    int64_t var_188_1 = 0
    int64_t var_180_1 = 0
    int64_t var_168_1 = 0
    int64_t var_160_1 = 0
    int64_t var_148_1 = 0
    int64_t var_140_1 = 0
    int64_t var_128_1 = 0
    int64_t var_120_1 = 0
    int64_t var_108_1 = 0
    int64_t var_100_1 = 0
    int64_t var_e8_1 = 0
    int64_t var_e0_1 = 0
    int64_t var_c8_1 = 0
    int64_t var_c0_1 = 0
    int64_t var_a8_1 = 0
    int64_t var_a0_1 = 0
    int64_t var_88_1 = 0
    int64_t var_80_1 = 0
    int64_t var_68_1 = 0
    int64_t var_60_1 = 0
    int64_t var_48_1 = 0
    int64_t var_40_1 = 0
    
    if (var_898 s> 0)
        int64_t* rsi_6 = &var_820
        
        do
            int64_t* rax_21 = (*(*arg2 + 0x130))(arg2, &rsi_6[-3])
            int64_t* rdx_31 = rax_21[1]
            int64_t* rax_22 = *rdx_31
            
            if (&rax_22[1] u<= rdx_31[1])
                rsi_6[-1] = *rax_22
                int64_t* rcx_42 = rax_21[1]
                *rcx_42 += 8
            else if ((*(rax_21 + 0x29) & 0x20) != 0)
                sub_140b540d0(rax_21, &rsi_6[-1], zmm1)
            else
                (*(*rax_21 + 0x150))(rax_21, &rsi_6[-1], 8)
            
            int64_t* rcx_44 = rax_21[1]
            int64_t* rdx_33 = *rcx_44
            
            if (&rdx_33[1] u<= rcx_44[1])
                *rsi_6 = *rdx_33
                int64_t* rax_26 = rax_21[1]
                *rax_26 += 8
            else if ((*(rax_21 + 0x29) & 0x20) != 0)
                sub_140b540d0(rax_21, rsi_6, zmm1)
            else
                (*(*rax_21 + 0x150))(rax_21, rsi_6, 8)
            
            int64_t* rcx_46 = rax_21[1]
            int32_t* r8_17 = *rcx_46
            
            if (&r8_17[1] u<= rcx_46[1])
                rsi_6[-2].d = *r8_17
                int64_t* rax_30 = rax_21[1]
                *rax_30 += 4
            else if ((*(rax_21 + 0x29) & 0x20) != 0)
                sub_140b54070(rax_21, &rsi_6[-2], zmm1)
            else
                (*(*rax_21 + 0x150))(rax_21, &rsi_6[-2], 4)
            
            r15_4 += 1
            rsi_6 = &rsi_6[4]
        while (r15_4 s< var_898)

uint8_t rcx_50 = 1

if (arg2[8].d s>= 0x1ba)
    rcx_50 = not.b(*(arg2 + 0x2b) u>> 1) & 1

int64_t var_860

if ((arg2[5].b & 3) != 0 && rcx_50 != 0)
    int64_t rax_38 = *arg2
    var_860 = 0
    (*(rax_38 + 0x130))(arg2, &var_860)
    var_890 = 0
    int64_t var_888_3 = 0
    sub_14090b5d0(&var_890, arg2, 0, zmm1)
    var_858 = 0
    int64_t var_850_2 = 0
    sub_14213ea20(&var_858, arg2, 0, zmm1)
    int64_t rcx_54 = var_858
    
    if (rcx_54 != 0)
        zmm1 = sub_140a74f90(rcx_54)
    
    int64_t rcx_55 = var_890
    
    if (rcx_55 != 0)
        zmm1 = sub_140a74f90(rcx_55)

int64_t* rcx_56 = arg2[1]
int32_t* rdx_40 = *rcx_56

if (&rdx_40[1] u> rcx_56[1])
    int32_t rax_41
    rax_41.b = *(arg1 + 0x230) != 0
    var_898 = rax_41
    (*(*arg2 + 0x150))(arg2, &var_898, 4)
    *(arg1 + 0x230) = var_898 != 0
else
    void* rax_39
    rax_39.b = *rdx_40 != 0
    *(arg1 + 0x230) = rax_39.b
    int64_t* rax_40 = arg2[1]
    *rax_40 += 4

int64_t* rcx_58 = arg2[1]
int32_t* rdx_42 = *rcx_58

if (&rdx_42[1] u> rcx_58[1])
    int32_t rax_46
    rax_46.b = *(arg1 + 0x231) != 0
    var_860.d = rax_46
    (*(*arg2 + 0x150))(arg2, &var_860, 4)
    *(arg1 + 0x231) = var_860.d != 0
else
    void* rax_44
    rax_44.b = *rdx_42 != 0
    *(arg1 + 0x231) = rax_44.b
    int64_t* rax_45 = arg2[1]
    *rax_45 += 4

if ((arg2[5].b & 1) != 0 && arg2[8].d s< 0x14a)
    var_890 = 0
    int64_t var_888_4 = 0
    sub_14090b5d0(&var_890, arg2, 0, zmm1)
    int64_t rcx_61 = var_890
    
    if (rcx_61 != 0)
        zmm1 = sub_140a74f90(rcx_61)

int64_t* rcx_62 = arg2[1]
int32_t* r8_19 = *rcx_62

if (&r8_19[1] u<= rcx_62[1])
    *(arg1 + 0x21c) = *r8_19
    int64_t* rax_51 = arg2[1]
    *rax_51 += 4
else if ((*(arg2 + 0x29) & 0x20) != 0)
    sub_140b54070(arg2, arg1 + 0x21c, zmm1)
else
    (*(*arg2 + 0x150))(arg2, arg1 + 0x21c, 4)

char var_893

if ((var_894 & 1) == 0 || (var_893 & 1) == 0)
    zmm1 = sub_14213b110(arg2, arg1 + 0xd8, zmm1)

sub_1409ac860(arg2, arg1 + 0x220, zmm1)
int64_t* result = sub_14213a6d0(arg2, arg1 + 0x78, zmm1)
__security_check_cookie(rax_1 ^ &var_8b8)
return result
