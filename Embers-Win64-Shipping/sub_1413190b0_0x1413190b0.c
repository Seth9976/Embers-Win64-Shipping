// 函数: sub_1413190b0
// 地址: 0x1413190b0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_1e8
int64_t rax_1 = __security_cookie ^ &var_1e8
void* r13 = *(arg2 + 0x1080)
void* r14 = *(arg2 + 8)

if (r13 == 0)
    r13 = *(data_143f5b298 + 0x350)

int128_t zmm7 = *(arg2 + 0x1088)
int128_t zmm8 = *(arg2 + 0x108c)
int128_t zmm9 = *(arg2 + 0x107c)
int32_t var_188 = zmm7.d
int32_t var_184 = zmm8.d
int64_t r8

if (*(arg3 + 0x84) == 0)
    int32_t var_164_1 = 2
    r8 = 0.q
else
    r8 = 2

int16_t var_f0 = 0
int64_t rax_4 = *(arg3 + 0x68)
uint32_t var_128[0x4] = data_143f02308
int32_t rdx = (r8 + rax_4).d
int32_t var_10c = 0
int32_t rcx_1 = rax_4:4.d + (r8 u>> 0x20).d
int64_t var_198
var_198.d = rdx
var_198:4.d = rcx_1
int64_t var_160 = var_198
int32_t rax_6 = data_143f02318
int32_t var_108 = 1
int16_t var_100 = 1
int64_t var_fc = 1
wchar16 const* const var_e8 = u"UnknownTexture2D"
int32_t rax_8 = *(arg3 + 0x60) - *(arg3 + 0x58)
int32_t var_190 = rax_8
int32_t var_180 = rax_8
int32_t rax_10 = *(arg3 + 0x64) - *(arg3 + 0x5c)
int32_t var_104 = 0x10000
int32_t var_f4 = 0x10001
char var_e0 = 1
char var_de = 0
int64_t* rcx_2 = *(r14 + 0xbd8)
uint32_t zmm6[0x4] = *(r14 + 0xbf0)
var_198.d = rax_10

if (rcx_2 == 0)
label_141319409:
    sub_1419a0ce0(&data_1439c9260, arg1, &var_128, r14 + 0xbd8, u"FFTKernel", 1, 1, 0)
    void* rax_27 = *(r14 + 0xbd8)
    int64_t* rbx_1 = *(rax_27 + 0x18)
    
    if (rbx_1 != 0)
        rbx_1[1].d += 1
        var_198.d = rax_10
        var_190 = var_180
    
    int64_t* rcx_8 = *(r13 + 0x78) + 0x10
    char var_1b0_1
    var_1b0_1.q = rax_27 + 0x18
    char var_1b8_1
    var_1b8_1.q = arg3 + 0x68
    char var_1c0_1
    var_1c0_1.d = *(arg3 + 0x7c)
    int32_t zmm7_1
    int32_t zmm8_1
    int32_t zmm9_1
    zmm7_1, zmm8_1, zmm9_1 = sub_14131f400(arg1, arg2, rcx_8, &var_180, &var_188, var_1c0_1, 
        var_1b8_1, var_1b0_1, &var_160, *(arg3 + 0x85))
    int64_t rax_32 = *(rax_27 + 0x18)
    int64_t* rdi_5 = (*(arg1 + 0x30) + 7) & 0xfffffffffffffff8
    void* rcx_10 = &rdi_5[1]
    
    if (rcx_10 u> *(arg1 + 0x38))
        sub_140b0e3d0(arg1 + 0x30, 0x10)
        rdi_5 = (*(arg1 + 0x30) + 7) & 0xfffffffffffffff8
        rcx_10 = &rdi_5[1]
    
    *(arg1 + 0x30) = rcx_10
    *rdi_5 = rax_32
    void*** rcx_14 = (*(arg1 + 0x30) + 7) & 0xfffffffffffffff8
    void* rax_33 = &rcx_14[6]
    
    if (rax_33 u> *(arg1 + 0x38))
        sub_140b0e3d0(arg1 + 0x30, 0x38)
        rcx_14 = (*(arg1 + 0x30) + 7) & 0xfffffffffffffff8
        rax_33 = &rcx_14[6]
    
    *(arg1 + 0x30) = rax_33
    void**** rax_34 = *(arg1 + 8)
    *(arg1 + 0x14) += 1
    *rax_34 = rcx_14
    *(arg1 + 8) = &rcx_14[1]
    rcx_14[1] = 0
    *rcx_14 = &data_142da7798
    rcx_14[2].d = 1
    rcx_14[3] = rdi_5
    rcx_14[4].d = 2
    *(rcx_14 + 0x24) = 3
    rcx_14[5] = 0
    int64_t var_1c8_3 = *(arg3 + 0x68)
    sub_141325b00(arg1, arg2, rax_27 + 8, *(arg3 + 0x84))
    
    if (*(arg3 + 0x85) != 0)
        int32_t var_c8_1 = data_143f02318
        char var_1b0_2 = 0
        int64_t var_c0_1 = 1
        int32_t var_b8_1 = 1
        int16_t var_b0_1 = 1
        int64_t var_ac_1 = 1
        wchar16 const* const var_98_1 = u"UnknownTexture2D"
        char var_1b8_2 = 1
        char var_1c0_2 = 1
        wchar16 const* const var_1c8_4 = u"FFTKernelCenterWeight"
        int16_t var_a0_1 = 0
        int128_t var_d8 = data_143f02308
        int32_t var_c4_1 = 2
        int32_t var_b4_1 = 0x10000
        int32_t var_a4_1 = 0x10001
        int16_t var_90_1 = 1
        char var_8e_1 = 0
        sub_1419a0ce0(&data_1439c9260, arg1, &var_d8, r14 + 0xbe0, var_1c8_4, var_1c0_2, var_1b8_2, 
            var_1b0_2)
        var_1b8_2.q = r14 + 0xbe0
        var_1c0_2.q = &var_188
        sub_14130ec00(arg1, arg2, rax_27 + 0x10, &var_160, rcx_8, var_1c0_2, var_1b8_2)
    
    *(r14 + 0xbf0) = zmm9_1
    *(r14 + 0xbf4) = var_190
    *(r14 + 0xbf8) = var_198.d
    *(r14 + 0xbfc) = zmm7_1
    *(r14 + 0xc00) = zmm8_1
    *(r14 + 0xbe8) = r13
    *(r14 + 0xc04) = *(*(r13 + 0x78) + 0x60)
    
    if (rbx_1 != 0)
        rbx_1[1].d -= 1
        
        if (rbx_1[1].d == 1)
            char rax_44
            
            if (rbx_1[2].b == 0 && data_143f0f1d0 == 0)
                rax_44 = sub_1405949a0()
            
            if (rbx_1[2].b != 0 || (data_143f0f1d0 == 0 && rax_44 != 0))
                (**rbx_1)(rbx_1, 1)
            else
                bool z_2
                
                if (0 == *(rbx_1 + 0xc))
                    *(rbx_1 + 0xc) = 1
                    z_2 = true
                else
                    *(rbx_1 + 0xc)
                    z_2 = false
                
                if (z_2)
                    sub_1405dcc10(&data_143f02390, rbx_1)
else
    int64_t rdi_1 = *(r14 + 0xbe8)
    int32_t* rax_12 = (*(*rcx_2 + 0x10))(rcx_2)
    int32_t r9_2
    uint32_t zmm0[0x4]
    
    if (rax_12[5] != rdx || rax_12[6] != rcx_1 || rax_12[7] != var_10c || rax_12[9].b != var_104.b
            || *(rax_12 + 0x25) != var_104:1.b || rax_12[8] != var_108
            || *(rax_12 + 0x26) != var_104:2.w || rax_12[0xa].w != var_100
            || rax_12[0xb] != var_fc.d || (rax_12[0xc] & 0xffefffff) != (var_fc:4.d & 0xffefffff)
            || rax_12[0xd] != var_f4 || rax_12[0xe].b != var_f0.b
            || *(rax_12 + 0x39) != var_f0:1.b)
        r9_2.b = 0
    else
        int32_t rax_23 = *rax_12
        
        if (rax_23 != var_128[0])
            r9_2.b = 0
        else
            bool z_1
            
            if (rax_23 == 1)
                if (not(var_128[1][0] f!= rax_12[1]) && not(var_128[2][0] f!= rax_12[2])
                        && not(var_128[3][0] f!= rax_12[3]))
                    zmm0 = rax_6
                    float temp2_1 = rax_12[4]
                    zmm0[0] f- temp2_1
                    z_1 = zmm0[0] f== temp2_1
                    goto label_14131932c
                
                r9_2.b = 0
            else if (rax_23 != 2)
                if (rax_12[0x12].b != var_e0)
                    r9_2.b = 0
                else
                    r9_2.b = 1
            else if (var_128[1][0] f!= rax_12[1])
                r9_2.b = 0
            else
                z_1 = rax_12[2] == var_128[2]
            label_14131932c:
                
                if (not(z_1) || rax_12[0x12].b != var_e0)
                    r9_2.b = 0
                else
                    r9_2.b = 1
    
    zmm6[0] = zmm6[0] f- zmm9.d
    bool r10_1 = _mm_and_ps(zmm6, 0x7fffffff)[0] f<= 9.99999997e-07f
    int32_t r8_3
    
    if (var_190 != *(r14 + 0xbf4) || var_198.d != *(r14 + 0xbf8))
        r8_3.b = 0
    else
        r8_3.b = 1
    
    zmm0 = *(r14 + 0xbfc)
    zmm0[0] = zmm0[0] f- zmm7.d
    uint32_t temp0_2[0x4] = _mm_and_ps(zmm0, 0x7fffffff)
    uint32_t temp0_3[0x4]
    
    if (not(temp0_2[0] f> 9.99999997e-07f))
        zmm0 = *(r14 + 0xc00)
        zmm0[0] = zmm0[0] f- zmm8.d
        temp0_3 = _mm_and_ps(zmm0, 0x7fffffff)
    
    int32_t* rdx_1
    
    if (temp0_2[0] f> 9.99999997e-07f || temp0_3[0] f> 9.99999997e-07f)
        rdx_1.b = 0
    else
        rdx_1.b = 1
    
    uint64_t rax_26
    
    if (rdi_1 != r13 || *(r14 + 0xc04) != *(*(r13 + 0x78) + 0x60))
        rax_26.b = 0
    else
        rax_26.b = 1
    
    if (rdi_1 != r13 || r9_2.b == 0 || r10_1 == 0 || r8_3.b == 0 || rdx_1.b == 0 || rax_26.b == 0)
        goto label_141319409

int64_t result = *(r14 + 0xbd8) + 8
__security_check_cookie(rax_1 ^ &var_1e8)
return result
