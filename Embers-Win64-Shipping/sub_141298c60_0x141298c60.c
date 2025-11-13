// 函数: sub_141298c60
// 地址: 0x141298c60
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* r15 = &arg1[4]

if (*(arg1 + 0x72) u> 0x50)
    r15 = *r15

int64_t* rax = arg1[2]

if (rax != 0)
    arg1 = rax

int64_t* r14 = *arg1
void* rbx = *r14

if ((rbx.b & 1) != 0)
    rbx = (rbx s>> 1) + r14

int64_t r8 = sx.q(r14[1].d)
int32_t i_2 = 0
uint32_t rcx = -1
int32_t i_3 = 0

if (r8.d s> 0 && r8.d u>= 8 && data_143ccb970 s>= 2)
    int32_t zmm4[0x4] = data_142d3f800
    int32_t zmm5[0x4] = zmm4
    int32_t rcx_2 = r8.d & 0x80000007
    
    if (rcx_2 s< 0)
        rcx_2 = ((rcx_2 - 1) | 0xfffffff8) + 1
    
    int64_t i = 0
    
    do
        i_3 += 8
        zmm4 = _mm_max_epi32(zmm4, 
            _mm_cvtepu16_epi32(_mm_shuffle_epi32(
                _mm_shufflehi_epi16(_mm_shufflelo_epi16(*(rbx + (i << 2)), 0xd8), 0xd8), 0xd8)))
        uint16_t zmm0[0x8] = *(rbx + (i << 2) + 0x10)
        i += 8
        zmm5 = _mm_max_epi32(zmm5, 
            _mm_cvtepu16_epi32(_mm_shuffle_epi32(
                _mm_shufflehi_epi16(_mm_shufflelo_epi16(zmm0, 0xd8), 0xd8), 0xd8)))
    while (i s< sx.q(r8.d - rcx_2))
    
    int32_t temp0_11[0x4] = _mm_max_epi32(zmm4, zmm5)
    int32_t temp0_13[0x4] = _mm_max_epi32(temp0_11, _mm_bsrli_si128(temp0_11, 8))
    rcx = _mm_max_epi32(temp0_13, _mm_bsrli_si128(temp0_13, 4))[0]

for (int64_t i_1 = sx.q(i_3); i_1 s< r8; i_1 += 1)
    uint32_t rax_3 = zx.d(*(rbx + (i_1 << 2)))
    
    if (rax_3 s>= rcx)
        rcx = rax_3

uint32_t r9 = 0

if (r14[7].d != 0)
    void* rax_4 = r14[6]
    
    if ((rax_4.b & 1) != 0)
        rax_4 = (rax_4 s>> 1) + &r14[6]
    
    int64_t rbp_1 = sx.q(*(rax_4 + 0x10))
    
    if (rbp_1 s> 0)
        int64_t rdx = 0
        
        do
            void* rax_7 = *(rax_4 + 8)
            
            if ((*(rax_4 + 8) & 1) != 0)
                rax_7 = (rax_7 s>> 1) + rax_4 + 8
            
            int32_t rax_8 = *(rax_7 + (rdx << 2))
            uint32_t rcx_9 = (rax_8 u>> 0x10) + zx.d(rax_8.w)
            
            if (r9 u>= rcx_9)
                rcx_9 = r9
            
            rdx += 1
            r9 = rcx_9
        while (rdx s< rbp_1)

void* rax_10 = sub_14125e9b0(arg2, rcx + 1, r9)
uint64_t result = zx.q(arg3)
*(rax_10 + 8) = arg6
*(rax_10 + 4) = arg4
*(rax_10 + 0xc) = arg5
*rax_10 = result.d
*(rax_10 + 0x10) = 0

if (r8 s> 0)
    int64_t r8_3 = 0
    
    do
        uint64_t rdx_2 = zx.q(*(rbx + (r8_3 << 2)))
        result = r15[r8_3]
        r8_3 += 1
        *(*(rax_10 + 0x18) + (rdx_2 << 3)) = result
    while (r8_3 s< r8)

if (r14[7].d != 0)
    void* rbp_2 = r14[6]
    
    if ((rbp_2.b & 1) != 0)
        rbp_2 = (rbp_2 s>> 1) + &r14[6]
    
    int32_t rax_12 = r14[5].d
    int32_t temp0_16
    int32_t temp1_1
    temp0_16:temp1_1 = sx.q(rax_12 + 7)
    result = zx.q((temp1_1 + (temp0_16 & 7)) s>> 3)
    void* r14_2 = zx.q((result + (zx.q(r14[3].d + rax_12 + r14[1].d) << 3)).d) + r15
    
    if (*(rbp_2 + 0x10) s> 0)
        int64_t r15_1 = 0
        
        do
            void* rax_17 = *(rbp_2 + 8)
            
            if ((rax_17.b & 1) != 0)
                rax_17 = (rax_17 s>> 1) + rbp_2 + 8
            
            int32_t rcx_17 = *(rax_17 + r15_1)
            uint64_t rbx_3 = zx.q(rcx_17) u>> 0x10
            result = memcpy(zx.q(rcx_17.w) + *(rax_10 + 0x20), r14_2, rbx_3.d)
            r14_2 += rbx_3
            i_2 += 1
            r15_1 += 4
        while (i_2 s< *(rbp_2 + 0x10))

return result
