// 函数: sub_141fe09c0
// 地址: 0x141fe09c0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t* r8 = *(arg1 + 0x78)
void* r11 = arg1 + 0x88
int64_t zmm0 = (*(r8 + (sx.q(arg2) << 5))).q

if (*(arg1 + 0xac) != 0)
    r8[sx.q(*(arg1 + 0xa8)) * 8] = arg2
    r8 = *(arg1 + 0x78)

int32_t rax_3 = -1
r8[sx.q(arg2) * 8] = 0xffffffff

if (*(arg1 + 0xac) s> 0)
    rax_3 = *(arg1 + 0xa8)

int64_t r13 = sx.q(zmm0.d)
r8[sx.q(arg2) * 8 + 1] = rax_3
int32_t rdi = r13.d
*(arg1 + 0xac) += 1
int32_t i_4 = 1
*(arg1 + 0xa8) = arg2
void* rax_4 = *(r11 + 0x10)

if (rax_4 != 0)
    r11 = rax_4

int32_t temp0
int32_t temp1
temp0:temp1 = sx.q(arg2)
int64_t rcx_1 = sx.q((temp1 + (temp0 & 0x1f)) s>> 5)
void* result_2 = arg1 + 0x48
*(r11 + (rcx_1 << 2)) &= not.d(rol.d(1, arg2.b))
int64_t rcx_2 = r13 << 2
void* result_1 = *(arg1 + 0x68)
int32_t r11_1 = zmm0:4.d
int32_t r12 = *(arg1 + 0x70)

if (result_1 != 0)
    result_2 = result_1

int32_t r14_1 = r11_1 - *(result_2 + rcx_2)

if (r13.d u< r12)
    do
        result_1 = *(arg1 + 0x68)
        void* result_3 = arg1 + 0x48
        
        if (result_1 != 0)
            result_3 = result_1
        
        int32_t r9_3 = *(result_3 + (sx.q(rdi) << 2)) + r14_1
        
        if (i_4 != 0)
            uint64_t i_2 = zx.q(i_4)
            uint64_t i
            
            do
                void* rax_10 = *(arg1 + 0x38)
                void* rdx_2 = arg1 + 0x28
                
                if (rax_10 != 0)
                    rdx_2 = rax_10
                
                int32_t rax_11 = r9_3
                
                if (r9_3 s< 0)
                    rax_11 = r9_3 + 0x1f
                
                void* r8_1 = rdx_2 + (sx.q(rax_11 s>> 5) << 2)
                int32_t rdx_3 = 1 << (r9_3.b & 0x1f)
                r9_3 += 1
                *r8_1 &= not.d(rdx_3)
                i = i_2
                i_2 -= 1
            while (i != 1)
            result_1 = *(arg1 + 0x68)
        
        r14_1 <<= 2
        rdi += 1
        i_4 <<= 2
    while (rdi u< r12)

int32_t i_1 = (r13 - 1).d
uint64_t result = arg1 + 0x48

if (result_1 != 0)
    result = result_1

int32_t r11_3 = (r11_1 - *(result + rcx_2)) & 0xfffffffc

while (i_1 != 0xffffffff)
    void* rax_13 = *(arg1 + 0x68)
    void* r9_4 = arg1 + 0x48
    int64_t i_3 = sx.q(i_1)
    void* r8_2 = arg1 + 0x28
    
    if (rax_13 != 0)
        r9_4 = rax_13
    
    void* rax_14 = *(arg1 + 0x38)
    int32_t rdx_6 = *(r9_4 + (i_3 << 2) + 4) + r11_3
    
    if (rax_14 != 0)
        r8_2 = rax_14
    
    int32_t rax_15 = rdx_6
    
    if (rdx_6 s< 0)
        rax_15 = rdx_6 + 0x1f
    
    result = sx.q(rax_15 s>> 5)
    
    if (test_bit(*(r8_2 + (result << 2)), rdx_6 & 0x1f))
        break
    
    int32_t rcx_7 = rdx_6 + 1
    int32_t rbx_4 = rcx_7 & 0x1f
    
    if (rcx_7 s< 0)
        rcx_7 += 0x1f
    
    result = sx.q(rcx_7 s>> 5)
    
    if (test_bit(*(r8_2 + (result << 2)), rbx_4))
        break
    
    int32_t rcx_10 = rdx_6 + 2
    int32_t rbx_6 = rcx_10 & 0x1f
    
    if (rcx_10 s< 0)
        rcx_10 += 0x1f
    
    result = sx.q(rcx_10 s>> 5)
    
    if (test_bit(*(r8_2 + (result << 2)), rbx_6))
        break
    
    int32_t rcx_13 = rdx_6 + 3
    int32_t rdx_8 = rcx_13 & 0x1f
    
    if (rcx_13 s< 0)
        rcx_13 += 0x1f
    
    result = sx.q(rcx_13 s>> 5)
    
    if (test_bit(*(r8_2 + (result << 2)), rdx_8))
        break
    
    int32_t rcx_16 = *(r9_4 + (i_3 << 2))
    uint32_t r11_4 = r11_3 u>> 2
    int32_t rcx_17 = rcx_16 + r11_4
    int32_t rax_17 = rcx_17
    
    if (rcx_16 + r11_4 s< 0)
        rax_17 = rcx_17 + 0x1f
    
    r11_3 = r11_4 & 0xfffffffc
    int32_t* rdx_9 = r8_2 + (sx.q(rax_17 s>> 5) << 2)
    i_1 -= 1
    result = zx.q(not.d(1 << (rcx_17.b & 0x1f)))
    *rdx_9 &= result.d

return result
