// 函数: sub_1406d2110
// 地址: 0x1406d2110
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t arg_8 = 0
uint64_t var_2c8
uint64_t* arg_18 = &var_2c8
int16_t* rax = nullptr
var_2c8 = 0
int32_t rbx = arg1[1].d
int64_t rdi = *arg1

if (rbx != 0)
    sub_1405a4c70(&var_2c8, rbx, 0)
    memcpy(var_2c8, rdi, rbx * 2)
    rax = var_2c8
else
    int32_t var_2bc_1 = 0

int16_t* const rdi_1 = &data_142d40450

if (rbx != 0)
    rdi_1 = rax

uint64_t var_308 = 0
int32_t rdx_2 = 0
int32_t var_300 = 0
int32_t rcx_2 = 0
int32_t var_2fc = 0

if (rdi_1 != 0 && *rdi_1 != 0)
    int64_t rbx_1 = -1
    
    do
        rbx_1 += 1
    while (rdi_1[rbx_1] != 0)
    
    if (rbx_1.d + 1 s> 0)
        sub_1405947f0(&var_308, rbx_1.d + 1)
        rcx_2 = var_2fc
        rdx_2 = var_300
    
    int32_t rax_1 = rdx_2 + rbx_1.d + 1
    int32_t var_300_1 = rax_1
    
    if (rax_1 s> rcx_2)
        sub_140594770(&var_308)
    
    UnDecorator::getReferenceType(var_308, rdi_1, (rbx_1.d + 1) * 2)

int64_t var_278
int16_t* var_268
sub_1406c8f40(&var_268, &data_143cdf120, sub_140b20ee0(&var_278, &var_308, 0x5f))
int64_t rcx_8 = var_278

if (rcx_8 != 0)
    sub_140a74f90(rcx_8)

uint64_t rcx_9 = var_308

if (rcx_9 != 0)
    sub_140a74f90(rcx_9)

int64_t* rax_3 = __crt_deferred_errno_cache::get(&data_143db7b00)
int16_t* const rdx_6 = &data_142d40450
int32_t var_260

if (var_260 != 0)
    rdx_6 = var_268

int64_t r8_6 = *rax_3
(*(r8_6 + 0x170))(rax_3, rdx_6, r8_6)
int64_t var_248
sub_1406cabe0(&var_248, arg1)
uint64_t var_208
arg_18 = &var_208
var_208 = 0
sub_1406c9350(&var_208, arg1[8], arg1[9].d, 0, 0)
char var_1f8 = arg1[0xa].b
uint64_t var_1f0
arg_18 = &var_1f0
var_1f0 = 0
int64_t rbx_3 = sx.q(arg1[0xc].d)
int64_t rdi_2 = arg1[0xb]
int32_t var_1e8 = rbx_3.d

if (rbx_3.d != 0)
    sub_14061cb30(&var_1f0, rbx_3.d, 0)
    memcpy(var_1f0, rdi_2, (rbx_3 << 4).d)
else
    int32_t var_1e4_1 = 0

int32_t var_1e0 = arg1[0xd].d
int128_t var_2b8 = zx.o(0)
var_2b8.q = 0
var_2b8:8.q = 0
int64_t rcx_15 = var_248

if (rcx_15 != 0)
    sub_140a74f90(rcx_15)

var_248 = 0
int64_t var_240 = 0
int64_t var_288 = 0
int32_t var_280 = 0
int512_t zmm2 = sub_141d49a40(sub_140a1ae80(), &var_248, &var_288, 0, 0, 0, nullptr, 1)
int16_t* var_258
sub_1406c8fb0(&var_258, &var_268)
arg_18 = &var_308
var_308 = 0
int64_t rdi_3 = var_288
int32_t var_300_2 = var_280

if (var_280 != 0)
    sub_1405a4c70(&var_308, var_280, 0)
    memcpy(var_308, rdi_3, var_280 * 2)
else
    var_2fc = 0

arg_18 = &var_308
int64_t* rax_6 = sub_140686770(&var_278, &var_308, zmm2)
arg_8 = 4
uint64_t rcx_21 = var_308

if (rcx_21 != 0)
    sub_140a74f90(rcx_21)

int16_t* const rbx_5 = &data_142d40450
int32_t var_250

if (var_250 != 0)
    rbx_5 = var_258

sub_140a464c0()
rbx_5.b = sub_140b27210(rax_6, rbx_5, 0, &data_14399ea08, 0) == 0
int32_t r15 = 0
int64_t rcx_23 = var_278

if (rcx_23 != 0)
    sub_140a74f90(rcx_23)

if (rbx_5.b == 0)
    int64_t* r14_1 = arg1[8]
    void* r12_2 = sx.q(arg1[9].d) * 0x178 + r14_1
    
    if (r14_1 == r12_2)
    label_1406d29c0:
        *arg2 = 1
    else
        uint64_t var_2f8
        arg_18 = &var_2f8
        void* rdi_5 = &r14_1[3]
        
        while (true)
            uint64_t var_1c8
            arg_8.q = &var_1c8
            var_1c8 = 0
            int32_t rbx_6 = *(rdi_5 - 0x10)
            int64_t rsi_1 = *r14_1
            
            if (rbx_6 != 0)
                sub_1405a4c70(&var_1c8, rbx_6, 0)
                memcpy(var_1c8, rsi_1, rbx_6 * 2)
            else
                int32_t var_1bc_1 = 0
            
            uint64_t var_1b8
            arg_8.q = &var_1b8
            var_1b8 = 0
            int32_t rbx_7 = *rdi_5
            int64_t rsi_2 = *(rdi_5 - 8)
            int32_t var_1b0_1 = rbx_7
            
            if (rbx_7 != 0)
                sub_1405a4c70(&var_1b8, rbx_7, 0)
                memcpy(var_1b8, rsi_2, rbx_7 * 2)
            else
                int32_t var_1ac_1 = 0
            
            uint64_t var_1a8
            arg_8.q = &var_1a8
            var_1a8 = 0
            int64_t rbx_8 = sx.q(*(rdi_5 + 0x10))
            int64_t rsi_3 = *(rdi_5 + 8)
            int32_t var_1a0_1 = rbx_8.d
            
            if (rbx_8.d != 0)
                sub_14061cb30(&var_1a8, rbx_8.d, 0)
                memcpy(var_1a8, rsi_3, (rbx_8 << 4).d)
            else
                int32_t var_19c_1 = 0
            
            int128_t var_198_1 = *(rdi_5 + 0x18)
            int32_t var_188_1 = (*(rdi_5 + 0x28)).d
            int32_t var_184_1 = *(rdi_5 + 0x2c)
            char var_180_1 = *(rdi_5 + 0x30)
            uint64_t var_178
            arg_8.q = &var_178
            var_178 = 0
            int64_t rbx_9 = sx.q(*(rdi_5 + 0x40))
            int64_t rsi_4 = *(rdi_5 + 0x38)
            int32_t var_170_1 = rbx_9.d
            
            if (rbx_9.d != 0)
                sub_14061cb30(&var_178, rbx_9.d, 0)
                memcpy(var_178, rsi_4, (rbx_9 << 4).d)
            else
                int32_t var_16c_1 = 0
            
            int32_t var_168_1 = (*(rdi_5 + 0x48)).d
            int32_t var_164_1 = *(rdi_5 + 0x4c)
            int32_t var_160_1 = (*(rdi_5 + 0x50)).d
            void var_158
            sub_1406ca210(&var_158, rdi_5 + 0x58)
            int64_t var_2d8
            arg_8.q = &var_2d8
            var_2d8 = 0
            uint64_t rbx_10 = var_1c8
            int32_t var_2d0_1 = rbx_6
            
            if (rbx_6 != 0)
                sub_1405a4c70(&var_2d8, rbx_6, 0)
                memcpy(var_2d8, rbx_10, rbx_6 * 2)
                rbx_10 = var_1c8
            else
                int32_t var_2cc_1 = 0
            
            int128_t var_298_1 = zx.o(0)
            var_298_1.q = 0
            var_298_1:8.q = 0
            
            if (rbx_10 != 0)
                sub_140a74f90(rbx_10)
            
            var_1c8 = 0
            var_298_1.q = 0
            int32_t var_1c0_1
            var_1c0_1.q = 0
            var_298_1:8.q = 0
            int64_t var_2e8 = 0
            int32_t var_2e0_1 = 0
            int512_t zmm2_1 =
                sub_141d49a40(sub_140a1ae20(), &var_1c8, &var_2e8, 0, 0, 0, nullptr, 1)
            var_308 = 0
            var_300_2.q = 0
            sub_1405947f0(&var_308, 7)
            int32_t rax_11 = var_300_2 + 7
            var_300_2 = rax_11
            
            if (rax_11 s> var_2fc)
                sub_140594770(&var_308)
            
            sub_1405a7220(var_308, 7, ".style", 7, 0x3f)
            int64_t var_1d8
            sub_1406b36d0(&var_1d8, &var_2d8, &var_308)
            int32_t r15_1 = r15 | 8
            arg_8 = r15_1
            sub_1406c8f40(&var_2b8, &var_268, &var_1d8)
            int64_t rcx_42 = var_1d8
            
            if (rcx_42 != 0)
                sub_140a74f90(rcx_42)
            
            uint64_t rcx_43 = var_308
            
            if (rcx_43 != 0)
                sub_140a74f90(rcx_43)
            
            uint64_t var_2a8
            uint64_t* arg_20 = &var_2a8
            var_2a8 = 0
            int64_t rsi_6 = var_2e8
            int32_t var_2a0_1 = var_2e0_1
            
            if (var_2e0_1 != 0)
                sub_1405a4c70(&var_2a8, var_2e0_1, 0)
                memcpy(var_2a8, rsi_6, var_2e0_1 * 2)
            else
                int32_t var_29c_1 = var_2e0_1
            
            sub_1406d44a0(&var_278, &var_2a8, zmm2_1)
            arg_20 = &var_2f8
            var_2f8 = 0
            int64_t rsi_7 = var_2e8
            int32_t var_2f0_1 = var_2e0_1
            
            if (var_2e0_1 != 0)
                sub_1405a4c70(&var_2f8, var_2e0_1, 0)
                memcpy(var_2f8, rsi_7, var_2e0_1 * 2)
            else
                int32_t var_2ec_1 = 0
            
            int64_t var_48
            int64_t* rax_12 = sub_140686770(&var_48, &var_2f8, zmm2_1)
            int32_t r15_2 = r15_1 | 0x80
            arg_8 = r15_2
            uint64_t rcx_50 = var_2f8
            
            if (rcx_50 != 0)
                sub_140a74f90(rcx_50)
            
            int16_t* const rbx_13 = &data_142d40450
            
            if (var_2b8:8.d != 0)
                rbx_13 = var_2b8.q
            
            sub_140a464c0()
            rbx_13.b = sub_140b27210(rax_12, rbx_13, 0, &data_14399ea08, 0) == 0
            r15 = r15_2 & 0xffffff7f
            int64_t rcx_52 = var_48
            
            if (rcx_52 != 0)
                sub_140a74f90(rcx_52)
            
            int64_t var_118
            int64_t var_100
            int64_t var_d0
            
            if (rbx_13.b != 0)
                int64_t rcx_74 = var_278
                
                if (rcx_74 != 0)
                    sub_140a74f90(rcx_74)
                
                int64_t rcx_75 = var_2b8.q
                
                if (rcx_75 != 0)
                    sub_140a74f90(rcx_75)
                
                int64_t rcx_76 = var_2e8
                
                if (rcx_76 != 0)
                    sub_140a74f90(rcx_76)
                
                int64_t rcx_77 = var_2d8
                
                if (rcx_77 != 0)
                    sub_140a74f90(rcx_77)
                
                if (var_d0 != 0)
                    sub_140a74f90(var_d0)
                
                if (var_100 != 0)
                    sub_140a74f90(var_100)
                
                if (var_118 != 0)
                    sub_140a74f90(var_118)
                
                uint64_t rcx_81 = var_178
                
                if (rcx_81 != 0)
                    sub_140a74f90(rcx_81)
                
                uint64_t rcx_82 = var_1a8
                
                if (rcx_82 != 0)
                    sub_140a74f90(rcx_82)
                
                uint64_t rcx_83 = var_1b8
                
                if (rcx_83 != 0)
                    sub_140a74f90(rcx_83)
                
                uint64_t rcx_84 = var_1c8
                
                if (rcx_84 != 0)
                    sub_140a74f90(rcx_84)
                
                break
            
            int64_t rcx_53 = var_278
            
            if (rcx_53 != 0)
                sub_140a74f90(rcx_53)
            
            int64_t rcx_54 = var_2b8.q
            
            if (rcx_54 != 0)
                sub_140a74f90(rcx_54)
            
            int64_t rcx_55 = var_2e8
            
            if (rcx_55 != 0)
                sub_140a74f90(rcx_55)
            
            int64_t rcx_56 = var_2d8
            
            if (rcx_56 != 0)
                sub_140a74f90(rcx_56)
            
            if (var_d0 != 0)
                sub_140a74f90(var_d0)
            
            if (var_100 != 0)
                sub_140a74f90(var_100)
            
            if (var_118 != 0)
                sub_140a74f90(var_118)
            
            uint64_t rcx_60 = var_178
            
            if (rcx_60 != 0)
                sub_140a74f90(rcx_60)
            
            uint64_t rcx_61 = var_1a8
            
            if (rcx_61 != 0)
                sub_140a74f90(rcx_61)
            
            uint64_t rcx_62 = var_1b8
            
            if (rcx_62 != 0)
                sub_140a74f90(rcx_62)
            
            uint64_t rcx_63 = var_1c8
            
            if (rcx_63 != 0)
                sub_140a74f90(rcx_63)
            
            r14_1 = &r14_1[0x2f]
            rdi_5 += 0x178
            
            if (r14_1 == r12_2)
                goto label_1406d29c0

int16_t* rcx_64 = var_258

if (rcx_64 != 0)
    sub_140a74f90(rcx_64)

int64_t rcx_65 = var_288

if (rcx_65 != 0)
    sub_140a74f90(rcx_65)

uint64_t rcx_66 = var_1f0

if (rcx_66 != 0)
    sub_140a74f90(rcx_66)

int64_t result = sub_1406cae40(&var_208)
int64_t var_218

if (var_218 != 0)
    result = sub_140a74f90(var_218)

int64_t var_228

if (var_228 != 0)
    result = sub_140a74f90(var_228)

int64_t var_238

if (var_238 != 0)
    result = sub_140a74f90(var_238)

int64_t rcx_71 = var_248

if (rcx_71 != 0)
    result = sub_140a74f90(rcx_71)

int16_t* rcx_72 = var_268

if (rcx_72 != 0)
    result = sub_140a74f90(rcx_72)

uint64_t rcx_73 = var_2c8

if (rcx_73 == 0)
    return result

return sub_140a74f90(rcx_73)
