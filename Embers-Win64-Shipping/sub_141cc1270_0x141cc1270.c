// 函数: sub_141cc1270
// 地址: 0x141cc1270
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

sub_14095cd40(arg1 + 0x198, 0)
sub_141cbd6f0(arg1 + 0x60, arg1 + 0x198)
sub_141cbdd30(*(arg1 + 0x198), *(arg1 + 0x1a0), arg2)
int16_t i_2 = 0
int32_t i = 0

if (*(arg1 + 0xb8) s> 0)
    int64_t r14_1 = 0
    void** r11_1 = nullptr
    
    do
        int64_t rdx_2 = 0
        int32_t j = 0
        
        if (*(arg1 + 0x1a0) s> 0)
            int64_t* r10_1 = *(arg1 + 0x198)
            int64_t* rax_1 = r10_1
            
            do
                void* rcx_3 = *rax_1
                int64_t* r9_1
                
                if (*(rcx_3 + 0x10) s<= 0)
                    r9_1 = &data_143f35860
                else
                    r9_1 = *(rcx_3 + 8)
                
                if (*r9_1 == *(*(arg1 + 0xb0) + (r14_1 << 3)))
                    if (rdx_2 != r14_1)
                        int64_t rdx_3 = rdx_2 * 2
                        r10_1[rdx_3] = *(r11_1 + r10_1)
                        *(r11_1 + r10_1) = rcx_3
                        int64_t rcx_4 = r10_1[rdx_3 + 1]
                        r10_1[rdx_3 + 1] = *(r11_1 + r10_1 + 8)
                        *(r11_1 + r10_1 + 8) = rcx_4
                    
                    break
                
                j += 1
                rdx_2 += 1
                rax_1 = &rax_1[2]
            while (j s< *(arg1 + 0x1a0))
        
        i += 1
        r14_1 += 1
        r11_1 = &r11_1[2]
    while (i s< *(arg1 + 0xb8))

uint32_t rcx_5 = zx.d((*(arg1 + 0x1a0)).w + 1)
TEB* gsbase
void* ThreadLocalStoragePointer = gsbase->ThreadLocalStoragePointer
*(arg1 + 0x34) = rcx_5.w
uint64_t rcx_6 = zx.q(data_14401b1a0)
uint128_t zmm6 = _mm_cvtepi32_ps(zx.o(rcx_5))

if (data_143cda914 s> *(0x14 + *(ThreadLocalStoragePointer + (rcx_6 << 3))))
    _Init_thread_header(&data_143cda914)
    
    if (data_143cda914 == 0xffffffff)
        data_143cda910 = 0x3fb8aa3b
        _Init_thread_footer(&data_143cda914)

uint32_t i_1
float zmm0_1
zmm0_1, i_1 = logf(zmm6.d)
zmm0_1 = zmm0_1 f* data_143cda910
int32_t rcx_10 = neg.d(int.d(-0.5f - (zmm0_1 + zmm0_1)) s>> 1)
bool cond:0 = *(arg1 + 0x2c) s<= rcx_10
*(arg1 + 0x28) = rcx_10

if (cond:0)
    rcx_10 = *(arg1 + 0x2c)

bool cond:1 = *(arg1 + 0x1a0) s< 0xffff
*(arg1 + 0x2c) = rcx_10

if (not(cond:1))
    int64_t rbp_3 = sx.q(*(arg1 + 0x1a0))
    
    if (rbp_3.d s< 0xfffe)
        *(arg1 + 0x1a0) = 0xfffe
        
        if (*(arg1 + 0x1a4) s< 0xfffe)
            sub_1405a4f90(arg1 + 0x198)
        
        i_1 = memset((rbp_3 << 4) + *(arg1 + 0x198), 0, sx.q(0xfffe - rbp_3.d) << 4)
    else if (rbp_3.d s> 0xfffe)
        i_1 = sub_140dbae50(arg1 + 0x198, 0xfffe, (rbp_3 - 0xfffe).d, 1)

*(arg1 + 0x1a8) = 0

if (*(arg1 + 0x1a0) s> 0)
    do
        uint64_t rcx_17 = zx.q(i_2) * 2
        void* rdx_5 = *(*(arg1 + 0x198) + (rcx_17 << 3))
        
        if (rdx_5 != 0)
            *(rdx_5 + 0x48) = i_2
            void* rdx_6 = *(*(arg1 + 0x198) + (rcx_17 << 3))
            int32_t* rcx_18
            
            if (*(rdx_6 + 0x10) s<= 0)
                rcx_18 = &data_143f35860
            else
                rcx_18 = *(rdx_6 + 8)
            
            int64_t var_58
            sub_140b63b70(rcx_18, &var_58)
            int64_t var_48
            int64_t* rax_8 = sub_140a35790(&var_58, &var_48)
            int16_t* r10_2
            
            if (rax_8[1].d == 0)
                r10_2 = &data_142d40450
            else
                r10_2 = *rax_8
            
            int16_t j_1 = *r10_2
            void* r10_3 = &r10_2[1]
            int32_t r9_4 = not.d(*(arg1 + 0x1a8))
            
            while (j_1 != 0)
                uint64_t j_2 = zx.q(j_1)
                r10_3 += 2
                int32_t r8_5 = *(&data_1439a0500 + ((zx.q(r9_4.b) ^ zx.q(j_2.b)) << 2)) ^ r9_4 u>> 8
                int32_t rdx_12 =
                    *(&data_1439a0500 + ((zx.q((j_2 u>> 8).b) ^ zx.q(r8_5.b)) << 2)) ^ r8_5 u>> 8
                int32_t r8_8 = *(&data_1439a0500 + (zx.q(rdx_12.b) << 2)) ^ rdx_12 u>> 8
                j_1 = *(r10_3 - 2)
                r9_4 = *(&data_1439a0500 + (zx.q(r8_8.b) << 2)) ^ r8_8 u>> 8
            
            int64_t rcx_23 = var_48
            *(arg1 + 0x1a8) = not.d(r9_4)
            
            if (rcx_23 != 0)
                sub_140a74f90(rcx_23)
            
            int64_t rcx_24 = var_58
            
            if (rcx_24 != 0)
                sub_140a74f90(rcx_24)
        
        i_2 += 1
        i_1 = zx.d(i_2)
    while (i_1 s< *(arg1 + 0x1a0))

return i_1
