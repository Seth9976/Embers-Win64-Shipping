// 函数: sub_141a3d400
// 地址: 0x141a3d400
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_468
int64_t rax_1 = __security_cookie ^ &var_468
void* rax_3 = (*(*arg2 + 8))(arg2, arg1)
int32_t var_5c = 8
int64_t var_68 = 0
int32_t var_60 = 0
void var_228
sub_141a30390(&var_228)
int32_t var_42c = 0
int128_t* var_428 = 2.q
int32_t var_434 = 0
void var_88
void* var_308 = &var_88
int64_t var_420 = 2.q
int128_t zmm0 = var_428.o
int32_t var_42c_1 = 0
int128_t var_2f0 = zmm0
int32_t var_434_1 = 0
int128_t var_2d0 = zmm0
int64_t var_2d8 = 2.q
int32_t var_2a8 = 0x3f800000
int128_t var_2c0 = 2.q.o
int64_t* var_300 = rax_3 + 0xd0
int64_t* var_2f8 = arg2
int32_t var_2a0 = 0
char var_2b0 = 0
int32_t var_2a4 = 0
int64_t var_298
__builtin_memset(&var_298, 0, 0x24)
int128_t zmm6 = sub_141a4e430(arg1, &var_308, &var_228)
uint64_t var_3f8
__builtin_memset(&var_3f8, 0, 0x30)
sub_141a340e0(rax_3 + 0xa0, &var_3f8)
int64_t var_3d8
sub_141a320d0(&var_3d8)
int64_t* var_3e8
sub_140846380(&var_3e8)
uint64_t rcx_8 = var_3f8

if (rcx_8 != 0)
    sub_140a74f90(rcx_8)

var_428 = nullptr
int64_t var_420_1 = 0
void var_1e8
sub_141a2fdf0(&var_3f8, &var_1e8)
int128_t var_48 = zmm6

while (true)
    int64_t* rdi_1 = var_3e8
    
    while (true)
        int64_t* rax_6
        
        if (rdi_1.d != 0xffffffff || var_3e8:4.d == 0)
            rax_6.b = 1
        else
            rax_6.b = 0
        
        if (rax_6.b == 0)
            int128_t* rcx_67 = var_428
            
            if (rcx_67 != 0)
                sub_140a74f90(rcx_67)
            
            int64_t var_288
            
            if (var_288 != 0)
                sub_140a74f90(var_288)
            
            int64_t rcx_69 = var_298
            
            if (rcx_69 != 0)
                sub_140a74f90(rcx_69)
            
            int64_t result = sub_141a32e20(&var_228)
            
            if (var_68 != 0)
                result = sub_140a74f90(var_68)
            
            __security_check_cookie(rax_1 ^ &var_468)
            return result
        
        bool cond:0_1 = var_420_1:4.d s>= 0
        int32_t r13_1 = 0
        var_420_1.d = 0
        
        if (not(cond:0_1))
            sub_1405c5660(&var_428, 0)
            r13_1 = var_420_1.d
            rdi_1 = var_3e8
        
        uint128_t var_418
        sub_141a2e8d0(&var_418, &var_1e8, rdi_1)
        uint128_t zmm1_1 = var_418
        int64_t var_330
        sub_141a2e8d0(&var_330, zmm1_1.q, -1)
        void* i_1 = zmm1_1.q
        int32_t var_408
        int32_t rdi_2 = var_408
        void* const i = zmm1_1:8.q
        int64_t var_328
        int32_t var_320
        
        while (i_1 != var_330 || i != var_328 || rdi_2 != var_320)
            int64_t rax_7 = sx.q(*(i + 0x1c))
            int64_t* rax_11
            
            if (rax_7.d == 0xffffffff)
                int64_t var_370 = 0
                rax_11 = &var_370
                int32_t var_368_1 = 0
            else
                int64_t rdx_6 = *(i_1 + 0x40)
                int64_t r8_2 = rax_7 * 3
                int32_t var_378_1 = *(rdx_6 + (r8_2 << 2) + 4)
                int64_t var_380
                rax_11 = &var_380
                var_380 = *(i_1 + 0x50) + sx.q(*(rdx_6 + (r8_2 << 2))) * 0x28
            
            int64_t r14_1 = sx.q(r13_1)
            int64_t r12_1 = (*rax_11).q
            r13_1 = (r14_1 + 1).d
            int64_t r15_1 = sx.q(rdi_2) * 5
            var_420_1.d = r13_1
            
            if (r13_1 s> var_420_1:4.d)
                sub_1405c4ec0(&var_428)
                r13_1 = var_420_1.d
            
            int128_t* rax_13 = var_428
            int64_t rcx_16 = r14_1 * 5
            rdi_2 += 1
            *(rax_13 + (rcx_16 << 3)) = *(r12_1 + (r15_1 << 3))
            *(rax_13 + (rcx_16 << 3) + 0x10) = *(r12_1 + (r15_1 << 3) + 0x10)
            *(rax_13 + (rcx_16 << 3) + 0x20) = *(r12_1 + (r15_1 << 3) + 0x20)
            
            do
                int64_t rax_14 = sx.q(*(i + 0x1c))
                int64_t* rax_18
                
                if (rax_14.d == 0xffffffff)
                    int64_t var_350 = 0
                    rax_18 = &var_350
                    int32_t var_348_1 = 0
                else
                    int64_t rdx_8 = *(i_1 + 0x40)
                    int64_t r8_3 = rax_14 * 3
                    int32_t var_358_1 = *(rdx_8 + (r8_3 << 2) + 4)
                    int64_t var_360
                    rax_18 = &var_360
                    var_360 = *(i_1 + 0x50) + sx.q(*(rdx_8 + (r8_3 << 2))) * 0x28
                
                var_418 = *rax_18
                
                if (rdi_2 s>= 0 && rdi_2 s< var_418:8.d)
                    break
                
                if (*(i + 0x10) != 0xffffffff || *(i + 0x14) == 0)
                    int64_t rdx_9 = *(i + 0x10)
                    
                    if (rdx_9.d == 0xffffffff)
                        i = i_1
                    else
                        i = ((sx.q(*(*(i_1 + 0x20) + sx.q(rdx_9.d) * 0xc))
                            + sx.q((rdx_9 u>> 0x20).d)) << 5) + *(i_1 + 0x30)
                else
                    i = nullptr
                
                rdi_2 = 0
            while (i != 0)
        
        var_418.q = sub_141a69d40
        sub_141a2e4b0(var_428, r13_1, &var_418)
        int128_t zmm0_3 = var_3f8.o
        int64_t var_118
        __builtin_memset(&var_118, 0, 0x6c)
        int128_t var_128 = zmm0_3
        int32_t var_ac_1 = 0x80
        int32_t var_a8_1 = 0xffffffff
        int32_t var_a4_1 = 0
        int64_t var_98_1 = 0
        int32_t var_90_1 = 0
        sub_141a5bbe0(&var_128, &var_428)
        void var_188
        sub_141a2ff30(&var_330, &var_188, var_3f8)
        int128_t var_260
        sub_141a2e9f0(&var_260, &var_188, var_320.q)
        int128_t var_248 = var_260
        int64_t var_250
        int64_t var_238_1 = var_250
        char var_448_1 = &var_248
        sub_141a5bf60(&var_128, rax_3 + 0xd0, arg2, &var_428)
        int64_t rbx_4 = sx.q(*(rax_3 + 0xa8))
        char rax_23
        
        if (rbx_4.d != 0)
            rax_23 = sub_141a5adc0((sx.q((rbx_4 - 1).d) << 4) + *(rax_3 + 0xa0), &var_128)
        
        int64_t var_f8
        
        if (rbx_4.d == 0 || rax_23 == 0)
            zmm6 = var_128
            int32_t rax_24 = (rbx_4 + 1).d
            *(rax_3 + 0xa8) = rax_24
            
            if (rax_24 s> *(rax_3 + 0xac))
                sub_1405a4f90(rax_3 + 0xa0)
            
            *(*(rax_3 + 0xa0) + rbx_4 * 0x10) = zmm6
            int64_t rdi_3 = sx.q(*(rax_3 + 0xc8))
            int32_t rax_26 = (rdi_3 + 1).d
            *(rax_3 + 0xc8) = rax_26
            
            if (rax_26 s> *(rax_3 + 0xcc))
                sub_1405fdd60(rax_3 + 0xc0)
            
            sub_141a2f0c0(rdi_3 * 0x70 + *(rax_3 + 0xc0), &var_f8)
            int64_t rdi_4 = sx.q(*(rax_3 + 0xb8))
            int32_t rax_27 = (rdi_4 + 1).d
            *(rax_3 + 0xb8) = rax_27
            
            if (rax_27 s> *(rax_3 + 0xbc))
                sub_1405c4e40(rax_3 + 0xb0)
            
            int64_t* rcx_37 = (rdi_4 << 5) + *(rax_3 + 0xb0)
            *rcx_37 = 0
            *rcx_37 = var_118
            __builtin_memset(&var_118, 0, 0x20)
            __builtin_memset(&rcx_37[1], 0, 0x18)
            rcx_37[2] = 0
        
        int64_t var_d8
        sub_1405ae180(&var_d8)
        int64_t var_e8
        
        if (var_e8 != 0)
            sub_140a74f90(var_e8)
        
        int64_t rcx_40 = var_f8
        
        if (rcx_40 != 0)
            sub_140a74f90(rcx_40)
        
        int64_t var_108
        
        if (var_108 != 0)
            sub_140a74f90(var_108)
        
        int64_t rcx_42 = var_118
        
        if (rcx_42 != 0)
            sub_140a74f90(rcx_42)
        
        rdi_1 = var_3e8
        int128_t* rdx_24
        int128_t* rsi_1
        int128_t* var_3e0
        
        if (rdi_1.d != 0xffffffff)
        label_141a3da98:
            rsi_1 = var_3e0
            rdx_24 = ((sx.q(*(rsi_1[2].q + sx.q(rdi_1.d) * 0xc)) + sx.q((rdi_1 u>> 0x20).d)) << 5)
                + rsi_1[3].q
        else if (var_3e8:4.d != 0)
            continue
        else
            if (rdi_1.d != rdi_1.d)
                goto label_141a3da98
            
            rsi_1 = var_3e0
            rdx_24 = rsi_1
        uint64_t var_3f0
        uint64_t rbx_5 = var_3f0
        var_418 = *rdx_24
        int64_t rax_34 = var_418:8.q
        
        if (rax_34.b == rbx_5.b && (rax_34.b == 2 || (rax_34 u>> 0x20).d == (rbx_5 u>> 0x20).d))
            int64_t* rax_36 = rdx_24[1].q
            rdx_24.b = 1
            var_3e8 = rax_36
            sub_141a58090(&var_3f8, rdx_24.b)
            break
        
        uint8_t rax_37 = var_3f8.b
        
        if (rax_37 == 2 || rbx_5.b == 2)
        label_141a3db3a:
            
            if (rbx_5.b != 0)
            label_141a3db52:
                char var_438_1
                
                if (rbx_5.b != 1)
                    var_438_1.q = rbx_5
                else
                    uint32_t var_434_3 = (rbx_5 u>> 0x20).d
                    rbx_5 = 0.q
            else
                uint32_t var_434_2 = (rbx_5 u>> 0x20).d
                rbx_5 = 1.q
        else
            int32_t rcx_47 = var_3f8:4.d
            int32_t temp0_1 = var_3f0:4.d
            int32_t var_3bc_1
            
            if (rcx_47 s> temp0_1)
                var_3bc_1 = 0
                rbx_5 = 2.q
            else
                if (rcx_47 != temp0_1)
                    goto label_141a3db3a
                
                if (rax_37 != 0 && rbx_5.b != 0)
                    goto label_141a3db52
                
                var_3bc_1 = 0
                rbx_5 = 2.q
        
        int64_t* var_3b8
        sub_141a4b4f0(&var_3f8, &var_3b8, rdi_1, rbx_5, 1)
        rax_6 = var_3b8
        
        while (true)
            int128_t* r8_12
            
            if (rax_6.d != 0xffffffff)
                r8_12 = ((sx.q(*(rsi_1[2].q + sx.q(rax_6.d) * 0xc)) + sx.q((rax_6 u>> 0x20).d))
                    << 5) + rsi_1[3].q
            else
                if ((rax_6 u>> 0x20).d != 0)
                    break
                
                if (rax_6.d == rax_6.d)
                    r8_12 = rsi_1
                else
                    r8_12 = ((sx.q(*(rsi_1[2].q + sx.q(rax_6.d) * 0xc)) + sx.q((rax_6 u>> 0x20).d))
                        << 5) + rsi_1[3].q
            
            var_418 = *r8_12
            int64_t rcx_56 = var_418.q
            
            if (rcx_56.b != rbx_5.b)
                break
            
            if (rcx_56.b != 2 && (rcx_56 u>> 0x20).d != (rbx_5 u>> 0x20).d)
                break
            
            var_3e8 = rax_6
            rdi_1 = rax_6
            int32_t var_268
            rax_6 = *sub_141a4b4f0(&var_3f8, &var_268, rax_6, rbx_5, 1)
            var_3b8 = rax_6
        
        uint128_t* r8_17
        
        if (rdi_1.d == 0xffffffff)
            r8_17 = rsi_1
        else
            r8_17 = ((sx.q(*(rsi_1[2].q + sx.q(rdi_1.d) * 0xc)) + sx.q((rdi_1 u>> 0x20).d)) << 5)
                + rsi_1[3].q
        
        var_418 = *r8_17
        int64_t rcx_64 = var_418:8.q
        
        if (rax_6.d != 0xffffffff)
        label_141a3dc7e:
            rsi_1 = ((sx.q(*(rsi_1[2].q + sx.q(rax_6.d) * 0xc)) + sx.q((rax_6 u>> 0x20).d)) << 5)
                + rsi_1[3].q
        label_141a3dc9e:
            uint128_t zmm0_6 = *rsi_1
            var_418 = zmm0_6
            rax_6 = var_418.q
            
            if (rax_6.b != rbx_5.b)
            label_141a3dcc2:
                var_418 = zmm0_6
                rcx_64 = var_418.q
                
                if (rcx_64.b == 0)
                    uint32_t var_42c_2 = (rcx_64 u>> 0x20).d
                    rcx_64 = 1.q
                else
                    char var_430_1
                    
                    if (rcx_64.b != 1)
                        var_430_1.q = rcx_64
                    else
                        uint32_t var_42c_3 = (rcx_64 u>> 0x20).d
                        rcx_64 = 0.q
            else if (rax_6.b != 2 && (rax_6 u>> 0x20).d != (rbx_5 u>> 0x20).d)
                goto label_141a3dcc2
        else if ((rax_6 u>> 0x20).d == 0)
            if (rax_6.d == rax_6.d)
                goto label_141a3dc9e
            
            goto label_141a3dc7e
        
        int64_t var_338_1 = rcx_64
        var_3f8.o = rbx_5.o
