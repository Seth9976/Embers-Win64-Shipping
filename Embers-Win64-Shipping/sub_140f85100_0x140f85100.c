// 函数: sub_140f85100
// 地址: 0x140f85100
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_258
int64_t rax_1 = __security_cookie ^ &var_258
int128_t* var_1f8 = arg4
int128_t* var_1f0 = arg2
int64_t rbx

if (arg8 == 0)
    rbx.b = 0
else
    if (arg1[0x34].d != 0)
        int64_t* rcx = arg1[0x33]
        
        if (rcx != 0)
            char rax_4
            rax_4, arg2 = (*(*rcx + 0x28))(rcx)
            
            if (rax_4 != 0)
                int64_t* rcx_1
                
                if (arg1[0x34].d == 0)
                    rcx_1 = nullptr
                else
                    rcx_1 = arg1[0x33]
                
                char rax_6
                rax_6, arg2 = (*(*rcx_1 + 0x48))(rcx_1)
                arg1[0x32].b = rax_6
    
    if (arg1[0x32].b == 0)
        rbx.b = 0
    else
        rbx.b = 1

char var_218 = rbx.b

if (arg1[0x78].d != 0)
    int64_t* rcx_2 = arg1[0x77]
    
    if (rcx_2 != 0)
        char rax_8
        rax_8, arg2 = (*(*rcx_2 + 0x28))(rcx_2)
        
        if (rax_8 != 0)
            int64_t* rcx_3
            
            if (arg1[0x78].d == 0)
                rcx_3 = nullptr
            else
                rcx_3 = arg1[0x77]
            
            char rax_10
            rax_10, arg2 = (*(*rcx_3 + 0x48))(rcx_3)
            arg1[0x76].b = rax_10

if (arg1[0x76].b == 0 || rbx.b != 0)
    arg2.b = 0
else
    arg2.b = 0x20

char rcx_4 = arg2.b | 0x40

if (*(arg1 + 0x3fd) == 0)
    rcx_4 = arg2.b

char rcx_5 = rcx_4 | 4

if (*(arg1 + 0x3f9) != 0)
    rcx_5 = rcx_4

char rbx_1 = rcx_5 | 0x80

if (*(arg1 + 0x3fa) == 0)
    rbx_1 = rcx_5

if (*(arg1 + 0x3fb) == 0)
    rbx_1 |= 1
else if (*(arg1 + 0x3fe) != 0)
    rbx_1 |= 2

int64_t* r15 = arg1[0x73]
int64_t* r12 = nullptr
int64_t var_238
int32_t var_230
int32_t rsi_1

if (r15 == 0)
    rsi_1 = arg6
else
    int32_t rax_15 = r15[1].d
    
    if (rax_15 == 0)
        r15 = nullptr
    else
        r15[1].d = rax_15 + 1
    
    if (r15 == 0)
        rsi_1 = arg6
    else
        r12 = arg1[0x72]
        
        if (r12 == 0)
            rsi_1 = arg6
        else
            int64_t var_228
            var_228.b = arg8
            rsi_1 = arg6
            var_230.q = arg7
            var_238.d = rsi_1
            (*(*r12 + 8))(r12, arg3, var_1f8, arg5, var_238, var_230, var_228)

int64_t* var_210
int64_t* var_208
int64_t var_128

if (arg1[0x7f].b == 0)
    int64_t rax_19
    
    if (r12 != 0)
        rax_19 = (*(*r12 + 0x18))(r12)
    
    int64_t var_120
    int64_t var_118
    int64_t var_110
    int32_t var_fc
    char var_f4
    
    if (r12 == 0 || rax_19 == 0)
        TEB* gsbase
        
        if (data_143e2b118
                s> *(0x14 + *(gsbase->ThreadLocalStoragePointer + (zx.q(data_14401b1a0) << 3))))
            _Init_thread_header(&data_143e2b118)
            
            if (data_143e2b118 == 0xffffffff)
                sub_140dda0b0(&data_143e2b090, &data_14399f634)
                atexit(sub_142ccbf50)
                _Init_thread_footer(&data_143e2b118)
        
        uint32_t rcx_12 = zx.d(data_143e2b0c0)
        void* rax_23
        
        if (rcx_12 == 0)
            rax_23 = &data_143e2b0b0
        else if (rcx_12 == 1)
            rax_23 = data_143e2b0c8
        else if (rcx_12 == 3)
            rax_23 = &arg7[2]
        else
            rax_23 = &arg7[1]
        
        var_210.o = *rax_23
        var_128.d = (*(arg3 + 0xc)).d
        var_128:4.d = arg3[1].d.d
        var_118:4.d = (*arg3).d
        var_f4 = ((*(arg3 + 0x34) & 1) * 2) | (var_f4 & 0xfc)
        var_110.d = (*(arg3 + 4)).d
        var_230.q = &var_210
        var_110:4.o = *(arg3 + 0x1c)
        var_120 = 0
        var_120.d = *(arg3 + 8)
        var_fc.q = *(arg3 + 0x2c)
        var_238.b = rbx_1
        sub_140db3600(arg5, rsi_1, &var_128, &data_143e2b090, var_238.b, var_230)
    else
        var_210 = r12
        var_208 = r15
        
        if (r15 != 0)
            r15[1].d += 1
        
        var_128.d = (*(arg3 + 0xc)).d
        var_128:4.d = arg3[1].d.d
        var_118:4.d = (*arg3).d
        var_f4 = ((*(arg3 + 0x34) & 1) * 2) | (var_f4 & 0xfc)
        var_110.d = (*(arg3 + 4)).d
        var_230.q = arg7
        var_110:4.o = *(arg3 + 0x1c)
        var_120 = 0
        var_120.d = *(arg3 + 8)
        var_fc.q = *(arg3 + 0x2c)
        var_238.b = rbx_1
        sub_140db41d0(arg5, rsi_1, &var_128, &var_210, var_238.b, var_230)

int128_t* rdi_1 = var_1f0
int32_t rax_27
int128_t zmm6
int128_t zmm7
int128_t zmm8
int128_t zmm9
int128_t zmm10
rax_27, zmm6, zmm7, zmm8, zmm9, zmm10 =
    sub_140e1e7e0(arg1, rdi_1, arg3, var_1f8, arg5, rsi_1, arg7, var_218)
var_218.d = rax_27
int32_t rbx_2 = rax_27

if (r12 != 0)
    int64_t rdx_6 = *r12
    
    if ((*(rdx_6 + 0x50))(r12, rdx_6) != 0)
        int64_t* rcx_18 = data_143e29f28
        int128_t var_68_1 = zmm7
        int128_t var_78_1 = zmm8
        int64_t r8_4 = *rcx_18
        int128_t var_88_1 = zmm9
        int128_t var_98_1 = zmm10
        (*(r8_4 + 0x58))(rcx_18, &var_1f8, r8_4)
        uint128_t zmm0_1 = zx.o(var_1f8)
        int32_t zmm1_1 = data_143dbb1f0:4.d
        int16_t var_1e0_1 = var_218.w & 0xfe00
        uint128_t var_1d0_1 = _mm_unpacklo_pd(zmm0_1, zmm0_1.q)
        __builtin_memset(&var_128, 0, 0x2c)
        zmm0_1 = data_143dbb1f0.d
        void** const var_1e8 = &data_142ecfd88
        int32_t var_1c0_1 = zmm0_1.d
        int64_t* var_1b8_1 = &var_128
        int32_t var_198_1 = 0xa
        int32_t var_1bc_1 = zmm1_1
        int32_t var_fc_1 = 0x80
        int32_t var_f8_1 = 0xffffffff
        char var_f4_1 = 0
        int64_t var_e8_1 = 0
        int32_t var_e0_1 = 0
        char var_1de_1 = 0
        int32_t var_1dc_1 = 0
        int64_t var_1d8_1 = 0
        int64_t var_1b0
        __builtin_memset(&var_1b0, 0, 0x18)
        int32_t var_194_1 = 0
        int32_t var_190_1 = 0x3f800000
        int16_t var_18c_1 = 0
        int64_t var_188_1 = 0
        int16_t var_180_1 = 0
        char var_17e_1 = 0
        void var_168
        (*(*r12 + 0x40))(r12, &var_168, arg3, &var_1e8)
        int128_t var_1a8
        int64_t* rbx_3 = var_1a8:8.q
        
        if (rbx_3 != 0)
            rbx_3[1].d -= 1
            
            if (rbx_3[1].d == 1)
                (**rbx_3)(rbx_3)
                int32_t temp4_1 = *(rbx_3 + 0xc)
                *(rbx_3 + 0xc) -= 1
                
                if (temp4_1 == 1)
                    (*(*rbx_3 + 8))(rbx_3, 1)
        
        var_1e8 = &data_142d7f690
        int32_t var_e0_2 = 0
        
        if (var_e8_1 != 0)
            sub_140a74f90(var_e8_1)
        
        sub_1407ece30(&var_128, 0)
        int64_t var_108
        
        if (var_108 != 0)
            sub_140a74f90(var_108)
        
        int64_t rcx_25 = var_128
        
        if (rcx_25 != 0)
            sub_140a74f90(rcx_25)
        
        int64_t* rbx_4 = data_143e243c8
        void var_178
        void* rbx_5 =
            (*(*rbx_4 + 0x48))(rbx_4, *sub_140b58260(&var_178, SoftwareCursor_Grab", 1), 0)
        int32_t var_130
        
        if (var_130 == 7)
            int64_t* rbx_6 = data_143e243c8
            void var_170
            rbx_5 = (*(*rbx_6 + 0x48))(rbx_6, 
                *sub_140b58260(&var_170, SoftwareCursor_CardinalCross", var_130 - 6), 0)
        
        float zmm6_1[0x4] = *(arg3 + 8)
        int32_t* rax_38 = (*(*r12 + 0x58))(r12, &var_210)
        float zmm11[0x4] = *(rbx_5 + 8)
        zmm10 = *(arg3 + 8)
        zmm11[0] = zmm11[0] * 0.5f
        float zmm12[0x4] = *(rbx_5 + 0xc)
        float zmm4_1[0x4] = *(arg3 + 0x24)
        char rcx_31 = *(arg3 + 0x34) & 1
        float zmm2_1[0x4] = *(arg3 + 0x1c)
        float zmm3_1[0x4] = *(arg3 + 0x28)
        int64_t zmm1_2 = arg3[2].d
        int128_t zmm13
        zmm13.d = 1f / zmm6_1[0]
        int64_t var_120_1 = 0
        var_120_1.d = zmm10.d
        int64_t var_118_1
        var_118_1:4.d = zmm11[0]
        zmm9.d = zmm13.d f* *rax_38
        zmm13.d = zmm13.d f* rax_38[1]
        zmm9.d = zmm9.d f- zmm11[0]
        var_210.d = zmm2_1[0]
        var_210:4.d = zmm1_2.d
        zmm12[0] = zmm12[0] * 0.5f
        var_208.d = zmm4_1[0]
        zmm2_1[0] = zmm2_1[0] f* zmm9.d
        var_f4_1 = (rcx_31 * 2) | (var_f4_1 & 0xfc)
        zmm13.d = zmm13.d f- zmm12[0]
        int64_t zmm5_1
        zmm5_1.d = zmm1_2.d f* zmm9.d
        var_208:4.d = zmm3_1[0]
        int32_t var_230_1
        var_230_1.q = &data_14399f5c0
        zmm8.d = zmm10.d f* zmm9.d
        void* var_238_1
        var_238_1.b = 0
        zmm4_1[0] = zmm4_1[0] f* zmm13.d
        zmm8.d = zmm8.d f+ *(arg3 + 0xc)
        zmm7.d = zmm10.d f* zmm13.d
        zmm2_1[0] = zmm2_1[0] + zmm4_1[0]
        int64_t var_110_1
        var_110_1.d = zmm12[0]
        zmm7.d = zmm7.d f+ arg3[1].d
        zmm3_1[0] = zmm3_1[0] f* zmm13.d
        zmm2_1[0] = zmm2_1[0] f+ *(arg3 + 0x2c)
        var_128.d = zmm8.d
        zmm5_1.d = zmm5_1.d f+ zmm3_1[0]
        var_128:4.d = zmm7.d
        var_110_1:4.o = var_210.o
        zmm5_1.d = zmm5_1.d f+ arg3[3].d
        var_fc_1.q = (_mm_unpacklo_ps(zmm2_1, zmm5_1)).q
        sub_140db3600(arg5, arg6 + 1, &var_128, rbx_5, var_238_1.b, var_230_1)
        sub_140ddf250(&var_168)
        rbx_2 = var_218.d
        rdi_1 = var_1f0
        int512_t zmm6_2
        zmm6_2.o = zmm6

int64_t* rax_40 = arg1[0x7d]

if (rax_40 != 0)
    var_210 = rax_40
    void* rax_41 = arg1[0x7e]
    void* var_208_1 = rax_41
    
    if (rax_41 != 0)
        *(rax_41 + 8) += 1
    
    sub_140e19d60(rdi_1, &var_128, arg1, &var_210)

if (r15 != 0)
    r15[1].d -= 1
    
    if (r15[1].d == 1)
        (**r15)(r15)
        int32_t temp3_1 = *(r15 + 0xc)
        *(r15 + 0xc) -= 1
        
        if (temp3_1 == 1)
            (*(*r15 + 8))(r15, 1)

__security_check_cookie(rax_1 ^ &var_258)
return zx.q(rbx_2)
