// 函数: sub_140f82d10
// 地址: 0x140f82d10
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_1c8
int64_t rax_1 = __security_cookie ^ &var_1c8
int64_t* r14 = arg1
TEB* gsbase

if (data_143e2b128 s> *(0x14 + *(gsbase->ThreadLocalStoragePointer + (zx.q(data_14401b1a0) << 3))))
    arg5 = _Init_thread_header(&data_143e2b128)
    
    if (data_143e2b128 == 0xffffffff)
        arg6 = sub_140b58260(&data_143e2b120, u"WhiteBrush", 1)
        arg5 = _Init_thread_footer(&data_143e2b128)

int128_t zmm12 = 0x41200000
int32_t rbx = 0
int32_t var_170 = 0x41200000

if (*(r14 + 0x3bc) != 0)
    if (r14[0x79].d != 0)
        int64_t* rcx_2 = r14[0x78]
        
        if (rcx_2 != 0 && (*(*rcx_2 + 0x28))(rcx_2) != 0)
            int64_t* rcx_3
            
            if (r14[0x79].d == 0)
                rcx_3 = nullptr
            else
                rcx_3 = r14[0x78]
            
            (*(*rcx_3 + 0x48))(rcx_3)
            r14[0x77].d = arg5.d
    
    zmm12 = r14[0x77].d

int64_t* rcx_4 = r14[0x76]
void* rsi

if (rcx_4 != 0)
    rsi = (*(*rcx_4 + 0x48))(rcx_4, data_143e2b120, 0)
else
    rsi = nullptr

var_170.q = rsi

if (r14[0x7f].d != 0)
    int64_t* rcx_5 = r14[0x7e]
    
    if (rcx_5 != 0)
        int64_t rdx_1 = *rcx_5
        
        if ((*(rdx_1 + 0x28))(rcx_5, rdx_1) != 0)
            int64_t* rcx_6
            
            if (r14[0x7f].d == 0)
                rcx_6 = nullptr
            else
                rcx_6 = r14[0x7e]
            
            r14[0x7d].b = (*(*rcx_6 + 0x48))(rcx_6)

int32_t rbx_1

if (r14[0x7d].b != 1 || rsi == 0)
    rbx_1 = arg8
else
    int64_t* r15_1 = r14[0x73]
    int64_t* r12_1 = nullptr
    uint128_t var_58_1 = arg6
    uint128_t zmm7
    uint128_t var_68_1 = zmm7
    uint128_t zmm8
    uint128_t var_78_1 = zmm8
    uint128_t zmm9
    uint128_t var_88_1 = zmm9
    int64_t* var_160_1 = nullptr
    int64_t* var_168_1 = r15_1
    
    if (r15_1 != 0)
        int32_t rax_14 = r15_1[1].d
        
        if (rax_14 == 0)
            r15_1 = nullptr
            var_168_1 = nullptr
        else
            r15_1[1].d = rax_14 + 1
        
        if (r15_1 != 0)
            r12_1 = r14[0x72]
            var_160_1 = r12_1
    
    uint128_t var_150 = arg9[1]
    var_150:0xc.d = 0x3e8ccccd
    (*(*r12_1 + 0x40))(r12_1, 0x3e8ccccd)
    char var_1a8
    int32_t var_1a0
    int32_t var_128
    char var_f4
    void* var_e0
    int32_t var_d8
    uint128_t zmm1
    uint128_t zmm2
    uint128_t zmm3
    
    if (var_d8 s> 0)
        void* rdx_2 = var_e0
        int32_t rsi_1 = 1
        
        do
            void var_f0
            void* rcx_8 = &var_f0
            
            if (rdx_2 != 0)
                rcx_8 = rdx_2
            
            if ((*(rcx_8 + (zx.q(rbx) u>> 5 << 2)) & rsi_1) != 0)
                arg5 = *(arg3 + 0x1c)
                zmm1 = arg3[2].d
                zmm7 = *(arg3 + 8)
                zmm8 = *(arg3 + 4)
                int32_t zmm4_1 = arg3[1].d
                int32_t var_188_1 = arg5.d
                int32_t var_180_1 = (*(arg3 + 0x24)).d
                int32_t var_184_1 = zmm1.d
                var_f4 = ((*(arg3 + 0x34) & 1) * 2) | (var_f4 & 0xfc)
                var_1a0.q = &var_150
                int64_t var_11c_1 = 0
                int32_t var_114_1 = 0x3f800000
                int32_t var_17c_1 = (*(arg3 + 0x28)).d
                var_1a8 = 0
                zmm2.d = _mm_cvtepi32_ps(zx.o(rbx)).d f* zmm12.d
                uint128_t var_10c_1 = var_188_1.o
                uint128_t zmm5_1
                zmm5_1.d = arg5.d f* zmm2.d
                zmm3.d = zmm1.d f* zmm2.d
                zmm5_1.d = zmm5_1.d f+ *(arg3 + 0x2c)
                arg6.d = zmm2.d f* zmm7.d
                zmm3.d = zmm3.d f+ arg3[3].d
                int32_t var_124_1 = zmm4_1
                arg6.d = arg6.d f+ *(arg3 + 0xc)
                int32_t var_120_1 = zmm7.d
                int32_t var_110_1 = zmm8.d
                uint64_t var_fc_1 = (_mm_unpacklo_ps(zmm5_1, zmm3.q)).q
                var_128 = arg6.d
                sub_140db3600(arg7, arg8, &var_128, var_170.q, var_1a8, var_1a0)
                rdx_2 = var_e0
            
            rbx += 1
            rsi_1 = rol.d(rsi_1, 1)
        while (rbx s< var_d8)
        
        r14 = arg1
        r15_1 = var_168_1
        r12_1 = var_160_1
        rsi = var_170.q
    
    uint128_t zmm11
    zmm11.d = (*(arg3 + 4)).d f* 0.5f
    uint128_t zmm10
    zmm10.d = zmm11.d f+ 0.5f
    
    if ((*(*r12_1 + 0x48))(r12_1) == 0)
        rbx_1 = arg8
    else
        arg5 = *(arg3 + 0x1c)
        zmm1 = arg3[2].d
        zmm7 = *(arg3 + 8)
        int32_t zmm4_2 = arg3[1].d
        rbx_1 = arg8
        int32_t var_188_2 = arg5.d
        int32_t var_180_2 = (*(arg3 + 0x24)).d
        var_f4 = ((*(arg3 + 0x34) & 1) * 2) | (var_f4 & 0xfc)
        var_1a0.q = &var_150
        int64_t var_11c_2 = 0
        int32_t var_184_2 = zmm1.d
        zmm2.d = _mm_cvtepi32_ps(zx.o(var_d8 - 1)).d f* zmm12.d
        int32_t var_114_2 = 0x3f800000
        int32_t var_17c_2 = (*(arg3 + 0x28)).d
        var_1a8 = 0
        uint128_t zmm5_2
        zmm5_2.d = arg5.d f* zmm2.d
        uint128_t var_10c_2 = var_188_2.o
        zmm5_2.d = zmm5_2.d f+ *(arg3 + 0x2c)
        zmm3.d = zmm1.d f* zmm2.d
        arg6.d = zmm2.d f* zmm7.d
        zmm3.d = zmm3.d f+ arg3[3].d
        int32_t var_124_2 = zmm4_2
        arg6.d = arg6.d f+ *(arg3 + 0xc)
        int32_t var_120_2 = zmm7.d
        int32_t var_110_2 = zmm10.d
        uint64_t var_fc_2 = (_mm_unpacklo_ps(zmm5_2, zmm3.q)).q
        var_128 = arg6.d
        sub_140db3600(arg7, rbx_1, &var_128, rsi, var_1a8, var_1a0)
    
    uint128_t zmm4_3
    uint128_t zmm5_3
    
    if ((*(*r12_1 + 0x18))(r12_1) != 0 && (*(*r12_1 + 0x38))(r12_1) != 0)
        zmm8 = *(arg3 + 8)
        zmm11.d = zmm11.d f- 0.5f
        zmm4_3 = *(arg3 + 0x24)
        zmm2 = *(arg3 + 0x1c)
        zmm3 = *(arg3 + 0x28)
        zmm1 = arg3[2].d
        arg6 = zmm11
        arg5.d = zmm11.d f* zmm4_3.d
        int64_t var_11c_3 = 0
        zmm11.d = zmm11.d f* zmm3.d
        var_f4 = ((*(arg3 + 0x34) & 1) * 2) | (var_f4 & 0xfc)
        int32_t var_188_3 = zmm2.d
        int32_t var_184_3 = zmm1.d
        int32_t var_180_3 = zmm4_3.d
        int32_t var_17c_3 = zmm3.d
        var_1a0.q = &var_150
        int32_t var_114_3 = 0x3f800000
        var_1a8 = 0
        arg6.d = arg6.d f* zmm8.d
        zmm9.d = _mm_cvtepi32_ps(zx.o(var_d8)).d f* zmm12.d
        arg6.d = arg6.d f+ arg3[1].d
        int32_t var_120_3 = zmm8.d
        int32_t var_110_3 = zmm10.d
        zmm5_3.d = zmm9.d f* zmm2.d
        zmm7 = zmm9
        zmm9.d = zmm9.d f* zmm1.d
        zmm5_3.d = zmm5_3.d f+ arg5.d
        zmm7.d = zmm7.d f* zmm8.d
        zmm9.d = zmm9.d f+ zmm11.d
        int32_t var_124_3 = arg6.d
        zmm5_3.d = zmm5_3.d f+ *(arg3 + 0x2c)
        zmm7.d = zmm7.d f+ *(arg3 + 0xc)
        uint128_t var_10c_3 = var_188_3.o
        zmm9.d = zmm9.d f+ arg3[3].d
        var_128 = zmm7.d
        uint64_t var_fc_3 = (_mm_unpacklo_ps(zmm5_3, zmm9.q)).q
        sub_140db3600(arg7, rbx_1, &var_128, rsi, var_1a8, var_1a0)
    
    zmm11 = *(arg3 + 8)
    zmm4_3 = *(arg3 + 0x24)
    zmm2 = *(arg3 + 0x1c)
    zmm3 = *(arg3 + 0x28)
    zmm1 = arg3[2].d
    zmm8.d = (*(arg3 + 4)).d f- 1f
    int64_t var_11c_4 = 0
    char var_f4_1 = ((*(arg3 + 0x34) & 1) * 2) | (var_f4 & 0xfc)
    int32_t var_188_4 = zmm2.d
    arg5.d = _mm_cvtepi32_ps(zx.o(var_d8 - 1)).d f* zmm12.d
    var_1a0.q = &var_150
    zmm8.d = zmm8.d f* 0.5f
    int32_t var_110_4 = 0x3f800000
    int32_t var_184_4 = zmm1.d
    zmm10.d = arg5.d f+ 1f
    zmm12.d = (*arg3).d f- arg5.d
    int32_t var_180_4 = zmm4_3.d
    int32_t var_17c_4 = zmm3.d
    arg5.d = zmm4_3.d f* zmm8.d
    var_1a8 = 0
    arg6.d = zmm2.d f* zmm10.d
    zmm12.d = zmm12.d f- 1f
    zmm5_3.d = zmm1.d f* zmm10.d
    arg6.d = arg6.d f+ arg5.d
    zmm9.d = zmm10.d f* zmm11.d
    zmm7.d = zmm8.d f* zmm11.d
    zmm9.d = zmm9.d f+ *(arg3 + 0xc)
    arg6.d = arg6.d f+ *(arg3 + 0x2c)
    zmm7.d = zmm7.d f+ arg3[1].d
    arg5.d = zmm3.d f* zmm8.d
    var_128 = zmm9.d
    int32_t var_120_4 = zmm11.d
    zmm5_3.d = zmm5_3.d f+ arg5.d
    int32_t var_124_4 = zmm7.d
    int32_t var_114_4 = zmm12.d
    uint128_t var_10c_4 = var_188_4.o
    zmm5_3.d = zmm5_3.d f+ arg3[3].d
    uint64_t var_fc_4 = (_mm_unpacklo_ps(arg6, zmm5_3.q)).q
    sub_140db3600(arg7, rbx_1, &var_128, rsi, var_1a8, var_1a0)
    int512_t zmm6
    zmm6.o = var_58_1
    
    if (var_e0 != 0)
        sub_140a74f90(var_e0)
    
    if (r15_1 != 0)
        r15_1[1].d -= 1
        
        if (r15_1[1].d == 1)
            (**r15_1)(r15_1)
            int32_t temp1_1 = *(r15_1 + 0xc)
            *(r15_1 + 0xc) -= 1
            
            if (temp1_1 == 1)
                (*(*r15_1 + 8))(r15_1, 1)

uint64_t result = sub_140e1e7e0(r14, arg2, arg3, arg4, arg7, rbx_1, arg9, arg10)
__security_check_cookie(rax_1 ^ &var_1c8)
return result
