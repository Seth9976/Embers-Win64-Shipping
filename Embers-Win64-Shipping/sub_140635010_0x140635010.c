// 函数: sub_140635010
// 地址: 0x140635010
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (arg3 u<= 0x10)
    void* rax_2 = &__dos_header.e_magic[zx.q(jump_table_140635110[arg3])]
    
    switch (rax_2)
        case 0x140635031
            char rax_3 = *arg2
            char r8 = *arg1
            *arg1 = rax_3
            *arg2 = r8
            return rax_3
        case 0x14063503f
            int16_t rax_4 = *arg2
            int16_t rcx = *arg1
            *arg1 = rax_4
            *arg2 = rcx
            return rax_4
        case 0x14063504e
            int16_t rcx_1 = *arg1
            *arg1 = *arg2
            char rax_6 = *(arg2 + 2)
            *arg2 = rcx_1
            char rcx_2 = *(arg1 + 2)
            *(arg1 + 2) = rax_6
            *(arg2 + 2) = rcx_2
            return rax_6
        case 0x14063506d
            int32_t rcx_3 = *arg1
            int32_t rax_7 = *arg2
            *arg1 = rax_7
            *arg2 = rcx_3
            return rax_7
        case 0x140635078
            int32_t rcx_4 = *arg1
            *arg1 = *arg2
            *arg2 = rcx_4
            char rax_9 = *(arg2 + 4)
            char rcx_5 = *(arg1 + 4)
            *(arg1 + 4) = rax_9
            *(arg2 + 4) = rcx_5
            return rax_9
        case 0x140635093
            int32_t rcx_6 = *arg1
            *arg1 = *arg2
            *arg2 = rcx_6
            int16_t rax_11 = *(arg2 + 4)
            int16_t rcx_7 = *(arg1 + 4)
            *(arg1 + 4) = rax_11
            *(arg2 + 4) = rcx_7
            return rax_11
        case 0x1406350b0
            int32_t rcx_8 = *arg1
            *arg1 = *arg2
            int16_t rax_13 = *(arg2 + 4)
            *arg2 = rcx_8
            int16_t rcx_9 = *(arg1 + 4)
            *(arg1 + 4) = rax_13
            char rax_14 = *(arg2 + 6)
            *(arg2 + 4) = rcx_9
            char rcx_10 = *(arg1 + 6)
            *(arg1 + 6) = rax_14
            *(arg2 + 6) = rcx_10
            return rax_14
        case 0x1406350dd
            int64_t rax_15 = *arg2
            int64_t rcx_11 = *arg1
            *arg1 = rax_15
            *arg2 = rcx_11
            return rax_15
        case 0x1406350ea
            int64_t rcx_12 = *arg1
            *arg1 = *arg2
            int64_t rax_17 = arg2[1]
            *arg2 = rcx_12
            int64_t rcx_13 = arg1[1]
            arg1[1] = rax_17
            arg2[1] = rcx_13
            return rax_17
        case 0x14063510f
            return rax_2

return sub_140a4bff0(arg1, arg2, arg3) __tailcall
