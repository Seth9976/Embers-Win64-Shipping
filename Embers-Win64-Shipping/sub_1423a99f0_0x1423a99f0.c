// 函数: sub_1423a99f0
// 地址: 0x1423a99f0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* arg_18 = arg3
int64_t arg_10 = arg2
bool cond:0 = *(arg1 + 0x150) == 0
int32_t arg_28
int128_t zmm6 = arg_28
*(arg1 + 0x120) = _mm_max_ss((*(arg1 + 0x120))[0], zmm6.d)[0]
int32_t r14

if (cond:0)
    int32_t rax_7 = *(arg1 + 0x28)
    int64_t rsi_1 = sx.q(rax_7)
    arg_28 = rax_7
    int32_t var_88_1 = 0xffffffff
    int32_t rax_8 = (rsi_1 + 1).d
    int32_t var_84_1 = 0
    int64_t var_7c_1 = -1
    int32_t var_74_1 = 0xffffffff
    *(arg1 + 0x28) = rax_8
    
    if (rax_8 s> *(arg1 + 0x2c))
        sub_1405c4ec0(arg1 + 0x20)
    
    int64_t rdx_3 = *(arg1 + 0x20)
    int64_t rcx_4 = rsi_1 * 5
    arg5 = var_7c_1
    *(rdx_3 + (rcx_4 << 3)) = zx.o(0)
    *(rdx_3 + (rcx_4 << 3) + 0x10) = var_88_1.o
    *(rdx_3 + (rcx_4 << 3) + 0x20) = arg5
    r14 = arg_28
else
    int64_t r10_1 = *(arg1 + 0x148)
    int32_t rcx = *(arg1 + 0x150)
    r14 = *(r10_1 + (sx.q(rcx - 1) << 2))
    
    if (0 != 0)
        memmove(r10_1 + (sx.q(rcx - 1) << 2), r10_1 + (sx.q(rcx) << 2), 0 << 2)
        rcx = *(arg1 + 0x150)
    
    *(arg1 + 0x150) = rcx - 1
    sub_1405dac90(arg1 + 0x148)
    arg_28 = r14

int64_t rsi_2 = *(arg1 + 0x20)
int64_t r14_1 = sx.q(r14) * 5
*(rsi_2 + (r14_1 << 3)) = arg_10
int64_t* r12_1 = rsi_2 + 8 + (r14_1 << 3)
*r12_1 = arg_18
char arg_30
*(rsi_2 + (r14_1 << 3) + 0x18) = arg_30
*(rsi_2 + (r14_1 << 3) + 0x14) = zmm6.d
*(rsi_2 + (r14_1 << 3) + 0x10) = arg4
int64_t* r15_1 = arg_18
sub_140865c40(arg1 + 0x30, &arg_30, r15_1)
int64_t rax_13 = sx.q(arg_30.d)
void* r9_1

if (rax_13.d != 0xffffffff)
    r9_1 = *(arg1 + 0x30) + rax_13 * 0x18

int64_t* var_a8
int32_t result_1

if (rax_13.d == 0xffffffff || r9_1 == 0 || r9_1 == -8)
    int32_t arg_c = (*(*r15_1 + 0x260))(r15_1, arg5)
    int32_t arg_8 = arg_28
    var_a8 = &arg_18
    result_1 = &arg_8
    sub_1408d5f10(arg1 + 0x30, &arg_30, &var_a8, nullptr)
else
    int64_t rcx_6 = sx.q(*(r9_1 + 8))
    int64_t r8_3 = *(arg1 + 0x20)
    *(rsi_2 + (r14_1 << 3) + 0x20) = rcx_6.d
    *(r8_3 + rcx_6 * 0x28 + 0x1c) = arg_28
    *(r9_1 + 8) = arg_28

int32_t* rax_19 = *arg6

if (rax_19 == 0)
    var_a8 = &arg_10
    result_1 = &arg_28
    sub_14239dbe0(arg1 + 0x168, &arg_30, &var_a8, nullptr)
    *arg6 = *(arg1 + 0x168) + ((sx.q(arg_30.d) * 3 + 1) << 3)
else
    *(rsi_2 + (r14_1 << 3) + 0x24) = *rax_19
    **arg6 = arg_28

int32_t* result = zx.q(*(arg1 + 0x88))

if (result.d != *(arg1 + 0xb4))
    var_a8.d = *(rsi_2 + (r14_1 << 3) + 0x10)
    result_1.b = *(rsi_2 + (r14_1 << 3) + 0x18)
    uint32_t r8_7 = (*r12_1 u>> 4).d
    var_a8:4.d = (*(rsi_2 + (r14_1 << 3) + 0x14))[0]
    int32_t r9_4 = (0x9e3779b9 - r8_7) ^ r8_7 << 8
    int32_t rdx_13 = neg.d(r8_7 + r9_4) ^ r9_4 u>> 0xd
    int32_t r8_10 = (r8_7 - r9_4 - rdx_13) ^ rdx_13 u>> 0xc
    int32_t r9_7 = (r9_4 - r8_10 - rdx_13) ^ r8_10 << 0x10
    int32_t rdx_16 = (rdx_13 - r9_7 - r8_10) ^ r9_7 u>> 5
    int32_t r8_13 = (r8_10 - r9_7 - rdx_16) ^ rdx_16 u>> 3
    int32_t r9_10 = (r9_7 - r8_13 - rdx_16) ^ r8_13 << 0xa
    int64_t* rax_42 = sub_14239df40(arg1 + 0x80, (rdx_16 - r9_10 - r8_13) ^ r9_10 u>> 0xf, r12_1)
    int64_t r15_3 = sx.q(rax_42[1].d)
    int32_t rcx_12 = (r15_3 + 1).d
    rax_42[1].d = rcx_12
    
    if (rcx_12 s> *(rax_42 + 0xc))
        sub_14083a7e0(rax_42)
    
    int64_t rdx_21 = *rax_42
    int64_t rcx_14 = r15_3 * 3
    result = zx.q(result_1)
    *(rdx_21 + (rcx_14 << 2)) = var_a8
    *(rdx_21 + (rcx_14 << 2) + 8) = result.d
    
    if (not(0f f<= *(rsi_2 + (r14_1 << 3) + 0x14)))
        int64_t* rbx_2 = arg_18
        void* rax_43 = sub_1425b3bb0()
        void* rdx_22 = rbx_2[2]
        int64_t rax_44 = sx.q(*(rax_43 + 0x38))
        
        if (rax_44.d s<= *(rdx_22 + 0x38))
            result = *(rdx_22 + 0x30)
        
        if (rax_44.d s> *(rdx_22 + 0x38) || *(result + (rax_44 << 3)) != rax_43 + 0x30)
            sub_140865c40(arg1 + 0xd0, &arg_30, *r12_1)
            int64_t rax_45 = sx.q(arg_30.d)
            
            if (rax_45.d == 0xffffffff)
            label_1423a9da1:
                arg_30.d = 1
                char* var_a0 = &arg_30
                var_a8 = r12_1
                int32_t arg_20
                return sub_1405a7a30(arg1 + 0xd0, &arg_20, &var_a8, nullptr)
            
            void* rax_47 = *(arg1 + 0xd0) + rax_45 * 0x18
            
            if (rax_47 == 0)
                goto label_1423a9da1
            
            result = rax_47 + 8
            
            if (rax_47 == -8)
                goto label_1423a9da1
            
            *result += 1

return result
