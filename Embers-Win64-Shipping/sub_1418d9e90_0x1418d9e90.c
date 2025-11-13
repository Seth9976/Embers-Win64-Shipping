// 函数: sub_1418d9e90
// 地址: 0x1418d9e90
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_2b8
int64_t rax_1 = __security_cookie ^ &var_2b8
int64_t* rdi = arg5
void* r14 = arg1
int32_t rax_3 = *(arg7 + 0x390)
int32_t r15 = 0
int64_t* var_220 = rdi
int32_t var_288 = 0
int32_t var_168[0x48]
memset(&var_168, 0, 0x120)
int32_t i_2 = 0
int64_t rcx_2 = 0
int64_t* rax_4 = rdi

while (*rax_4 != 0)
    i_2 += 1
    rcx_2 += 1
    rax_4 = &rax_4[3]
    
    if (rcx_2 s>= 8)
        break

int64_t var_280
__builtin_memset(&var_280, 0, 0x24)

if (*(rdi + 0x115) != 0)
    *(r14 + 0xf0) = i_2

int64_t i_1 = sx.q(i_2)
int64_t var_278
int64_t var_270_1
var_164
float zmm1[0x4]

if (i_2 s> 0)
    void* r12_1 = r14 + 0xa0
    int64_t rax_7 = rdi - r14
    void* rsi_1 = r14 + 0x100
    int64_t var_218_1 = rax_7
    int64_t i
    
    do
        int64_t* rdi_1 = *(rax_7 + rsi_1 - 0x100)
        int64_t* var_250 = rdi_1
        void* rax_9 = (*(*rdi_1 + 0x48))(rdi_1)
        int64_t rbx_1 = *(rax_9 + 0x18)
        void* r13_1 = rax_9 + 8
        void* var_240_1 = r13_1
        int32_t var_228
        sub_140865c40(r12_1, &var_228, rbx_1)
        int64_t rcx_5 = sx.q(var_228)
        void* const rdx_1
        
        if (rcx_5.d == 0xffffffff)
            rdx_1 = nullptr
        else
            rdx_1 = *r12_1 + rcx_5 * 0x18
        
        rdi = var_220
        int32_t* r12_2 = rdx_1 + 8
        
        if (rdx_1 == 0)
            r12_2 = nullptr
        
        int64_t* rax_40
        
        if (*(rdi + 0x115) == 0)
            int32_t rax_42 = *r12_2
            
            if (rax_42 == 0)
                float var_198[0x4]
                int128_t* var_298_1 = &var_198
                int64_t var_1d0_1 = 1
                int32_t var_188_1 = 1
                int64_t rcx_22 = *(arg4 + 0x40)
                var_198 = 1.o
                sub_1418c0f40(rcx_22, rbx_1, 0, 2, var_298_1)
                rax_40 = rdi_1
                *r12_2 = 2
            else if (rax_42 != 2 || (*(var_218_1 + rsi_1 - 0xeb) & 0xfc) != 4)
                sub_1418eae00(arg2, 1, &var_250, 1)
                rax_40 = var_250
                *r12_2 = 2
            else
                float var_180[0x4]
                float (* var_298_2)[0x4] = &var_180
                int64_t var_1b8_1 = 1
                int32_t var_170_1 = 1
                int64_t rcx_24 = *(arg4 + 0x40)
                var_180 = 1.o
                sub_1418c0f40(rcx_24, rbx_1, 2, 2, var_298_2)
                rax_40 = rdi_1
                *r12_2 = 2
        else
            var_250.d = *(r13_1 + 0x68)
            
            if (*(r14 + 0xf4) == 0)
                int32_t rax_12 = *(r13_1 + 0x58)
                uint32_t j_5
                
                if (rax_12 s< 0 || rax_12 s<= 2)
                    j_5 = 1
                else if (rax_12 == 3)
                    j_5 = 6
                else if (rax_12 == 5)
                    j_5 = *(r13_1 + 0x50)
                else if (rax_12 != 6)
                    j_5 = 1
                else
                    j_5 = *(r13_1 + 0x50) * 6
                
                *(arg1 + 0xf4) = 1
                *(rsi_1 + 0x10) = *(r13_1 + 0x10)
                int32_t rax_16 = *(rsi_1 + 0xc)
                int64_t* rbx_2 = *rsi_1
                int32_t j_3 = *(rsi_1 + 8)
                
                if (rax_16 s< 0)
                    if (j_3 != 0)
                        int32_t j
                        
                        do
                            int64_t rcx_8 = *rbx_2
                            
                            if (rcx_8 != 0)
                                sub_140a74f90(rcx_8)
                            
                            rbx_2 = &rbx_2[2]
                            j = j_3
                            j_3 -= 1
                        while (j != 1)
                        rax_16 = *(rsi_1 + 0xc)
                    
                    *(rsi_1 + 8) = 0
                    
                    if (rax_16 != 0)
                        sub_1405a5410(rsi_1, 0)
                else
                    if (j_3 != 0)
                        int32_t j_1
                        
                        do
                            int64_t rcx_7 = *rbx_2
                            
                            if (rcx_7 != 0)
                                sub_140a74f90(rcx_7)
                            
                            rbx_2 = &rbx_2[2]
                            j_1 = j_3
                            j_3 -= 1
                        while (j_1 != 1)
                    
                    *(rsi_1 + 8) = 0
                
                int64_t j_4 = sx.q(j_5)
                
                if (j_5 s> 0)
                    int64_t r15_1 = 0
                    int64_t j_2
                    
                    do
                        int64_t rbx_3 = sx.q(*(rsi_1 + 8))
                        int32_t rax_17 = (rbx_3 + 1).d
                        *(rsi_1 + 8) = rax_17
                        
                        if (rax_17 s> *(rsi_1 + 0xc))
                            sub_1405a4f90(rsi_1)
                        
                        int64_t* rax_20 = (rbx_3 << 4) + *rsi_1
                        *rax_20 = 0
                        rax_20[1] = 0
                        int32_t k_2 = var_250.d
                        
                        if (k_2 s> 0)
                            uint64_t k_1 = zx.q(k_2)
                            uint64_t k
                            
                            do
                                int64_t* rbx_5 = *rsi_1 + r15_1
                                int64_t rdi_2 = sx.q(rbx_5[1].d)
                                int32_t rax_21 = (rdi_2 + 1).d
                                rbx_5[1].d = rax_21
                                
                                if (rax_21 s> *(rbx_5 + 0xc))
                                    sub_1405a4cf0(rbx_5)
                                
                                *(*rbx_5 + (rdi_2 << 2)) = *r12_2
                                k = k_1
                                k_1 -= 1
                            while (k != 1)
                        
                        r15_1 += 0x10
                        j_2 = j_4
                        j_4 -= 1
                    while (j_2 != 1)
                
                r13_1 = var_240_1
                r14 = arg1
                
                if (*r12_2 != 5)
                    *r12_2 = 5
            
            int32_t rdi_3 = 0
            int32_t rax_23 = *(var_218_1 + rsi_1 - 0xf0)
            uint64_t r15_2 = zx.q(*(var_218_1 + rsi_1 - 0xec))
            
            if (rax_23 s>= 0)
                rdi_3 = rax_23
            
            *(r14 + 0xfc) = r15_2.d
            int32_t rax_25 = var_250.d - 1
            *(r14 + 0xf8) = rdi_3
            rax_25.b = r15_2.d == rax_25
            int64_t rbx_7 = sx.q(rdi_3) * 2
            *(r14 + 0xf5) = rax_25.b
            
            if (*(*(*rsi_1 + (rbx_7 << 3)) + (r15_2 << 2) - 4) != 5)
                int64_t r14_2 = sx.q(var_270_1.d)
                int64_t r13_2 = *(r13_1 + 0x10)
                int32_t rax_27 = (r14_2 + 1).d
                var_270_1.d = rax_27
                
                if (rax_27 s> var_270_1:4.d)
                    sub_140775520(&var_278)
                
                int64_t rax_28 = var_278
                int64_t rdx_5 = r14_2 * 9
                *(rax_28 + (rdx_5 << 3)) = 0
                *(rax_28 + (rdx_5 << 3) + 8) = 0
                *(rax_28 + (rdx_5 << 3) + 0x10) = 0
                *(rax_28 + (rdx_5 << 3) + 0x18) = 0
                *(rax_28 + (rdx_5 << 3) + 0x20) = 0
                *(rax_28 + (rdx_5 << 3) + 0x28) = 0
                *(rax_28 + (rdx_5 << 3) + 0x30) = 0
                *(rax_28 + (rdx_5 << 3) + 0x38) = 0
                *(rax_28 + (rdx_5 << 3) + 0x40) = 0
                int64_t rax_29 = var_278
                *(rax_29 + (rdx_5 << 3)) = 0x2d
                *(rax_29 + (rdx_5 << 3) + 0x28) = r13_2
                *(rax_29 + (rdx_5 << 3) + 0x30) = 1
                *(rax_29 + (rdx_5 << 3) + 0x38) = 1
                *(rax_29 + (rdx_5 << 3) + 0x40) = 1
                *(rax_29 + (rdx_5 << 3) + 0x20) = -1
                int64_t rcx_16 = var_278
                *(rcx_16 + (rdx_5 << 3) + 0x34) = (r15_2 - 1).d
                *(rcx_16 + (rdx_5 << 3) + 0x3c) = rdi_3
                int64_t rax_31 = var_278
                *(rax_31 + (rdx_5 << 3) + 0x10) = 0x100
                *(rax_31 + (rdx_5 << 3) + 0x18) = 2
                var_280.d |= 0x400
                *(rax_31 + (rdx_5 << 3) + 0x14) = 0x20
                *(rax_31 + (rdx_5 << 3) + 0x1c) = 5
                var_280:4.d |= 0x80
                *(*(*rsi_1 + (rbx_7 << 3)) + (r15_2 << 2) - 4) = 5
            
            r13_1 = var_240_1
            
            if (*(*(*rsi_1 + (rbx_7 << 3)) + (r15_2 << 2)) != 2)
                int64_t r14_3 = sx.q(var_270_1.d)
                int64_t r13_3 = *(r13_1 + 0x10)
                int32_t rax_34 = (r14_3 + 1).d
                var_270_1.d = rax_34
                
                if (rax_34 s> var_270_1:4.d)
                    sub_140775520(&var_278)
                
                int64_t rax_35 = var_278
                int64_t rcx_20 = r14_3 * 9
                *(rax_35 + (rcx_20 << 3)) = 0
                *(rax_35 + (rcx_20 << 3) + 8) = 0
                *(rax_35 + (rcx_20 << 3) + 0x10) = 0
                *(rax_35 + (rcx_20 << 3) + 0x18) = 0
                *(rax_35 + (rcx_20 << 3) + 0x20) = 0
                *(rax_35 + (rcx_20 << 3) + 0x28) = 0
                *(rax_35 + (rcx_20 << 3) + 0x30) = 0
                *(rax_35 + (rcx_20 << 3) + 0x38) = 0
                *(rax_35 + (rcx_20 << 3) + 0x40) = 0
                int64_t rax_36 = var_278
                *(rax_36 + (rcx_20 << 3) + 0x28) = r13_3
                r13_1 = var_240_1
                *(rax_36 + (rcx_20 << 3)) = 0x2d
                *(rax_36 + (rcx_20 << 3) + 0x30) = 1
                *(rax_36 + (rcx_20 << 3) + 0x38) = 1
                *(rax_36 + (rcx_20 << 3) + 0x40) = 1
                *(rax_36 + (rcx_20 << 3) + 0x20) = -1
                int64_t rax_37 = var_278
                *(rax_37 + (rcx_20 << 3) + 0x34) = r15_2.d
                *(rax_37 + (rcx_20 << 3) + 0x3c) = rdi_3
                int64_t rax_38 = var_278
                *(rax_38 + (rcx_20 << 3) + 0x10) = 0x20
                *(rax_38 + (rcx_20 << 3) + 0x18) = 5
                var_280.d |= 0x80
                *(rax_38 + (rcx_20 << 3) + 0x14) = 0x100
                *(rax_38 + (rcx_20 << 3) + 0x1c) = 2
                var_280:4.d |= 0x400
                *(*(*rsi_1 + (rbx_7 << 3)) + (r15_2 << 2)) = 2
            
            rdi = var_220
            r15 = var_288
            rax_40 = rdi_1
        
        if (rax_3 u> 0)
            int128_t* rax_41
            
            if (rax_40[4].d == 0)
                float var_1a8[0x4]
                rax_41 = &var_1a8
                var_1a8 = data_14399f5e0
            else
                float var_200[0x4]
                rax_41 = &var_200
                var_200 = *(rax_40 + 0x24)
            
            float zmm2[0x4] = *rax_41
            uint64_t rax_46 = zx.q(r15)
            r15 += 1
            uint64_t rax_47 = rax_46 * 2
            var_288 = r15
            float zmm0_1[0x4] = _mm_shuffle_ps(zmm2, zmm2, 0x55)
            zmm1 = _mm_shuffle_ps(zmm2, zmm2, 0xaa)
            var_168[rax_47 * 2] = zmm2[0]
            var_15c
            *(&var_15c + (rax_47 << 3)) = _mm_shuffle_ps(zmm2, zmm2, 0xff)[0]
            *(&var_164 + (rax_47 << 3)) = zmm0_1[0]
            var_160
            *(&var_160 + (rax_47 << 3)) = zmm1[0]
            
            if (*(r13_1 + 0x6c) u> 1)
                r15 += 1
                var_288 = r15
        
        r14 = arg1
        rsi_1 += 0x18
        i = i_1
        i_1 -= 1
        rax_7 = var_218_1
        r12_1 = r14 + 0xa0
    while (i != 1)

int64_t* r12_3 = rdi[0x18]
int32_t* r8

if (r12_3 != 0)
    void* rax_49 = (*(*r12_3 + 0x48))(r12_3)
    uint32_t r8_4 = (*(rax_49 + 0x18) u>> 4).d
    int32_t r9_2 = r8_4 << 8 ^ (0x9e3779b9 - r8_4)
    int32_t rdx_11 = neg.d(r8_4 + r9_2) ^ r9_2 u>> 0xd
    int32_t r8_7 = (r8_4 - r9_2 - rdx_11) ^ rdx_11 u>> 0xc
    int32_t r9_5 = (r9_2 - r8_7 - rdx_11) ^ r8_7 << 0x10
    int32_t rdx_14 = (rdx_11 - r9_5 - r8_7) ^ r9_5 u>> 5
    int32_t r8_10 = (r8_7 - r9_5 - rdx_14) ^ rdx_14 u>> 3
    int32_t r9_8 = (r9_5 - r8_10 - rdx_14) ^ r8_10 << 0xa
    void* rax_62
    rax_62, r8 = sub_1418cc8e0(r14 + 0xa0, (rdx_14 - r9_8 - r8_10) ^ r9_8 u>> 0xf, rax_49 + 0x18)
    int32_t rcx_29 = *(rdi + 0xd4)
    int32_t r15_3
    
    if (((rcx_29 - 1) & 0xffffffef) == 0)
        r15_3 = 4
    else if (rcx_29 == 0x21 && (*(arg3 + 0x1af0) & 2) != 0)
        r15_3 = 0x3b9c9308
    else if ((rcx_29.b & 0xf) != 0 || (rcx_29.b & 0xf0) == 0)
        r15_3 = 3
    else
        r15_3 = 0x3b9c9308
    
    if (*rax_62 != r15_3)
        int32_t rdi_4 = *(rax_49 + 0x78)
        int64_t rsi_2 = *(rax_49 + 0x18)
        int64_t rbx_9 = sx.q(var_270_1.d)
        int32_t rax_64 = (rbx_9 + 1).d
        var_270_1.d = rax_64
        
        if (rax_64 s> var_270_1:4.d)
            sub_140775520(&var_278)
        
        int64_t rax_65 = var_278
        int64_t r14_4 = rbx_9 * 9
        *(rax_65 + (r14_4 << 3)) = 0
        *(rax_65 + (r14_4 << 3) + 8) = 0
        *(rax_65 + (r14_4 << 3) + 0x10) = 0
        *(rax_65 + (r14_4 << 3) + 0x18) = 0
        *(rax_65 + (r14_4 << 3) + 0x20) = 0
        *(rax_65 + (r14_4 << 3) + 0x28) = 0
        *(rax_65 + (r14_4 << 3) + 0x30) = 0
        *(rax_65 + (r14_4 << 3) + 0x38) = 0
        *(rax_65 + (r14_4 << 3) + 0x40) = 0
        int64_t rax_66 = var_278
        *(rax_66 + (r14_4 << 3)) = 0x2d
        *(rax_66 + (r14_4 << 3) + 0x28) = rsi_2
        *(rax_66 + (r14_4 << 3) + 0x30) = rdi_4
        *(rax_66 + (r14_4 << 3) + 0x38) = 1
        *(rax_66 + (r14_4 << 3) + 0x40) = 1
        *(rax_66 + (r14_4 << 3) + 0x20) = -1
        int32_t rax_67 = sub_1418e1d20(*rax_62)
        int32_t rax_68 = sub_1418e1d20(r15_3)
        int64_t rdi_5 = var_278
        int32_t rax_69 =
            sub_1418bfb90(rax_67, rdi_5 + 0x10 + (r14_4 << 3), rdi_5 + 0x18 + (r14_4 << 3))
        var_280.d |= rax_69
        int32_t rax_70 =
            sub_1418bfb90(rax_68, rdi_5 + 0x14 + (r14_4 << 3), rdi_5 + 0x1c + (r14_4 << 3))
        var_280:4.d |= rax_70
        r14 = arg1
        *rax_62 = r15_3
    
    if (r12_3[4].d != 0 && rax_3 u> 0)
        int32_t rdx_24 = r12_3[5].d
        uint64_t rcx_36 = zx.q(var_288) * 2
        var_168[rcx_36 * 2] = *(r12_3 + 0x24)
        *(&var_164 + (rcx_36 << 3)) = rdx_24

int32_t var_260

if (var_270_1.d s> 0 || var_260 s> 0)
    r8.b = 1
    sub_1418c1fc0(&var_280, arg4)

sub_1418bc760(arg4, arg7, arg7, arg8, &var_168)
zmm1 = zx.o(0)
void* rdx_27 = *(arg2 + 0x450)
zmm1[0] = float.s(zx.q(*(arg6 + 0x37c)))
int32_t zmm0_2 = float.s(zx.q(*(arg6 + 0x378)))
*(rdx_27 + 8) = 0
*(rdx_27 + 0x18) = 0
*(rdx_27 + 0x14) = zmm1[0]
*(rdx_27 + 0x10) = zmm0_2
*(rdx_27 + 0x1c) = 0x3f800000
*(rdx_27 + 0x24) = 0
*(rdx_27 + 0x38) = 0
*(rdx_27 + 0x28) = (int.q(zmm0_2)).d
int32_t result = (int.q(zmm1[0])).d
*(rdx_27 + 0x2c) = result
*(r14 + 0x1d0) = arg8
*(r14 + 0x1c8) = arg7
*(r14 + 0x1c0) = 1
int64_t var_268

if (var_268 != 0)
    result = sub_140a74f90(var_268)

int64_t rcx_41 = var_278

if (rcx_41 != 0)
    result = sub_140a74f90(rcx_41)

__security_check_cookie(rax_1 ^ &var_2b8)
return result
