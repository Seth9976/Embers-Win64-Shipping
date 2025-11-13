// 函数: sub_142ab48b0
// 地址: 0x142ab48b0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t var_a8 = -2
void var_c8
int64_t rax_1 = __security_cookie ^ &var_c8
uint64_t rbx = 0

if (*(arg1 + 0x40) != 0)
    sub_142a7dcd0(*(arg1 + 0x30))
    *(arg1 + 0x30) = 0
    *(arg1 + 0x40) = 0

*(arg1 + 0x30) = 0
*(arg1 + 0xc) = 0
*(arg1 + 0x14) = 0
*(arg1 + 0x18) = 0
*(arg1 + 0x20) = 0
int32_t* var_88
sub_142ab5870(&var_88)
int128_t var_98 = *arg2
sub_142ab5f40(&var_88, &var_98, arg3)

if (*arg3 s<= 0)
    if (sub_142ab5ca0(&var_88) != 0)
        *(arg1 + 0x14) |= data_143ccaf50
    
    if (sub_142ab5cb0(&var_88) == 0)
        int32_t* rsi_1 = var_88
        uint64_t i_2 = zx.q(*rsi_1)
        
        if (i_2.d s<= 0x10)
            if (i_2.d s> 0)
                int32_t rcx_7 = 0
                void* rdx_3 = rsi_1 + 9
                uint64_t i_1 = i_2
                uint64_t i
                
                do
                    rbx |= zx.q(*rdx_3) << rcx_7.b
                    rcx_7 += 4
                    rdx_3 += 1
                    i = i_1
                    i_1 -= 1
                while (i != 1)
            
            *(arg1 + 0x30) = rbx
        else
            sub_142ab3600(arg1, i_2.d)
            
            if (*rsi_1 s> 0)
                char* rdx_2 = nullptr
                
                do
                    rdx_2[*(arg1 + 0x30)] = *(rsi_1 + rdx_2 + 9)
                    rbx = zx.q(rbx.d + 1)
                    rdx_2 = &rdx_2[1]
                while (rbx.d s< *rsi_1)
        
        *(arg1 + 0xc) = rsi_1[1]
        *(arg1 + 0x10) = *rsi_1
        sub_142ab3280(arg1)

char var_7c

if (var_7c != 0)
    sub_142a7dcd0(var_88)

__security_check_cookie(rax_1 ^ &var_c8)
return arg1
