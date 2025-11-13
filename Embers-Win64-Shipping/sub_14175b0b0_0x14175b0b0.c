// 函数: sub_14175b0b0
// 地址: 0x14175b0b0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

uint64_t rdi = 0

if (*(arg1 + 0x9c) s< 0)
    sub_141735f40(arg1 + 0x90, 0)
else
    int32_t i_2 = *(arg1 + 0x98)
    
    if (i_2 != 0)
        int64_t* rbx_2 = *(arg1 + 0x90) + 0x20
        int32_t i
        
        do
            int64_t rcx = *rbx_2
            
            if (rcx != 0)
                sub_140a74f90(rcx)
            
            rbx_2 = &rbx_2[7]
            i = i_2
            i_2 -= 1
        while (i != 1)
    
    *(arg1 + 0x98) = 0

uint64_t result = sub_14174f2c0(arg1 + 0x28)

if (arg2[1].d != 0)
    int512_t zmm3
    zmm3.o = arg5
    void* var_98_1 = arg1 + 0x28
    sub_141549e10(*(arg1 + 0x10), arg2, zx.q(arg4))
    int32_t arg_8
    int32_t* var_90_1 = &arg_8
    var_98_1.b = arg3
    uint64_t var_78
    sub_14154a860(&var_78, *(arg1 + 0x10), arg2, arg1 + 0x28, var_98_1)
    int64_t rbx_4 = sx.q(*(arg1 + 0x98))
    int32_t rax = (rbx_4 + 1).d
    *(arg1 + 0x98) = rax
    
    if (rax s> *(arg1 + 0x9c))
        sub_1407c3b60(arg1 + 0x90)
    
    int32_t rbx_5 = arg_8
    uint64_t* rcx_7 = rbx_4 * 0x38 + *(arg1 + 0x90)
    *rcx_7 = var_78
    int32_t var_70
    rcx_7[1].d = var_70
    uint64_t var_6c
    *(rcx_7 + 0xc) = var_6c
    int32_t var_64
    *(rcx_7 + 0x14) = var_64
    rcx_7[3].d = rbx_5
    rcx_7[4] = 0
    rcx_7[5] = 0
    int32_t var_30
    rcx_7[6].d = var_30
    
    if (arg2[1].d s<= 5)
        void* rcx_10 = *(arg1 + 0x90)
        int32_t rax_6 = *(arg1 + 0xa8)
        var_78 = 0
        *(rcx_10 + 0x30) = rax_6
        int64_t rsi_2 = sx.q(arg2[1].d)
        int64_t rbx_7 = *arg2
        int32_t var_70_1 = rsi_2.d
        int32_t r14_1
        
        if (rsi_2.d != 0)
            sub_140638750(&var_78, rsi_2.d, 0)
            rdi = var_78
            memcpy(rdi, rbx_7, (rsi_2 << 2).d)
            r14_1 = var_6c.d
            rsi_2 = zx.q(var_70_1)
        else
            r14_1 = 0
        
        int64_t rbp_1 = sx.q(*(arg1 + 0xa8))
        int32_t rax_7 = (rbp_1 + 1).d
        *(arg1 + 0xa8) = rax_7
        
        if (rax_7 s> *(arg1 + 0xac))
            sub_1405a4f90(arg1 + 0xa0)
        
        result = (rbp_1 << 4) + *(arg1 + 0xa0)
        *result = rdi
        *(result + 8) = rsi_2.d
        *(result + 0xc) = r14_1
    else
        char var_88_1 = arg3
        var_90_1.d = 1
        var_98_1.d = rbx_5
        int32_t rax_4 = sub_14173d800(arg1, &var_78, &var_6c, arg2, var_98_1.d)
        int32_t i_1 = 2
        
        if (rbx_5 == 0xffffffff)
            i_1 = 8
        
        do
            void* rbx_6 = *(arg1 + 0x90)
            int64_t rsi_1 = sx.q(*(rbx_6 + 0x28))
            int32_t rax_5 = (rsi_1 + 1).d
            *(rbx_6 + 0x28) = rax_5
            
            if (rax_5 s> *(rbx_6 + 0x2c))
                sub_1405a4cf0(rbx_6 + 0x20)
            
            result = *(rbx_6 + 0x20)
            int32_t rdx_5 = rdi.d + rax_4
            rdi = zx.q(rdi.d + 1)
            *(result + (rsi_1 << 2)) = rdx_5
        while (rdi.d s< i_1)

return result
