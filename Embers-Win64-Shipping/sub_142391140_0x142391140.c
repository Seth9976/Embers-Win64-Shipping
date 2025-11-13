// 函数: sub_142391140
// 地址: 0x142391140
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

sub_14239a380(arg1 + 0x10)
int32_t rdx = *(arg1 + 0x2c)
void* r12 = *(arg1 + 8)

if (rdx != 0xffffffff)
    int32_t r8_1 = *(arg1 + 0x30)
    
    if (r8_1 != 0xffffffff)
        if (sub_1423b2a70(r12, rdx, r8_1) != 0)
            sub_1423b6be0(r12)
        
        *(arg1 + 0x2c) = -1

int64_t* rdi = *(arg1 + 0x38)
int64_t rcx_3 = sx.q(*(arg1 + 0x40))
int64_t rsi = 0
uint64_t r14_1 = rcx_3 << 3 u>> 3

if (rdi u> &rdi[rcx_3])
    r14_1 = 0

if (r14_1 != 0)
    do
        void* rbx_1 = *rdi
        sub_1423b40c0(r12, rbx_1, arg2)
        *(rbx_1 + 0x208) &= 0xaf
        rdi = &rdi[1]
        rsi += 1
    while (rsi != r14_1)
    
    rcx_3 = zx.q(*(arg1 + 0x40))

int64_t** rdi_1 = *(arg1 + 0x38)
int64_t rsi_1 = 0
uint64_t r14_3 = sx.q(rcx_3.d) << 3 u>> 3

if (rdi_1 u> &rdi_1[sx.q(rcx_3.d)])
    r14_3 = 0

if (r14_3 != 0)
    do
        int64_t* rbx_2 = *rdi_1
        
        if ((rbx_2[0x41].b & 0x10) == 0)
            int32_t rax_5 = *(rbx_2 + 0xc)
            void* const rax_9
            
            if (rax_5 s>= data_143e1d9b4)
                rax_9 = nullptr
            else
                uint32_t rdx_2 = zx.d(rax_5.w)
                
                if (rax_5 s< 0)
                    rax_5 += 0xffff
                    rdx_2 -= 0x10000
                
                rax_9 = *(data_143e1d9a0 + (sx.q(rax_5 s>> 0x10) << 3)) + sx.q(rdx_2) * 0x18
            
            if (((*(rax_9 + 8) u>> 0x1d).b & 1) == 0 && (rbx_2[1].d & 0x18000) == 0)
                char rax_12 = rbx_2[0x11].b
                
                if ((rax_12 & 1) != 0 && ((rax_12 & 2) == 0 || rbx_2[0x7d] != 0))
                    void var_68
                    sub_1423a5060(&var_68, 3, rbx_2)
                    
                    if (sub_1423a97e0(r12, rbx_2, &var_68) == 2)
                        rbx_2[0x41].b |= 0x10
                    
                    sub_1423a6360(&var_68)
        
        rdi_1 = &rdi_1[1]
        rsi_1 += 1
    while (rsi_1 != r14_3)

*(arg1 + 0x40) = 0

if (*(arg1 + 0x44) s<= 0xffffffff)
    sub_1405c5570(arg1 + 0x38, 0)

int64_t result
int32_t zmm6_1
result, zmm6_1 = sub_14239a380(arg1 + 0x10)
void* rdx_5 = *(arg1 + 8)
int32_t r8_5 = *(arg1 + 0x28)
int32_t rcx_12 = *(rdx_5 + 0x130)

if (r8_5 s< rcx_12)
    void* rbx_3 = *(arg1 + 0x18)
    uint128_t zmm1_1
    zmm1_1.d = _mm_cvtepi32_ps(zx.o(rcx_12)).d f* zmm6_1
    zmm1_1.d = zmm1_1.d f+ zmm1_1.d
    int32_t r9_2 = r8_5 - (int.d(-0.5f f- zmm1_1.d) s>> 1)
    
    if (rcx_12 s<= r9_2)
        r9_2 = rcx_12
    
    result = sub_1423b1800(rbx_3 + 0x10, rdx_5, r8_5, r9_2)
    *(rbx_3 + 0x48) = 1

return result
