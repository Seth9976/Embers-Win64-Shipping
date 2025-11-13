// 函数: sub_1426bc650
// 地址: 0x1426bc650
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int512_t entry_zmm2

if (*(arg1 + 0x118) != 0)
    sub_1426bfc00(arg1, 1, entry_zmm2)
int32_t rcx = *(arg1 + 0x128)
int64_t var_68
__builtin_memset(&var_68, 0, 0x30)
int32_t rdx = 0
int32_t r14 = 0
int64_t var_30 = 0
int32_t var_28 = 0
int64_t var_48

if (rcx s> 0)
    do
        int64_t r8_3 = *(arg1 + 0x120)
        void* rbx_2 = sx.q(r14) * 0x38 + r8_3
        
        if (*(rbx_2 + 0x28) != 0)
            int64_t r10_1 = r8_3
            int32_t var_3c_1
            
            if (&var_48 != rbx_2 + 0x20)
                uint32_t count = *(rbx_2 + 0x28)
                int64_t r15_1 = *(rbx_2 + 0x20)
                uint32_t count_1 = count
                
                if (count != 0 || rdx != 0)
                    sub_1405da9e0(&var_48, count, rdx)
                    memcpy(var_48, r15_1, count)
                    r8_3 = *(arg1 + 0x120)
                    rcx = *(arg1 + 0x128)
                    r10_1 = r8_3
                else
                    var_3c_1 = 0
            
            uint64_t r9_1 = zx.q(r14.b)
            char var_38_1 = r9_1.b
            int64_t* r11_1 = *(rbx_2 + 8)
            void* r15_3 = r9_1 * 0x38 + r10_1
            int64_t* var_78 = r11_1
            int64_t r10_2 = sx.q(*(r15_3 + 0x30))
            
            if (r10_2.d s>= 0)
                int32_t rdx_3 = *(arg1 + 0x138)
                
                if ((r9_1 + 1).d s< rcx)
                    int64_t rax_4 = r9_1 * 0x38
                    
                    if (*(rax_4 + r8_3 + 0x68) s<= rdx_3)
                        rdx_3 = *(rax_4 + r8_3 + 0x68)
                
                int64_t rsi_1 = sx.q(rdx_3)
                int64_t rbx_3 = r10_2
                
                if (r10_2 s< rsi_1)
                    do
                        int64_t* rcx_3 = *(*(arg1 + 0x130) + (rbx_3 << 3))
                        (*(*rcx_3 + 0x290))(rcx_3, arg1)
                        rbx_3 += 1
                    while (rbx_3 s< rsi_1)
                    
                    r11_1 = var_78
            
            sub_1426aabb0(&var_78, arg1, r11_1, 0)
            *(r15_3 + 0x28) = 0
            
            if (*(r15_3 + 0x2c) != 0)
                sub_1405c5510(r15_3 + 0x20, 0)
            
            rdx = var_3c_1
        
        rcx = *(arg1 + 0x128)
        r14 += 1
    while (r14 s< rcx)

sub_1426bd7a0(arg1 + 0x120, 0)
*(arg1 + 0x138) = 0

if (*(arg1 + 0x13c) s<= 0xffffffff)
    sub_1405c5570(arg1 + 0x130, 0)

uint64_t result = sub_140745b20(&var_30)
int64_t rcx_9 = var_48

if (rcx_9 != 0)
    result = sub_140a74f90(rcx_9)

int64_t var_58

if (var_58 != 0)
    result = sub_140a74f90(var_58)

int64_t rcx_11 = var_68

if (rcx_11 == 0)
    return result

return sub_140a74f90(rcx_11)
