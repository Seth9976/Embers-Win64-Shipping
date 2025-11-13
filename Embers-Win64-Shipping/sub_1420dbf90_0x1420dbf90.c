// 函数: sub_1420dbf90
// 地址: 0x1420dbf90
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_98
int64_t rax_1 = __security_cookie ^ &var_98
int64_t result = *(arg1 + 0x40)

if (result == 0)
    int32_t i_1 = 0
    void* r15_1 = *(arg1 + 0x30)
    
    if (r15_1 == 0)
        result = 0
    else
        void* rdi_1 = *(r15_1 + 0x78)
        
        if (rdi_1 == 0)
            result = 0
        else
            int32_t var_78 = *(rdi_1 + 0x60)
            int64_t* rax_3 = sub_142006940()
            (*(*rax_3 + 0x150))(rax_3, &var_78, sub_1420e7840, arg1, var_78)
            int64_t var_70 = 0
            int16_t var_68_1 = 2
            int64_t var_64
            __builtin_memset(&var_64, 0, 0x29)
            var_70.d = sub_1423c21a0(rdi_1)
            var_70:4.d = sub_1423c0d20(rdi_1)
            int64_t var_48
            void* r14_1 = &var_48:4
            var_68_1:1.b = 0
            int64_t* rsi_1 = &var_64
            int32_t rax_7
            
            for (int32_t i = 0; i u< 5; )
                int32_t rax_6 = sub_142436990(r15_1, i)
                rax_7 = var_78
                
                if (rax_6 == 0xffffffff)
                    *rsi_1 = 0
                else
                    var_68_1:1.b = i.b + 1
                    *rsi_1 = rax_7
                    *r14_1 = rax_6.b
                
                i += 1
                r14_1 += 1
                rsi_1 += 4
            
            char rdx_4 = var_68_1:1.b
            
            if (rdx_4 != 0)
                do
                    uint64_t i_2 = zx.q(i_1)
                    
                    if (*(&var_64 + (i_2 << 2)) == 0)
                        *(&var_64 + (i_2 << 2)) = rax_7
                        *(&var_48:4 + i_2) = 0
                        rdx_4 = var_68_1:1.b
                    
                    i_1 += 1
                while (i_1 u< zx.d(rdx_4))
            
            int64_t* rax_8 = sub_142006940()
            int64_t r8_1 = *rax_8
            result = (*(r8_1 + 0x130))(rax_8, &var_70, r8_1)
            *(arg1 + 0x40) = result

__security_check_cookie(rax_1 ^ &var_98)
return result
