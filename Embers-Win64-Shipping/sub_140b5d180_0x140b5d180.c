// 函数: sub_140b5d180
// 地址: 0x140b5d180
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

__chkstk(0x1050)
void var_1058
int64_t rax_1 = __security_cookie ^ &var_1058
void* r8

if (data_143e05168 == 0)
    r8 = sub_140b58510(&data_143e05180)
    data_143e05168 = 1
else
    r8 = &data_143e05180

uint32_t var_1034 = zx.d(arg1.w)
uint64_t rdx_1 = zx.q(arg1 u>> 0x10)
int32_t var_1038 = rdx_1.d
char var_101c = 1
int16_t* rcx_1 = zx.q((var_1038.q u>> 0x20).d * 2) + *(r8 + (rdx_1 << 3) + 0x10)
uint32_t rax_7 = zx.d(*rcx_1) u>> 6
bool cond:2 = (*rcx_1 & 1) != 0
void* var_1028 = &rcx_1[1]

if (not(cond:2))
    var_101c = 0

uint128_t zmm0 = var_1028.o
uint32_t var_1034_1 = zx.d(arg2.w)
uint64_t rdx_4 = zx.q(arg2 u>> 0x10)
var_1038 = rdx_4.d
var_1028.o = zmm0
char var_102c = 1
int16_t* rcx_3 = zx.q((var_1038.q u>> 0x20).d * 2) + *(r8 + (rdx_4 << 3) + 0x10)
uint32_t rax_12 = zx.d(*rcx_3) u>> 6
var_1038.q = &rcx_3[1]

if ((*rcx_3 & 1) == 0)
    char var_102c_1 = 0

zmm0 = var_1038.o
int64_t rbx_1 = rax_7.q
var_1038.o = zmm0
uint8_t rcx_5 = (rbx_1 u>> 0x20).b
int64_t rdi_1 = _mm_bsrli_si128(zmm0, 8).q

if (rcx_5 != (rdi_1 u>> 0x20).b)
    void** rsi_1 = &var_1038
    
    if (rcx_5 == 0)
        rsi_1 = &var_1028
    
    void var_1018
    void* rdi_2 = &var_1018
    void var_818
    
    if (rcx_5 == 0)
        rdi_2 = &var_818
    uint64_t rbx_2 = zx.q(rsi_1[1].d)
    memcpy(rdi_2, *rsi_1, rbx_2.d)
    *rsi_1 = rdi_2
    
    if (rbx_2.d != 0)
        void* rcx_7 = rbx_2 + rdi_2
        void* rdx_7 = rdi_2 + (rbx_2 << 1)
        int32_t i
        
        do
            int16_t rax_15 = sx.w(*(rcx_7 - 1))
            rcx_7 -= 1
            *(rdx_7 - 2) = rax_15
            rdx_7 -= 2
            i = rbx_2.d
            rbx_2 = zx.q(rbx_2.d - 1)
        while (i != 1)
    
    *(rsi_1 + 0xc) = 1
    rbx_1 = rax_7.q
    rdi_1 = rax_12.q

int16_t* rdx_8 = var_1038.q
void* rcx_8 = var_1028
int32_t rax_16 = rdi_1.d

if (rbx_1.d u<= rdi_1.d)
    rax_16 = rbx_1.d

int64_t r8_2 = sx.q(rax_16)
int32_t result

if (var_101c == 0)
    result = sub_140a545e0(rcx_8, rdx_8, r8_2)
else
    result = sub_140a546e0(rcx_8, rdx_8, r8_2)

if (result == 0)
    result = rbx_1.d - rdi_1.d

__security_check_cookie(rax_1 ^ &var_1058)
return result
