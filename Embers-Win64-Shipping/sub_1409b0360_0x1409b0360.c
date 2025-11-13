// 函数: sub_1409b0360
// 地址: 0x1409b0360
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_358
int64_t rax_1 = __security_cookie ^ &var_358
void*** r12 = arg1
int64_t* rsi = arg2
uint128_t zmm9 = arg4
TEB* gsbase
void* rbx = *(gsbase->ThreadLocalStoragePointer + (zx.q(data_14401b1a0) << 3))
int32_t var_2e8 = arg4.d
int32_t var_2d8 = arg3.d
void* var_328 = rbx

if (data_143ceeb58 s> *(rbx + 0x14))
    _Init_thread_header(&data_143ceeb58)
    
    if (data_143ceeb58 == 0xffffffff)
        data_143ceeb48 = 0
        data_143ceeb50.q = 0
        atexit(sub_142cb9ca0)
        _Init_thread_footer(&data_143ceeb58)

int32_t rax_4 = data_143ceeb54
int32_t i_14 = data_143ceeb50

if (rax_4 s< 0)
    if (i_14 != 0)
        int64_t* rbx_4 = data_143ceeb48 + 8
        int32_t i
        
        do
            sub_1408464b0(rbx_4)
            rbx_4 = &rbx_4[4]
            i = i_14
            i_14 -= 1
        while (i != 1)
        rax_4 = data_143ceeb54
        rbx = var_328
    
    data_143ceeb50 = 0
    
    if (rax_4 != 0)
        sub_1405a51b0(&data_143ceeb48, 0)
else
    if (i_14 != 0)
        int64_t* rbx_2 = data_143ceeb48 + 8
        int32_t i_1
        
        do
            sub_1408464b0(rbx_2)
            rbx_2 = &rbx_2[4]
            i_1 = i_14
            i_14 -= 1
        while (i_1 != 1)
        rbx = var_328
    
    data_143ceeb50 = 0

if (data_143ceeb70 s> *(rbx + 0x14))
    _Init_thread_header(&data_143ceeb70)
    
    if (data_143ceeb70 == 0xffffffff)
        data_143ceeb60 = 0
        data_143ceeb68.q = 0
        atexit(sub_142cb7fe0)
        _Init_thread_footer(&data_143ceeb70)

int32_t rax_6 = data_143ceeb6c
int32_t i_15 = data_143ceeb68

if (rax_6 s< 0)
    if (i_15 != 0)
        int64_t* rbx_8 = data_143ceeb60 + 8
        int32_t i_2
        
        do
            sub_1408464b0(rbx_8)
            rbx_8 = &rbx_8[4]
            i_2 = i_15
            i_15 -= 1
        while (i_2 != 1)
        rax_6 = data_143ceeb6c
        rbx = var_328
    
    data_143ceeb68 = 0
    
    if (rax_6 != 0)
        sub_1405a51b0(&data_143ceeb60, 0)
else
    if (i_15 != 0)
        int64_t* rbx_6 = data_143ceeb60 + 8
        int32_t i_3
        
        do
            sub_1408464b0(rbx_6)
            rbx_6 = &rbx_6[4]
            i_3 = i_15
            i_15 -= 1
        while (i_3 != 1)
        rbx = var_328
    
    data_143ceeb68 = 0

if (data_143ceeb88 s> *(rbx + 0x14))
    _Init_thread_header(&data_143ceeb88)
    
    if (data_143ceeb88 == 0xffffffff)
        data_143ceeb78 = 0
        data_143ceeb80.q = 0
        atexit(sub_142cb7d60)
        _Init_thread_footer(&data_143ceeb88)

int32_t rax_8 = data_143ceeb84
int32_t i_16 = data_143ceeb80

if (rax_8 s< 0)
    if (i_16 != 0)
        int64_t* rbx_12 = data_143ceeb78 + 8
        int32_t i_4
        
        do
            int64_t rcx_6 = *rbx_12
            
            if (rcx_6 != 0)
                sub_140a74f90(rcx_6)
            
            rbx_12 = &rbx_12[3]
            i_4 = i_16
            i_16 -= 1
        while (i_4 != 1)
        rax_8 = data_143ceeb84
        rbx = var_328
    
    data_143ceeb80 = 0
    
    if (rax_8 != 0)
        sub_1405a5130(&data_143ceeb78, 0)
else
    if (i_16 != 0)
        int64_t* rbx_10 = data_143ceeb78 + 8
        int32_t i_5
        
        do
            int64_t rcx_5 = *rbx_10
            
            if (rcx_5 != 0)
                sub_140a74f90(rcx_5)
            
            rbx_10 = &rbx_10[3]
            i_5 = i_16
            i_16 -= 1
        while (i_5 != 1)
        rbx = var_328
    
    data_143ceeb80 = 0

void* var_2b0
sub_14090aa40(&r12[5][0x2a], &var_2b0, data_143f35cc8)
int32_t* rcx_9 = *rsi
int32_t* var_288 = rcx_9
void* rax_10 = &rcx_9[sx.q(rsi[1].d)]

if (rcx_9 != rax_10)
    char r15_1 = arg6
    int128_t zmm10
    int128_t var_88_1 = zmm10
    int128_t zmm11
    int128_t var_98_1 = zmm11
    uint128_t zmm12
    uint128_t var_a8_1 = zmm12
    uint128_t zmm13
    uint128_t var_b8_1 = zmm13
    uint128_t zmm14
    uint128_t var_c8_1 = zmm14
    uint128_t zmm15
    uint128_t var_d8_1 = zmm15
    
    while (true)
        int64_t rdi = sx.q(*rcx_9)
        int32_t var_318_1 = rdi.d
        int64_t r14_1 = rdi * 5
        int32_t r13_1 = *(r12[5][0x1c] + (r14_1 << 3) + 0x20)
        int32_t var_278
        int64_t zmm8_1 = sub_1409b2fe0(r12, &var_278, rdi.d)
        
        if (data_143ceeba0 s> *(rbx + 0x14))
            _Init_thread_header(&data_143ceeba0)
            
            if (data_143ceeba0 == 0xffffffff)
                data_143ceeb90 = 0
                data_143ceeb98.q = 0
                atexit(sub_142cb9210)
                _Init_thread_footer(&data_143ceeba0)
        
        void* rsi_1 = r12[5]
        int64_t r10_1 = sx.q(*(*(rsi_1 + 0xe0) + (r14_1 << 3) + 8))
        
        if (r10_1.d s<= data_143ceeb98)
            int32_t rdx_3 = data_143ceeb98
            
            if (r10_1.d s< rdx_3)
                int32_t rbx_14 = rdx_3 - r10_1.d
                
                if (rdx_3 != r10_1.d)
                    int32_t rdx_4 = rdx_3 - rbx_14
                    
                    if (rdx_4 != r10_1.d)
                        int64_t r8_2 = data_143ceeb90
                        memmove(r8_2 + (r10_1 << 2), r8_2 + (sx.q(rbx_14 + r10_1.d) << 2), 
                            (rdx_4 - r10_1.d) << 2)
                    
                    data_143ceeb98 -= rbx_14
                    sub_1405dac90(&data_143ceeb90)
                
                rbx = var_328
        else
            bool cond:4_1 = r10_1.d s<= data_143ceeb9c
            data_143ceeb98 = r10_1.d
            
            if (not(cond:4_1))
                sub_1405a4cf0(&data_143ceeb90)
        
        int64_t r8_4 = 0
        int64_t rax_15 = *(rsi_1 + 0xe0)
        int32_t* r9_3 = *(rax_15 + (r14_1 << 3))
        uint64_t r10_3 = sx.q(*(rax_15 + (r14_1 << 3) + 8)) << 2 u>> 2
        
        if (r9_3 u> &r9_3[sx.q(*(rax_15 + (r14_1 << 3) + 8))])
            r10_3 = 0
        
        if (r10_3 != 0)
            do
                int64_t rax_18 = sx.q(*r9_3)
                r9_3 = &r9_3[1]
                *(data_143ceeb90 + (r8_4 << 2)) = *(*(rsi_1 + 0x38) + rax_18 * 0x18)
                r8_4 += 1
            while (r8_4 != r10_3)
        
        int64_t rax_21 = r12[5][0x1c]
        
        if (data_143ceebb8 s> *(rbx + 0x14))
            _Init_thread_header(&data_143ceebb8)
            
            if (data_143ceebb8 == 0xffffffff)
                data_143ceeba8 = 0
                data_143ceebb0.q = 0
                atexit(sub_142cba6e0)
                _Init_thread_footer(&data_143ceebb8)
        
        int32_t r14_2 = data_143ceeb98
        int32_t i_13 = data_143ceebb0
        int64_t* rbx_15 = data_143ceeba8
        int64_t r14_3
        
        if (r14_2 s> data_143ceebb4)
            if (i_13 != 0)
                int32_t i_6
                
                do
                    int64_t rcx_17 = *rbx_15
                    
                    if (rcx_17 != 0)
                        sub_140a74f90(rcx_17)
                    
                    rbx_15 = &rbx_15[3]
                    i_6 = i_13
                    i_13 -= 1
                while (i_6 != 1)
            
            bool cond:6_1 = data_143ceebb4 == r14_2
            data_143ceebb0 = 0
            
            if (not(cond:6_1))
                sub_1405a5130(&data_143ceeba8, r14_2)
            
            r14_3 = 0
        else
            if (i_13 != 0)
                int32_t i_7
                
                do
                    int64_t rcx_16 = *rbx_15
                    
                    if (rcx_16 != 0)
                        sub_140a74f90(rcx_16)
                    
                    rbx_15 = &rbx_15[3]
                    i_7 = i_13
                    i_13 -= 1
                while (i_7 != 1)
            
            r14_3 = 0
            data_143ceebb0 = 0
        
        if (data_143ceebd0 s> *(var_328 + 0x14))
            _Init_thread_header(&data_143ceebd0)
            
            if (data_143ceebd0 == 0xffffffff)
                data_143ceebc0 = 0
                data_143ceebc8.q = 0
                atexit(sub_142cb7e80)
                _Init_thread_footer(&data_143ceebd0)
        
        int32_t rax_25 = data_143ceebcc
        data_143ceebc8 = 0
        
        if (rax_25 s< 0 && rax_25 != 0)
            sub_1405a5410(&data_143ceebc0, 0)
            rax_25 = data_143ceebcc
        
        int32_t rdx_9 = data_143ceeb98
        
        if (rdx_9 s> rax_25)
            sub_1405a5410(&data_143ceebc0, rdx_9)
        
        int32_t var_31c_1 = 0
        
        if (data_143ceeb98 s> 0)
            int32_t var_270
            zmm15 = var_270
            int64_t r12_1 = 0
            void* r13_2 = var_2b0
            bool cond:16_1
            
            do
                zmm12 = data_143dbb1f8
                zmm14 = data_143dbb1fc
                zmm13 = data_143dbb200
                int64_t rbx_16 = sx.q(*(data_143ceeb90 + r12_1))
                uint128_t zmm0_1
                uint128_t zmm1_1
                uint128_t zmm4_1
                float zmm6_1[0x4]
                
                if (r15_1 != 0)
                    if (data_143ceebe8 s> *(0x14
                            + *(gsbase->ThreadLocalStoragePointer + (zx.q(data_14401b1a0) << 3))))
                        _Init_thread_header(&data_143ceebe8)
                        
                        if (data_143ceebe8 == 0xffffffff)
                            data_143ceebd8 = 0
                            data_143ceebe0.q = 0
                            atexit(sub_142cb80c0)
                            _Init_thread_footer(&data_143ceebe8)
                    
                    sub_1409c46d0(arg1, rbx_16.d, &data_143ceebd8)
                    int32_t* rsi_2 = data_143ceebd8
                    uint64_t r15_3 = sx.q(data_143ceebe0) << 2 u>> 2
                    
                    if (rsi_2 u> &rsi_2[sx.q(data_143ceebe0)])
                        r15_3 = 0
                    
                    if (r15_3 != 0)
                        do
                            int32_t* i_8 = *arg2
                            int32_t r8_5 = *rsi_2
                            
                            for (; i_8 != &i_8[sx.q(arg2[1].d)]; i_8 = &i_8[1])
                                if (*i_8 == r8_5)
                                    int32_t var_1f8
                                    zmm6_1, zmm8_1, zmm9, zmm12, zmm13 =
                                        sub_1409b31b0(arg1, &var_1f8, r8_5)
                                    zmm12.d = zmm12.d f- var_1f8
                                    int32_t var_1f0
                                    zmm13.d = zmm13.d f+ (var_1f0 ^ zmm6_1).d
                                    int32_t var_1f4
                                    zmm14.d = zmm14.d f+ (var_1f4 ^ zmm6_1).d
                                    break
                            
                            rsi_2 = &rsi_2[1]
                            r14_3 += 1
                        while (r14_3 != r15_3)
                        
                        rdi = zx.q(var_318_1)
                        r13_2 = var_2b0
                    
                    arg3.d = zmm12.d f* zmm12.d
                    zmm0_1.d = zmm14.d f* zmm14.d
                    zmm1_1.d = zmm13.d f* zmm13.d
                    arg3.d = arg3.d f+ zmm0_1.d
                    arg3.d = arg3.d f+ zmm1_1.d
                    
                    if (not(arg3.d f<= zmm8_1.d))
                        arg4.d = arg3.d
                        float temp0_1[0x4] = _mm_rsqrt_ss(arg4[0], arg4.d)
                        arg4.d = arg4.d f* 0.5f
                        zmm0_1.d = temp0_1.d f* temp0_1[0]
                        arg3.d = arg4.d f* zmm0_1.d
                        zmm1_1.d = 0.5f f- arg3.d
                        zmm0_1.d = temp0_1.d f* zmm1_1.d
                        temp0_1[0] = temp0_1[0] f+ zmm0_1.d
                        zmm0_1.d = temp0_1.d f* temp0_1[0]
                        arg4.d = arg4.d f* zmm0_1.d
                        zmm4_1.d = 0.5f f- arg4.d
                        zmm0_1.d = temp0_1.d f* zmm4_1.d
                        temp0_1[0] = temp0_1[0] f+ zmm0_1.d
                        float var_2e4_1 = temp0_1[0]
                        zmm12.d = zmm12.d f* temp0_1[0]
                        zmm14.d = zmm14.d f* temp0_1[0]
                        zmm13.d = zmm13.d f* temp0_1[0]
                
                int64_t rcx_22 = rbx_16 * 3
                float zmm5_1[0x4] = var_278
                int64_t rdx_13 = **(r13_2 + 0x18)
                zmm0_1 = zx.o(*(rdx_13 + (rcx_22 << 2)))
                int32_t rax_33 = *(rdx_13 + (rcx_22 << 2) + 8)
                zmm11 = zmm0_1.d
                zmm5_1[0] = zmm5_1[0] f- zmm11.d
                uint128_t zmm7_1 = _mm_shuffle_ps(zmm0_1, zmm0_1, 0x55)
                int32_t var_274
                zmm4_1.d = var_274.d f- zmm7_1.d
                zmm10 = rax_33
                arg4.d = zmm15.d f- zmm10.d
                arg3.d = zmm5_1.d f* zmm5_1[0]
                zmm0_1.d = zmm4_1.d f* zmm4_1.d
                zmm1_1.d = arg4.d f* arg4.d
                arg3.d = arg3.d f+ zmm0_1.d
                arg3.d = arg3.d f+ zmm1_1.d
                float temp0_3[0x4] = _mm_sqrt_ss(zx.o(0)[0], arg3.d)
                
                if (temp0_3[0] f<= zmm8_1.d)
                    zmm0_1 = data_143dbb1f8
                    arg3 = data_143dbb1fc
                    zmm1_1 = data_143dbb200
                else
                    zmm0_1.d = 1f / temp0_3[0]
                    zmm1_1.d = zmm0_1.d f* arg4.d
                    arg3.d = zmm0_1.d f* zmm4_1.d
                    zmm0_1.d = zmm0_1.d f* zmm5_1[0]
                
                int64_t rsi_3 = sx.q(data_143ceebb0)
                temp0_3[0] = temp0_3[0] f* zmm9.d
                int32_t rax_34 = (rsi_3 + 1).d
                bool cond:11_1 = rax_34 s<= data_143ceebb4
                temp0_3[0] = temp0_3[0] f+ var_2d8
                data_143ceebb0 = rax_34
                zmm1_1.d = zmm1_1.d f* temp0_3[0]
                arg3.d = arg3.d f* temp0_3[0]
                zmm0_1.d = zmm0_1.d f* temp0_3[0]
                zmm1_1.d = zmm1_1.d f+ zmm10.d
                arg3.d = arg3.d f+ zmm7_1.d
                zmm0_1.d = zmm0_1.d f+ zmm11.d
                int32_t var_2c8_1 = zmm1_1.d
                int32_t var_2cc_1 = arg3.d
                int32_t var_2d0_1 = zmm0_1.d
                
                if (not(cond:11_1))
                    sub_1405a4df0(&data_143ceeba8)
                
                int64_t rcx_23 = data_143ceeba8
                int64_t rdx_15 = rsi_3 * 3
                zmm8_1 = var_2d0_1.q
                zmm9 = data_142d3f660
                *(rcx_23 + (rdx_15 << 3)) = 0
                *(rcx_23 + (rdx_15 << 3) + 8) = 0
                *(rcx_23 + (rdx_15 << 3) + 0x10) = data_143a1c6b4
                char var_1e8_1 = 2
                int64_t rax_38 = data_143ceeba8
                int32_t var_1c0_1 = var_2c8_1
                int64_t rdx_16 = sx.q(data_143ceebb0 - 1) * 3
                int64_t var_1a8_1 = 0
                int64_t r14_4 = sx.q(*(rax_38 + (rdx_16 << 3) + 8))
                int64_t* rsi_4 = rax_38 + (rdx_16 << 3)
                int32_t rax_39 = (r14_4 + 1).d
                rsi_4[1].d = rax_39
                
                if (rax_39 s> *(rsi_4 + 0xc))
                    sub_14090a6a0(rsi_4)
                
                int64_t rdx_18 = *rsi_4
                int64_t rax_40 = data_143f35cc8
                r14_3 = 0
                int64_t rcx_27 = r14_4 * 0x60
                int64_t var_218 = zmm8_1
                int32_t var_210_1 = var_2c8_1
                *(rcx_27 + rdx_18 + 0x10) = var_1e8_1.o
                *(rcx_27 + rdx_18) = rax_40
                *(rcx_27 + rdx_18 + 0x20) = zmm9
                *(rcx_27 + rdx_18 + 8) = 0
                *(rcx_27 + rdx_18 + 0x30) = zmm8_1.o
                char var_338
                int64_t var_208
                var_338.q = &var_208
                uint128_t var_1b8
                *(rcx_27 + rdx_18 + 0x40) = var_1b8
                *(rcx_27 + rdx_18 + 0x50) = var_1a8_1.o
                int32_t var_2d4
                zmm6_1, zmm7_1, zmm10, zmm11, zmm12, zmm13, zmm14, zmm15 =
                    sub_1409b2b10(arg1, &var_2d4, rdi.d, &var_218, var_338)
                int64_t rsi_5 = sx.q(data_143ceebc8)
                int32_t rax_41 = (rsi_5 + 1).d
                bool cond:12_1 = rax_41 s<= data_143ceebcc
                data_143ceebc8 = rax_41
                
                if (not(cond:12_1))
                    sub_1405a4f90(&data_143ceebc0)
                
                zmm0_1 = zx.o(var_208)
                r15_1 = arg6
                int32_t* rcx_31 = (rsi_5 << 4) + data_143ceebc0
                *rcx_31 = var_2d4
                *(rcx_31 + 4) = zmm0_1.q
                int32_t var_200
                rcx_31[3] = var_200
                
                if (r15_1 != 0)
                    int32_t* r8_7 = data_143ceeb78
                    int64_t rsi_6 = sx.q(data_143ceeb80)
                    int32_t* rdx_21 = r8_7
                    zmm13.d = zmm13.d f* zmm6_1[0]
                    zmm14.d = zmm14.d f* zmm6_1[0]
                    zmm12.d = zmm12.d f* zmm6_1[0]
                    zmm13.d = zmm13.d f+ zmm10.d
                    void* rax_44 = &r8_7[rsi_6 * 6]
                    zmm14.d = zmm14.d f+ zmm7_1.d
                    zmm12.d = zmm12.d f+ zmm11.d
                    int32_t var_2b8_1 = zmm13.d
                    int32_t var_2bc_1 = zmm14.d
                    int32_t var_2c0_1 = zmm12.d
                    
                    if (r8_7 != rax_44)
                        while (*rdx_21 != rbx_16.d)
                            rdx_21 = &rdx_21[6]
                            
                            if (rdx_21 == rax_44)
                                goto label_1409b0ea8
                    
                    if (r8_7 == rax_44 || rdx_21 == 0)
                    label_1409b0ea8:
                        int32_t rax_45 = (rsi_6 + 1).d
                        bool cond:18_1 = rax_45 s<= data_143ceeb84
                        data_143ceeb80 = rax_45
                        
                        if (not(cond:18_1))
                            sub_1405a4df0(&data_143ceeb78)
                            r8_7 = data_143ceeb78
                        
                        int64_t rcx_33 = rsi_6 * 3
                        zmm6_1 = data_142d3f660
                        r8_7[rcx_33 * 2] = 0
                        *(r8_7 + (rcx_33 << 3) + 8) = 0
                        *(r8_7 + (rcx_33 << 3) + 0x10) = 0
                        char var_1e8_2 = 2
                        int32_t var_1c0_2 = var_2b8_1
                        uint64_t var_1c8_2 = var_2c0_1.q
                        int64_t rdx_23 = sx.q(data_143ceeb80 - 1) * 3
                        int64_t var_1a8_2 = 0
                        int64_t rcx_35 = data_143ceeb78
                        *(rcx_35 + (rdx_23 << 3)) = rbx_16.d
                        void* rbx_17 = rcx_35 + (rdx_23 << 3)
                        int64_t rsi_7 = sx.q(*(rbx_17 + 0x10))
                        int32_t rax_49 = (rsi_7 + 1).d
                        *(rbx_17 + 0x10) = rax_49
                        
                        if (rax_49 s> *(rbx_17 + 0x14))
                            sub_14090a6a0(rbx_17 + 8)
                        
                        int64_t rdx_25 = *(rbx_17 + 8)
                        int64_t rax_50 = data_143f35cc8
                        int64_t rcx_38 = rsi_7 * 0x60
                        *(rcx_38 + rdx_25 + 0x10) = var_1e8_2.o
                        *(rcx_38 + rdx_25) = rax_50
                        *(rcx_38 + rdx_25 + 0x20) = zmm6_1
                        *(rcx_38 + rdx_25 + 8) = 0
                        *(rcx_38 + rdx_25 + 0x30) = var_1c8_2.o
                        *(rcx_38 + rdx_25 + 0x40) = var_1b8
                        *(rcx_38 + rdx_25 + 0x50) = var_1a8_2.o
                
                r12_1 += 4
                cond:16_1 = var_31c_1 + 1 s< data_143ceeb98
                zmm8_1 = 0x322bcc77
                zmm9 = var_2e8
                var_31c_1 += 1
            while (cond:16_1)
            r12 = arg1
        
        if (data_143ceec00 s> *(var_328 + 0x14))
            _Init_thread_header(&data_143ceec00)
            
            if (data_143ceec00 == 0xffffffff)
                data_143ceebf0 = 0
                data_143ceebf8.q = 0
                atexit(sub_142cb8dc0)
                _Init_thread_footer(&data_143ceec00)
        
        sub_1409b5680(r12, &data_143ceeba8, &data_143ceebf0)
        char rdx_26 = arg5
        int64_t var_308
        
        if ((rdx_26 & 0xfd) == 0)
            int32_t rcx_42 = data_143ceebf8
            int32_t rax_53 = 0
            int32_t var_2e4_2 = rcx_42
            
            if (rcx_42 s> 0)
                int64_t var_2a0_1 = 0
                int64_t r8_8 = 0
                int64_t var_2a8_1 = 0
                
                do
                    int32_t* rcx_43 = data_143ceeb90
                    int32_t* rax_56 = data_143ceebf0
                    int64_t rdx_29 = sx.q(mods.dp.d(sx.q(rax_53 + 1), rcx_42))
                    var_308 = rdx_29
                    int32_t rsi_8 = *(rcx_43 + r8_8)
                    int32_t r14_5 = *(rax_56 + r8_8)
                    int32_t r12_2 = rax_56[rdx_29]
                    int32_t r15_5 = rcx_43[rdx_29]
                    int32_t* rax_58 = *(rax_21 + (r14_1 << 3))
                    int32_t rcx_45 = data_143ceeb50
                    int32_t rdi_2 = *(rax_58 + r8_8)
                    int32_t rbx_18 = rax_58[rdx_29]
                    bool cond:19_1 = rcx_45 + 1 s<= data_143ceeb54
                    data_143ceeb50 = rcx_45 + 1
                    
                    if (not(cond:19_1))
                        sub_1405c4e40(&data_143ceeb48)
                    
                    int32_t* rcx_48 = (sx.q(rcx_45) << 5) + data_143ceeb48
                    *rcx_48 = data_143a1c6c4
                    *(rcx_48 + 8) = 0
                    *(rcx_48 + 0x10) = 0
                    rcx_48[6] = data_143a1c6c8
                    rcx_48[7].b = 0
                    int32_t* rax_66 = (sx.q(data_143ceeb50 - 1) << 5) + data_143ceeb48
                    int32_t* var_248 = rax_66
                    *rax_66 = r13_1
                    
                    if (arg6 != 0)
                        rax_66[7].b = 3
                    
                    void* r10_4 = &rax_66[2]
                    int32_t rax_67 = rax_66[4]
                    void* var_258 = r10_4
                    
                    if (rax_67 s< 4)
                        *(r10_4 + 8) = 4
                        int32_t i_17 = 4 - rax_67
                        
                        if (*(r10_4 + 0xc) s< 4)
                            sub_1405a4df0(r10_4)
                            r10_4 = var_258
                        
                        int32_t* r8_9 = *r10_4 + sx.q(rax_67) * 0x18
                        
                        if (i_17 != 0)
                            void* rcx_51 = &r8_9[5]
                            int32_t i_9
                            
                            do
                                rcx_51 += 0x18
                                *r8_9 = data_143a1c6b8
                                r8_9 = &r8_9[6]
                                *(rcx_51 - 0x28) = data_143a1c6b4
                                *(rcx_51 - 0x24) = 0
                                *(rcx_51 - 0x1c) = 0
                                i_9 = i_17
                                i_17 -= 1
                            while (i_9 != 1)
                    else if (rax_67 s> 4)
                        sub_1409d8830(r10_4, 4, rax_67 - 4, 1)
                        r10_4 = var_258
                    
                    int32_t var_190_1 = rdi_2
                    *(*r10_4 + 4) = rsi_8
                    *(*r10_4 + 0x1c) = r15_5
                    *(*r10_4 + 0x34) = r12_2
                    r12 = arg1
                    *(*r10_4 + 0x4c) = r14_5
                    var_258.o = (*r10_4 + 8).o
                    sub_14099a420(&r12[5][0x35], &var_258)
                    int32_t* rsi_9 = var_248
                    int32_t var_180_1 = rbx_18
                    var_248.o = (*(rsi_9 + 8) + 0x20).o
                    sub_14099a420(&r12[5][0x35], &var_248)
                    int64_t r10_5 = data_143ceebc0
                    int64_t r11_2 = var_308 * 2
                    void* r9_6 = r12[5]
                    int64_t rax_79 = sx.q(*(r10_5 + (r11_2 << 3)))
                    
                    if (rax_79.d == data_143a1c6c0)
                        int32_t var_170_1 = rbx_18
                        var_308.o = (*(rsi_9 + 8) + 0x38).o
                        sub_14099a420(r9_6 + 0x1a8, &var_308)
                    else
                        int64_t r8_11 = *(r9_6 + 0xa8)
                        int64_t rax_80 = rax_79 * 2
                        uint64_t var_2f4_1 = *(r10_5 + (r11_2 << 3) + 4)
                        int32_t rdx_35 = *(r8_11 + (rax_80 << 3) + 8)
                        int32_t var_300_1 = *(r8_11 + (rax_80 << 3))
                        int32_t rax_82 = *(r10_5 + (r11_2 << 3) + 0xc)
                        int32_t var_2fc_1 = *(r8_11 + (rax_80 << 3) + 4)
                        var_308 = *(rsi_9 + 8) + 0x38
                        int32_t var_2ec_1 = rax_82
                        uint128_t var_148 = var_308.o
                        int128_t var_138_1 = rdx_35.o
                        sub_140999fc0(r9_6 + 0x1a8, &var_148)
                    
                    void* r9_7 = data_143ceebc0
                    void* r10_6 = r12[5]
                    int64_t rax_85 = sx.q(*(r9_7 + var_2a0_1))
                    
                    if (rax_85.d == data_143a1c6c0)
                        int32_t var_160_1 = rdi_2
                        var_308.o = (*(rsi_9 + 8) + 0x50).o
                        sub_14099a420(r10_6 + 0x1a8, &var_308)
                    else
                        int64_t r8_14 = *(r10_6 + 0xa8)
                        int64_t rax_86 = rax_85 * 2
                        uint64_t var_2f4_2 = *(r9_7 + var_2a0_1 + 4)
                        int32_t rdx_38 = *(r8_14 + (rax_86 << 3) + 8)
                        int32_t var_300_2 = *(r8_14 + (rax_86 << 3))
                        int32_t rax_88 = *(r9_7 + var_2a0_1 + 0xc)
                        int32_t var_2fc_2 = *(r8_14 + (rax_86 << 3) + 4)
                        var_308 = *(rsi_9 + 8) + 0x50
                        int32_t var_2ec_2 = rax_88
                        uint128_t var_128 = var_308.o
                        int128_t var_118_1 = rdx_38.o
                        sub_140999fc0(r10_6 + 0x1a8, &var_128)
                    
                    rax_53 += 1
                    r8_8 = var_2a8_1 + 4
                    rcx_42 = var_2e4_2
                    var_2a8_1 = r8_8
                    var_2a0_1 += 0x10
                while (rax_53 s< rcx_42)
                
                rdx_26 = arg5
        
        if (rdx_26 u<= 1)
            int64_t rbx_21 = sx.q(data_143ceeb68)
            int32_t rax_91 = (rbx_21 + 1).d
            bool cond:10_1 = rax_91 s<= data_143ceeb6c
            data_143ceeb68 = rax_91
            
            if (not(cond:10_1))
                sub_1405c4e40(&data_143ceeb60)
            
            int64_t rcx_64 = rbx_21 << 5
            int32_t* rcx_65 = rcx_64 + data_143ceeb60
            int64_t rsi_10
            
            if (rcx_64 == neg.q(data_143ceeb60))
                rsi_10 = 0
                rcx_65 = nullptr
            else
                rsi_10 = 0
                *rcx_65 = data_143a1c6c4
                *(rcx_65 + 8) = 0
                *(rcx_65 + 0x10) = 0
                rcx_65[6] = data_143a1c6c8
                rcx_65[7].b = 0
            
            *rcx_65 = r13_1
            
            if (arg6 != 0)
                rcx_65[7].b = 3
            
            int64_t rdi_3 = sx.q(rcx_65[4])
            int32_t rax_94 = data_143ceebf8
            
            if (rax_94 s> rdi_3.d)
                rcx_65[4] = rax_94
                int32_t i_12 = rax_94 - rdi_3.d
                
                if (rax_94 s> rcx_65[5])
                    sub_1405a4df0(&rcx_65[2])
                
                int32_t* r8_18 = *(rcx_65 + 8) + rdi_3 * 0x18
                
                if (i_12 != 0)
                    void* rcx_68 = &r8_18[5]
                    int32_t i_10
                    
                    do
                        rcx_68 += 0x18
                        *r8_18 = data_143a1c6b8
                        r8_18 = &r8_18[6]
                        *(rcx_68 - 0x28) = data_143a1c6b4
                        *(rcx_68 - 0x24) = 0
                        *(rcx_68 - 0x1c) = 0
                        i_10 = i_12
                        i_12 -= 1
                    while (i_10 != 1)
                
                rax_94 = data_143ceebf8
            else if (rax_94 s< rdi_3.d)
                sub_1409d8830(&rcx_65[2], rax_94, rdi_3.d - rax_94, 1)
                rax_94 = data_143ceebf8
            
            int32_t i_11 = 0
            
            if (rax_94 s> 0)
                int64_t rdi_5 = 0
                int64_t rbx_23 = 0
                
                do
                    int64_t r10_7 = *(rcx_65 + 8)
                    *(r10_7 + rbx_23 + 4) = *(data_143ceebf0 + rsi_10)
                    void* r11_3 = data_143ceebc0
                    int64_t rax_99 = sx.q(*(r11_3 + rdi_5))
                    
                    if (rax_99.d == data_143a1c6c0)
                        int32_t var_150_1 = *(*(rax_21 + (r14_1 << 3)) + rsi_10)
                        var_308.o = (r10_7 + 8 + rbx_23).o
                        sub_14099a420(&r12[5][0x35], &var_308)
                    else
                        void* r9_8 = r12[5]
                        int64_t rax_100 = rax_99 * 2
                        uint64_t var_2f4_3 = *(r11_3 + rdi_5 + 4)
                        int64_t r8_20 = *(r9_8 + 0xa8)
                        int32_t rdx_45 = *(r8_20 + (rax_100 << 3) + 8)
                        int32_t var_300_3 = *(r8_20 + (rax_100 << 3))
                        int32_t rax_102 = *(r11_3 + rdi_5 + 0xc)
                        int32_t var_2fc_3 = *(r8_20 + (rax_100 << 3) + 4)
                        var_308 = r10_7 + 8 + rbx_23
                        int32_t var_2ec_3 = rax_102
                        uint128_t var_108 = var_308.o
                        int128_t var_f8_1 = rdx_45.o
                        sub_140999fc0(r9_8 + 0x1a8, &var_108)
                    
                    i_11 += 1
                    rbx_23 += 0x18
                    rdi_5 += 0x10
                    rsi_10 += 4
                while (i_11 s< data_143ceebf8)
        
        r15_1 = arg6
        rcx_9 = &var_288[1]
        var_288 = rcx_9
        
        if (rcx_9 == rax_10)
            break
        
        rbx = var_328
    
    rsi = arg2

int64_t* result = sub_1409b6930(r12, rsi, 0, 0, 1, 0)

if (data_143ceeb80 s> 0)
    result = sub_1409de670(r12, &data_143ceeb78)

if (data_143ceeb50 s> 0)
    if (data_143ceec18 s> *(var_328 + 0x14))
        _Init_thread_header(&data_143ceec18)
        
        if (data_143ceec18 == 0xffffffff)
            data_143ceec08 = 0
            data_143ceec10 = 0
            atexit(sub_142cb8ac0)
            _Init_thread_footer(&data_143ceec18)
    
    result = sub_1409b4ab0(r12, &data_143ceeb48, arg8, &data_143ceec08)

if (data_143ceeb68 s> 0)
    if (data_143ceec30 s> *(var_328 + 0x14))
        _Init_thread_header(&data_143ceec30)
        
        if (data_143ceec30 == 0xffffffff)
            data_143ceec20 = 0
            data_143ceec28 = 0
            atexit(sub_142cb8b00)
            _Init_thread_footer(&data_143ceec30)
    
    result = sub_1409b4ab0(r12, &data_143ceeb60, arg7, &data_143ceec20)

__security_check_cookie(rax_1 ^ &var_358)
return result
