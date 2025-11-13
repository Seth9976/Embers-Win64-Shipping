// 函数: sub_141d65780
// 地址: 0x141d65780
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

__builtin_memset(arg1, 0, 0x38)
void* rax = sub_1425be5e0()
void* rdx = *(arg3 + 0x10)
int64_t rax_1 = sx.q(*(rax + 0x38))
char rax_3

if (rax_1.d s> *(rdx + 0x38) || *(*(rdx + 0x30) + (rax_1 << 3)) != rax + 0x30)
    rax_3 = sub_140d23d40(arg2, arg3)

int64_t var_50

if ((rax_1.d s<= *(rdx + 0x38) && *(*(rdx + 0x30) + (rax_1 << 3)) == rax + 0x30) || rax_3 == 0)
    void* rax_7 = sub_140d21d80(arg2)
    
    if (rax_7 != 0)
        int64_t arg_8 = *(rax_7 + 0x18)
        int32_t r8_2 = sub_140b63b70(&arg_8, &var_50)
        int64_t rbx_2 = var_50
        int64_t var_88 = 0
        int32_t var_48
        int32_t var_80 = var_48
        sub_1405a4c70(&var_88, sbb.d(r8_2, r8_2, var_48 != 0) + 2 + var_48, 0)
        memcpy(var_88, rbx_2, var_48 * 2)
        sub_140a20ba0(&var_88, &data_142d404c4, 1)
        int64_t r15_1 = var_88
        var_88 = 0
        int32_t r12_1 = var_80
        var_80.q = 0
        int32_t var_7c
        arg_8.d = var_7c
        int64_t var_38
        int64_t* rax_9 = sub_140d21e10(arg2, &var_38, rax_7)
        int64_t var_70
        int64_t var_60
        
        if (r12_1 s> 1)
            int32_t rax_10 = rax_9[1].d
            int32_t rdi_2 = rax_10 - 1
            int32_t rax_11 = 0
            
            if (rax_10 == 0)
                rdi_2 = 0
            
            if (r12_1 == 0 && rdi_2 != 0)
                rax_11 = r12_1 + 1
            
            int32_t rcx_15 = arg_8.d
            int32_t rdx_12 = rdi_2 + rax_11 + r12_1
            var_70 = r15_1
            
            if (rdx_12 s> rcx_15)
                sub_1405947f0(&var_70, rdx_12)
            
            sub_140a20ba0(&var_70, *rax_9, rdi_2)
            var_60 = var_70
            int32_t var_58_2 = r12_1
            int32_t var_54_2 = rcx_15
        else
            var_60 = *rax_9
            *rax_9 = 0
            int32_t var_58_1 = rax_9[1].d
            int32_t var_54_1 = *(rax_9 + 0xc)
            rax_9[1] = 0
            
            if (r15_1 != 0)
                sub_140a74f90(r15_1)
        
        int64_t rcx_18 = var_38
        
        if (rcx_18 != 0)
            sub_140a74f90(rcx_18)
        
        __builtin_memset(&var_88, 0, 0x18)
        var_38.o = *sub_140a1dfc0(&var_60, &var_70)
        sub_140d2c760(&var_88, &var_38)
        *(arg1 + 0x10) = var_88
        
        if (arg1 + 0x18 == &var_80)
            int64_t rcx_22 = var_80.q
            
            if (rcx_22 != 0)
                sub_140a74f90(rcx_22)
        else
            int64_t rcx_21 = *(arg1 + 0x18)
            
            if (rcx_21 != 0)
                sub_140a74f90(rcx_21)
            
            *(arg1 + 0x18) = var_80.q
            int64_t var_78
            *(arg1 + 0x20) = var_78.d
            *(arg1 + 0x24) = var_78:4.d
        
        int64_t rcx_23 = var_60
        
        if (rcx_23 != 0)
            sub_140a74f90(rcx_23)
        
        int64_t rcx_24 = var_50
        
        if (rcx_24 != 0)
            sub_140a74f90(rcx_24)
else
    int64_t* rax_4 = sub_140d21e10(arg2, &var_50, arg3)
    
    if (arg1 + 0x28 != rax_4)
        int64_t rcx_3 = *(arg1 + 0x28)
        
        if (rcx_3 != 0)
            sub_140a74f90(rcx_3)
        
        *(arg1 + 0x28) = *rax_4
        *rax_4 = 0
        *(arg1 + 0x30) = rax_4[1].d
        *(arg1 + 0x34) = *(rax_4 + 0xc)
        rax_4[1] = 0
    
    int64_t rcx_5 = var_50
    
    if (rcx_5 != 0)
        sub_140a74f90(rcx_5)
return arg1
