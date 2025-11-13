// 函数: sub_141c66690
// 地址: 0x141c66690
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (arg3[1].d s< 2 || *(arg1 + 0xa24) == 0 || data_143f34d70 == 1)
    return &__return_addr

int32_t rax = data_143f34a18
sub_140b34200("SubmixReverb", rax)
uint128_t var_88
__builtin_memcpy(&var_88, 
    "\x00\x00\x80\x3f\x00\x00\x00\x00\xcd\xcc\x4c\x3f\x00\x00\x00\x3f\x33\x33\x33\x3f\x00\x00\x00\x00\x"
"00\x00\x00\x00\x00\x00\x00\x3f\x00\x00\x00\x3f\x00\x00\x00\x3f\x00\x00\x00\x3f\x00\x00\x00\x3f\x00"
"00\x00\x3f", 
    0x34)
uint128_t zmm0_1 = data_142d3f640
EnterCriticalSection(arg1 + 0x978)
void* r12_1

if (*(arg1 + 0x940) == 0)
    if (arg1 != -0x978)
        LeaveCriticalSection(arg1 + 0x978)
    
    r12_1 = arg1 + 0x70
else
    int32_t rax_1 = *(arg1 + 0x974)
    *(arg1 + 0x940) = 0
    int32_t var_58_1 = rax_1
    int128_t zmm1_1 = *(arg1 + 0x954)
    var_88 = *(arg1 + 0x944)
    int128_t var_78_1 = zmm1_1
    uint128_t var_68_1 = *(arg1 + 0x964)
    
    if (arg1 != -0x978)
        LeaveCriticalSection(arg1 + 0x978)
    
    r12_1 = arg1 + 0x70
    zmm0_1 = sub_141c468f0(r12_1, &var_88)

int64_t* rdx_2 = *(arg2 + 0x20)
int32_t rcx_4 = arg3[1].d
int64_t r13_1 = *rdx_2
int64_t r14_1 = **arg3

if (rcx_4 == 2)
    int32_t i = 0
    
    if (rdx_2[1].d s> 0)
        do
            int64_t i_2 = sx.q(i)
            zmm0_1 = sub_141c42cd0(r12_1, (i_2 << 2) + r13_1, *(arg2 + 0xc), r14_1 + (i_2 << 2), 
                zmm0_1, rcx_4)
            rcx_4 = arg3[1].d
            i += rcx_4
        while (i s< *(*(arg2 + 0x20) + 8))
else if (rcx_4 s> 5)
    int32_t i_1 = 0
    
    if (data_143f34d78 != 1)
        int32_t rcx_7 = 0
        int32_t rax_7 = rdx_2[1].d
        int32_t arg_18 = 0
        
        if (data_143f34d74 != 1)
            if (rax_7 s> 0)
                do
                    int32_t r8_3 = *(arg2 + 0xc)
                    int64_t rdi_2 = sx.q(rcx_7)
                    int32_t* rbx_4 = r14_1 + (rdi_2 << 2)
                    float zmm6_2 =
                        sub_141c42cd0(r12_1, (sx.q(i_1) << 2) + r13_1, r8_3, rbx_4, zmm0_1, r8_3)
                    float zmm1_3 = *rbx_4 * zmm6_2
                    zmm0_1.d = (*(r14_1 + (rdi_2 << 2) + 4)).d f* zmm6_2
                    *rbx_4 = zmm1_3
                    *(r14_1 + (rdi_2 << 2) + 0x10) = zmm1_3
                    *(r14_1 + (rdi_2 << 2) + 4) = zmm0_1.d
                    *(r14_1 + (rdi_2 << 2) + 0x14) = zmm0_1.d
                    rcx_7 = arg_18 + arg3[1].d
                    i_1 += *(arg2 + 0xc)
                    arg_18 = rcx_7
                while (i_1 s< *(*(arg2 + 0x20) + 8))
        else if (rax_7 s> 0)
            do
                int32_t r8_2 = *(arg2 + 0xc)
                int64_t rdi_1 = sx.q(rcx_7)
                int32_t* rbx_3 = r14_1 + (rdi_1 << 2)
                float zmm6_1 =
                    sub_141c42cd0(r12_1, (sx.q(i_1) << 2) + r13_1, r8_2, rbx_3, zmm0_1, r8_2)
                float zmm1_2 = *rbx_3 * zmm6_1
                zmm0_1.d = (*(r14_1 + (rdi_1 << 2) + 4)).d f* zmm6_1
                *rbx_3 = zmm1_2
                *(r14_1 + (rdi_1 << 2) + 0x14) = zmm1_2
                *(r14_1 + (rdi_1 << 2) + 4) = zmm0_1.d
                *(r14_1 + (rdi_1 << 2) + 0x10) = zmm0_1.d
                rcx_7 = arg_18 + arg3[1].d
                i_1 += *(arg2 + 0xc)
                arg_18 = rcx_7
            while (i_1 s< *(*(arg2 + 0x20) + 8))
    else
        int32_t rbx_2 = 0
        
        if (rdx_2[1].d s> 0)
            do
                int32_t r8_1 = *(arg2 + 0xc)
                zmm0_1 = sub_141c42cd0(r12_1, (sx.q(i_1) << 2) + r13_1, r8_1, 
                    r14_1 + (sx.q(rbx_2) << 2), zmm0_1, r8_1)
                i_1 += *(arg2 + 0xc)
                rbx_2 += arg3[1].d
            while (i_1 s< *(*(arg2 + 0x20) + 8))

return sub_140b38680("SubmixReverb", rax)
