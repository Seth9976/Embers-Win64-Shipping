// 函数: sub_14229e150
// 地址: 0x14229e150
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

__chkstk(0x19c0)
void var_19e8
int64_t rax_1 = __security_cookie ^ &var_19e8
int64_t result = 0
int96_t var_1968 = (*(arg1 + 0x80)).12
void* r8 = nullptr
int32_t rdi = 0
int32_t rbx = arg1.d
int64_t var_1948 = (*(arg1 + 0xa0)).q
void* i = arg1 + 0x20
int128_t var_1958 = *(arg1 + 0x90)
void* var_78 = nullptr
int32_t var_68 = 0
int32_t var_64 = 0x63
int128_t var_1988
void var_1938
int128_t zmm0
int128_t zmm1
int512_t zmm2

do
    result += sx.q(*(i + 0xc)) * 0xb0 + 0x60
    rbx &= 0xfffffff0
    
    do
        uint64_t rsi_2 = zx.q(rbx) & 7
        uint64_t r14_1 = zx.q(rbx)
        void* rax_4 = *(i + (rsi_2 << 3) + 0x18)
        
        if (rax_4 != 0 && (*(rax_4 + 0x58) & 0x7fffffff) u> 0)
            var_68 = rdi + 1
            
            if (rdi + 1 s> var_64)
                sub_1409da5f0(&var_1938, rdi)
                r8 = var_78
            
            void* rdx_2 = &var_1938
            
            if (r8 != 0)
                rdx_2 = r8
            
            int64_t rax_7 = sx.q(rdi) << 6
            void* rdx_3 = rdx_2 + rax_7
            
            if (rdx_2 == neg.q(rax_7))
                rdx_3 = nullptr
            else
                *(rdx_3 + 0x10) = 0
                *(rdx_3 + 0x18) = 0
                *(rdx_3 + 0x1c) = 0x3f800000
                *(rdx_3 + 0x24) = 0
                *(rdx_3 + 0x2c) = 0x3f800000
                *rdx_3 = 0
            
            *rdx_3 = *(i + (rsi_2 << 3) + 0x18)
            zmm0.d = var_1948:4.d.d f* *(&data_142e669e0 + ((zx.q(r14_1.d) & 1) << 2))
            zmm0.d = zmm0.d f+ var_1968.d
            *(rdx_3 + 0x10) = zmm0.d
            zmm0.d = var_1948:4.d.d f* *(&data_142e669e0 + ((zx.q((r14_1 u>> 1).d) & 1) << 2))
            zmm0.d = zmm0.d f+ var_1968:4.d
            *(rdx_3 + 0x14) = zmm0.d
            zmm0.d = var_1948:4.d.d f* *(&data_142e669e0 + ((zx.q((r14_1 u>> 2).d) & 1) << 2))
            zmm0.d = zmm0.d f+ var_1968:8.d
            *(rdx_3 + 0x1c) = 0
            *(rdx_3 + 0x18) = zmm0.d
            *(rdx_3 + 0x20) = var_1948.d.d
            *(rdx_3 + 0x24) = var_1948.d.d
            *(rdx_3 + 0x28) = var_1948.d.d
            *(rdx_3 + 0x2c) = 0
            zmm1.d = var_1948.d.d f* 0.5f
            zmm1.d = zmm1.d f* 1.0625f
            *(rdx_3 + 0x30) = zmm1.d
            zmm0.d = var_1948.d.d f- zmm1.d
            *(rdx_3 + 0x34) = zmm0.d
            rdi = var_68
            r8 = var_78
        
        if ((rbx.b & 7) u>= 7)
            rbx |= 8
        else
            rbx ^= ((rbx + 1) ^ rbx) & 7
    while (((rbx u>> 3).b & 1) == 0)
    
    if (rdi == 0)
        zmm1 = data_142d3f660
        zmm2.o = zmm1
        i.o = 0.o
        var_1948 = var_1988.q
        var_1968 = zmm1.12
        int128_t var_1958_2 = zmm1
    else
        void* r9_1 = &var_1938
        
        if (r8 != 0)
            r9_1 = r8
        
        int128_t* rax_22 = sx.q(rdi - 1) << 6
        i.o = *(rax_22 + r9_1)
        var_1968 = (*(rax_22 + r9_1 + 0x10)).12
        int128_t var_1958_1 = *(rax_22 + r9_1 + 0x20)
        var_1948 = (*(rax_22 + r9_1 + 0x30)).q
        
        if (0 != 0)
            memmove((sx.q(rdi - 1) << 6) + r9_1, (sx.q(rdi) << 6) + r9_1, 0 << 6)
            rdi = var_68
        
        var_68 = rdi - 1
        sub_1409da9e0(&var_1938)
        r8 = var_78
        rdi = var_68
while (i != 0)

if (r8 != 0)
    sub_140a74f90(r8)

int32_t rbx_1 = arg1.d
void* r8_3 = nullptr
int96_t var_1968_1 = (*(arg1 + 0x120)).12
int32_t rdi_2 = 0
int64_t var_1948_1 = (*(arg1 + 0x140)).q
void* i_1 = arg1 + 0xc0
int128_t var_1958_3 = *(arg1 + 0x130)
void* var_78_1 = nullptr
int32_t var_68_1 = 0
int32_t var_64_1 = 0x63

do
    int64_t result_1 = result + sx.q(*(i_1 + 0xc)) * 0xb0 + 0x60
    rbx_1 &= 0xfffffff0
    
    do
        uint64_t rsi_4 = zx.q(rbx_1) & 7
        uint64_t r14_4 = zx.q(rbx_1)
        void* rax_29 = *(i_1 + (rsi_4 << 3) + 0x18)
        
        if (rax_29 != 0 && (*(rax_29 + 0x58) & 0x7fffffff) u> 0)
            var_68_1 = rdi_2 + 1
            
            if (rdi_2 + 1 s> var_64_1)
                sub_1409da5f0(&var_1938, rdi_2)
                r8_3 = var_78_1
            
            void* rdx_8 = &var_1938
            
            if (r8_3 != 0)
                rdx_8 = r8_3
            
            int64_t rax_32 = sx.q(rdi_2) << 6
            void* rdx_9 = rdx_8 + rax_32
            
            if (rdx_8 == neg.q(rax_32))
                rdx_9 = nullptr
            else
                *(rdx_9 + 0x10) = 0
                *(rdx_9 + 0x18) = 0
                *(rdx_9 + 0x1c) = 0x3f800000
                *(rdx_9 + 0x24) = 0
                *(rdx_9 + 0x2c) = 0x3f800000
                *rdx_9 = 0
            
            *rdx_9 = *(i_1 + (rsi_4 << 3) + 0x18)
            zmm0.d = var_1948_1:4.d.d f* *(&data_142e669e0 + ((zx.q(r14_4.d) & 1) << 2))
            zmm0.d = zmm0.d f+ var_1968_1.d
            *(rdx_9 + 0x10) = zmm0.d
            zmm0.d = var_1948_1:4.d.d f* *(&data_142e669e0 + ((zx.q((r14_4 u>> 1).d) & 1) << 2))
            zmm0.d = zmm0.d f+ var_1968_1:4.d
            *(rdx_9 + 0x14) = zmm0.d
            zmm0.d = var_1948_1:4.d.d f* *(&data_142e669e0 + ((zx.q((r14_4 u>> 2).d) & 1) << 2))
            zmm0.d = zmm0.d f+ var_1968_1:8.d
            *(rdx_9 + 0x1c) = 0
            *(rdx_9 + 0x18) = zmm0.d
            *(rdx_9 + 0x20) = var_1948_1.d.d
            *(rdx_9 + 0x24) = var_1948_1.d.d
            *(rdx_9 + 0x28) = var_1948_1.d.d
            *(rdx_9 + 0x2c) = 0
            zmm1.d = var_1948_1.d.d f* 0.5f
            zmm1.d = zmm1.d f* 1.0625f
            *(rdx_9 + 0x30) = zmm1.d
            zmm0.d = var_1948_1.d.d f- zmm1.d
            *(rdx_9 + 0x34) = zmm0.d
            rdi_2 = var_68_1
            r8_3 = var_78_1
        
        if ((rbx_1.b & 7) u>= 7)
            rbx_1 |= 8
        else
            rbx_1 ^= ((rbx_1 + 1) ^ rbx_1) & 7
    while (((rbx_1 u>> 3).b & 1) == 0)
    
    if (rdi_2 == 0)
        zmm1 = data_142d3f660
        zmm2.o = zmm1
        i_1.o = 0.o
        var_1948_1 = var_1988.q
        var_1968_1 = zmm1.12
        int128_t var_1958_5 = zmm1
    else
        void* r9_2 = &var_1938
        
        if (r8_3 != 0)
            r9_2 = r8_3
        
        int128_t* rax_47 = sx.q(rdi_2 - 1) << 6
        i_1.o = *(rax_47 + r9_2)
        var_1968_1 = (*(rax_47 + r9_2 + 0x10)).12
        int128_t var_1958_4 = *(rax_47 + r9_2 + 0x20)
        var_1948_1 = (*(rax_47 + r9_2 + 0x30)).q
        
        if (0 != 0)
            memmove((sx.q(rdi_2 - 1) << 6) + r9_2, (sx.q(rdi_2) << 6) + r9_2, 0 << 6)
            rdi_2 = var_68_1
        
        var_68_1 = rdi_2 - 1
        sub_1409da9e0(&var_1938)
        r8_3 = var_78_1
        rdi_2 = var_68_1
    
    result = result_1
while (i_1 != 0)

if (r8_3 != 0)
    sub_140a74f90(r8_3)

__security_check_cookie(rax_1 ^ &var_19e8)
return result
