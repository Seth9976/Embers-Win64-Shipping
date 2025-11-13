// 函数: sub_142665790
// 地址: 0x142665790
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

__chkstk(0x1a30)
void var_1a58
int64_t rax_1 = __security_cookie ^ &var_1a58
uint64_t i = *arg2
int64_t rsi = sx.q(arg2[1].d)
void* r12 = arg1
sub_1426655c0(i, rsi.d, 1, 1)
*(r12 + 0x418) = sx.q(*(r12 + 0x418) - 0x38)
int32_t var_1a28

if (rsi.d s< *(i + 0x388))
    uint64_t i_4 = *(i + 0x380)
    uint64_t i_2 = i
    
    if (i_4 != 0)
        i_2 = i_4
    
    int128_t var_19e8 = *arg2
    void* rcx_2 = r12 + 0x440
    int32_t var_1a38 = *(i_2 + rsi * 0x38 + 0x30)
    
    if (r12 == 0)
        rcx_2 = 0x450
    
    int32_t* var_1a18 = &var_1a38
    int128_t* var_1a10_1 = &var_19e8
    sub_14263f9c0(rcx_2, &var_1a28, &var_1a18, nullptr)

uint64_t rdi_1 = 0
uint64_t result

do
    int32_t rax_6 = *(i + 0x3d8)
    int32_t rcx_6 = (((rax_6 - 1) ^ rax_6) & 0x7fffffff) ^ rax_6
    result = i
    *(i + 0x3d8) = rcx_6
    i = *(i + 0x390)
    
    if ((rcx_6 & 0x7fffffff) u>= 7)
        result = rdi_1
    
    rdi_1 = result
while (i != 0)

if (result != 0)
    result = zx.q(*(result + 0x3d8))
    
    if (result.d s>= 0)
        uint64_t rdx_3 = zx.q(result.d) & 0x7fffffff
        
        if (*(rdi_1 + 0x388) s< rdx_3.d)
            if (rdx_3.d s> *(rdi_1 + 0x38c))
                rdx_3 = sub_142667840(rdi_1, rdx_3.d)
            
            void* rcx_9 = nullptr
            int32_t r14_1 = 0
            int32_t rbx = var_1a28
            int96_t var_1978_1 = (*(r12 + 0x3e0)).12
            int64_t var_1958_1 = (*(r12 + 0x400)).q
            uint64_t i_1 = rdi_1
            uint128_t var_1968_1 = *(r12 + 0x3f0)
            void* var_88_1 = nullptr
            int32_t var_78_1 = 0
            int32_t var_74_1 = 0x63
            int32_t var_1a24
            
            do
                if (i_1 != rdi_1)
                    uint64_t i_5 = *(i_1 + 0x380)
                    uint64_t i_3 = i_1
                    
                    if (i_5 != 0)
                        i_3 = i_5
                    
                    int64_t r15_2 = sx.q(*(i_1 + 0x388)) * 0x38 + i_3
                    
                    if (i_3 != r15_2)
                        void* r12_1 = r12 + 0x440
                        int32_t var_1a30
                        int32_t* var_19f8 = &var_1a30
                        int128_t var_19d8
                        int128_t* var_19f0_1 = &var_19d8
                        
                        if (arg1 == 0)
                            r12_1 = 0x450
                        
                        do
                            int64_t r14_2 = sx.q(*(rdi_1 + 0x388))
                            int32_t rax_8 = (r14_2 + 1).d
                            *(rdi_1 + 0x388) = rax_8
                            
                            if (rax_8 s> *(rdi_1 + 0x38c))
                                sub_142667630(rdi_1, r14_2.d)
                            
                            uint64_t rcx_11 = *(rdi_1 + 0x380)
                            uint64_t rdx_5 = rdi_1
                            int64_t r8_2 = r14_2 * 0x38
                            
                            if (rcx_11 != 0)
                                rdx_5 = rcx_11
                            
                            *(rdx_5 + r8_2) = *i_3
                            *(rdx_5 + r8_2 + 0x10) = *(i_3 + 0x10)
                            *(rdx_5 + r8_2 + 0x18) = *(i_3 + 0x18)
                            *(rdx_5 + r8_2 + 0x20) = *(i_3 + 0x20)
                            void* rax_11 = *(i_3 + 0x28)
                            *(rdx_5 + r8_2 + 0x28) = rax_11
                            
                            if (rax_11 != 0)
                                *(rax_11 + 8) += 1
                            
                            *(rdx_5 + r8_2 + 0x30) = *(i_3 + 0x30)
                            uint64_t rax_13 = rdi_1
                            uint64_t rcx_12 = *(rdi_1 + 0x380)
                            int32_t var_1a00_1 = r14_2.d
                            
                            if (rcx_12 != 0)
                                rax_13 = rcx_12
                            
                            var_19d8 = rdi_1.o
                            var_1a30 = *(rax_13 + r8_2 + 0x30)
                            rdx_3 = sub_14263f9c0(r12_1, &var_1a24, &var_19f8, nullptr)
                            i_3 += 0x38
                        while (i_3 != r15_2)
                        
                        r14_1 = var_78_1
                        rcx_9 = var_88_1
                        r12 = arg1
                
                rbx &= 0xfffffff0
                void var_1948
                
                do
                    uint64_t rsi_2 = zx.q(rbx) & 7
                    uint64_t r15_3 = zx.q(rbx)
                    void* rax_15 = *(i_1 + (rsi_2 << 3) + 0x398)
                    
                    if (rax_15 != 0 && (*(rax_15 + 0x3d8) & 0x7fffffff) u> 0)
                        var_78_1 = r14_1 + 1
                        
                        if (r14_1 + 1 s> var_74_1)
                            sub_1409da5f0(&var_1948, r14_1)
                            rcx_9 = var_88_1
                        
                        void* rdx_8 = &var_1948
                        
                        if (rcx_9 != 0)
                            rdx_8 = rcx_9
                        
                        int64_t rax_18 = sx.q(r14_1) << 6
                        rdx_3 = rdx_8 + rax_18
                        
                        if (rdx_8 == neg.q(rax_18))
                            rdx_3 = 0
                        else
                            *(rdx_3 + 0x1c) = 0x3f800000
                            *(rdx_3 + 0x10) = 0
                            *(rdx_3 + 0x18) = 0
                            *(rdx_3 + 0x24) = 0
                            *(rdx_3 + 0x2c) = 0x3f800000
                            *rdx_3 = 0
                        
                        *rdx_3 = *(i_1 + (rsi_2 << 3) + 0x398)
                        int128_t zmm0_1
                        zmm0_1.d =
                            var_1958_1:4.d.d f* *(&data_142e669e0 + ((zx.q(r15_3.d) & 1) << 2))
                        zmm0_1.d = zmm0_1.d f+ var_1978_1.d
                        *(rdx_3 + 0x10) = zmm0_1.d
                        zmm0_1.d = var_1958_1:4.d.d f*
                            *(&data_142e669e0 + ((zx.q((r15_3 u>> 1).d) & 1) << 2))
                        zmm0_1.d = zmm0_1.d f+ var_1978_1:4.d
                        *(rdx_3 + 0x14) = zmm0_1.d
                        zmm0_1.d = var_1958_1:4.d.d f*
                            *(&data_142e669e0 + ((zx.q((r15_3 u>> 2).d) & 1) << 2))
                        zmm0_1.d = zmm0_1.d f+ var_1978_1:8.d
                        *(rdx_3 + 0x1c) = 0
                        *(rdx_3 + 0x18) = zmm0_1.d
                        *(rdx_3 + 0x20) = var_1958_1.d.d
                        *(rdx_3 + 0x24) = var_1958_1.d.d
                        *(rdx_3 + 0x28) = var_1958_1.d.d
                        *(rdx_3 + 0x2c) = 0
                        uint128_t zmm1
                        zmm1.d = var_1958_1.d.d f* 0.5f
                        zmm1.d = zmm1.d f* 1.0625f
                        *(rdx_3 + 0x30) = zmm1.d
                        zmm0_1.d = var_1958_1.d.d f- zmm1.d
                        *(rdx_3 + 0x34) = zmm0_1.d
                        r14_1 = var_78_1
                        rcx_9 = var_88_1
                    
                    if ((rbx.b & 7) u>= 7)
                        rbx |= 8
                    else
                        rbx ^= ((rbx + 1) ^ rbx) & 7
                while (((rbx u>> 3).b & 1) == 0)
                
                if (r14_1 == 0)
                    uint128_t zmm2 = data_142d3f660
                    i_1.o = 0.o
                    int128_t var_1998
                    var_1958_1 = var_1998.q
                    int128_t var_19b8
                    __builtin_memcpy(&var_19b8, 
                        "\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x80\x3f\x00\x00\x00\x"
                    "00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x80\x3f", 
                        0x20)
                    var_1978_1 = zmm2.12
                    uint128_t var_1968_3 = zmm2
                else
                    void* r9_1 = &var_1948
                    
                    if (rcx_9 != 0)
                        r9_1 = rcx_9
                    
                    int128_t* rax_33 = sx.q(r14_1 - 1) << 6
                    i_1.o = *(rax_33 + r9_1)
                    var_1978_1 = (*(rax_33 + r9_1 + 0x10)).12
                    int128_t var_1968_2 = *(rax_33 + r9_1 + 0x20)
                    var_1958_1 = (*(rax_33 + r9_1 + 0x30)).q
                    
                    if (0 != 0)
                        memmove((sx.q(r14_1 - 1) << 6) + r9_1, (sx.q(r14_1) << 6) + r9_1, 0 << 6)
                        r14_1 = var_78_1
                    
                    var_78_1 = r14_1 - 1
                    rdx_3 = sub_1409da9e0(&var_1948)
                    rcx_9 = var_88_1
                    r14_1 = var_78_1
            while (i_1 != 0)
            
            if (rcx_9 != 0)
                rdx_3 = sub_140a74f90(rcx_9)
            
            int32_t rbx_2 = var_1a24 & 0xfffffff0
            
            do
                uint64_t r14_5 = zx.q(rbx_2) & 7
                
                if (*(rdi_1 + (r14_5 << 3) + 0x398) != 0)
                    *(r12 + 0x418) = sx.q(*(r12 + 0x418) - 0x3e0)
                    void* rsi_4 = *(rdi_1 + (r14_5 << 3) + 0x398)
                    
                    if (rsi_4 != 0)
                        sub_1426454b0(rsi_4, rdx_3.d)
                        rdx_3 = j_sub_140a74f90(rsi_4)
                
                *(rdi_1 + (r14_5 << 3) + 0x398) = 0
                
                if ((rbx_2.b & 7) u>= 7)
                    rbx_2 |= 8
                else
                    rbx_2 ^= ((rbx_2 + 1) ^ rbx_2) & 7
            while (((rbx_2 u>> 3).b & 1) == 0)
            
            result = zx.q(*(rdi_1 + 0x3d8))
        
        result = zx.q(result.d) | 0x80000000
        *(rdi_1 + 0x3d8) = result.d

__security_check_cookie(rax_1 ^ &var_1a58)
return result
