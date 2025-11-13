// 函数: sub_142314750
// 地址: 0x142314750
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_68
int64_t rax_1 = __security_cookie ^ &var_68
int64_t var_38 = 0
int64_t var_30 = 0
uint64_t result = sub_141de8500(arg1 + 0x138, arg1 + 0x168, &var_38)
int64_t rbx = sx.q(*(arg1 + 0x160))
arg2[1].d = 0

if (rbx.d s> *(arg2 + 0xc))
    result = sub_140638c50(arg2, rbx.d)

arg3[1].d = 0

if (rbx.d s> *(arg3 + 0xc))
    result = sub_1405a52a0(arg3, rbx.d)

if (rbx.d s> 0)
    int64_t r15_1 = sx.q(arg2[1].d)
    int32_t rax_2 = (r15_1 + rbx).d
    arg2[1].d = rax_2
    
    if (rax_2 s> *(arg2 + 0xc))
        sub_1405a4d70(arg2)
    
    int64_t r14_1 = rbx
    memset(*arg2 + (r15_1 << 3), 0, rbx << 3)
    int64_t r15_2 = sx.q(arg3[1].d)
    int32_t rax_4 = (r15_2 + rbx).d
    arg3[1].d = rax_4
    
    if (rax_4 s> *(arg3 + 0xc))
        sub_1405c4fe0(arg3)
    
    void* const var_48 = nullptr
    result = 0
    int64_t* rdx_7 = (r15_2 << 6) + *arg3
    void* rcx_6 = &rdx_7[2]
    int32_t i
    
    do
        *rdx_7 = 0
        rcx_6 += 0x40
        rdx_7 = &rdx_7[8]
        *(rcx_6 - 0x40) = data_143dbb0c0
        *(rcx_6 - 0x30) = data_143dbb0d0
        *(rcx_6 - 0x20) = data_143dbb0e0
        i = rbx.d
        rbx = zx.q(rbx.d - 1)
    while (i != 1)
    int32_t i_2 = *(arg1 + 0x160)
    void* const r11_1 = nullptr
    void* rbp_1 = *(arg1 + 0x158)
    var_48 = nullptr
    int32_t i_3 = i_2
    
    if (i_2 != 0)
        sub_1407c3650(&var_48, i_2, 0)
        r11_1 = var_48
        void* rcx_8 = rbp_1 + 8
        void* rdx_10 = r11_1 - rbp_1
        int32_t i_1
        
        do
            *(rdx_10 + rcx_8 - 8) = *(rcx_8 - 8)
            result = zx.q(*rcx_8)
            *(rcx_8 + rdx_10) = result.d
            rcx_8 += 0xc
            i_1 = i_2
            i_2 -= 1
        while (i_1 != 1)
    
    if (r14_1 s> 0)
        int64_t rdx_11 = 0
        void* r8_2 = r11_1 + 8
        uint64_t* r9_1 = nullptr
        int128_t* r10_1 = nullptr
        
        do
            *(*arg2 + (rdx_11 << 3)) = *(r8_2 - 8)
            int64_t rax_7 = sx.q(*r8_2)
            int128_t zmm0_1
            int128_t zmm1_1
            int128_t zmm2_1
            
            if (rax_7.d == 0xffffffff)
                int64_t rax_9 = var_38
                void* rcx_13 = *arg3 + r9_1
                var_48 = nullptr
                zmm2_1 = *(r10_1 + rax_9)
                zmm1_1 = *(r10_1 + rax_9 + 0x10)
                zmm0_1 = *(r10_1 + rax_9 + 0x20)
                result = 0
                *rcx_13 = 0
                *(rcx_13 + 0x10) = zmm2_1
                *(rcx_13 + 0x20) = zmm1_1
                *(rcx_13 + 0x30) = zmm0_1
            else
                int64_t rcx_10 = var_38
                result = *(r11_1 + rax_7 * 0xc)
                zmm2_1 = *(r10_1 + rcx_10)
                zmm1_1 = *(r10_1 + rcx_10 + 0x10)
                zmm0_1 = *(r10_1 + rcx_10 + 0x20)
                int64_t rcx_11 = *arg3
                *(r9_1 + rcx_11) = result
                *(r9_1 + rcx_11 + 0x10) = zmm2_1
                *(r9_1 + rcx_11 + 0x20) = zmm1_1
                *(r9_1 + rcx_11 + 0x30) = zmm0_1
            rdx_11 += 1
            r10_1 = &r10_1[3]
            r9_1 = &r9_1[8]
            r8_2 += 0xc
        while (rdx_11 s< r14_1)
    
    if (r11_1 != 0)
        result = sub_140a74f90(r11_1)

int64_t rcx_15 = var_38

if (rcx_15 != 0)
    result = sub_140a74f90(rcx_15)

__security_check_cookie(rax_1 ^ &var_68)
return result
