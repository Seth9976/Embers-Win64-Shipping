// 函数: sub_142418570
// 地址: 0x142418570
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_c8
int64_t rax_1 = __security_cookie ^ &var_c8
int32_t rdi = *(arg1 + 0x30)
int64_t var_88 = 0
int32_t rax_2 = 0
int32_t var_a8 = 0
void* r9 = nullptr
int32_t var_80 = 0
int32_t var_5c = 0x80
int64_t var_78
__builtin_memset(&var_78, 0, 0x1c)
int32_t var_58 = 0xffffffff
int32_t var_54 = 0
void* var_48 = nullptr
int32_t var_40 = 0
int64_t var_a0

if (rdi s> 0)
    int32_t* var_90_1 = &var_a8
    
    do
        int64_t var_98 = *(arg1 + 0x28) + sx.q(rax_2) * 0x18
        sub_140a5c330(&var_88, &var_a0, &var_98, nullptr)
        rdi = *(arg1 + 0x30)
        rax_2 = var_a8 + 1
        var_a8 = rax_2
    while (rax_2 s< rdi)
    
    r9 = var_48

int32_t rdi_1 = rdi - 1

if (rdi - 1 s>= 0)
    int64_t r14_2 = sx.q(rdi_1) * 0x18
    int64_t r15_1 = r14_2
    int32_t temp1_1
    
    do
        int64_t rbx_2 = *(r14_2 + *(arg1 + 0x28))
        var_a0 = rbx_2
        void* rax_13
        
        if (var_80 == var_54)
        label_1424186ea:
            rax_13 = nullptr
        else
            r9 = var_48
            int64_t rdx_3 = sx.q(var_40 - 1) & sx.q(sub_140b5ead0(rbx_2.d) + var_a0:4.d)
            void var_50
            void* rax_11 = &var_50
            
            if (r9 != 0)
                rax_11 = r9
            
            int32_t rax_12 = *(rax_11 + (rdx_3 << 2))
            
            if (rax_12 == 0xffffffff)
            label_1424186ea_1:
                rax_13 = nullptr
            else
                int64_t r8_2 = var_88
                int64_t rdx_5
                
                while (true)
                    int64_t rdx_4 = sx.q(rax_12) * 5
                    rdx_5 = rdx_4 << 2
                    
                    if (*(r8_2 + (rdx_4 << 2)) == rbx_2)
                        break
                    
                    rax_12 = *(r8_2 + rdx_5 + 0xc)
                    
                    if (rax_12 == 0xffffffff)
                        goto label_1424186ea_2
                
                rax_13 = rdx_5 + r8_2
                
                if (rax_12 == 0xffffffff)
                label_1424186ea_2:
                    rax_13 = nullptr
        
        if (*(rax_13 + 8) != rdi_1)
            int32_t rdx_6 = *(arg1 + 0x30)
            int32_t rcx_9 = rdx_6 - rdi_1 - 1
            
            if (rcx_9 s>= 1)
                rcx_9 = 1
            
            if (rcx_9 != 0)
                int64_t r9_1 = *(arg1 + 0x28)
                memcpy(r9_1 + r15_1, r9_1 + sx.q(rdx_6 - rcx_9) * 0x18, rcx_9 * 0x18)
                rdx_6 = *(arg1 + 0x30)
            
            *(arg1 + 0x30) = rdx_6 - 1
            sub_1405fde90(arg1 + 0x28)
            r9 = var_48
        
        r15_1 -= 0x18
        r14_2 -= 0x18
        temp1_1 = rdi_1
        rdi_1 -= 1
    while (temp1_1 - 1 s>= 0)

int32_t var_40_1 = 0

if (r9 != 0)
    sub_140a74f90(r9)

var_80 = 0
int32_t var_58_1 = 0xffffffff
int32_t var_54_1 = 0
void* result = sub_14059a8e0(&var_78, 0)
int64_t var_68

if (var_68 != 0)
    result = sub_140a74f90(var_68)

int64_t rcx_17 = var_88

if (rcx_17 != 0)
    result = sub_140a74f90(rcx_17)

__security_check_cookie(rax_1 ^ &var_c8)
return result
