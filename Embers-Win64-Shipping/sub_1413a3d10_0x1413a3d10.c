// 函数: sub_1413a3d10
// 地址: 0x1413a3d10
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

__chkstk(0x19e0)
void var_1a08
int64_t rax_1 = __security_cookie ^ &var_1a08
int64_t* i = *arg2
int64_t rdi = sx.q(arg2[1].d)
int32_t r11 = i[0x801].d
int32_t r10_2 = r11 - rdi.d - 1

if (r10_2 s>= 1)
    r10_2 = 1

if (r10_2 != 0)
    int64_t* i_5 = i[0x800]
    int64_t* i_3 = i
    
    if (i_5 != 0)
        i_3 = i_5
    
    memcpy(&i_3[rdi * 8], &i_3[sx.q(r11 - r10_2) * 8], r10_2 << 6)
    r11 = i[0x801].d

i[0x801].d = r11 - 1
int32_t r8_3 = sub_1413a8a20(i)
*(arg1 + 0x4098) = sx.q(*(arg1 + 0x4098) - 0x40)

if (rdi.d s< i[0x801].d)
    int64_t* i_6 = i[0x800]
    int64_t* i_2 = i
    
    if (i_6 != 0)
        i_2 = i_6
    
    *(i_2[rdi * 8] + 0x58) = *arg2

uint64_t rsi_1 = nullptr
uint64_t result

do
    int32_t rax_8 = i[0x80b].d
    int32_t rcx_8 = (((rax_8 - 1) ^ rax_8) & 0x7fffffff) ^ rax_8
    result = i
    i[0x80b].d = rcx_8
    i = i[0x802]
    
    if ((rcx_8 & 0x7fffffff) u>= 7)
        result = rsi_1
    
    rsi_1 = result
while (i != 0)

if (result != 0)
    result = zx.q(*(result + 0x4058))
    
    if (result.d s>= 0)
        int32_t rdx_4 = result.d & 0x7fffffff
        
        if (*(rsi_1 + 0x4008) s< rdx_4)
            if (rdx_4 s> *(rsi_1 + 0x400c))
                r8_3 = sub_1413a8b60(rsi_1, rdx_4)
            
            void* rcx_11 = nullptr
            int32_t rdi_1 = 0
            int32_t var_19e8
            int32_t rbx = var_19e8
            int96_t var_1978_1 = (*(arg1 + 0x4060)).12
            int64_t var_1958_1 = (*(arg1 + 0x4080)).q
            uint64_t i_1 = rsi_1
            int128_t var_1968_1 = *(arg1 + 0x4070)
            void* var_88_1 = nullptr
            int32_t var_78_1 = 0
            int32_t var_74_1 = 0x63
            
            do
                if (i_1 != rsi_1)
                    uint64_t i_7 = *(i_1 + 0x4000)
                    uint64_t i_4 = i_1
                    
                    if (i_7 != 0)
                        i_4 = i_7
                    
                    int64_t r15_3 = (sx.q(*(i_1 + 0x4008)) << 6) + i_4
                    
                    if (i_4 != r15_3)
                        do
                            int64_t rdi_2 = sx.q(*(rsi_1 + 0x4008))
                            int32_t rax_9 = (rdi_2 + 1).d
                            *(rsi_1 + 0x4008) = rax_9
                            
                            if (rax_9 s> *(rsi_1 + 0x400c))
                                r8_3 = sub_1413a8850(rsi_1, rdi_2.d)
                            
                            uint64_t rax_10 = *(rsi_1 + 0x4000)
                            int64_t rdx_7 = rdi_2 << 6
                            uint64_t rcx_13 = rsi_1
                            int32_t var_19d8_1 = rdi_2.d
                            
                            if (rax_10 != 0)
                                rcx_13 = rax_10
                            
                            *(rcx_13 + rdx_7) = *i_4
                            *(rcx_13 + rdx_7 + 0x10) = *(i_4 + 0x10)
                            *(rcx_13 + rdx_7 + 0x20) = *(i_4 + 0x20)
                            *(rcx_13 + rdx_7 + 0x30) = *(i_4 + 0x30)
                            uint64_t rax_11 = *(rsi_1 + 0x4000)
                            uint64_t rcx_14 = rsi_1
                            
                            if (rax_11 != 0)
                                rcx_14 = rax_11
                            
                            i_4 += 0x40
                            *(*(rcx_14 + rdx_7) + 0x58) = rsi_1.o
                        while (i_4 != r15_3)
                        
                        rdi_1 = var_78_1
                        rcx_11 = var_88_1
                
                rbx &= 0xfffffff0
                void var_1948
                int128_t zmm1
                
                do
                    uint64_t r14_2 = zx.q(rbx) & 7
                    uint64_t r15_4 = zx.q(rbx)
                    void* rax_13 = *(i_1 + (r14_2 << 3) + 0x4018)
                    
                    if (rax_13 != 0 && (*(rax_13 + 0x4058) & 0x7fffffff) u> 0)
                        var_78_1 = rdi_1 + 1
                        
                        if (rdi_1 + 1 s> var_74_1)
                            r8_3 = sub_1409da5f0(&var_1948, rdi_1)
                            rcx_11 = var_88_1
                        
                        void* rdx_9 = &var_1948
                        
                        if (rcx_11 != 0)
                            rdx_9 = rcx_11
                        
                        int64_t rax_16 = sx.q(rdi_1) << 6
                        void* rdx_10 = rdx_9 + rax_16
                        
                        if (rdx_9 == neg.q(rax_16))
                            rdx_10 = nullptr
                        else
                            *(rdx_10 + 0x1c) = 0x3f800000
                            *(rdx_10 + 0x10) = 0
                            *(rdx_10 + 0x18) = 0
                            *(rdx_10 + 0x24) = 0
                            *(rdx_10 + 0x2c) = 0x3f800000
                            *rdx_10 = 0
                        
                        *rdx_10 = *(i_1 + (r14_2 << 3) + 0x4018)
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
                        rcx_11 = var_88_1
                    
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
                    
                    if (rcx_11 != 0)
                        r9_1 = rcx_11
                    
                    int128_t* rax_31 = sx.q(rdi_1 - 1) << 6
                    i_1.o = *(rax_31 + r9_1)
                    var_1978_1 = (*(rax_31 + r9_1 + 0x10)).12
                    int128_t var_1968_2 = *(rax_31 + r9_1 + 0x20)
                    var_1958_1 = (*(rax_31 + r9_1 + 0x30)).q
                    
                    if (0 != 0)
                        memmove((sx.q(rdi_1 - 1) << 6) + r9_1, (sx.q(rdi_1) << 6) + r9_1, 0 << 6)
                        rdi_1 = var_78_1
                    
                    var_78_1 = rdi_1 - 1
                    r8_3 = sub_1409da9e0(&var_1948)
                    rcx_11 = var_88_1
                    rdi_1 = var_78_1
            while (i_1 != 0)
            
            if (rcx_11 != 0)
                r8_3 = sub_140a74f90(rcx_11)
            
            int32_t rbx_1 = var_19e8
            int32_t rdi_5 = var_19e8 & 0xfffffff0
            
            do
                uint64_t r15_8 = zx.q(rdi_5) & 7
                
                if (*(rsi_1 + (r15_8 << 3) + 0x4018) != 0)
                    *(arg1 + 0x4098) = sx.q(*(arg1 + 0x4098) - 0x4060)
                    void* r14_4 = *(rsi_1 + (r15_8 << 3) + 0x4018)
                    
                    if (r14_4 != 0)
                        rbx_1 &= 0xfffffff0
                        
                        do
                            void* rcx_22 = *(r14_4 + ((zx.q(rbx_1) & 7) << 3) + 0x4018)
                            
                            if (rcx_22 != 0)
                                r8_3 = sub_141389fc0(rcx_22, 1, r8_3)
                            
                            if ((rbx_1.b & 7) u>= 7)
                                rbx_1 |= 8
                            else
                                rbx_1 ^= ((rbx_1 + 1) ^ rbx_1) & 7
                        while (((rbx_1 u>> 3).b & 1) == 0)
                        
                        int64_t rcx_23 = *(r14_4 + 0x4000)
                        
                        if (rcx_23 != 0)
                            sub_140a74f90(rcx_23)
                        
                        r8_3 = j_sub_140a74f90(r14_4)
                
                *(rsi_1 + (r15_8 << 3) + 0x4018) = 0
                
                if ((rdi_5.b & 7) u>= 7)
                    rdi_5 |= 8
                else
                    rdi_5 ^= ((rdi_5 + 1) ^ rdi_5) & 7
            while (((rdi_5 u>> 3).b & 1) == 0)
            
            result = zx.q(*(rsi_1 + 0x4058))
        
        result = zx.q(result.d) | 0x80000000
        *(rsi_1 + 0x4058) = result.d

__security_check_cookie(rax_1 ^ &var_1a08)
return result
