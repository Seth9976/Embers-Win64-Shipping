// 函数: sub_14214fc70
// 地址: 0x14214fc70
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

char rax = *(arg2 + 0x29)
int64_t* rbx = arg2

if (arg3.b == 0)
    return not.b(rax) & 1

int64_t rsi
rsi.b = 0
uint128_t __saved_zmm7 = arg6

if ((rax & 1) == 0)
    int64_t r10_1 = arg2[0x15]
    
    if (r10_1 s< arg2[0x14])
        arg3 = arg2[0x12]
        arg4 = sx.q((r10_1 s>> 3).d)
        arg2.b = 1 << (r10_1.b & 7)
        bool cond:0_1 = (*(arg4 + arg3) & arg2.b) != 0
        rbx[0x15] = r10_1 + 1
        rsi.b = cond:0_1
    else
        arg2 = 1
        sub_140b55370(rbx)

int64_t* rcx_3 = *(arg1 + 0x58)
arg6 = zx.o(0)
uint64_t result = (*(*rcx_3 + 0x368))(rcx_3, arg2, arg3, arg4, arg7, __saved_zmm7)
char arg_18

if (result.b != 0)
    *(arg1 + 0x1308) = rsi.b
else if (rsi.b != 0)
    int64_t* rcx_4 = rbx[1]
    arg_18 = result.b
    char* rdx = *rcx_4
    
    if (&rdx[1] u> rcx_4[1])
        (*(*rbx + 0x150))(rbx, &arg_18, 1)
    else
        arg_18 = *rdx
        *rcx_4 += 1
    
    arg6.q = _mm_cvtepi32_pd(zx.q(arg_18)).q f* 0.001

if (*(rbx + 0x54) u< 0xe)
    int64_t* rcx_6 = rbx[1]
    arg_18 = 0
    char* rdx_2 = *rcx_6
    
    if (&rdx_2[1] u> rcx_6[1])
        (*(*rbx + 0x150))(rbx, &arg_18, 1)
    else
        arg_18 = *rdx_2
        *rcx_6 += 1

if ((*(rbx + 0x29) & 1) == 0)
    result = zx.q(*(arg1 + 0x1304))
    uint64_t rbp_1 = zx.q(result.b)
    
    if (*(arg1 + (rbp_1 << 2) + 0xdf8) == result.d)
        int64_t rbx_1 = 0
        *(arg1 + (rbp_1 << 2) + 0xdf8) = 0xffffffff
        uint128_t zmm6
        uint128_t var_28_1 = zmm6
        
        if (*(arg1 + 0x220) == 0 || *(arg1 + 0x58) == 0)
            zmm6 = zx.o(data_143dbb3b8)
        else
            int64_t r14_1 = data_143f4cc58
            int64_t rcx_8
            
            if (data_143de5480 == 0)
                rcx_8 = 0
            else
                rcx_8.b = GetCurrentThreadId().d != data_143de5470
            
            if (*(r14_1 + (rcx_8 << 2)) == 0)
                zmm6 = zx.o(data_143dbb3b8)
            else if (*(arg1 + 0x228) == 0)
                int64_t* rcx_9 = *(arg1 + 0x58)
                result = (*(*rcx_9 + 0x378))(rcx_9)
                
                if (result != 0)
                    int64_t r9 = *result
                    (*(r9 + 0x100))(result, arg1 + 0x220, 0, r9)
                    zmm6 = arg5
                    goto label_14214fe90
                
                zmm6 = zx.o(data_143dbb3b8)
            else
                zmm6.q = float.d(*(arg1 + 0x220))
                zmm6.q = zmm6.q f* 9.9999999999999995e-08
            label_14214fe90:
                
                if (not(zmm6.q f!= 0.0))
                    zmm6 = zx.o(data_143dbb3b8)
        
        int64_t rsi_1 = data_143f4cc40
        
        if (data_143de5480 != 0)
            rbx_1.b = GetCurrentThreadId().d != data_143de5470
        
        if (*(rsi_1 + (rbx_1 << 2)) == 0)
            arg6 = zx.o(0)
        
        zmm6.q = zmm6.q f- *(arg1 + (rbp_1 << 3) + 0x5f8)
        *(arg1 + 0x478) += 1
        int64_t* rcx_11 = *(arg1 + 0x30)
        zmm6.q = zmm6.q f- arg6.q
        zmm6 = _mm_max_sd(zmm6.q, 0)
        arg5.q = zmm6.q f+ *(arg1 + 0x470)
        *(arg1 + 0x470) = arg5.q
        
        if (rcx_11 != 0)
            int512_t zmm1
            zmm1.o = zx.o(0)
            zmm1.d = fconvert.s(zmm6.q)
            (*(*rcx_11 + 0xcc8))(rcx_11, zmm1)
    
    result.b = 1
else
    result.b = 0

return result
