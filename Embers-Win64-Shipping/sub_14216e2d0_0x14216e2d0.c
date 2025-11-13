// 函数: sub_14216e2d0
// 地址: 0x14216e2d0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_168
int64_t rax_1 = __security_cookie ^ &var_168
int64_t r15 = arg3
int64_t var_148 = arg2
arg3.b = 1
int64_t rbp
rbp.b = 0
char rax_2 = sub_140b0f6c0(&var_148, &data_1432de610)
int16_t var_138[0x80]
char rax_3

if (rax_2 != 0)
    rax_3 = sub_140b297e0(&var_148, &var_138, 0x80, 1)

uint64_t result

if (rax_2 == 0 || rax_3 == 0)
    result = 0
else
    void var_140
    int64_t* rax_4 = sub_140b58260(&var_140, &var_138, 1)
    void* rax_5 = sub_1423dcd80(data_143f5b298, arg1, *rax_4)
    
    if (rax_5 == 0)
        void* rax_7 = sub_1423de4f0(data_143f5b298, arg1)
        int64_t rcx_6 = -1
        
        do
            rcx_6 += 1
        while (var_138[rcx_6] != 0)
        
        int32_t i = 0
        var_148 += neg.q(sx.q(rcx_6.d)) << 1
        
        if (*(rax_7 + 0x228) s<= 0)
            result = 0
        else
            int64_t* rdi_1 = nullptr
            
            do
                void* rcx_9 = *(rdi_1 + *(rax_7 + 0x220))
                
                if (rcx_9 != 0)
                    rbp.b |= (*(*(rcx_9 + 0x28) + 8))(rcx_9 + 0x28, arg1)
                
                i += 1
                rdi_1 = &rdi_1[2]
            while (i s< *(rax_7 + 0x228))
            
            result = zx.q(rbp.b)
    else
        result = (*(*(rax_5 + 0x28) + 8))(rax_5 + 0x28, arg1, var_148, r15)

__security_check_cookie(rax_1 ^ &var_168)
return result
