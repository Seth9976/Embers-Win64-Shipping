// 函数: sub_1421b8f60
// 地址: 0x1421b8f60
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

sub_1421b93f0(arg1)
int64_t* rax = arg1[0x3b]
arg1[0x24].d = 0
arg1[0x23].d = 0
int32_t rax_1

if (*rax == 0)
    rax_1 = 0
else
    rax_1 = *(*rax + 0xe4)

arg1[0x52].d = rax_1
void* rax_2 = arg1[3]
*(arg1 + 0x284) = 0
int32_t rcx_2 = *(rax_2 + 0x614) * 0xbb38435 + 0x3619636b
*(rax_2 + 0x614) = rcx_2
int128_t zmm0
zmm0.d = (rcx_2 u>> 9 | 0x3f800000).d f- 1f
int32_t rax_3 = int.d(zmm0.d)
arg1[0x51].d = rax_3
*(arg1 + 0x28c) = rax_3 * 0xbb38435 + 0x3619636b
void* rax_4 = arg1[0x3a]
zmm0.d = ((rax_3 * 0xbb38435 + 0x3619636b) u>> 9 | 0x3f800000).d f- 1f
*(arg1 + 0x294) = zmm0.d
void* r15 = *(rax_4 + 0x80)
int32_t i

if (arg1[0x52].d != 0)
    i = 0
else
    i = data_143a2ece8
    int32_t temp1_1
    int32_t temp2_1
    temp1_1:temp2_1 = sx.q(*(arg1[0x3b] + 0x164) + 0xf)
    int32_t rax_10 = (temp2_1 + (temp1_1 & 0xf)) s>> 4
    uint128_t zmm1_1
    zmm1_1.d = _mm_cvtepi32_ps(zx.o(rax_10)).d f* data_143a2ece4
    zmm1_1.d = zmm1_1.d f+ zmm1_1.d
    zmm0.d = -0.5f f- zmm1_1.d
    int32_t i_1 = rax_10 - (int.d(zmm0.d) s>> 1)
    
    if (i_1 s<= i)
        i = i_1

while (arg1[0x3e].d s< i)
    EnterCriticalSection(r15 + 0xd0)
    int64_t rcx_12 = sx.q(*(r15 + 0xc8))
    
    if (rcx_12.d s<= 0)
        if (r15 != -0xd0)
            LeaveCriticalSection(r15 + 0xd0)
        
        break
    
    *(r15 + 0xc8) = (rcx_12 - 1).d
    int32_t r14_1 = *(*(r15 + 0xb8) + (rcx_12 << 2) - 4)
    
    if (r15 != -0xd0)
        LeaveCriticalSection(r15 + 0xd0)
    
    if (r14_1 == 0xffffffff)
        break
    
    int64_t rbp_1 = sx.q(arg1[0x3e].d)
    int32_t rax_13 = (rbp_1 + 1).d
    arg1[0x3e].d = rax_13
    
    if (rax_13 s> *(arg1 + 0x1f4))
        sub_1405a4cf0(&arg1[0x3d])
    
    *(arg1[0x3d] + (rbp_1 << 2)) = r14_1
    int64_t rbp_2 = sx.q(arg1[0x44].d)
    int32_t rax_15 = (rbp_2 + 1).d
    arg1[0x44].d = rax_15
    
    if (rax_15 s> *(arg1 + 0x224))
        sub_1406105e0(&arg1[0x43])
    
    *(arg1[0x43] + (rbp_2 << 2)) = 0

void* rax_18 = **(arg1[2] + 0x40)

if ((rax_18 != 0 && (*(*(rax_18 + 0x48) + 0x414) & 1) != 0) || arg1[0x42].d != arg1[0x3e].d)
    int32_t rax_21 = arg1[0x3e].d
    void* rsi_1 = &arg1[0x3f]
    void* r14_2 = rsi_1 + 0x18
    int32_t rcx_20 = *(rsi_1 + 0x1c) + 0x1f
    *r14_2 = rax_21
    uint64_t rcx_21 = zx.q(rcx_20 u>> 5)
    uint32_t rbp_4 = (rax_21 + 0x1f) u>> 5
    
    if (rbp_4 u<= rcx_21.d)
        void* rax_26 = *(rsi_1 + 0x10)
        
        if (rax_26 != 0)
            rsi_1 = rax_26
        
        if (rcx_21.d u> 8)
            memset(rsi_1, 0, zx.q(rcx_21.d) << 2)
        else if (rcx_21.d != 0)
            __builtin_memset(rsi_1, 0, rcx_21 << 2)
    else
        sub_1405a4a00(rsi_1, 0, rbp_4, 4)
        *(rsi_1 + 0x1c) = rbp_4 << 5
        void* rax_24 = *(rsi_1 + 0x10)
        
        if (rax_24 != 0)
            rsi_1 = rax_24
        
        if (rbp_4 u> 8)
            memset(rsi_1, 0, zx.q(rbp_4) << 2)
        else if (rbp_4 != 0)
            __builtin_memset(rsi_1, 0, zx.q(rbp_4) << 2)
        
        uint64_t rax_25 = zx.q(rbp_4 - 1)
        *(rsi_1 + (rax_25 << 2)) &= 0xffffffff u>> ((neg.d(*r14_2)).b & 0x1f)
    
    sub_1421af5e0(arg1)

*(arg1[0x3c] + 0x210) = 1
void* rax_28 = arg1[0x3a]

if (*(rax_28 + 8) == 0)
    void* var_78 = rax_28
    int64_t var_70_1 = arg1[0x3c]
    
    if (sub_140a80f40() == 0)
        uint32_t rax_31
        
        if (data_143f138f4 == 0 && data_143de5480 != 0)
            rax_31.b = GetCurrentThreadId() == data_143de5470
        
        if (data_143f138f4 != 0 || (data_143de5480 != 0 && rax_31.b == 0))
            void var_58
            int64_t* rax_32 = sub_1421b0c10(&var_58, nullptr, 0xff)
            *(*rax_32 + 0x10) = var_78.o
            void* rcx_34 = *rax_32
            int32_t r8_6 = rax_32[2].d
            int64_t* rdx_7 = rax_32[1]
            int64_t* rdi_4 = *(rcx_34 + 0x28)
            int64_t* arg_10 = rdi_4
            int32_t* rsi_2 = &rdi_4[9]
            
            if (rdi_4 != 0)
                *rsi_2 += 1
                rdi_4 = arg_10
            
            sub_1405e48c0(rcx_34, rdx_7, r8_6, 1)
            
            if (rdi_4 != 0)
                int32_t rax_33 = *rsi_2
                *rsi_2 -= 1
                
                if (rax_33 == 1)
                    sub_140a2f6e0(arg_10)
        else
            int128_t var_68 = var_78.o
            sub_1421ac020(&var_68)
    else
        sub_1421ac020(&var_78)

void* rax_35 = *arg1[0x3b]
int64_t rax_36

if (rax_35 == 0)
    rax_36 = sub_14210f630(0)
else
    rax_36 = *(rax_35 + 0x30)

arg1[0x34] = rax_36
return sub_1421b9d50(arg1) __tailcall
