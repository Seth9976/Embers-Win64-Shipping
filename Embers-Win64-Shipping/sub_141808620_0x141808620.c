// 函数: sub_141808620
// 地址: 0x141808620
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_3b8
int64_t rax_1 = __security_cookie ^ &var_3b8
int32_t rsi = 0

if (arg1[0x16] == 0)
    void*** rax_2 = j_sub_140a82f30(0x18)
    
    if (rax_2 == 0)
        rax_2 = nullptr
    else
        *rax_2 = &data_142fe1538
        rax_2[1] = 0
        rax_2[2] = 0
    
    int64_t* rcx = arg1[0x16]
    arg1[0x16] = rax_2
    
    if (rcx != 0)
        (**rcx)(rcx, 1)
    
    arg1[0x17].b = 1

*(arg1 + 0x8c)
*(arg1 + 0x8c) = 0
int64_t* rcx_1 = arg1[0xc]
arg1[0x11].b = 0
*(arg1 + 0x94) = 0
sub_142c524d0(rcx_1)
bool cond:0 = arg1[0x10].d s> 1
arg1[0xc] = 0

if (not(cond:0) && arg1[0xf] != &data_142d85f90)
    int32_t rdx_1 = 0
    arg1[0x10].d = 0
    
    if (*(arg1 + 0x84) != 4)
        sub_1405947f0(&arg1[0xf], 4)
        rdx_1 = arg1[0x10].d
    
    arg1[0x10].d = rdx_1 + 4
    
    if (rdx_1 + 4 s> *(arg1 + 0x84))
        sub_140594770(&arg1[0xf])
    
    *arg1[0xf] = 0x5400450047

uint64_t result = data_143ef9cf8
int512_t entry_zmm2

if (result == 0)
    void var_2f8
    int64_t rbx_1 = *sub_140b58170(&var_2f8, "HTTP", (result + 1).d)
    j_sub_140b3db50()
    entry_zmm2 = j_sub_140b407e0(&data_143de7d78, rbx_1)
    result = data_143ef9cf8

if (*(result + 0x44) == 0 || *(arg1 + 0xbc) == 1 || arg1[0xe].d s<= 1)
    result.b = 0
else
    int16_t* rdx_3
    
    if (arg1[0xe].d == 0)
        rdx_3 = &data_142d40450
    else
        rdx_3 = arg1[0xd]
    
    void var_2a8
    sub_1408f2b40(&var_2a8, rdx_3)
    int64_t var_220
    int512_t zmm2 = sub_142c521c0(arg1[0xb], 0x2712, var_220, entry_zmm2)
    int64_t var_228
    
    if (var_228 != 0)
        sub_140a74f90(var_228)
    
    int32_t rax_8 = data_1439c6620
    
    if (rax_8 s> 1)
        int16_t* const rdx_4 = &data_142d40450
        
        if (rax_8 != 0)
            rdx_4 = data_1439c6618
        
        void var_208
        sub_1408f2b40(&var_208, rdx_4)
        int64_t var_180
        zmm2 = sub_142c521c0(arg1[0xb], 0x274e, var_180, zmm2)
        int64_t var_188
        
        if (var_188 != 0)
            sub_140a74f90(var_188)
    
    int16_t* const rcx_11
    
    if (arg1[0x10].d == 0)
        rcx_11 = &data_142d40450
    else
        rcx_11 = arg1[0xf]
    
    int32_t rax_9 = sub_140a54510(rcx_11, u"POST")
    int32_t rdx_6
    char const* const r8_5
    int512_t zmm2_1
    int512_t zmm2_3
    
    if (rax_9 != 0)
        int16_t* const rcx_16
        
        if (arg1[0x10].d == 0)
            rcx_16 = &data_142d40450
        else
            rcx_16 = arg1[0xf]
        
        int32_t rax_12 = sub_140a54510(rcx_16, &data_142d85fa8)
        int32_t rax_13
        
        if (rax_12 != 0)
            int16_t* const rcx_17
            
            if (arg1[0x10].d == 0)
                rcx_17 = &data_142d40450
            else
                rcx_17 = arg1[0xf]
            
            rax_13 = sub_140a54510(rcx_17, u"PATCH")
        
        if (rax_12 == 0 || rax_13 == 0)
            int512_t zmm2_4 = sub_142c521c0(arg1[0xb], 0x2e, 1, zmm2)
            int64_t* rcx_25 = arg1[0x16]
            int32_t rax_18 = (*(*rcx_25 + 8))(rcx_25)
            zmm2_3 = sub_142c521c0(arg1[0xb], 0xe, zx.q(rax_18), zmm2_4)
            int16_t* const rcx_27
            
            if (arg1[0x10].d == 0)
                rcx_27 = &data_142d40450
            else
                rcx_27 = arg1[0xf]
            
            if (sub_140a54510(rcx_27, &data_142d85fa8) != 0)
                int16_t* const rdx_10
                
                if (arg1[0x10].d == 0)
                    rdx_10 = &data_142d40450
                else
                    rdx_10 = arg1[0xf]
                
                void var_168
                void* rax_20 = sub_140685ed0(&var_168, rdx_10)
                zmm2_3 = sub_142c521c0(arg1[0xb], 0x2734, *(rax_20 + 0x88), zmm2_3)
                int64_t var_e8
                
                if (var_e8 != 0)
                    sub_140a74f90(var_e8)
            
            goto label_141808a69
        
        int16_t* const rcx_18
        
        if (arg1[0x10].d == 0)
            rcx_18 = &data_142d40450
        else
            rcx_18 = arg1[0xf]
        
        int32_t rax_14 = sub_140a54510(rcx_18, &data_142d85f90)
        
        if (rax_14 != 0)
            int16_t* const rcx_20
            
            if (arg1[0x10].d == 0)
                rcx_20 = &data_142d40450
            else
                rcx_20 = arg1[0xf]
            
            int32_t rax_15 = sub_140a54510(rcx_20, u"HEAD")
            
            if (rax_15 != 0)
                int16_t* const rcx_22
                
                if (arg1[0x10].d == 0)
                    rcx_22 = &data_142d40450
                else
                    rcx_22 = arg1[0xf]
                
                int32_t rax_16 = sub_140a54510(rcx_22, u"DELETE")
                
                if (rax_16 == 0)
                    zmm2_1 = sub_142c521c0(arg1[0xb], rax_16 + 0x2f, zx.q(rax_16 + 1), zmm2)
                    r8_5 = "DELETE"
                    rdx_6 = 0x2734
                    goto label_141808861
                
                int16_t* const r9_1
                
                if (arg1[0x10].d == 0)
                    r9_1 = &data_142d40450
                else
                    r9_1 = arg1[0xf]
                
                sub_140af98a0("Unknown", 0x31e, 
                    Unsupported verb '%s', can be perhaps added with CURLOPT_CUSTOMREQUEST", r9_1)
                sub_140afbb40()
            else
                zmm2 = sub_142c521c0(arg1[0xb], rax_15 + 0x2c, zx.q(rax_15 + 1), zmm2)
        else
            zmm2 = sub_142c521c0(arg1[0xb], rax_14 + 0x50, zx.q(rax_14 + 1), zmm2)
    else
        zmm2_1 = sub_142c521c0(arg1[0xb], rax_9 + 0x2f, zx.q(rax_9 + 1), zmm2)
        r8_5 = nullptr
        rdx_6 = 0x271f
    label_141808861:
        int512_t zmm2_2 = sub_142c521c0(arg1[0xb], rdx_6, r8_5, zmm2_1)
        int64_t* rcx_14 = arg1[0x16]
        int32_t rax_11 = (*(*rcx_14 + 8))(rcx_14)
        zmm2_3 = sub_142c521c0(arg1[0xb], 0x3c, zx.q(rax_11), zmm2_2)
    label_141808a69:
        *(arg1 + 0x11c) = 0
        arg1[0x24].d
        arg1[0x24].d = 0
        int512_t zmm2_5 = sub_142c521c0(arg1[0xb], 0x2719, arg1, zmm2_3)
        zmm2 = sub_142c521c0(arg1[0xb], 0x4e2c, sub_141809860, zmm2_5)
    int512_t zmm2_6 = sub_142c521c0(arg1[0xb], 0x272d, arg1, zmm2)
    int512_t zmm2_7 = sub_142c521c0(arg1[0xb], 0x4e6f, sub_141809810, zmm2_6)
    int512_t zmm2_8 = sub_142c521c0(arg1[0xb], 0x2711, arg1, zmm2_7)
    int512_t zmm2_9 = sub_142c521c0(arg1[0xb], 0x4e2b, sub_141809770, zmm2_8)
    
    if (data_1439c6612 != 0)
        zmm2_9 = sub_142c521c0(arg1[0xb], 0x2776, &data_1437020ab, zmm2_9)
    
    int64_t var_388 = 0
    int32_t var_380_1 = 0
    sub_1405947f0(&var_388, 0xb)
    int32_t rax_22 = var_380_1 + 0xb
    var_380_1 = rax_22
    
    if (rax_22 s> 0)
        sub_140594770(&var_388)
    
    UnDecorator::getReferenceType(var_388, u"User-Agent", 0x16)
    int64_t var_2e8
    void* rax_24 = (*(*arg1 + 0x10))(arg1, &var_2e8, &var_388)
    int64_t rcx_42 = var_2e8
    int32_t rbx_2 = *(rax_24 + 8)
    
    if (rcx_42 != 0)
        sub_140a74f90(rcx_42)
    
    int64_t rcx_43 = var_388
    
    if (rcx_43 != 0)
        sub_140a74f90(rcx_43)
    
    if (rbx_2 s<= 1)
        int64_t var_378 = 0
        int32_t var_370_1 = 0
        sub_1405947f0(&var_378, 0xb)
        int32_t rax_25 = var_370_1 + 0xb
        var_370_1 = rax_25
        
        if (rax_25 s> 0)
            sub_140594770(&var_378)
        
        UnDecorator::getReferenceType(var_378, u"User-Agent", 0x16)
        int64_t var_2d8
        (*(*arg1 + 0x78))(arg1, &var_378, sub_141803100(&var_2d8))
        int64_t rcx_49 = var_2d8
        
        if (rcx_49 != 0)
            sub_140a74f90(rcx_49)
        
        int64_t rcx_50 = var_378
        
        if (rcx_50 != 0)
            sub_140a74f90(rcx_50)
    
    int64_t var_368 = 0
    int32_t var_360_1 = 0
    sub_1405947f0(&var_368, 0xf)
    int32_t rax_27 = var_360_1 + 0xf
    var_360_1 = rax_27
    
    if (rax_27 s> 0)
        sub_140594770(&var_368)
    
    UnDecorator::getReferenceType(var_368, u"Content-Length", 0x1e)
    int64_t var_2c8
    void* rax_29 = (*(*arg1 + 0x10))(arg1, &var_2c8, &var_368)
    int64_t rcx_55 = var_2c8
    int32_t rbx_4 = *(rax_29 + 8)
    
    if (rcx_55 != 0)
        sub_140a74f90(rcx_55)
    
    int64_t rcx_56 = var_368
    
    if (rcx_56 != 0)
        sub_140a74f90(rcx_56)
    
    if (rbx_4 s<= 1)
        int64_t var_358 = 0
        int32_t var_350_1 = 0
        sub_1405947f0(&var_358, 0xf)
        int32_t rax_30 = var_350_1 + 0xf
        var_350_1 = rax_30
        
        if (rax_30 s> 0)
            sub_140594770(&var_358)
        
        UnDecorator::getReferenceType(var_358, u"Content-Length", 0x1e)
        int64_t* rcx_60 = arg1[0x16]
        int64_t var_308
        sub_140a2e390(&var_308, u"%d", zx.q((*(*rcx_60 + 8))(rcx_60)))
        (*(*arg1 + 0x78))(arg1, &var_358, &var_308)
        int64_t rcx_63 = var_308
        
        if (rcx_63 != 0)
            sub_140a74f90(rcx_63)
        
        int64_t rcx_64 = var_358
        
        if (rcx_64 != 0)
            sub_140a74f90(rcx_64)
    
    int64_t var_348 = 0
    int32_t var_340_1 = 0
    sub_1405947f0(&var_348, 7)
    int32_t rax_34 = var_340_1 + 7
    var_340_1 = rax_34
    
    if (rax_34 s> 0)
        sub_140594770(&var_348)
    
    UnDecorator::getReferenceType(var_348, u"Expect", 0xe)
    int64_t var_2b8
    void* rax_36 = (*(*arg1 + 0x10))(arg1, &var_2b8, &var_348)
    int64_t rcx_69 = var_2b8
    int32_t rbx_5 = *(rax_36 + 8)
    
    if (rcx_69 != 0)
        sub_140a74f90(rcx_69)
    
    int64_t rcx_70 = var_348
    
    if (rcx_70 != 0)
        sub_140a74f90(rcx_70)
    
    if (rbx_5 s<= 1)
        int64_t var_318 = 0
        int64_t var_310_1 = 0
        int64_t var_338 = 0
        int32_t var_330_1 = 0
        sub_1405947f0(&var_338, 7)
        int32_t rax_37 = var_330_1 + 7
        var_330_1 = rax_37
        
        if (rax_37 s> 0)
            sub_140594770(&var_338)
        
        UnDecorator::getReferenceType(var_338, u"Expect", 0xe)
        (*(*arg1 + 0x78))(arg1, &var_338, &var_318)
        int64_t rcx_75 = var_338
        
        if (rcx_75 != 0)
            sub_140a74f90(rcx_75)
        
        int64_t rcx_76 = var_318
        
        if (rcx_76 != 0)
            sub_140a74f90(rcx_76)
    
    int64_t* var_328
    (*(*arg1 + 0x18))(arg1, &var_328)
    int32_t i_4
    int64_t i_3 = sx.q(i_4)
    int64_t* rbx_6
    
    if (i_3 s<= 0)
        rbx_6 = arg1[0xc]
    else
        int64_t r14_1 = 0
        int64_t i
        
        do
            sub_140a23cf0(&var_328[sx.q(rsi) * 2], u"Authorization", 1, 0, 0xffffffff)
            int64_t* rdx_24 = var_328
            int16_t* const rdx_25
            
            if (*(rdx_24 + r14_1 + 8) == 0)
                rdx_25 = &data_142d40450
            else
                rdx_25 = *(rdx_24 + r14_1)
            
            void var_c8
            void* rax_40 = sub_140685ed0(&var_c8, rdx_25)
            rbx_6 = sub_142c52470(arg1[0xc], *(rax_40 + 0x88))
            int64_t var_48
            
            if (var_48 != 0)
                sub_140a74f90(var_48)
            
            if (rbx_6 == 0)
                rbx_6 = arg1[0xc]
            else
                arg1[0xc] = rbx_6
            
            rsi += 1
            r14_1 += 0x10
            i = i_3
            i_3 -= 1
        while (i != 1)
    
    if (rbx_6 != 0)
        zmm2_9 = sub_142c521c0(arg1[0xb], 0x2727, rbx_6, zmm2_9)
    
    void* rax_43 = data_143ef9cf8
    
    if (rax_43 == 0)
        void var_2f0
        int64_t rbx_7 = *sub_140b58170(&var_2f0, "HTTP", (rax_43 + 1).d)
        j_sub_140b3db50()
        zmm2_9 = j_sub_140b407e0(&data_143de7d78, rbx_7)
        rax_43 = data_143ef9cf8
    
    uint64_t r8_24 = zx.q(int.d(fconvert.t(*(rax_43 + 0x1c))))
    
    if (r8_24.d s>= 0)
        zmm2_9 = sub_142c521c0(arg1[0xb], 0x4e, r8_24, zmm2_9)
    
    if (data_1439c662c != 0 && arg1[0x17].b != 0)
        int512_t zmm2_10 = sub_142c521c0(arg1[0xb], 0x27b8, arg1, zmm2_9)
        zmm2_9 = sub_142c521c0(arg1[0xb], 0x4ec7, sub_141809830, zmm2_10)
    
    sub_142c521c0(arg1[0xb], 0x2774, data_143ef9d00, zmm2_9)
    int32_t i_2 = i_4
    int64_t* rbx_8 = var_328
    
    if (i_2 != 0)
        int32_t i_1
        
        do
            int64_t rcx_90 = *rbx_8
            
            if (rcx_90 != 0)
                sub_140a74f90(rcx_90)
            
            rbx_8 = &rbx_8[2]
            i_1 = i_2
            i_2 -= 1
        while (i_1 != 1)
        rbx_8 = var_328
    
    if (rbx_8 != 0)
        sub_140a74f90(rbx_8)
    
    result.b = 1

__security_check_cookie(rax_1 ^ &var_3b8)
return result
