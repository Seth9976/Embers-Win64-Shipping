// 函数: sub_142a23350
// 地址: 0x142a23350
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t var_98
int64_t rax_1 = __security_cookie ^ &var_98
uint64_t r10 = zx.q(arg2)
int64_t rdx = r10 * 0x1b0
int64_t r11_2 = zx.q(*(arg1 + 0x1178)) * 0x7fc + *(arg1 + 0x1170) + rdx
void* r8_1 = arg1 + 0x14b4 + r10 * 0x900
int64_t var_90 = r11_2
int64_t r15_1 = *(arg1 + 0x1168) + rdx
int64_t i = 0
int64_t var_88 = r15_1
void* result = r10 * 0x240 + 0x38ac + arg1

do
    int64_t j_1 = 2
    int64_t j
    
    do
        int32_t rcx = 0
        int64_t i_1 = i
        var_98 = 0
        void* var_70_1 = r8_1
        void* result_1 = result
        int64_t k_1 = 6
        int64_t k
        
        do
            int64_t r12_1 = 6
            int64_t i_2 = i
            void* result_2 = result
            
            if (rcx == 0)
                r12_1 = 3
            
            void* rbx_1 = r8_1
            int64_t temp7_1
            
            do
                int32_t rcx_1 = *(rbx_1 + 4)
                int32_t rdx_1 = *(rbx_1 - 4)
                int64_t r9 = 0
                int32_t r8_2 = *rbx_1
                int32_t rax_9 = *result_2 - rcx_1
                int32_t var_58[0x2]
                var_58[0] = rcx_1
                var_58[1] = rax_9
                int32_t var_50_1 = *(rbx_1 - 8)
                int32_t var_4c_1 = r8_2 + rdx_1
                int32_t var_48_1 = rdx_1
                int32_t var_44_1 = r8_2
                
                do
                    uint64_t r10_1 = zx.q((&var_58)[r9][0])
                    var_54
                    int32_t r11_3 = *(&var_54 + (r9 << 3))
                    uint64_t rax_12 = zx.q(r11_3 + r10_1.d)
                    
                    if (rax_12.d != 0)
                        uint32_t temp0_1 =
                            (divu.dp.q(0:((rax_12 u>> 1) + (r10_1 << 8)), zx.q(rax_12.d))).d
                        rcx_1.b = ((0xff - temp0_1) s>> 0x17).b | temp0_1 == 0
                        rcx_1.b |= temp0_1.b
                    else
                        rcx_1.b = 0x80
                    
                    int32_t rdx_4 = r10_1.d + r11_3
                    int32_t rax_16 = arg3
                    
                    if (rdx_4 u< arg3)
                        rax_16 = rdx_4
                    
                    uint32_t temp0_2 = divu.dp.d(0:(rax_16 * arg4), arg3)
                    *(r9 + r15_1 + i_2 + 0xae) = ((temp0_2 * zx.d(rcx_1.b) + 0x80
                        + zx.d(*(r9 + r11_2 + i_2 + 0xae)) * (0x100 - temp0_2)) s>> 8).b
                    r9 += 1
                while (r9 s< 3)
                
                r11_2 = var_90
                result_2 += 4
                r15_1 = var_88
                rbx_1 += 0x10
                i_2 += 3
                temp7_1 = r12_1
                r12_1 -= 1
            while (temp7_1 != 1)
            rcx = var_98 + 1
            i = i_1 + 0x12
            result = result_1 + 0x18
            r8_1 = var_70_1 + 0x60
            var_98 = rcx
            k = k_1
            k_1 -= 1
            i_1 = i
            result_1 = result
            var_70_1 = r8_1
        while (k != 1)
        j = j_1
        j_1 -= 1
    while (j != 1)
while (i s< 0x1b0)

__security_check_cookie(rax_1 ^ &var_98)
return result
