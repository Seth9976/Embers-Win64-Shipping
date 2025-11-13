// 函数: sub_141507bd0
// 地址: 0x141507bd0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_418
int64_t rax_1 = __security_cookie ^ &var_418
int64_t* r10 = arg3
int32_t r11 = arg4
int32_t* r15 = arg1
int32_t var_3e0 = 0
int32_t r12 = 0
int64_t rax_3 = *(arg5 + 0x10)
int64_t rax_4 = *(arg5 + 0x20)
uint64_t result_2 = *(arg5 + 0x28)
int64_t* var_3b0
*(arg5 + 0x28) = &var_3b0
var_3b0 = arg5 + 0x10
char var_398 = 0
*(arg5 + 0x30) += 1
int64_t* var_3c8 = arg3
int32_t var_3f4 = 0
int32_t rcx = *(data_143eefa60 + 4)
int32_t r8

if (rcx u>= 1)
    r8 = 0x10
    
    if (rcx u< 0x10)
        r8 = rcx
else
    r8 = 1

void* rax_6 = data_143eefa78
int32_t rcx_1 = *(r10 + 4)
int32_t rbx = 0x80
int128_t var_348
__builtin_memset(&var_348, 0, 0x20)
int32_t rsi = 0

if (*(rax_6 + 4) u<= 0x80)
    rbx = *(rax_6 + 4)

int32_t var_3e0_1 = rbx
int64_t var_328 = 0
uint64_t result = zx.q(divu.dp.d(0:(rcx_1 - 1 + r8), r8))
int32_t rdx = 0x40
int32_t var_320 = 0
int128_t var_318
__builtin_memset(&var_318, 0, 0x2c)
int128_t var_2e8
__builtin_memset(&var_2e8, 0, 0x2c)
int128_t var_2b8
__builtin_memset(&var_2b8, 0, 0x2c)
int128_t var_288
__builtin_memset(&var_288, 0, 0x2c)
int128_t var_258
__builtin_memset(&var_258, 0, 0x2c)
int128_t var_228
__builtin_memset(&var_228, 0, 0x2c)
int128_t var_1f8
__builtin_memset(&var_1f8, 0, 0x2c)
int128_t var_1c8
__builtin_memset(&var_1c8, 0, 0x2c)
int128_t var_198
__builtin_memset(&var_198, 0, 0x2c)
int128_t var_168
__builtin_memset(&var_168, 0, 0x2c)
int128_t var_138
__builtin_memset(&var_138, 0, 0x2c)
int128_t var_108
__builtin_memset(&var_108, 0, 0x2c)
int128_t var_d8
__builtin_memset(&var_d8, 0, 0x2c)
int128_t var_a8
__builtin_memset(&var_a8, 0, 0x2c)
int128_t var_78
__builtin_memset(&var_78, 0, 0x2c)
int32_t var_3f8 = 0
int32_t var_3f0 = rcx_1
int32_t r13 = 0

if (result.d u>= 0x40)
    rdx = result.d

int32_t var_3ec = rdx
int64_t var_3d8
int64_t var_3d0

if (rcx_1 != 0)
    int32_t r12_1 = 0
    
    do
        int32_t rsi_2 = rcx_1 - r13
        
        if (rdx u<= rsi_2)
            rsi_2 = rdx
        
        if (rsi_2 != 0)
            uint64_t r9 = zx.q(r12_1)
            r12_1 += 1
            int32_t var_3f8_1 = r9.d
            uint64_t r14_2 = r9 * 6
            *(&var_348 + (r14_2 << 3)) = r15
            (&var_328)[r14_2].d = rbx
            int64_t i_4 = sx.q(r15[0x24])
            int64_t r15_1 = 8
            result = 0x110 * i_4
            int64_t rdx_1 = *(arg5 + 0x10)
            *(&var_348:8 + (r14_2 << 3)) = r10
            
            if (mulu.dp.q(0x110, i_4) u>> 0x40 != zx.o(0))
                result = -1
            
            void var_31c
            *(&var_31c + (r14_2 << 3)) = r11
            int64_t rcx_2 = sx.q(result.d)
            var_3d0 = rcx_2
            
            if (result.d s>= 0x10)
                r15_1 = 0x10
            
            int64_t r8_2 = not.q(r15_1 - 1)
            int64_t rdx_4 = (rdx_1 - 1 + r15_1) & r8_2
            var_3d8 = r8_2
            int64_t rcx_3 = rcx_2 + rdx_4
            
            if (rcx_3 u> *(arg5 + 0x18))
                int32_t rdx_5 = 8
                
                if (result.d s>= 0x10)
                    rdx_5 = 0x10
                
                result = sub_140b0e3d0(arg5 + 0x10, rdx_5 + result.d)
                r9 = zx.q(var_3f8_1)
                rdx_4 = (*(arg5 + 0x10) - 1 + r15_1) & var_3d8
                rcx_3 = var_3d0 + rdx_4
            
            *(arg5 + 0x10) = rcx_3
            
            if (rdx_4 == 0)
                rdx_4 = 0
            else if (i_4 != 0)
                result = rdx_4 + 0x104
                int64_t i
                
                do
                    *(result - 4) = 0xffffffff
                    *result = 0
                    *(result + 8) = 0
                    result += 0x110
                    i = i_4
                    i_4 -= 1
                while (i != 1)
            
            int128_t var_338
            *(&var_338 + (r14_2 << 3)) = rdx_4
            void* const rbx_1
            
            if (r9.d != 0)
                rbx_1 = (*(arg5 + 0x10) + 0xf) & 0xfffffffffffffff0
                result = rbx_1 + 0xb038
                
                if (result u> *(arg5 + 0x18))
                    sub_140b0e3d0(arg5 + 0x10, 0xb048)
                    rbx_1 = (*(arg5 + 0x10) + 0xf) & 0xfffffffffffffff0
                    result = rbx_1 + 0xb038
                
                *(arg5 + 0x10) = result
                
                if (rbx_1 == 0)
                    rbx_1 = nullptr
                else
                    *(rbx_1 + 0xb000) = sub_14081d830(0x8000, arg5 + 0x10, 1, 0)
                    *(rbx_1 + 0xb008) = sub_14081d830(0xf800, arg5 + 0x10, 1, 0)
                    *(rbx_1 + 0xb010) = sub_14081d830(0xf800, arg5 + 0x10, 1, 0)
                    *(rbx_1 + 0xb018) = sub_14081d830(0x2000, arg5 + 0x10, 1, 0)
                    result = sub_14081d830(0x1000, arg5 + 0x10, 1, 0)
                    *(rbx_1 + 0xb020) = result
                    *(rbx_1 + 0xb028) = 0
                    *(rbx_1 + 0xb030) = 0
            else
                rbx_1 = arg2
            
            rcx_1 = var_3f0
            rdx = var_3ec
            r11 = arg4
            r15 = arg1
            *(&var_338:8 + (r14_2 << 3)) = rbx_1
            r10 = var_3c8
            rbx = var_3e0_1
            *(&var_328:4 + (r14_2 << 3)) = r13
            r13 += rsi_2
            (&var_320)[r14_2 * 2] = rsi_2
    while (r13 u< rcx_1)
    
    var_3f8 = r12_1
    rsi = var_3f8
    r12 = var_3f4

uint64_t result_1 = 0
int32_t i_8 = 0
int32_t var_354 = 4
void var_380

if (rsi u> 1)
    if (rsi - 1 s> 4)
        result = sub_14085a940(&var_380, rsi - 1)
    
    if (rsi u> 1)
        int128_t* r14_3 = &var_318
        uint64_t i_7 = zx.q(rsi - 1)
        uint64_t i_1
        
        do
            int64_t* lpTlsValue_1 = TlsGetValue(data_143cf0950)
            int64_t* lpTlsValue = lpTlsValue_1
            
            if (lpTlsValue_1 == 0)
                int64_t* lpTlsValue_2 = j_sub_140a82f30(zx.q((&lpTlsValue_1[3]).d))
                lpTlsValue = lpTlsValue_2
                
                if (lpTlsValue_2 == 0)
                    lpTlsValue = nullptr
                else
                    __builtin_memset(lpTlsValue_2, 0, 0x14)
                
                TlsSetValue(data_143cf0950, lpTlsValue)
            
            void*** rdi_1 = lpTlsValue[1]
            int32_t rcx_12
            
            if (rdi_1 != 0)
                rcx_12 = lpTlsValue[2].d
            else
                int64_t rax_13 = *lpTlsValue
                
                if (rax_13 == 0)
                    int64_t rax_14 = sub_14059e7c0(&data_143cf0958)
                    lpTlsValue[1] = rax_14
                    
                    if (rax_14 == 0)
                        int64_t* rax_15 = sub_140a82f70(0x2000, 0)
                        lpTlsValue[1] = rax_15
                        int64_t j_1 = 0x1f
                        int64_t* rcx_11
                        int64_t j
                        
                        do
                            rcx_11 = &rax_15[0x20]
                            *rax_15 = rcx_11
                            rax_15 = rcx_11
                            j = j_1
                            j_1 -= 1
                        while (j != 1)
                        *rcx_11 = 0
                else
                    lpTlsValue[1] = rax_13
                    *lpTlsValue = 0
                
                rdi_1 = lpTlsValue[1]
                rcx_12 = 0x20
                lpTlsValue[2].d = 0x20
            
            lpTlsValue[1] = *rdi_1
            lpTlsValue[2].d = rcx_12 - 1
            int64_t** rax_18 = sub_140a228d0(&var_3c8)
            r12 = (r12 | 2) & 0xfffffffd
            int64_t* rcx_14 = *rax_18
            *rax_18 = nullptr
            *rdi_1 = &data_142d40498
            var_3e0_1.q = rcx_14
            rdi_1[1].d = 0xff
            *(rdi_1 + 0xc) = 1
            *rdi_1 = &data_142fbbb68
            rdi_1[8].b = 0
            rdi_1[9] = rcx_14
            int64_t* rcx_15 = var_3c8
            
            if (rcx_15 != 0)
                rcx_15[9].d -= 1
                
                if (rcx_15[9].d == 1)
                    sub_140a2f6e0(rcx_15)
            
            if ((r12.b & 1) != 0)
                r12 &= 0xfffffffe
                
                if (var_3d0 != 0)
                    int32_t rcx_16 = *(var_3d0 + 0x48)
                    *(var_3d0 + 0x48) -= 1
                    
                    if (rcx_16 == 1)
                        sub_140a2f6e0(var_3d0)
            
            int128_t zmm1_1 = r14_3[1]
            *(rdi_1 + 0x10) = *r14_3
            int128_t zmm0_1 = r14_3[2]
            *(rdi_1 + 0x20) = zmm1_1
            *(rdi_1 + 0x30) = zmm0_1
            int64_t rbx_6 = rdi_1[9]
            var_3d8 = rbx_6
            
            if (rbx_6 != 0)
                *(rbx_6 + 0x48) += 1
                rbx_6 = var_3d8
            
            sub_140913400(rdi_1, nullptr, 0xff, 1)
            int64_t i_10 = sx.q(i_8)
            int32_t i_9 = (i_10 + 1).d
            i_8 = i_9
            
            if (i_9 s> var_354)
                sub_14083a490(&var_380, i_10.d)
            
            result = result_1
            uint64_t result_3 = &var_380
            
            if (result != 0)
                result_3 = result
            
            r14_3 = &r14_3[3]
            *(result_3 + (i_10 << 3)) = rbx_6
            i_1 = i_7
            i_7 -= 1
        while (i_1 != 1)
        rsi = var_3f8

if (rsi != 0)
    result = sub_141508440(arg1, &var_348)
    
    if (i_8 s> 0)
        int64_t* rax_21 = sub_140a242a0()
        int64_t r9_2 = *rax_21
        result = (*(r9_2 + 0x48))(rax_21, &var_380, zx.q(data_14399e5e0), r9_2, var_3f8, var_3f0, 
            arg4, var_3e0_1, var_3d8, var_3d0)

if (rsi u> 1)
    uint64_t i_5 = zx.q(rsi - 1)
    int128_t var_308
    void** rbx_7 = &var_308:8
    uint64_t i_2
    
    do
        result = sub_14150c010(arg2, *rbx_7, arg5)
        rbx_7 = &rbx_7[6]
        i_2 = i_5
        i_5 -= 1
    while (i_2 != 1)

uint64_t result_4 = &var_380
int32_t i_6 = i_8

if (result_1 != 0)
    result_4 = result_1

if (i_6 != 0)
    int32_t i_3
    
    do
        int64_t* rcx_24 = *result_4
        
        if (rcx_24 != 0)
            result = zx.q(rcx_24[9].d)
            rcx_24[9].d -= 1
            
            if (result.d == 1)
                result = sub_140a2f6e0(rcx_24)
        
        result_4 += 8
        i_3 = i_6
        i_6 -= 1
    while (i_3 != 1)

if (result_1 != 0)
    result = sub_140a74f90(result_1)

if (var_398 == 0)
    int64_t* rax_22 = var_3b0
    char var_398_1 = 1
    rax_22[4].d -= 1
    int64_t* rcx_26 = var_3b0
    
    if (rax_4 != rcx_26[2])
        sub_140b16b40(rcx_26, rax_4)
        rcx_26 = var_3b0
    
    *rcx_26 = rax_3
    result = result_2
    var_3b0[3] = result

__security_check_cookie(rax_1 ^ &var_418)
return result
