// 函数: sub_142b36150
// 地址: 0x142b36150
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t r8 = arg2

if (*(arg1 + 0x98) != 0)
    int128_t zmm1
    zmm1.q = float.d(arg2)
    return sub_142b35e80(arg1, zmm1) __tailcall

if (r8 s< 0)
    int64_t* rax_2 = *(arg1 + 0x50)
    
    if (rax_2 != 0)
        return rax_2
    
    r8 = neg.q(r8)

int32_t rbx_1 = *(arg1 + 0x48)

if (rbx_1 s<= 0)
    return *(arg1 + 0x68)

int32_t r9_2 = 0
bool cond:1_1 = rbx_1 != 0

if (rbx_1 s> 0)
    do
        int32_t temp1_1
        int32_t temp2_1
        temp1_1:temp2_1 = sx.q(r9_2 + rbx_1)
        uint64_t rdx_2 = zx.q((temp2_1 - temp1_1) s>> 1)
        int64_t rax_7 = *(arg1 + 0x40)
        int64_t* rax_8
        
        if (rax_7 == 0)
            rax_8 = nullptr
        else
            rax_8 = *(rax_7 + (rdx_2 << 3))
        
        int64_t rcx_1 = *(arg1 + 0x40)
        
        if (*rax_8 == r8)
            if (rcx_1 == 0)
                return 0
            
            return *(rcx_1 + (rdx_2 << 3))
        
        int64_t* rcx_2
        
        if (rcx_1 == 0)
            rcx_2 = nullptr
        else
            rcx_2 = *(rcx_1 + (rdx_2 << 3))
        
        if (*rcx_2 s<= r8)
            r9_2 = (rdx_2 + 1).d
        else
            rbx_1 = rdx_2.d
    while (r9_2 s< rbx_1)
    
    cond:1_1 = rbx_1 != 0

if (not(cond:1_1))
    return 0

int64_t rbp_1 = *(arg1 + 0x40)
int64_t* rbp_2

if (rbp_1 == 0)
    rbp_2 = nullptr
else
    rbp_2 = *(rbp_1 + (zx.q(rbx_1 - 1) << 3))

if (sub_142b353f0(rbp_2, r8) == 0)
    return rbp_2

if (rbx_1 == 1)
    return nullptr

int64_t rbp_3 = *(arg1 + 0x40)

if (rbp_3 == 0)
    return nullptr

return *(rbp_3 + (zx.q(rbx_1 - 2) << 3))
