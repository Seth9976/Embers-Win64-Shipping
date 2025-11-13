// 函数: sub_14122f170
// 地址: 0x14122f170
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

__chkstk(0x19e0)
void var_1a08
int64_t rax_1 = __security_cookie ^ &var_1a08
uint64_t i = *arg2
int64_t rdi = sx.q(arg2[1].d)
int32_t r11 = *(i + 0x310)
int32_t r10_2 = r11 - rdi.d - 1

if (r10_2 s>= 1)
    r10_2 = 1

if (r10_2 != 0)
    uint64_t i_5 = *(i + 0x300)
    uint64_t i_3 = i
    
    if (i_5 != 0)
        i_3 = i_5
    
    memcpy(rdi * 0x30 + i_3, sx.q(r11 - r10_2) * 0x30 + i_3, r10_2 * 0x30)
    r11 = *(i + 0x310)

*(i + 0x310) = r11 - 1
int32_t r8_3 = sub_141238ce0(i)
*(arg1 + 0x3a8) = sx.q(*(arg1 + 0x3a8) - 0x30)

if (rdi.d s< *(i + 0x310))
    uint64_t i_6 = *(i + 0x300)
    uint64_t i_2 = i
    
    if (i_6 != 0)
        i_2 = i_6
    
    *(*(i_2 + rdi * 0x30 + 0x20) + 0x30) = *arg2

uint64_t rsi_1 = nullptr
uint64_t result

do
    int32_t rax_9 = *(i + 0x368)
    int32_t rcx_9 = (((rax_9 - 1) ^ rax_9) & 0x7fffffff) ^ rax_9
    result = i
    *(i + 0x368) = rcx_9
    i = *(i + 0x320)
    
    if ((rcx_9 & 0x7fffffff) u>= 7)
        result = rsi_1
    
    rsi_1 = result
while (i != 0)

if (result != 0)
    result = zx.q(*(result + 0x368))
    
    if (result.d s>= 0)
        int32_t rdx_4 = result.d & 0x7fffffff
        
        if (*(rsi_1 + 0x310) s< rdx_4)
            if (rdx_4 s> *(rsi_1 + 0x314))
                r8_3 = sub_141238e80(rsi_1, rdx_4)
            
            void* rcx_12 = nullptr
            int32_t rdi_1 = 0
            int32_t var_19e8
            int32_t rbx = var_19e8
            int96_t var_1978_1 = (*(arg1 + 0x370)).12
            int64_t var_1958_1 = (*(arg1 + 0x390)).q
            uint64_t i_1 = rsi_1
            int128_t var_1968_1 = *(arg1 + 0x380)
            void* var_88_1 = nullptr
            int32_t var_78_1 = 0
            int32_t var_74_1 = 0x63
            
            do
                if (i_1 != rsi_1)
                    uint64_t i_7 = *(i_1 + 0x300)
                    uint64_t i_4 = i_1
                    
                    if (i_7 != 0)
                        i_4 = i_7
                    
                    int64_t r15_3 = sx.q(*(i_1 + 0x310)) * 0x30 + i_4
                    
                    if (i_4 != r15_3)
                        do
                            int64_t rdi_2 = sx.q(*(rsi_1 + 0x310))
                            int32_t rax_11 = (rdi_2 + 1).d
                            *(rsi_1 + 0x310) = rax_11
                            
                            if (rax_11 s> *(rsi_1 + 0x314))
                                r8_3 = sub_141238a90(rsi_1, rdi_2.d)
                            
                            uint64_t rcx_14 = *(rsi_1 + 0x300)
                            int64_t rdx_7 = rdi_2 * 6
                            uint64_t rax_12 = rsi_1
                            int32_t var_19d8_1 = rdi_2.d
                            
                            if (rcx_14 != 0)
                                rax_12 = rcx_14
                            
                            uint64_t rcx_15 = rsi_1
                            *(rax_12 + (rdx_7 << 3)) = *i_4
                            *(rax_12 + (rdx_7 << 3) + 0x10) = *(i_4 + 0x10)
                            *(rax_12 + (rdx_7 << 3) + 0x20) = *(i_4 + 0x20)
                            uint64_t rax_13 = *(rsi_1 + 0x300)
                            
                            if (rax_13 != 0)
                                rcx_15 = rax_13
                            
                            i_4 += 0x30
                            *(*(rcx_15 + (rdx_7 << 3) + 0x20) + 0x30) = rsi_1.o
                        while (i_4 != r15_3)
                        
                        rdi_1 = var_78_1
                        rcx_12 = var_88_1
                
                rbx &= 0xfffffff0
                void var_1948
                int128_t zmm1
                
                do
                    uint64_t r14_2 = zx.q(rbx) & 7
                    uint64_t r15_4 = zx.q(rbx)
                    void* rax_15 = *(i_1 + (r14_2 << 3) + 0x328)
                    
                    if (rax_15 != 0 && (*(rax_15 + 0x368) & 0x7fffffff) u> 0)
                        var_78_1 = rdi_1 + 1
                        
                        if (rdi_1 + 1 s> var_74_1)
                            r8_3 = sub_1409da5f0(&var_1948, rdi_1)
                            rcx_12 = var_88_1
                        
                        void* rdx_9 = &var_1948
                        
                        if (rcx_12 != 0)
                            rdx_9 = rcx_12
                        
                        int64_t rax_18 = sx.q(rdi_1) << 6
                        void* rdx_10 = rdx_9 + rax_18
                        
                        if (rdx_9 == neg.q(rax_18))
                            rdx_10 = nullptr
                        else
                            *(rdx_10 + 0x1c) = 0x3f800000
                            *(rdx_10 + 0x10) = 0
                            *(rdx_10 + 0x18) = 0
                            *(rdx_10 + 0x24) = 0
                            *(rdx_10 + 0x2c) = 0x3f800000
                            *rdx_10 = 0
                        
                        *rdx_10 = *(i_1 + (r14_2 << 3) + 0x328)
                        int128_t zmm0_1
                        zmm0_1.d =
                            var_1958_1:4.d.d f* *(&data_142e669e0 + ((zx.q(r15_4.d) & 1) << 2))
                        zmm0_1.d = zmm0_1.d f+ var_1978_1.d
                        *(rdx_10 + 0x10) = zmm0_1.d
                        zmm0_1.d = var_1958_1:4.d.d f*
                            *(&data_142e669e0 + ((zx.q((r15_4 u>> 1).d) & 1) << 2))
                        zmm0_1.d = zmm0_1.d f+ var_1978_1:4.d
                        *(rdx_10 + 0x14) = zmm0_1.d
                        zmm0_1.d = var_1958_1:4.d.d f*
                            *(&data_142e669e0 + ((zx.q((r15_4 u>> 2).d) & 1) << 2))
                        zmm0_1.d = zmm0_1.d f+ var_1978_1:8.d
                        *(rdx_10 + 0x1c) = 0
                        *(rdx_10 + 0x18) = zmm0_1.d
                        *(rdx_10 + 0x20) = var_1958_1.d.d
                        *(rdx_10 + 0x24) = var_1958_1.d.d
                        *(rdx_10 + 0x28) = var_1958_1.d.d
                        *(rdx_10 + 0x2c) = 0
                        zmm1.d = var_1958_1.d.d f* 0.5f
                        zmm1.d = zmm1.d f* 1.0625f
                        *(rdx_10 + 0x30) = zmm1.d
                        zmm0_1.d = var_1958_1.d.d f- zmm1.d
                        *(rdx_10 + 0x34) = zmm0_1.d
                        rdi_1 = var_78_1
                        rcx_12 = var_88_1
                    
                    if ((rbx.b & 7) u>= 7)
                        rbx |= 8
                    else
                        rbx ^= ((rbx + 1) ^ rbx) & 7
                while (((rbx u>> 3).b & 1) == 0)
                
                if (rdi_1 == 0)
                    zmm1 = data_142d3f660
                    int512_t zmm2
                    zmm2.o = zmm1
                    i_1.o = 0.o
                    int128_t var_1998
                    var_1958_1 = var_1998.q
                    var_1978_1 = zmm1.12
                    int128_t var_1968_3 = zmm1
                else
                    void* r9_1 = &var_1948
                    
                    if (rcx_12 != 0)
                        r9_1 = rcx_12
                    
                    int128_t* rax_33 = sx.q(rdi_1 - 1) << 6
                    i_1.o = *(rax_33 + r9_1)
                    var_1978_1 = (*(rax_33 + r9_1 + 0x10)).12
                    int128_t var_1968_2 = *(rax_33 + r9_1 + 0x20)
                    var_1958_1 = (*(rax_33 + r9_1 + 0x30)).q
                    
                    if (0 != 0)
                        memmove((sx.q(rdi_1 - 1) << 6) + r9_1, (sx.q(rdi_1) << 6) + r9_1, 0 << 6)
                        rdi_1 = var_78_1
                    
                    var_78_1 = rdi_1 - 1
                    r8_3 = sub_1409da9e0(&var_1948)
                    rcx_12 = var_88_1
                    rdi_1 = var_78_1
            while (i_1 != 0)
            
            if (rcx_12 != 0)
                r8_3 = sub_140a74f90(rcx_12)
            
            int32_t rbx_1 = var_19e8
            int32_t rdi_5 = var_19e8 & 0xfffffff0
            
            do
                uint64_t r15_8 = zx.q(rdi_5) & 7
                
                if (*(rsi_1 + (r15_8 << 3) + 0x328) != 0)
                    *(arg1 + 0x3a8) = sx.q(*(arg1 + 0x3a8) - 0x370)
                    void* r14_4 = *(rsi_1 + (r15_8 << 3) + 0x328)
                    
                    if (r14_4 != 0)
                        rbx_1 &= 0xfffffff0
                        
                        do
                            void* rcx_23 = *(r14_4 + ((zx.q(rbx_1) & 7) << 3) + 0x328)
                            
                            if (rcx_23 != 0)
                                r8_3 = sub_14121ad90(rcx_23, 1, r8_3)
                            
                            if ((rbx_1.b & 7) u>= 7)
                                rbx_1 |= 8
                            else
                                rbx_1 ^= ((rbx_1 + 1) ^ rbx_1) & 7
                        while (((rbx_1 u>> 3).b & 1) == 0)
                        
                        int64_t rcx_24 = *(r14_4 + 0x300)
                        
                        if (rcx_24 != 0)
                            sub_140a74f90(rcx_24)
                        
                        r8_3 = j_sub_140a74f90(r14_4)
                
                *(rsi_1 + (r15_8 << 3) + 0x328) = 0
                
                if ((rdi_5.b & 7) u>= 7)
                    rdi_5 |= 8
                else
                    rdi_5 ^= ((rdi_5 + 1) ^ rdi_5) & 7
            while (((rdi_5 u>> 3).b & 1) == 0)
            
            result = zx.q(*(rsi_1 + 0x368))
        
        result = zx.q(result.d) | 0x80000000
        *(rsi_1 + 0x368) = result.d

__security_check_cookie(rax_1 ^ &var_1a08)
return result
