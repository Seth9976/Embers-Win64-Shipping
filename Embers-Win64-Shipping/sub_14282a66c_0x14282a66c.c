// 函数: sub_14282a66c
// 地址: 0x14282a66c
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_68
int64_t rax_1 = __security_cookie ^ &var_68
int64_t* var_48 = arg1
*arg1 = arg2
__builtin_memset(&arg1[1], 0, 0x38)
void** rax_2 = sub_14058b9f0(0x10)
void* var_40 = &arg1[3]
sub_1405943b0(rax_2, &var_40)
arg1[3] = rax_2
*rax_2 = &arg1[3]
arg1[8] = j_sub_140a82f30(0x800)
arg1[9] = 0
arg1[0xa] = 0

if ((*(sx.q(*(*arg2 + 4)) + arg2 + 0x10) & 6) == 0)
    var_40.o = zx.o(0)
    int64_t rbx_1 = 0
    
    if (data_143b7fb80 != 0)
        *(arg1 + 0x14) = 0
    else
        int64_t rdi_1 = 0
        
        do
            int32_t rax_5 = std::istream::get()
            *(&var_40 + (rdi_1 << 2)) = rax_5
            rdi_1 += 1
            void* rdx_1
            void* r8_1
            
            if (rax_5 == 0xffffffff)
                rdx_1 = &data_143b7fde7
                r8_1 = &data_143b7fbbc
            else if (rax_5 == 0)
                rdx_1 = &data_143b7fde0
                r8_1 = &data_143b7fba0
            else if (rax_5 == 0xbb)
                rdx_1 = &data_143b7fde1
                r8_1 = &data_143b7fba4
            else if (rax_5 == 0xbf)
                rdx_1 = &data_143b7fde2
                r8_1 = &data_143b7fba8
            else if (rax_5 == 0xef)
                rdx_1 = &data_143b7fde3
                r8_1 = &data_143b7fbac
            else if (rax_5 == 0xfe)
                rdx_1 = &data_143b7fde4
                r8_1 = &data_143b7fbb0
            else if (rax_5 == 0xff)
                rdx_1 = &data_143b7fde5
                r8_1 = &data_143b7fbb4
            else if (rax_5 - 1 u> 0xfd)
                rdx_1 = &data_143b7fde7
                r8_1 = &data_143b7fbbc
            else
                rdx_1 = &data_143b7fde6
                r8_1 = &data_143b7fbb8
            
            int64_t rcx_7 = sx.q(rbx_1.d)
            rbx_1 = sx.q(*((rcx_7 << 5) + r8_1))
            int32_t i = sx.d(*(rdx_1 + (rcx_7 << 3)))
            
            if (i s> 0)
                std::ios::clear(sx.q(*(*arg2 + 4)) + arg2, 0, 0)
                
                do
                    rdi_1 -= 1
                    
                    if (*(&var_40 + (rdi_1 << 2)) != 0xffffffff)
                        std::istream::putback(arg2, *(&var_40 + (rdi_1 << 2)))
                    
                    i -= 1
                while (i s> 0)
        while ((&data_143b7fb80)[rbx_1] == 0)
        
        if (rbx_1.d == 4)
            *(arg1 + 0x14) = 4
        else if (rbx_1.d == 5)
            *(arg1 + 0x14) = 2
        else if (rbx_1.d == 0xa)
            *(arg1 + 0x14) = 1
        else if (rbx_1.d != 0xb)
            *(arg1 + 0x14) = 0
        else
            *(arg1 + 0x14) = 3
    
    if (arg1[7] u<= 0)
        sub_14282ae7c(arg1, 0)

__security_check_cookie(rax_1 ^ &var_68)
return arg1
