// 函数: sub_1429504b0
// 地址: 0x1429504b0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

__chkstk(0x28)
uint32_t* rdi = arg6
char* rbx = arg1
int64_t i_6 = arg2 << 5
char* r10 = arg1

if (i_6 != 0)
    int64_t i_3 = i_6
    int64_t i
    
    do
        uint32_t rax_1 = zx.d(*r10)
        r10 = &r10[4]
        *rdi = rax_1
        uint32_t rcx_2 = zx.d(r10[-3]) << 8 | rax_1
        *rdi = rcx_2
        uint32_t rdx_2 = zx.d(r10[-2]) << 0x10 | rcx_2
        *rdi = rdx_2
        *rdi = zx.d(r10[-1]) << 0x18 | rdx_2
        rdi = &rdi[1]
        i = i_3
        i_3 -= 1
    while (i != 1)

if (arg3 u> 1)
    int64_t i_4 = arg3 - 1
    int64_t i_1
    
    do
        sub_142950020(rdi, rdi - (arg2 << 7), arg2)
        rdi = &rdi[arg2 * 0x20]
        i_1 = i_4
        i_4 -= 1
    while (i_1 != 1)

uint8_t result = sub_142950020(arg4, ((arg3 << 7) - 0x80) * arg2 + arg6, arg2)
int64_t rbp_3 = 0

if (arg3 != 0)
    int64_t i_5 = arg3
    int64_t i_2
    
    do
        int64_t r10_1 = 0
        void* rax_9 =
            &arg6[zx.q((modu.dp.q(0:(zx.q(*((arg2 << 7) + arg4 - 0x40))), arg3)).d) * arg2 * 0x20]
        
        if (i_6 != 0)
            if (i_6 u>= 0x10)
                void* rdx_13 = &arg5[-1 + i_6]
                
                if ((arg5 u> rax_9 + ((i_6 - 1) << 2) || rdx_13 u< rax_9)
                        && (arg5 u> arg4 - 4 + (i_6 << 2) || rdx_13 u< arg4))
                    void* rdx_14 = &arg5[4]
                    void* rcx_10 = arg4 - arg5
                    
                    do
                        r10_1 += 0x10
                        int128_t zmm1_1 = *(rcx_10 + rdx_14 - 0x10)
                        rdx_14 += 0x40
                        int128_t zmm0_1 = *(rax_9 + 0x10)
                        *(rdx_14 - 0x50) = zmm1_1 ^ *rax_9
                        zmm1_1 = *(rcx_10 + rdx_14 - 0x40) ^ zmm0_1
                        zmm0_1 = *(rax_9 + 0x20)
                        *(rdx_14 - 0x40) = zmm1_1
                        zmm1_1 = *(rcx_10 + rdx_14 - 0x30) ^ zmm0_1
                        zmm0_1 = *(rax_9 + 0x30)
                        rax_9 += 0x40
                        *(rdx_14 - 0x30) = zmm1_1
                        *(rdx_14 - 0x20) = *(rcx_10 + rdx_14 - 0x20) ^ zmm0_1
                    while (r10_1 u< i_6)
            
            if (r10_1 u< i_6)
                void* rdx_15 = &arg5[r10_1]
                int64_t j_1 = i_6 - r10_1
                int64_t j
                
                do
                    int32_t rcx_11 = *(arg4 - arg5 + rdx_15)
                    rdx_15 += 4
                    int32_t rcx_12 = rcx_11 ^ *rax_9
                    rax_9 += 4
                    *(rdx_15 - 4) = rcx_12
                    j = j_1
                    j_1 -= 1
                while (j != 1)
        
        result = sub_142950020(arg4, arg5, arg2)
        i_2 = i_5
        i_5 -= 1
    while (i_2 != 1)
    rbx = arg1

if (i_6 != 0)
    do
        int32_t rcx_14 = *(arg4 + (rbp_3 << 2))
        *rbx = rcx_14.b
        rbx = &rbx[4]
        rbp_3 += 1
        rbx[-3] = (rcx_14 u>> 8).b
        result = (rcx_14 u>> 0x10).b
        rbx[-2] = result
        rbx[-1] = (rcx_14 u>> 0x18).b
    while (rbp_3 u< i_6)

return result
