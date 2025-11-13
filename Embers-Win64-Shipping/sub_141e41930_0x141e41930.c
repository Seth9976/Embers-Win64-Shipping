// 函数: sub_141e41930
// 地址: 0x141e41930
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_48
int64_t result = __security_cookie ^ &var_48
int64_t result_1 = result
int64_t rbx = sx.q(*(arg1 + 0x20))
int64_t rdi = 0
arg2[1].d = 0

if (rbx.d s> *(arg2 + 0xc))
    result = sub_140638c50(arg2, rbx.d)

arg3[1].d = 0

if (rbx.d s> *(arg3 + 0xc))
    result = sub_1405a52a0(arg3, rbx.d)

if (rbx.d s> 0)
    int64_t r15_1 = sx.q(arg2[1].d)
    int32_t rax_1 = (r15_1 + rbx).d
    arg2[1].d = rax_1
    
    if (rax_1 s> *(arg2 + 0xc))
        sub_1405a4d70(arg2)
    
    int64_t rbp_1 = rbx
    memset(*arg2 + (r15_1 << 3), 0, rbx << 3)
    int64_t r15_2 = sx.q(arg3[1].d)
    int32_t rax_3 = (r15_2 + rbx).d
    arg3[1].d = rax_3
    
    if (rax_3 s> *(arg3 + 0xc))
        sub_1405c4fe0(arg3)
    
    int64_t var_28_1 = 0
    result = 0
    int64_t* rdx_6 = (r15_2 << 6) + *arg3
    void* rcx_5 = &rdx_6[2]
    int32_t i
    
    do
        *rdx_6 = 0
        rcx_5 += 0x40
        rdx_6 = &rdx_6[8]
        *(rcx_5 - 0x40) = data_143dbb0c0
        *(rcx_5 - 0x30) = data_143dbb0d0
        *(rcx_5 - 0x20) = data_143dbb0e0
        i = rbx.d
        rbx = zx.q(rbx.d - 1)
    while (i != 1)
    
    if (rbp_1 s> 0)
        int64_t r8_1 = 0
        int64_t* rdx_7 = nullptr
        
        do
            r8_1 += 0x40
            *(*arg2 + (rdi << 3)) = *(rdx_7 + *(arg1 + 0x18))
            rdi += 1
            void* rcx_8 = *(arg1 + 0x18) + rdx_7
            rdx_7 = &rdx_7[0xc]
            result = *(rcx_8 + 8)
            int128_t zmm2 = *(rcx_8 + 0x10)
            int128_t zmm1 = *(rcx_8 + 0x20)
            int128_t zmm0_1 = *(rcx_8 + 0x30)
            int64_t rcx_9 = *arg3
            *(r8_1 + rcx_9 - 0x40) = result
            *(r8_1 + rcx_9 - 0x30) = zmm2
            *(r8_1 + rcx_9 - 0x20) = zmm1
            *(r8_1 + rcx_9 - 0x10) = zmm0_1
        while (rdi s< rbp_1)

__security_check_cookie(result_1 ^ &var_48)
return result
