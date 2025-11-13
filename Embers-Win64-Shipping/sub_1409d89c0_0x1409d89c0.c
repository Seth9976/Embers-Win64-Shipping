// 函数: sub_1409d89c0
// 地址: 0x1409d89c0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

__chkstk(0x19f0)
void var_1a18
int64_t rax_1 = __security_cookie ^ &var_1a18
int64_t* i = *arg2
int64_t rdi = sx.q(arg2[1].d)
int32_t r11 = i[0x26].d
int32_t r10_2 = r11 - rdi.d - 1

if (r10_2 s>= 1)
    r10_2 = 1

if (r10_2 != 0)
    int64_t* i_5 = i[0x24]
    int64_t* i_3 = i
    
    if (i_5 != 0)
        i_3 = i_5
    
    memcpy(&i_3[rdi * 6], &i_3[sx.q(r11 - r10_2) * 6], r10_2 * 0x30)
    r11 = i[0x26].d

i[0x26].d = r11 - 1
sub_1409da730(i)
*(arg1 + 0x1c8) = sx.q(*(arg1 + 0x1c8) - 0x30)
int128_t var_19e8

if (rdi.d s< i[0x26].d)
    int64_t* i_6 = i[0x24]
    int64_t* i_2 = i
    
    if (i_6 != 0)
        i_2 = i_6
    
    var_19e8 = *arg2
    sub_140998ea0(i_2[rdi * 6] + 0x618, rdi * 0x30 + 8 + i_2, &var_19e8)

uint64_t rdi_1 = nullptr
uint64_t result

do
    int32_t rax_8 = i[0x31].d
    int32_t rcx_11 = (((rax_8 - 1) ^ rax_8) & 0x7fffffff) ^ rax_8
    result = i
    i[0x31].d = rcx_11
    i = i[0x28]
    
    if ((rcx_11 & 0x7fffffff) u>= 7)
        result = rdi_1
    
    rdi_1 = result
while (i != 0)

if (result != 0)
    result = zx.q(*(result + 0x188))
    
    if (result.d s>= 0)
        uint64_t rdx_6 = zx.q(result.d) & 0x7fffffff
        
        if (*(rdi_1 + 0x130) s< rdx_6.d)
            if (rdx_6.d s> *(rdi_1 + 0x134))
                rdx_6 = sub_1409daa80(rdi_1, rdx_6.d)
            
            void* rcx_14 = nullptr
            int32_t rsi_1 = 0
            int32_t var_19f8
            int32_t rbx = var_19f8
            int96_t var_1978_1 = (*(arg1 + 0x190)).12
            int64_t var_1958_1 = (*(arg1 + 0x1b0)).q
            uint64_t i_1 = rdi_1
            int128_t var_1968_1 = *(arg1 + 0x1a0)
            void* var_88_1 = nullptr
            int32_t var_78_1 = 0
            int32_t var_74_1 = 0x63
            
            do
                if (i_1 != rdi_1)
                    uint64_t i_7 = *(i_1 + 0x120)
                    uint64_t i_4 = i_1
                    
                    if (i_7 != 0)
                        i_4 = i_7
                    
                    int64_t r15_3 = sx.q(*(i_1 + 0x130)) * 0x30 + i_4
                    
                    if (i_4 != r15_3)
                        do
                            int64_t rsi_2 = sx.q(*(rdi_1 + 0x130))
                            int32_t rax_10 = (rsi_2 + 1).d
                            *(rdi_1 + 0x130) = rax_10
                            
                            if (rax_10 s> *(rdi_1 + 0x134))
                                sub_1409da200(rdi_1, rsi_2.d)
                            
                            int128_t* rcx_16 = *(rdi_1 + 0x120)
                            int128_t* rax_11 = rdi_1
                            var_19e8.q = rdi_1
                            var_19e8:8.d = rsi_2.d
                            
                            if (rcx_16 != 0)
                                rax_11 = rcx_16
                            
                            uint64_t rcx_17 = rdi_1
                            rax_11[rsi_2 * 3] = *i_4
                            rax_11[rsi_2 * 3 + 1] = *(i_4 + 0x10)
                            rax_11[rsi_2 * 3 + 2] = *(i_4 + 0x20)
                            uint64_t rax_12 = *(rdi_1 + 0x120)
                            int128_t var_19d8 = var_19e8
                            
                            if (rax_12 != 0)
                                rcx_17 = rax_12
                            
                            int64_t rcx_18 = rcx_17 + rsi_2 * 0x30
                            rdx_6 = sub_140998ea0(*rcx_18 + 0x618, rcx_18 + 8, &var_19d8)
                            i_4 += 0x30
                        while (i_4 != r15_3)
                        
                        rsi_1 = var_78_1
                        rcx_14 = var_88_1
                
                rbx &= 0xfffffff0
                void var_1948
                int128_t zmm1
                
                do
                    uint64_t r14_2 = zx.q(rbx) & 7
                    uint64_t r15_4 = zx.q(rbx)
                    void* rax_13 = *(i_1 + (r14_2 << 3) + 0x148)
                    
                    if (rax_13 != 0 && (*(rax_13 + 0x188) & 0x7fffffff) u> 0)
                        var_78_1 = rsi_1 + 1
                        
                        if (rsi_1 + 1 s> var_74_1)
                            sub_1409da5f0(&var_1948, rsi_1)
                            rcx_14 = var_88_1
                        
                        void* rdx_12 = &var_1948
                        
                        if (rcx_14 != 0)
                            rdx_12 = rcx_14
                        
                        int64_t rax_16 = sx.q(rsi_1) << 6
                        rdx_6 = rdx_12 + rax_16
                        
                        if (rdx_12 == neg.q(rax_16))
                            rdx_6 = 0
                        else
                            *(rdx_6 + 0x1c) = 0x3f800000
                            *(rdx_6 + 0x10) = 0
                            *(rdx_6 + 0x18) = 0
                            *(rdx_6 + 0x24) = 0
                            *(rdx_6 + 0x2c) = 0x3f800000
                            *rdx_6 = 0
                        
                        *rdx_6 = *(i_1 + (r14_2 << 3) + 0x148)
                        int128_t zmm0_1
                        zmm0_1.d =
                            var_1958_1:4.d.d f* *(&data_142e669e0 + ((zx.q(r15_4.d) & 1) << 2))
                        zmm0_1.d = zmm0_1.d f+ var_1978_1.d
                        *(rdx_6 + 0x10) = zmm0_1.d
                        zmm0_1.d = var_1958_1:4.d.d f*
                            *(&data_142e669e0 + ((zx.q((r15_4 u>> 1).d) & 1) << 2))
                        zmm0_1.d = zmm0_1.d f+ var_1978_1:4.d
                        *(rdx_6 + 0x14) = zmm0_1.d
                        zmm0_1.d = var_1958_1:4.d.d f*
                            *(&data_142e669e0 + ((zx.q((r15_4 u>> 2).d) & 1) << 2))
                        zmm0_1.d = zmm0_1.d f+ var_1978_1:8.d
                        *(rdx_6 + 0x1c) = 0
                        *(rdx_6 + 0x18) = zmm0_1.d
                        *(rdx_6 + 0x20) = var_1958_1.d.d
                        *(rdx_6 + 0x24) = var_1958_1.d.d
                        *(rdx_6 + 0x28) = var_1958_1.d.d
                        *(rdx_6 + 0x2c) = 0
                        zmm1.d = var_1958_1.d.d f* 0.5f
                        zmm1.d = zmm1.d f* 1.0625f
                        *(rdx_6 + 0x30) = zmm1.d
                        zmm0_1.d = var_1958_1.d.d f- zmm1.d
                        *(rdx_6 + 0x34) = zmm0_1.d
                        rsi_1 = var_78_1
                        rcx_14 = var_88_1
                    
                    if ((rbx.b & 7) u>= 7)
                        rbx |= 8
                    else
                        rbx ^= ((rbx + 1) ^ rbx) & 7
                while (((rbx u>> 3).b & 1) == 0)
                
                if (rsi_1 == 0)
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
                    
                    if (rcx_14 != 0)
                        r9_1 = rcx_14
                    
                    int128_t* rax_31 = sx.q(rsi_1 - 1) << 6
                    i_1.o = *(rax_31 + r9_1)
                    var_1978_1 = (*(rax_31 + r9_1 + 0x10)).12
                    int128_t var_1968_2 = *(rax_31 + r9_1 + 0x20)
                    var_1958_1 = (*(rax_31 + r9_1 + 0x30)).q
                    
                    if (0 != 0)
                        memmove((sx.q(rsi_1 - 1) << 6) + r9_1, (sx.q(rsi_1) << 6) + r9_1, 0 << 6)
                        rsi_1 = var_78_1
                    
                    var_78_1 = rsi_1 - 1
                    rdx_6 = sub_1409da9e0(&var_1948)
                    rcx_14 = var_88_1
                    rsi_1 = var_78_1
            while (i_1 != 0)
            
            if (rcx_14 != 0)
                rdx_6 = sub_140a74f90(rcx_14)
            
            int32_t rbx_2 = var_19f8 & 0xfffffff0
            
            do
                uint64_t r14_4 = zx.q(rbx_2) & 7
                
                if (*(rdi_1 + (r14_4 << 3) + 0x148) != 0)
                    *(arg1 + 0x1c8) = sx.q(*(arg1 + 0x1c8) - 0x190)
                    void* rsi_5 = *(rdi_1 + (r14_4 << 3) + 0x148)
                    
                    if (rsi_5 != 0)
                        sub_1409ab900(rsi_5, rdx_6.d)
                        rdx_6 = j_sub_140a74f90(rsi_5)
                
                *(rdi_1 + (r14_4 << 3) + 0x148) = 0
                
                if ((rbx_2.b & 7) u>= 7)
                    rbx_2 |= 8
                else
                    rbx_2 ^= ((rbx_2 + 1) ^ rbx_2) & 7
            while (((rbx_2 u>> 3).b & 1) == 0)
            
            result = zx.q(*(rdi_1 + 0x188))
        
        result = zx.q(result.d) | 0x80000000
        *(rdi_1 + 0x188) = result.d

__security_check_cookie(rax_1 ^ &var_1a18)
return result
