// 函数: sub_141a93490
// 地址: 0x141a93490
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t r10 = 0
int64_t rax_1
int32_t rdx
rdx:rax_1 = sx.o(arg5)
int64_t result
int32_t rdx_2
rdx_2:result = sx.o(arg5)
int64_t rdi_1 = ((zx.q(rdx) & 7) + rax_1) & 0xfffffffffffffff8
int64_t i = 0
int64_t rbp_1 = ((zx.q(rdx_2) & 3) + result) & 0xfffffffffffffffc

if (rdi_1 s> 0)
    do
        int64_t r9 = 0
        
        if (arg4 s> 0)
            void* rbx_1 = arg2 + (r10 << 2)
            
            do
                result = *arg3
                rbx_1 += 0x20
                r10 += 8
                int64_t rcx_1 = arg3[1] * r9
                r9 += 1
                int64_t rcx_2 = rcx_1 + i
                int128_t zmm1 = *(result + (rcx_2 << 2) + 0x10)
                *(rbx_1 - 0x20) = *(result + (rcx_2 << 2))
                *(rbx_1 - 0x10) = zmm1
            while (r9 s< arg4)
        
        i += 8
    while (i s< rdi_1)

for (; i s< rbp_1; i += 4)
    int64_t r9_1 = 0
    
    if (arg4 s> 0)
        void* rbx_2 = arg2 + (r10 << 2)
        r10 += arg4 << 2
        
        do
            rbx_2 += 0x10
            result = *arg3
            int64_t rcx_4 = arg3[1] * r9_1
            r9_1 += 1
            *(rbx_2 - 0x10) = *(result + ((rcx_4 + i) << 2))
        while (r9_1 s< arg4)

for (; i s< arg5; i += 1)
    int64_t j = 0
    
    if (arg4 s>= 4)
        void* rbx_4 = arg2 + 8 + (r10 << 2)
        int64_t rdi_2 = 2
        r10 = r10 + ((arg4 - 4) u>> 2 << 2) + 4
        
        do
            rbx_4 += 0x10
            int64_t rcx_7 = arg3[1] * j
            j += 4
            *(rbx_4 - 0x18) = *(*arg3 + ((rcx_7 + i) << 2))
            *(rbx_4 - 0x14) = *(*arg3 + (((rdi_2 - 1) * arg3[1] + i) << 2))
            *(rbx_4 - 0x10) = *(*arg3 + ((rdi_2 * arg3[1] + i) << 2))
            int64_t rcx_19 = (rdi_2 + 1) * arg3[1]
            result = *arg3
            rdi_2 += 4
            *(rbx_4 - 0xc) = *(result + ((rcx_19 + i) << 2))
        while (j s< arg4 - 3)
    
    while (j s< arg4)
        result = *arg3
        int64_t rcx_23 = arg3[1] * j
        j += 1
        *(arg2 + (r10 << 2)) = *(result + ((rcx_23 + i) << 2))
        r10 += 1

return result
