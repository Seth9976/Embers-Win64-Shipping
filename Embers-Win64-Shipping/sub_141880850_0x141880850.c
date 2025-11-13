// 函数: sub_141880850
// 地址: 0x141880850
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_2a8
int64_t rax_1 = __security_cookie ^ &var_2a8
int64_t* rdi = arg2
int64_t* rcx = *arg2
int64_t* var_270 = arg2
wchar16* rax_4 = sub_14183a3a0((*(*rcx + 0x160))(rcx))
bool cond:0 = *(arg1 + 0x20) == rax_4
void* var_1e0 = arg1
int64_t* var_1d8 = rdi
int64_t var_128[0x2]
var_128[0] = 0
int64_t var_118 = 0
void* var_258
sub_141857510(&var_258, 0, &var_1e0, &var_128, arg3, arg4)
int64_t* rcx_3 = *rdi
int128_t* i_1 = nullptr
int32_t var_260 = 0
(*(*rcx_3 + 0x1c0))(rcx_3, &i_1)
int64_t* rcx_4 = *rdi
void* var_228

if ((*(*rcx_4 + 0x1d0))(rcx_4) != 0)
    sub_141828360(*(arg1 + 0x318), 1)
else
    int128_t* i = i_1
    void* r14_3 = &i[sx.q(var_260)]
    var_228 = r14_3
    
    for (; i != r14_3; i = &i[1])
        int64_t* rcx_5 = *rdi
        void* rax_9 = (*(*rcx_5 + 0x1e8))(rcx_5, i)
        int64_t r8_1
        
        if (rax_9 != 0)
            r8_1 = *(rax_9 + 0x10)
        
        if (rax_9 == 0 || r8_1 == 0)
            sub_141828360(*(arg1 + 0x328), 1)
        else
            char var_278 = 0
            void* rax_10 =
                sub_14181a1b0(arg1 + 0x28, (r8_1 u>> 0x20).d * 0x17 + r8_1.d, rax_9 + 0x10)
            int32_t var_1d0
            sub_140598750(rax_10, &var_1d0)
            int128_t* var_1c8
            *var_1c8 = *i
            var_1c8[1].d = 0xffffffff
            void var_220
            sub_14093ebb0(rax_10, &var_220, sub_140a6b260(var_1c8, 0x10), var_1c8, var_1d0, 
                &var_278)
            
            if (var_278 == 0)
                int64_t* rcx_14 = *var_270
                int64_t rax_13 = (*(*rcx_14 + 0x188))(rcx_14, i)
                int64_t var_180_1 = rax_13
                int32_t var_1c0
                sub_140a696e0(arg1 + 0x78, &var_1c0)
                int128_t* var_1b8
                *var_1b8 = *i
                var_1b8[1].q = rax_13
                *(var_1b8 + 0x18) = 0xffffffff
                void var_21c
                sub_141836010(arg1 + 0x78, &var_21c, sub_140a6b260(var_1b8, 0x10), var_1b8, 
                    var_1c0, nullptr)
                sub_1418182f0(arg1 + 0xc8, i, rax_9 + 0x10)
                int128_t* rax_16 = sub_14185c590(arg1 + 0x118, sub_140a6b260(i, 0x10), i)
                *rax_16 = *(rax_9 + 0x18)
                rax_16[1].d = *(rax_9 + 0x28)
                void var_218
                sub_1406f3d50(arg1 + 0x168, &var_218, rax_9 + 0x30, nullptr)
                sub_141818040(arg1 + 0x1b8, i, rax_9 + 0x30)
                void* rax_17 = sub_14185c670(arg1 + 0x2a8, *(rax_9 + 0x18), rax_9 + 0x18)
                int32_t var_1b0
                sub_140598750(rax_17, &var_1b0)
                int128_t* var_1a8
                *var_1a8 = *i
                var_1a8[1].d = 0xffffffff
                void var_214
                sub_14093ebb0(rax_17, &var_214, sub_140a6b260(var_1a8, 0x10), var_1a8, var_1b0, 
                    nullptr)
                sub_141828360(*(arg1 + 0x320), 1)
                r14_3 = var_228
            
            if (cond:0 != 0)
                int32_t var_1a0
                sub_140598750(arg1 + 0x258, &var_1a0)
                int128_t* var_198
                *var_198 = *i
                var_198[1].d = 0xffffffff
                void var_210
                sub_14093ebb0(arg1 + 0x258, &var_210, sub_140a6b260(var_198, 0x10), var_198, 
                    var_1a0, nullptr)
            
            rdi = var_270

void* rbx_1 = var_258

while (true)
    bool z_1
    
    if (0 == *(rbx_1 + 0x78))
        *(rbx_1 + 0x78) = 0
        z_1 = true
    else
        int64_t rax_20
        rax_20.b = *(rbx_1 + 0x78)
        z_1 = false
    
    if (not(z_1))
        break
    
    int64_t* rcx_37 = *(var_258 + 0x70)
    (*(*rcx_37 + 0x20))(rcx_37, 0xffffffff, 0)

void* rbx_2 = var_258
int64_t var_e8
__builtin_memset(&var_e8, 0, 0x2c)
int32_t var_bc = 0x80
int32_t var_b8 = 0xffffffff
int32_t var_b4 = 0
int64_t var_a8 = 0
int32_t var_a0 = 0
sub_140780cc0(&var_e8, rbx_2 + 0x80)
int64_t var_98
__builtin_memset(&var_98, 0, 0x2c)
int32_t var_6c = 0x80
int32_t var_68 = 0xffffffff
int32_t var_64 = 0
int64_t var_58 = 0
int32_t var_50 = 0
sub_141823260(&var_98, rbx_2 + 0xd0)
sub_140841290(arg1 + 0x168, &var_e8)
sub_141854210(arg1 + 0x1b8, &var_98)
int64_t var_88
int64_t* var_240 = &var_88
int32_t rcx_42 = 0
int32_t var_248 = 0
int32_t r8_12 = 0
int32_t var_244 = 1
int32_t var_238 = 0xffffffff
int64_t var_234 = 0
int32_t var_70

if (var_70 != 0)
    int64_t* r9_5 = &var_88
    int64_t* var_78
    
    if (var_78 != 0)
        r9_5 = var_78
    
    int32_t temp1_1
    int32_t temp2_1
    temp1_1:temp2_1 = sx.q(var_70 - 1)
    int32_t rdx_24 = *r9_5
    
    if (rdx_24 != 0)
    label_141880d7a:
        int32_t rax_30 = ((rdx_24 - 1) & rdx_24) ^ rdx_24
        uint64_t rflags_1
        int32_t temp0_1
        temp0_1, rflags_1 = _bit_scan_reverse(rax_30)
        int32_t var_244_1 = rax_30
        var_228.d = temp0_1
        int32_t rax_31
        
        if (rax_30 == 0)
            rax_31 = 0x20
        else
            rax_31 = 0x1f - temp0_1
        
        int32_t rax_32 = r8_12 - rax_31 + 0x1f
        
        if (rax_32 s> var_70)
            rax_32 = var_70
        
        var_234.d = rax_32
    else
        while (true)
            int64_t rdx_25 = sx.q(rcx_42)
            r8_12 += 0x20
            rcx_42 += 1
            var_234:4.d = r8_12
            var_248 = rcx_42
            
            if (rdx_25.d s>= (temp2_1 + (temp1_1 & 0x1f)) s>> 5)
                var_234.d = var_70
                break
            
            rdx_24 = *(r9_5 + (rdx_25 << 2) + 4)
            int32_t var_238_1 = 0xffffffff
            
            if (rdx_24 != 0)
                goto label_141880d7a

int32_t var_13c = var_70
int128_t var_170 = var_248.o
int128_t var_160 = 0xffffffff
int64_t temp0_2 = _mm_unpackhi_pd(0xffffffff, 0xffffffff)
int128_t var_208 = (&var_98).o
int128_t var_1f8 = var_170
int64_t var_1e8 = temp0_2

while (true)
    int64_t rdx_26 = sx.q(var_1f8:0xc.d)
    char rax_34
    
    if (rdx_26.d != ((0xffffffff << (var_70.b & 0x1f)).q u>> 0x20).d || var_1f8.q != &var_88)
        rax_34 = 0
    else
        rax_34 = 1
    
    int64_t rcx_45 = var_208.q
    
    if (rax_34 == 0 || rcx_45 != &var_98)
        rax_34 = 1
    else
        rax_34 = 0
    
    if (rax_34 == 0)
        break
    
    int128_t* rdi_7 = rdx_26 * 0x1c + *rcx_45
    void* rax_35 = sub_14185c360(arg1 + 0x208, rdi_7[1].d, &rdi_7[1])
    int32_t var_190
    sub_140598750(rax_35, &var_190)
    int32_t* var_188
    *var_188 = *rdi_7
    var_188[4] = 0xffffffff
    sub_14093ebb0(rax_35, &var_270, sub_140a6b260(var_188, 0x10), var_188, var_190, nullptr)
    var_1f8:8.d &= not.d(var_208:0xc.d)
    sub_14059bdd0(&var_208:8)

sub_1418508e0(*(arg1 + 0x338), sx.q(*(arg1 + 0x170) - *(arg1 + 0x19c)))
sub_140f23e90(&var_98)
int32_t var_a0_1 = 0

if (var_a8 != 0)
    sub_140a74f90(var_a8)

int64_t var_e0
bool cond:2 = var_e0:4.d == 0
var_e0.d = 0

if (not(cond:2))
    sub_140638cc0(&var_e8, 0)

int32_t var_b8_1 = 0xffffffff
int32_t var_b4_1 = 0
int64_t var_d8
int32_t result = sub_14059a8e0(&var_d8, 0)
int64_t var_c8

if (var_c8 != 0)
    result = sub_140a74f90(var_c8)

int64_t rcx_58 = var_e8

if (rcx_58 != 0)
    result = sub_140a74f90(rcx_58)

int128_t* i_2 = i_1

if (i_2 != 0)
    result = sub_140a74f90(i_2)

int64_t* var_250

if (var_250 != 0)
    result = var_250[1].d
    var_250[1].d -= 1
    
    if (result == 1)
        result = (**var_250)(var_250)
        int32_t r12_1 = *(var_250 + 0xc)
        *(var_250 + 0xc) -= 1
        
        if (r12_1 == 1)
            result = (*(*var_250 + 8))(var_250, zx.q(r12_1))

__security_check_cookie(rax_1 ^ &var_2a8)
return result
