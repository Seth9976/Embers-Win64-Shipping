// 函数: sub_1425ecb70
// 地址: 0x1425ecb70
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_338
int64_t rax_1 = __security_cookie ^ &var_338
void var_258
int64_t* rax_2
int128_t zmm6
rax_2, zmm6 = sub_140b58170(&var_258, "Renderer", 1)
int64_t rbx = *rax_2
j_sub_140b3db50()
int64_t* rax_3 = sub_140b3da90(&data_143de7d78, rbx)

if (arg3 != 0)
    int64_t rdx_1 = *arg3
    (*(rdx_1 + 8))(arg3, rdx_1)

void* rsi = *arg2
int64_t* r14 = *arg1
int64_t result

if (*(r14 + 0x3c) != *(rsi + 0x3c) || r14[0xc].d != *(rsi + 0x60) || *(r14 + 0x64) != *(rsi + 0x64))
    int32_t var_b0_1 = 0
    int128_t var_98_1 = data_142d3f5a0
    int64_t var_88
    __builtin_memset(&var_88, 0, 0x19)
    int64_t var_180_1 = 0
    int64_t var_c8
    __builtin_memset(&var_c8, 0, 0x11)
    int32_t var_b4_1 = 0
    int32_t var_ac
    __builtin_memset(&var_ac, 0xff, 0x14)
    void* var_188 = rsi
    int32_t var_178_1 = 0xffffffff
    int16_t var_174_1 = 0x500
    int128_t var_48_1 = zmm6
    bool var_6f_1 = *(rsi + 0x38) u> 1
    void var_170
    memset(&var_170, 0, 0xa8)
    int64_t rbx_8 = (data_143f02bc8 + 1) & 0xfffffffffffffffe
    int64_t rax_23 = rbx_8 + 0x1e
    
    if (rax_23 u> data_143f02bd0)
        sub_140b0e3d0(&data_143f02bc8, 0x20)
        rbx_8 = (data_143f02bc8 + 1) & 0xfffffffffffffffe
        rax_23 = rbx_8 + 0x1e
    
    wchar16 const* const rcx_13 = u"CopyBackbuffer"
    data_143f02bc8 = rax_23
    wchar16 const i
    
    do
        i = *rcx_13
        *(rcx_13 + rbx_8 - u"CopyBackbuffer") = i
        rcx_13 = &rcx_13[1]
    while (i != 0)
    void*** rcx_16 = (data_143f02bc8 + 7) & 0xfffffffffffffff8
    void* rax_24 = &rcx_16[0x27]
    
    if (rax_24 u> data_143f02bd0)
        sub_140b0e3d0(&data_143f02bc8, 0x140)
        rcx_16 = (data_143f02bc8 + 7) & 0xfffffffffffffff8
        rax_24 = &rcx_16[0x27]
    
    data_143f02bac += 1
    data_143f02bc8 = rax_24
    *data_143f02ba0 = rcx_16
    data_143f02ba0 = &rcx_16[1]
    sub_1405d11b0(rcx_16, &var_188, rbx_8)
    data_143f02d5c = 1
    sub_1405d19b0(&data_143f02b98, &var_188)
    int64_t var_78
    data_143f02d10 = var_78:7.b
    data_143f02d11 = 0
    data_143f02d5c = 1
    void* rcx_19 = *arg2
    zmm6.d = float.s(zx.q(*(rcx_19 + 0x64)))
    void*** rcx_22 = (data_143f02bc8 + 7) & 0xfffffffffffffff8
    int128_t zmm7
    zmm7.d = float.s(zx.q(*(rcx_19 + 0x60)))
    void* rax_30 = &rcx_22[5]
    
    if (rax_30 u> data_143f02bd0)
        zmm6 = sub_140b0e3d0(&data_143f02bc8, 0x30)
        rcx_22 = (data_143f02bc8 + 7) & 0xfffffffffffffff8
        rax_30 = &rcx_22[5]
    
    data_143f02bac += 1
    data_143f02bc8 = rax_30
    int32_t rsi_1 = 0
    *data_143f02ba0 = rcx_22
    data_143f02ba0 = &rcx_22[1]
    rcx_22[1] = 0
    *(rcx_22 + 0x1c) = zmm7.d
    rcx_22[4].d = zmm6.d
    *rcx_22 = &data_142d54998
    rcx_22[2] = 0
    rcx_22[3].d = 0
    *(rcx_22 + 0x24) = 0x3f800000
    uint64_t rax_33 = zx.q(data_143f02c38)
    int64_t var_1d8
    __builtin_memset(&var_1d8, 0, 0x2c)
    int64_t var_1a8_1 = 0
    int32_t var_1a0_1 = 0
    int16_t var_19c_1 = 0
    char var_19a_1 = 0
    int16_t var_198_1 = 0
    int32_t var_1dc_1 = rax_33.d
    int128_t var_238
    __builtin_memset(&var_238, 0, 0x30)
    int128_t var_1f0_1 = zx.o(0)
    
    if (rax_33.d != 0)
        do
            uint64_t rbx_11 = zx.q(rsi_1)
            uint64_t r14_1 = rbx_11 * 3
            int64_t* rcx_25 = *((r14_1 << 3) + 0x143f02c40)
            
            if (rcx_25 == 0)
                *(&var_1d8 + rbx_11) = 0
                rax_33.b = 0
            else
                *(&var_1d8 + rbx_11) = *(rcx_25 + 0x3c)
                int64_t var_1d0
                *(&var_1d0 + (rbx_11 << 2)) = rcx_25[8].d
                int64_t rax_37 = (*(*rcx_25 + 0x10))()
                
                if (rax_37 != 0)
                    var_19c_1:1.b = 1
                
                if (rax_37 == 0 || *(rax_37 + 0x68) u<= 1)
                    var_19c_1:1.b = 0
                
                rax_33 = zx.q(*(&var_1d8 + rbx_11))
            
            if (rax_33.b != 0)
                var_1a0_1.w = *(*((r14_1 << 3) + 0x143f02c40) + 0x38)
            
            rsi_1 += 1
        while (rsi_1 u< var_1dc_1)
    
    int64_t* rcx_27 = data_143f02d00
    int32_t var_1b0_1
    
    if (rcx_27 == 0)
        var_1b0_1 = 0
    else
        var_1b0_1 = *(rcx_27 + 0x3c)
        var_1b0_1 = rcx_27[8].d
        void* rax_41 = (*(*rcx_27 + 0x10))()
        
        if (rax_41 == 0 || *(rax_41 + 0x68) u<= 1)
            var_19c_1:1.b = 0
        else
            var_19c_1:1.b = 1
    
    var_1a8_1.b = data_143f02d08
    var_1a8_1:1.b = data_143f02d09
    var_1a8_1:2.b = data_143f02d0a
    var_1a8_1:3.b = data_143f02d0b
    var_1a8_1:4.d = data_143f02d0c
    
    if (var_1b0_1 != 0)
        var_1a0_1.w = *(data_143f02d00 + 0x38)
    
    var_1a0_1:2.b = data_143f02d10
    var_1a0_1:3.b = data_143f02d11
    char var_19a_2 = data_143f02d12
    int64_t var_208_1 = data_14395da00
    int64_t var_200_1 = data_14395da18
    int64_t var_1f8_1 = data_14395d9e8
    int64_t* rax_55 = std::_Get_future_error_what((*U"1111")[sx.q(data_1439c7a08)])
    void* var_278
    sub_1419a2ec0(rax_55, &var_278, &data_143f55f90, 0)
    void* var_268
    sub_1419a2ec0(rax_55, &var_268, &data_143f55b50, 0)
    void* rcx_32 = var_278
    var_238.q = data_1439c9210
    int64_t rax_57 = 0
    
    if (rcx_32 != 0)
        int64_t rdx_8 = sx.q(*(rcx_32 + 0x10c))
        void* var_270
        int64_t* rbx_13 = *(var_270 + 0x10)
        int64_t rax_59 = rbx_13[3]
        
        if (*(rax_59 + (rdx_8 << 3)) == 0)
            sub_1419ccf30(rbx_13, rdx_8.d)
            rax_59 = rbx_13[3]
        
        rax_57 = *(rax_59 + (rdx_8 << 3))
    
    void* rbx_14 = var_268
    var_238:8.q = rax_57
    int64_t rax_60 = 0
    
    if (rbx_14 != 0)
        int64_t rdx_9 = sx.q(*(rbx_14 + 0x10c))
        void* var_260
        int64_t* rsi_3 = *(var_260 + 0x10)
        int64_t rax_62 = rsi_3[3]
        
        if (*(rax_62 + (rdx_9 << 3)) == 0)
            sub_1419ccf30(rsi_3, rdx_9.d)
            rax_62 = rsi_3[3]
        
        rax_60 = *(rax_62 + (rdx_9 << 3))
    
    int128_t var_218
    var_218.q = rax_60
    int32_t var_1e0_1 = 0
    sub_1419870b0(&data_143f02b98, &var_238, 2)
    void* r9_1 = *arg1
    void* rcx_35 = *arg2
    int64_t* r8_1
    
    if (*(rcx_35 + 0x60) == *(r9_1 + 0x60))
        r8_1 = data_14395fa10
    
    if (*(rcx_35 + 0x60) != *(r9_1 + 0x60) || *(rcx_35 + 0x64) != *(r9_1 + 0x64))
        r8_1 = data_14395f4d0
    
    sub_141298600(rbx_14, &data_143f02b98, r8_1, r9_1)
    void* rax_65 = *arg2
    int32_t var_2d0_1 = 0
    int128_t var_248 = var_278.o
    uint64_t rdx_11 = zx.q(*(rax_65 + 0x60))
    uint64_t rcx_37 = zx.q(*(rax_65 + 0x64))
    int64_t r8_2 = *rax_3
    int32_t var_2c0_1 = rdx_11.d
    int32_t var_2bc_1 = rcx_37.d
    int32_t var_2c8_1 = 1
    int32_t var_2c4_1 = 1
    (*(r8_2 + 0xd0))(rax_3, &data_143f02b98, r8_2, (zx.o(0)).d, float.s(rdx_11), float.s(rcx_37), 
        0, 0, 0x3f800000, 0x3f800000, var_2c0_1.q, var_2c8_1.q, &var_248, var_2d0_1, var_2c8_1, 
        var_2c0_1)
    void*** rcx_41 = (data_143f02bc8 + 7) & 0xfffffffffffffff8
    void* rax_68 = &rcx_41[2]
    
    if (rax_68 u> data_143f02bd0)
        sub_140b0e3d0(&data_143f02bc8, 0x18)
        rcx_41 = (data_143f02bc8 + 7) & 0xfffffffffffffff8
        rax_68 = &rcx_41[2]
    
    data_143f02bac += 1
    data_143f02bc8 = rax_68
    *data_143f02ba0 = rcx_41
    data_143f02ba0 = &rcx_41[1]
    rcx_41[1] = 0
    *rcx_41 = &data_142d549b8
    data_143f02d5c = 0
    data_143f02d10.w = 0
    
    if (arg3 != 0)
        void*** rcx_46 = (data_143f02bc8 + 7) & 0xfffffffffffffff8
        void* rax_71 = &rcx_46[3]
        
        if (rax_71 u> data_143f02bd0)
            sub_140b0e3d0(&data_143f02bc8, 0x20)
            rcx_46 = (data_143f02bc8 + 7) & 0xfffffffffffffff8
            rax_71 = &rcx_46[3]
        
        data_143f02bac += 1
        data_143f02bc8 = rax_71
        *data_143f02ba0 = rcx_46
        data_143f02ba0 = &rcx_46[1]
        rcx_46[1] = 0
        *rcx_46 = &data_142f7e220
        rcx_46[2] = arg3
        arg3[3].d += 1
    
    int64_t var_80
    result = sub_1405d1550(&var_80)
else
    void*** rbx_3 = (data_143f02bc8 + 7) & 0xfffffffffffffff8
    int128_t var_2b8_1 = data_142d57d10
    int128_t zmm0 = data_142d57920
    void* rax_5 = &rbx_3[0xa]
    int128_t var_2a8_1 = data_142d3f800
    
    if (rax_5 u> data_143f02bd0)
        sub_140b0e3d0(&data_143f02bc8, 0x58)
        rbx_3 = (data_143f02bc8 + 7) & 0xfffffffffffffff8
        rax_5 = &rbx_3[0xa]
    
    data_143f02bac += 1
    data_143f02bc8 = rax_5
    *data_143f02ba0 = rbx_3
    data_143f02ba0 = &rbx_3[1]
    rbx_3[1] = 0
    *rbx_3 = &data_142d56628
    rbx_3[2].d = var_2b8_1.d
    __builtin_memset(rbx_3 + 0x14, 0xff, 0x20)
    *(rbx_3 + 0x34) = zmm0:4.d
    rbx_3[7].d = zmm0:8.d
    *(rbx_3 + 0x3c) = zmm0:0xc.d
    rbx_3[8] = r14
    rbx_3[9] = rsi
    
    if ((*(*r14 + 8))(r14) == 0)
        int64_t* rcx_5 = rbx_3[8]
        
        if ((*(*rcx_5 + 0x18))(rcx_5) == 0)
            int64_t* rcx_6 = rbx_3[8]
            
            if ((*(*rcx_6 + 0x20))(rcx_6) == 0)
                int64_t* rcx_7 = rbx_3[8]
                (*(*rcx_7 + 0x10))(rcx_7)
    
    int64_t* rcx_8 = rbx_3[9]
    result = (*(*rcx_8 + 8))(rcx_8)
    
    if (result == 0)
        int64_t* rcx_9 = rbx_3[9]
        result = (*(*rcx_9 + 0x18))(rcx_9)
        
        if (result == 0)
            int64_t* rcx_10 = rbx_3[9]
            result = (*(*rcx_10 + 0x20))(rcx_10)
            
            if (result == 0)
                int64_t* rcx_11 = rbx_3[9]
                result = (*(*rcx_11 + 0x10))(rcx_11)

__security_check_cookie(rax_1 ^ &var_338)
return result
