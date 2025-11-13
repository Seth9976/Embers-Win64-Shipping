// 函数: sub_142c8f2b0
// 地址: 0x142c8f2b0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void** r14 = *(arg1 + 0x58)
char* rax
int512_t zmm2
rax, zmm2 = sub_142c563e0("%s\r\n", arg2, arg4)

if (rax != 0)
    char* rax_2
    int512_t zmm0_1
    int512_t zmm2_1
    rax_2, zmm0_1, zmm2_1 = sub_142c56520(rax, arg3, zmm2)
    data_143ccb8a0(rax)
    
    if (rax_2 != 0)
        uint64_t arg_8 = 0
        int64_t rbx_1 = -1
        
        do
            rbx_1 += 1
        while (rax_2[rbx_1] != 0)
        
        int64_t* rax_3 = *(arg1 + 0x58)
        *(arg1 + 0x10) = 0
        *(arg1 + 0x18) = *(*rax_3 + 0xa80)
        *(arg1 + 0x20) = 1
        uint64_t var_28[0x2]
        zmm0_1.o = *sub_142c59600(&var_28)
        int64_t* var_38 = &arg_8
        *(arg1 + 0x40) = zmm0_1.o
        int32_t rax_6 = sub_142c64d60(r14, r14[0x47], zmm0_1, rax_2)
        
        if (rax_6 != 0)
            data_143ccb8a0(rax_2)
            return zx.q(rax_6)
        
        void* rcx_6 = *r14
        
        if (*(rcx_6 + 0x5f0) != 0)
            sub_142c64600(rcx_6, 2, rax_2, arg_8, zmm2_1, r14)
        
        uint64_t rax_8 = arg_8
        
        if (rax_8 == rbx_1)
            data_143ccb8a0(rax_2)
            __builtin_memset(arg1 + 0x28, 0, 0x18)
            zmm0_1.o = *sub_142c59600(&var_28)
            *(arg1 + 0x40) = zmm0_1.o
        else
            *(arg1 + 0x38) = rbx_1
            *(arg1 + 0x30) = rbx_1 - rax_8
            *(arg1 + 0x28) = rax_2
        
        return 0

return 0x1b
