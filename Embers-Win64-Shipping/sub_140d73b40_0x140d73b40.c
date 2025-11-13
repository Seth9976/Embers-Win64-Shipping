// 函数: sub_140d73b40
// 地址: 0x140d73b40
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* rcx = *arg1

if (*(rcx + 8) == 0)
    return 

int64_t* rcx_1 = *(rcx + 0x10)

if ((*(*rcx_1 + 0x10))(rcx_1).b == 0)
    return 

int64_t rcx_2 = sx.q(*arg1[2])

if (rcx_2.d u<= 6)
    switch (rcx_2)
        case 0
            int64_t* rcx_5 = *(*arg1 + 0x10)
            int64_t* rax_5 = (*(*rcx_5 + 0xb0))(rcx_5, &__dos_header)
            int64_t rdx_1 = *rax_5
            int32_t rcx_7 = *((*rdx_1)(rax_5, rdx_1) + 8)
            int32_t rdx_2 = rcx_7 - 1
            void* rcx_8 = *arg1
            
            if (rcx_7 == 0)
                rdx_2 = 0
            
            int32_t rax_8 = *(rcx_8 + 0x30) + 1
            
            if (rax_8 s<= rdx_2)
                rdx_2 = rax_8
            
            *(rcx_8 + 0x34) = rdx_2
            *arg1[1] = 0
            return 
        case 1, 2, 3, 4, 5
            *arg1[1] = 0x80004001
            *arg1[1] = 0
            return 
        case 6
            int64_t* rcx_9 = *(*arg1 + 0x10)
            int64_t* rax_14 = (*(*rcx_9 + 0xb0))(rcx_9, &__dos_header)
            int64_t rdx_3 = *rax_14
            int32_t rcx_11 = *((*rdx_3)(rax_14, rdx_3) + 8)
            int32_t rax_16 = rcx_11 - 1
            
            if (rcx_11 == 0)
                rax_16 = 0
            
            int32_t arg_c = rax_16
            *(*arg1 + 0x30) = 0.q

*arg1[1] = 0
