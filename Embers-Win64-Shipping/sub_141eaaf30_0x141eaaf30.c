// 函数: sub_141eaaf30
// 地址: 0x141eaaf30
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_1f8
int64_t rax_1 = __security_cookie ^ &var_1f8
TEB* gsbase

if (data_143f3a3d8 s> *(0x14 + *(gsbase->ThreadLocalStoragePointer + (zx.q(data_14401b1a0) << 3))))
    _Init_thread_header(&data_143f3a3d8)
    
    if (data_143f3a3d8 == 0xffffffff)
        sub_140b58260(&data_143f3a3d0, u"CanvasRenderTarget2DCanvas", 1)
        _Init_thread_footer(&data_143f3a3d8)

char var_1c8 = 0
void* rax_6 = sub_140d2f0c0(sub_142489010(), sub_140cde0b0(), data_143f3a3d0, 0, 0, 0)
void* rbp = rax_6
char var_1d8

if (rax_6 == 0)
    uint64_t rbx_1 = data_143f3a3d0
    void* rax_7 = sub_140cde0b0()
    int32_t rcx_3
    rcx_3.b = rbx_1:4.d == 0
    
    if ((rcx_3.b & sub_140b5b8a0(rbx_1.d, 0)) != 0)
        sub_140d19010(rax_7, 
            NewObject with empty name can't be used to create default subobjects (inside of UObject "
        "derived class constructor) as it produces incon")
    
    int32_t var_1d0
    var_1d0.q = 0
    var_1d8.d = 0
    void* rax_10 = sub_140d2dfc0(sub_142489010(), rax_7, rbx_1, 0, var_1d8, var_1d0, 0, 0, 0)
    rbp = rax_10
    int32_t rax_11 = *(rax_10 + 0xc)
    void* const rax_18
    
    if (rax_11 s>= data_143e1d9b4)
        rax_18 = nullptr
    else
        int16_t temp1_1
        int32_t temp2_1
        temp1_1:temp2_1 = sx.q(rax_11)
        uint32_t rdx_3 = zx.d(temp1_1)
        int32_t rax_13 = temp2_1 + rdx_3
        rax_18 =
            *(data_143e1d9a0 + (sx.q(rax_13 s>> 0x10) << 3)) + sx.q(zx.d(rax_13.w) - rdx_3) * 0x18
    
    *(rax_18 + 8) |= 0x40000000

uint32_t rbx_2

if (sub_140d3c6e0(&arg1[0x1f]) == 0)
    rbx_2 = data_1439c7a08
else
    rbx_2 = zx.d(*(sub_140d3c6e0(&arg1[0x1f]) + 0x118))

int64_t rax_21 = sub_140cbe180(arg1)
int64_t rdx_5 = rax_21 + 0x48

if (rax_21 == 0)
    rdx_5 = 0

uint128_t zmm0
zmm0.q = data_143dbb3b8 f- data_143de5880
uint128_t zmm1 = _mm_cvtpd_ps(zx.o(data_14399f938))
int32_t temp0_1 = _mm_cvtpd_ps(zmm0)
int64_t var_1c0
var_1c0.d = 0x3f800000
var_1d8.d = zmm1.d
void var_138
float zmm0_1 = sub_1423fa870(&var_138, rdx_5, 0, temp0_1, var_1d8, temp0_1, rbx_2, var_1c0.d)
(*(*arg1 + 0x340))(arg1)
(*(*arg1 + 0x338))(arg1)
var_1d8.q = &var_138
int128_t zmm0_2 = sub_1424131e0(rbp, int.d(zmm0_1), int.d(zmm0_1), 0, var_1d8)

if (rax_21 != 0)
    char var_190_1 = arg1[0x20].b
    int64_t var_198 = rax_21
    
    if (sub_140a80f40() == 0)
        uint32_t rax_26
        
        if (data_143f138f4 == 0 && data_143de5480 != 0)
            rax_26.b = GetCurrentThreadId() == data_143de5470
        
        if (data_143f138f4 != 0 || (data_143de5480 != 0 && rax_26.b == 0))
            void var_158
            int64_t* rax_27 = sub_141e98f10(&var_158, nullptr, 0xff)
            *(*rax_27 + 0x10) = var_198.o
            void* rcx_21 = *rax_27
            int32_t r8_3 = rax_27[2].d
            int64_t* rdx_7 = rax_27[1]
            int64_t* rbx_4 = *(rcx_21 + 0x28)
            int64_t* var_1a8_2 = rbx_4
            int32_t* rsi_2 = &rbx_4[9]
            
            if (rbx_4 != 0)
                *rsi_2 += 1
                rbx_4 = var_1a8_2
            
            zmm0_2 = sub_1405e48c0(rcx_21, rdx_7, r8_3, 1)
            
            if (rbx_4 != 0)
                int32_t rax_28 = *rsi_2
                *rsi_2 -= 1
                
                if (rax_28 == 1)
                    zmm0_2 = sub_140a2f6e0(var_1a8_2)
        else
            int128_t var_168 = var_198.o
            zmm0_2 = sub_141e918c0(&var_168, &data_143f02b98)
    else
        zmm0_2 = sub_141e918c0(&var_198, &data_143f02b98)

int32_t rax_29 = *(arg1 + 0xc)
void* const rax_36

if (rax_29 s>= data_143e1d9b4)
    rax_36 = nullptr
else
    int16_t temp3_1
    int32_t temp4_1
    temp3_1:temp4_1 = sx.q(rax_29)
    uint32_t rdx_9 = zx.d(temp3_1)
    int32_t rax_31 = temp4_1 + rdx_9
    rax_36 = *(data_143e1d9a0 + (sx.q(rax_31 s>> 0x10) << 3)) + sx.q(zx.d(rax_31.w) - rdx_9) * 0x18

if (((*(rax_36 + 8) u>> 0x1d).b & 1) == 0 && arg1[0x1e].d s> 0)
    (*(*arg1 + 0x340))(arg1)
    int64_t rax_40 = *arg1
    void* var_180 = rbp
    (*(rax_40 + 0x338))(arg1)
    int32_t var_174_1 = int.d(zmm0_2.d)
    int32_t var_178_1 = int.d(zmm0_2.d)
    sub_1405a9f90(&arg1[0x1d], &var_180)

(*(*arg1 + 0x340))(arg1)
(*(*arg1 + 0x338))(arg1)
sub_14248a4e0(arg1, rbp)
*(rbp + 0x260) = 0

if (rax_21 != 0)
    sub_14240e030(&var_138, 0)

sub_1423cc130(arg1, 0)
int64_t result = sub_1423fef60(&var_138)
__security_check_cookie(rax_1 ^ &var_1f8)
return result
