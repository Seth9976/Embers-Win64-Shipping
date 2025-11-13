// 函数: sub_141d73df0
// 地址: 0x141d73df0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_638
int64_t rax_1 = __security_cookie ^ &var_638
int64_t rbx = arg3
uint64_t r13 = 0
__builtin_memset(&arg1[1], 0, 0x18)
InitializeCriticalSection(&arg1[4])
SetCriticalSectionSpinCount(&arg1[4], 0xfa0)
arg1[9] = 0
arg1[0xa] = 0
arg1[0xc].d = 0
arg1[0xd] = 0
arg1[0xe] = 0
*(arg1 + 0x7c) = 0
arg1[0x10].d = rbx.d
*(arg1 + 0x84) = arg3:4.d
arg1[0xb].d = 0
*arg1 = 0
void* rsi = *arg2
int64_t var_600 = 0
uint64_t var_608
int32_t var_5f4 = *((*(*(rsi + 0xd0) + 0x10))(rsi + 0xd0, &var_608) + 4)
int32_t var_610 = 0
int32_t var_60c = 0
int64_t* var_5e8
int32_t rax_7 = *(*(*(rsi + 0xd0) + 0x10))(rsi + 0xd0, &var_5e8)
int32_t var_614 = rax_7
int32_t var_5f8 = rax_7
void* rax_8 = *arg2
int64_t* rcx_4 = *(rax_8 + 0x258)
uint64_t r12_1 = *(rax_8 + 0x250)

if (rcx_4 != 0)
    *(rcx_4 + 0xc) += 1

var_5e8 = rcx_4
int64_t* rsi_1 = rcx_4

if (rcx_4 != 0)
    int32_t rax_9 = rcx_4[1].d
    
    if (rax_9 == 0)
        rsi_1 = nullptr
        var_5e8 = nullptr
    else
        rcx_4[1].d = rax_9 + 1
    
    int32_t temp1_1 = *(rcx_4 + 0xc)
    *(rcx_4 + 0xc) -= 1
    
    if (temp1_1 == 1)
        (*(*rcx_4 + 8))(rcx_4, 1)
    
    rcx_4 = nullptr

if (rsi_1 == 0)
    r12_1 = 0

var_608 = r12_1

if (rcx_4 != 0)
    int32_t temp0_1 = *(rcx_4 + 0xc)
    *(rcx_4 + 0xc) -= 1
    
    if (temp0_1 == 1)
        (*(*rcx_4 + 8))(rcx_4, 1)

if (r12_1 != 0)
    int64_t* rcx_5 = data_143e29f28
    
    if (rsi_1 != 0)
        rsi_1[1].d += 1
    
    uint64_t var_5b0 = r12_1
    int64_t* var_5a8_1 = rsi_1
    
    if (rsi_1 != 0)
        rsi_1[1].d += 1
    
    void* var_5e0
    (*(*rcx_5 + 0x28))(rcx_5, &var_5e0, &var_5b0)
    
    if (rsi_1 != 0)
        rsi_1[1].d -= 1
        
        if (rsi_1[1].d == 1)
            (**rsi_1)(rsi_1)
            int32_t temp7_1 = *(rsi_1 + 0xc)
            *(rsi_1 + 0xc) -= 1
            
            if (temp7_1 == 1)
                (*(*rsi_1 + 8))(rsi_1, 1)
    
    void* rcx_8 = var_5e0
    int64_t* var_5d8
    
    if (rcx_8 != 0)
        *arg1 = rcx_8
        int128_t var_528
        int128_t zmm7_1 = sub_140e191a0(rcx_8, &var_528, arg5)
        char var_1a8 = data_1439ae51c
        int64_t var_80_1 = 0
        int32_t var_78_1 = 0
        int32_t var_74_1 = 4
        char var_70_1 = 0
        
        if (var_5d8 != 0)
            var_5d8[1].d += 1
            var_5d8[1].d += 1
        
        void* var_4b0_1 = var_5e0
        int128_t var_4e8 = var_528
        uint128_t var_518
        uint128_t var_4d8_1 = var_518
        int64_t var_4f8
        uint64_t var_4b8_1 = var_4f8
        int128_t var_508
        int128_t var_4c8_1 = var_508
        
        if (var_5d8 != 0)
            var_5d8[1].d += 1
            
            if (var_5d8 != 0)
                var_5d8[1].d -= 1
                
                if (var_5d8[1].d == 1)
                    (**var_5d8)(var_5d8)
                    int32_t temp15_1 = *(var_5d8 + 0xc)
                    *(var_5d8 + 0xc) -= 1
                    
                    if (temp15_1 == 1)
                        (*(*var_5d8 + 8))(var_5d8, 1)
        
        sub_140d99900(&var_1a8, &var_4e8)
        
        if (var_5d8 != 0)
            var_5d8[1].d -= 1
            
            if (var_5d8[1].d == 1)
                (**var_5d8)(var_5d8)
                int32_t temp14_1 = *(var_5d8 + 0xc)
                *(var_5d8 + 0xc) -= 1
                
                if (temp14_1 == 1)
                    (*(*var_5d8 + 8))(var_5d8, 1)
        
        if (var_5d8 != 0)
            var_5d8[1].d -= 1
            
            if (var_5d8[1].d == 1)
                (**var_5d8)(var_5d8)
                int32_t temp16_1 = *(var_5d8 + 0xc)
                *(var_5d8 + 0xc) -= 1
                
                if (temp16_1 == 1)
                    (*(*var_5d8 + 8))(var_5d8, 1)
        
        if (var_5d8 != 0)
            var_5d8[1].d += 1
        
        void* var_5a0 = var_5e0
        int64_t* var_598_1 = var_5d8
        
        if (var_5d8 != 0)
            var_5d8[1].d += 1
        
        char var_308
        int512_t zmm1_2 = sub_140d94680(&var_308, &var_5a0, &var_1a8)
        
        if (var_5d8 != 0)
            var_5d8[1].d -= 1
            
            if (var_5d8[1].d == 1)
                (**var_5d8)(var_5d8)
                int32_t temp18_1 = *(var_5d8 + 0xc)
                *(var_5d8 + 0xc) -= 1
                
                if (temp18_1 == 1)
                    (*(*var_5d8 + 8))(var_5d8, 1)
        
        if (rsi_1 != 0)
            rsi_1[1].d += 2
        
        uint64_t var_5c0 = r12_1
        
        if (rsi_1 != 0)
            int32_t rax_27 = rsi_1[1].d
            rsi_1[1].d = rax_27
            
            if (rax_27 == 0)
                (**rsi_1)(rsi_1)
                int32_t temp21_1 = *(rsi_1 + 0xc)
                *(rsi_1 + 0xc) -= 1
                
                if (temp21_1 == 1)
                    (*(*rsi_1 + 8))(rsi_1, 1)
        
        void var_300
        void* rdx_6 = &var_300
        char r9 = data_1439ae51c
        char var_448 = r9
        void* var_320_1 = nullptr
        void* var_1e0
        
        if (var_1e0 != 0)
            rdx_6 = var_1e0
        
        int32_t var_318_1 = 0
        int32_t var_314_1 = 4
        char var_310_1 = 0
        int32_t var_1d8
        sub_140d90c10(&var_5c0, rdx_6 + sx.q(var_1d8 - 1) * 0x48, &var_448, r9, zmm1_2)
        int32_t rdi_3 = var_318_1
        int32_t i = 0
        int32_t i_3 = 0
        int32_t temp19_1
        int32_t temp20_1
        temp19_1:temp20_1 = sx.q(rdi_3)
        void var_440
        
        if ((temp20_1 - temp19_1) s>> 1 s> 0)
            int64_t rbx_1 = 0
            int64_t r15_2 = sx.q(rdi_3 - 1)
            int64_t r12_3 = r15_2 * 0x48
            int32_t temp23_1
            int32_t temp24_1
            
            do
                if (r13 != r15_2)
                    void* rcx_23 = &var_440
                    
                    if (var_320_1 != 0)
                        rcx_23 = var_320_1
                    
                    sub_140a4bff0(rcx_23 + rbx_1, r12_3 + rcx_23, 0x48)
                    i = i_3
                    rdi_3 = var_318_1
                
                i += 1
                temp23_1:temp24_1 = sx.q(rdi_3)
                i_3 = i
                r13 += 1
                r15_2 -= 1
                r12_3 -= 0x48
                rbx_1 += 0x48
            while (i s< (temp24_1 - temp23_1) s>> 1)
            rbx = arg3
            r13 = 0
            r12_1 = var_608
        
        int32_t r15_3 = 0
        
        if (rdi_3 s> 0)
            do
                void* rdx_11 = &var_440
                
                if (var_320_1 != 0)
                    rdx_11 = var_320_1
                
                sub_140d99900(&var_308, rdx_11 + sx.q(r15_3) * 0x48)
                rdi_3 = var_318_1
                r15_3 += 1
            while (r15_3 s< rdi_3)
        
        sub_140d94d20(&var_440)
        
        if (rsi_1 != 0)
            rsi_1[1].d -= 1
            
            if (rsi_1[1].d == 1)
                (**rsi_1)(rsi_1)
                int32_t temp26_1 = *(rsi_1 + 0xc)
                *(rsi_1 + 0xc) -= 1
                
                if (temp26_1 == 1)
                    (*(*rsi_1 + 8))(rsi_1, 1)
        
        if (rsi_1 != 0)
            rsi_1[1].d -= 1
            
            if (rsi_1[1].d == 1)
                (**rsi_1)(rsi_1)
                int32_t temp27_1 = *(rsi_1 + 0xc)
                *(rsi_1 + 0xc) -= 1
                
                if (temp27_1 == 1)
                    (*(*rsi_1 + 8))(rsi_1, 1)
        
        if (rdi_3 s> 0)
            int128_t var_48_1 = zmm7_1
            
            if (rsi_1 != 0)
                rsi_1[1].d += 1
            
            uint64_t var_590 = r12_1
            int64_t* var_588_1 = rsi_1
            
            if (rsi_1 != 0)
                rsi_1[1].d += 1
            
            sub_140da8da0()
            int128_t* rdi_4 = &data_143e242d0
            void var_498
            int128_t* rax_50 = sub_140d9fd80(&var_308, &var_498, &var_590)
            
            if (*(rax_50 + 0x48) != 0)
                rdi_4 = rax_50
            
            int64_t var_578_1 = (*rdi_4).q
            uint128_t var_568_1 = rdi_4[1]
            int64_t* rdi_5 = rdi_4[4].q
            int128_t var_558_1 = rdi_4[2]
            uint32_t var_548_1 = (rdi_4[3].q).d
            
            if (rdi_5 != 0)
                rdi_5[1].d += 1
            
            char var_450
            
            if (var_450 != 0)
                char var_450_1 = 0
                int64_t* var_458
                
                if (var_458 != 0)
                    var_458[1].d -= 1
                    
                    if (var_458[1].d == 1)
                        (**var_458)(var_458)
                        int32_t temp37_1 = *(var_458 + 0xc)
                        *(var_458 + 0xc) -= 1
                        
                        if (temp37_1 == 1)
                            (*(*var_458 + 8))(var_458, 1)
            
            if (rsi_1 != 0)
                rsi_1[1].d -= 1
                
                if (rsi_1[1].d == 1)
                    (**rsi_1)(rsi_1)
                    int32_t temp36_1 = *(rsi_1 + 0xc)
                    *(rsi_1 + 0xc) -= 1
                    
                    if (temp36_1 == 1)
                        (*(*rsi_1 + 8))(rsi_1, 1)
            
            int128_t zmm3 = var_568_1:0xc.d
            int128_t zmm5_1 = var_558_1:4.d
            int128_t zmm8
            zmm8.d = zmm3.d f* data_143dbb1f0.d
            int128_t zmm0_1
            zmm0_1.d = zmm5_1.d f* data_143dbb1f0:4.d
            int128_t zmm4_1 = var_558_1:8.d
            zmm7_1.d = var_558_1.d.d f* data_143dbb1f0.d
            zmm8.d = zmm8.d f+ zmm0_1.d
            uint128_t zmm2_1 = var_578_1.d
            zmm0_1.d = zmm4_1.d f* data_143dbb1f0:4.d
            uint128_t zmm1_3 = zmm2_1
            zmm2_1.d = zmm2_1.d f* var_558_1.d
            zmm1_3.d = zmm1_3.d f* zmm3.d
            zmm7_1.d = zmm7_1.d f+ zmm0_1.d
            zmm3 = var_578_1:4.d
            zmm0_1 = zmm3
            zmm3.d = zmm3.d f* zmm4_1.d
            zmm0_1.d = zmm0_1.d f* zmm5_1.d
            zmm3.d = zmm3.d f+ zmm2_1.d
            zmm7_1.d = zmm7_1.d f+ var_548_1
            zmm1_3.d = zmm1_3.d f+ zmm0_1.d
            zmm8.d = zmm8.d f+ var_558_1:0xc.d
            zmm3.d = zmm3.d f+ zmm7_1.d
            zmm1_3.d = zmm1_3.d f+ zmm8.d
            var_600:4.d = int.d(zmm7_1.d)
            r13 = zx.q(int.d(zmm8.d))
            var_600.d = r13.d
            int32_t rax_56 = int.d(zmm1_3.d)
            zmm1_3.d = var_518:0xc.d.d f* var_528.d
            var_614 = rax_56
            var_5f8 = rax_56
            int32_t rax_57 = int.d(zmm3.d)
            zmm3 = var_528:4.d
            int32_t var_5f4_1 = rax_57
            zmm0_1.d = zmm3.d f* var_508:4.d
            zmm1_3.d = zmm1_3.d f+ zmm0_1.d
            zmm0_1.d = var_508:8.d.d f* zmm3.d
            int32_t rax_58 = int.d(zmm1_3.d)
            zmm1_3.d = var_508.d.d f* var_528.d
            var_610 = rax_58
            zmm1_3.d = zmm1_3.d f+ zmm0_1.d
            var_60c = int.d(zmm1_3.d)
            
            if (rdi_5 != 0)
                rdi_5[1].d -= 1
                
                if (rdi_5[1].d == 1)
                    (**rdi_5)(rdi_5)
                    int32_t temp38_1 = *(rdi_5 + 0xc)
                    *(rdi_5 + 0xc) -= 1
                    
                    if (temp38_1 == 1)
                        (*(*rdi_5 + 8))(rdi_5, 1)
        
        int32_t i_6
        int32_t i_4 = i_6
        void* var_1b8
        
        if (i_4 != 0)
            int64_t* r15_7 = var_1b8 + 8
            int32_t i_1
            
            do
                int64_t* rdi_6 = *r15_7
                
                if (rdi_6 != 0)
                    rdi_6[1].d -= 1
                    
                    if (rdi_6[1].d == 1)
                        (**rdi_6)(rdi_6)
                        int32_t temp32_1 = *(rdi_6 + 0xc)
                        *(rdi_6 + 0xc) -= 1
                        
                        if (temp32_1 == 1)
                            (*(*rdi_6 + 8))(rdi_6, 1)
                
                r15_7 = &r15_7[2]
                i_1 = i_4
                i_4 -= 1
            while (i_1 != 1)
        
        if (var_1b8 != 0)
            sub_140a74f90(var_1b8)
        
        int64_t* var_1c0
        
        if (var_1c0 != 0)
            var_1c0[1].d -= 1
            
            if (var_1c0[1].d == 1)
                (**var_1c0)(var_1c0)
                int32_t temp31_1 = *(var_1c0 + 0xc)
                *(var_1c0 + 0xc) -= 1
                
                if (temp31_1 == 1)
                    (*(*var_1c0 + 8))(var_1c0, 1)
        
        sub_140d94d20(&var_300)
        void var_1a0
        sub_140d94d20(&var_1a0)
    
    if (var_5d8 != 0)
        var_5d8[1].d -= 1
        
        if (var_5d8[1].d == 1)
            (**var_5d8)(var_5d8)
            int32_t temp10_1 = *(var_5d8 + 0xc)
            *(var_5d8 + 0xc) -= 1
            
            if (temp10_1 == 1)
                (*(*var_5d8 + 8))(var_5d8, 1)

uint64_t i_7 = zx.q(arg6)

if (i_7.d s> *(arg1 + 0x54))
    sub_140775c70(&arg1[9], i_7.d)

if (i_7.d != 0)
    uint64_t i_5 = i_7
    var_608 = var_5f8.q u>> 0x20
    uint64_t i_2
    
    do
        int64_t rdi_9 = sx.q(arg1[0xa].d)
        int32_t rax_70 = (rdi_9 + 1).d
        arg1[0xa].d = rax_70
        
        if (rax_70 s> *(arg1 + 0x54))
            sub_140775520(&arg1[9])
        
        sub_141d74930(arg1[9] + rdi_9 * 0x48, arg4, rbx)
        uint32_t rdx_17 = var_608.d
        int64_t rcx_52 = sx.q(arg1[0xa].d) * 9
        int64_t rax_73 = arg1[9]
        *(rax_73 + (rcx_52 << 3) - 0x20) = r13.d
        *(rax_73 + (rcx_52 << 3) - 0x1c) = (var_600 u>> 0x20).d
        *(rax_73 + (rcx_52 << 3) - 0x14) = rdx_17
        *(rax_73 + (rcx_52 << 3) - 0x18) = var_614
        int64_t rcx_53 = sx.q(arg1[0xa].d) * 9
        int64_t rax_75 = arg1[9]
        *(rax_75 + (rcx_53 << 3) - 0x10) = var_610
        *(rax_75 + (rcx_53 << 3) - 0xc) = var_60c
        i_2 = i_5
        i_5 -= 1
    while (i_2 != 1)
    rsi_1 = var_5e8

arg1[0xf].d = data_143f3833c
sub_1419a21e0(0)

if (rsi_1 != 0)
    rsi_1[1].d -= 1
    
    if (rsi_1[1].d == 1)
        (**rsi_1)(rsi_1)
        int32_t temp5_1 = *(rsi_1 + 0xc)
        *(rsi_1 + 0xc) -= 1
        
        if (temp5_1 == 1)
            (*(*rsi_1 + 8))(rsi_1, 1)

int64_t* rbx_3 = arg2[1]

if (rbx_3 != 0)
    rbx_3[1].d -= 1
    
    if (rbx_3[1].d == 1)
        (**rbx_3)(rbx_3)
        int32_t temp8_1 = *(rbx_3 + 0xc)
        *(rbx_3 + 0xc) -= 1
        
        if (temp8_1 == 1)
            int64_t r8_6 = *rbx_3
            (*(r8_6 + 8))(rbx_3, 1, r8_6)

__security_check_cookie(rax_1 ^ &var_638)
return arg1
