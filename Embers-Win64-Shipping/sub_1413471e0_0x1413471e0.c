// 函数: sub_1413471e0
// 地址: 0x1413471e0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_3b8
int64_t rax_1 = __security_cookie ^ &var_3b8
void var_2c0
sub_1419928d0(&var_2c0, arg3[8])
int32_t rax_2 = arg1[2].d
int32_t i = 0
char var_2c7 = 1
int64_t var_370
__builtin_memset(&var_370, 0, 0x19)
int64_t var_350
__builtin_memset(&var_350, 0, 0x78)
int64_t var_2d0 = 0
int32_t var_2d8 = rax_2
int64_t rax_3 = sub_14139b4b0(arg2, &var_2c0, 0, u"FrameBufferOverride")
int64_t* var_388

if (rax_3 != 0)
    var_370 = rax_3
    int128_t* rax_4 = sub_14139d4c0(arg3, &var_388, arg2)
    int64_t* rdx_3 = *arg3
    int128_t var_368
    var_368.d = *rax_4
    var_368:4.d = *(rax_4 + 4)
    var_368:0xc.d = *(rax_4 + 0xc)
    var_368:8.d = *(rax_4 + 8)
    int64_t** rax_6
    rax_6.b = ***rdx_3 == rdx_3
    rax_6.b += 1
    char var_358_1 = rax_6.b

int128_t var_348
void* rbx = &var_348:4
void* r14_1

do
    void*** rax_7 = sub_141397b60(arg2, &var_2c0, i, u"PostProcessInput")
    r14_1 = *arg3
    void* rdx_5 = &arg3[1]
    *(rbx - 0xc) = rax_7
    rbx += 0x18
    
    if (i != 0)
        rdx_5 = r14_1 + 0x1598
    
    i += 1
    uint128_t zmm0_1 = *rdx_5
    int64_t rax_8 = zmm0_1.q
    uint128_t temp0_1 = _mm_bsrli_si128(zmm0_1, 8)
    *(rbx - 0x1c) = rax_8.d
    *(rbx - 0x18) = (rax_8 u>> 0x20).d
    int64_t rax_10 = temp0_1.q
    *(rbx - 0x14) = rax_10.d
    *(rbx - 0x10) = (rax_10 u>> 0x20).d
while (i u< 5)

char rax_13 = sub_14128e090((*U"1111")[sx.q(arg3[0xb].d)])

if (rax_13 != 0)
    char var_2c8_1 = 1

if (rax_13 == 0 || data_143ebe680 != arg2)
    char var_2c8_2 = 0

int32_t rax_14 = sub_1422e5a30(r14_1)
int64_t rax_15

if (rax_14 u> 0x1e || not(test_bit(0x6562c800, rax_14)))
    rax_15 = sx.q(rax_14)

void* rax_16

if ((rax_14 u<= 0x1e && test_bit(0x6562c800, rax_14))
        || (*(rax_15 * 0x14 + &data_143f025fc) & 1) != 0)
    arg3[8]
    rax_16 = &data_143ec4d50
else
    arg3[8]
    rax_16 = &data_143ec4d40

int64_t* rax_17 = *rax_16
var_388 = rax_17

if (rax_17 != 0)
    int64_t rdx_6 = *rax_17
    (*(rdx_6 + 0x30))(rax_17, rdx_6)
    
    if (var_388 != 0)
        void*** rax_19 = sub_1410fccd0(&var_2c0, &var_388, u"CustomDepth", 0)
        int64_t* rcx_16 = var_388
        void*** var_2d0_1 = rax_19
        
        if (rcx_16 != 0)
            (*(*rcx_16 + 0x38))(rcx_16)

sub_14134ba20(&var_388, &var_2c0, *arg3, &var_370, *arg1, *(arg1 + 0x14))
sub_14139b300(arg2, &var_2c0, 0, var_388)
sub_14199ef00(&var_2c0)

if (sub_14212f0f0(arg1[1]) != 0)
    sub_141390d20(&data_143ec4c60, arg3[8], 0xffffffff)

int64_t result = sub_1410eb9e0(&var_2c0)
__security_check_cookie(rax_1 ^ &var_3b8)
return result
