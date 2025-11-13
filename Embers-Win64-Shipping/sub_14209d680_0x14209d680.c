// 函数: sub_14209d680
// 地址: 0x14209d680
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t rdi = arg1[4].d
int64_t i_3 = sx.q(arg1[1].d)
int64_t i_2 = i_3

if (i_3.d s> 0)
    int128_t* rbx_1 = nullptr
    int64_t i
    
    do
        int64_t rbp_1 = *arg1
        void* r8_1 = nullptr
        uint32_t r11_1 = 0
        uint64_t rax_1 = 0
        uint128_t zmm1 = *(rbx_1 + rbp_1)
        int128_t zmm0
        
        if (rdi s>= 4)
            void* rdx_2 = arg1[3] + 0x48
            uint64_t rax_4 = zx.q(((rdi - 4) u>> 2) + 1)
            void* rcx = rdx_2
            uint64_t j_3 = zx.q(rax_4.d)
            r11_1 = (rax_4 << 2).d
            rax_1 = rax_4 << 2
            uint64_t j
            
            do
                zmm0.d = (*(rdx_2 - 0x48)).d f- zmm1.d
                
                if (not(zmm0.d f<= -0.00100000005f) && not(zmm0.d f>= 0.00100000005f))
                    r8_1 = rcx - 0x48
                
                zmm0.d = (*(rdx_2 - 0x24)).d f- zmm1.d
                
                if (not(zmm0.d f<= -0.00100000005f) && not(zmm0.d f>= 0.00100000005f))
                    r8_1 = rcx - 0x24
                
                zmm0.d = (*rdx_2).d f- zmm1.d
                
                if (not(zmm0.d f<= -0.00100000005f) && zmm0.d f< 0.00100000005f)
                    r8_1 = rcx
                
                zmm0.d = (*(rdx_2 + 0x24)).d f- zmm1.d
                
                if (not(zmm0.d f<= -0.00100000005f) && not(zmm0.d f>= 0.00100000005f))
                    r8_1 = rcx + 0x24
                
                rdx_2 += 0x90
                rcx += 0x90
                j = j_3
                j_3 -= 1
            while (j != 1)
        
        if (r11_1 s< rdi)
            int64_t rdx_3 = arg1[3]
            int128_t* r9_1 = rdx_3 + rax_1 * 0x24
            void* r10_1 = rdx_3 + sx.q(r11_1) * 0x24
            uint64_t j_2 = zx.q(rdi - r11_1)
            uint64_t j_1
            
            do
                zmm0.d = (*r9_1).d f- zmm1.d
                
                if (not(zmm0.d f<= -0.00100000005f) && zmm0.d f< 0.00100000005f)
                    r8_1 = r10_1
                
                r9_1 += 0x24
                r10_1 += 0x24
                j_1 = j_2
                j_2 -= 1
            while (j_1 != 1)
        
        *(rbx_1 + rbp_1 + 4) = *(r8_1 + 4)
        *(rbx_1 + rbp_1 + 0x14) = *(r8_1 + 0x14)
        *(rbx_1 + *arg1 + 0x4c) = *(r8_1 + 0x1c)
        rbx_1 = &rbx_1[5]
        i = i_2
        i_2 -= 1
    while (i != 1)

int32_t i_1 = 0

if (i_3.d s> 0)
    do
        sub_14209c860(arg1, i_1)
        i_1 += 1
    while (i_1 s< i_3.d)

if (rdi s< 2)
    uint128_t* rax_8 = arg1[3]
    return sub_141fda810(arg1, *rax_8, rax_8 + 4) __tailcall

if (rdi - 1 s> *(arg1 + 0x34))
    sub_1405c5570(&arg1[5], rdi - 1)

int32_t result = arg1[6].d
bool cond:0 = result s<= 0

if (result == 0)
    arg2 = rdi - 1
    int64_t result_1 = sx.q(result)
    int32_t rax_10 = (result_1 + 1).d
    arg1[6].d = rax_10
    
    if (rax_10 s> *(arg1 + 0x34))
        sub_1405a4d70(&arg1[5])
    
    *(arg1[5] + (result_1 << 3)) = result.q
    result = arg1[6].d
    cond:0 = result s<= 0

if (not(cond:0))
    do
        int32_t rax_12 = arg1[6].d
        int64_t* rcx_10 = arg1[5]
        int64_t rbx_3 = *rcx_10
        int32_t arg_8
        arg_8.q = rbx_3
        
        if (rax_12 != 1)
            memmove(rcx_10, &rcx_10[1], (rax_12 - 1) << 3)
            rax_12 = arg1[6].d
        
        arg1[6].d = rax_12 - 1
        sub_1405c53d0(&arg1[5])
        result = sub_14209e240(arg1, rbx_3.d, arg2)
    while (arg1[6].d s> 0)

return result
