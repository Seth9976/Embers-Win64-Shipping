// 函数: sub_142bf0270
// 地址: 0x142bf0270
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_158
int64_t rax_1 = __security_cookie ^ &var_158
char* rdx

if (arg1 != 0)
    rdx = *arg1

uint64_t result

if (arg1 == 0 || rdx == 0 || *rdx == 0)
    result = 6
else
    void* var_138 = nullptr
    int64_t rbx_1 = -1
    int64_t var_130_1 = 0
    int64_t rax_2 = arg1[0x11]
    arg1[4].d = *(arg2 + 0xc)
    
    do
        rbx_1 += 1
    while (rdx[rbx_1] != 0)
    
    if (rbx_1 + 1 u< 0x100)
        char var_118[0x100]
        memcpy(&var_118, rdx, (rbx_1 + 1).d)
        int32_t result_1 = sub_142bee840(&var_138, &data_143642120, &var_118, (rbx_1 + 1).d)
        void* r8_3 = var_138
        
        if (result_1 == 0 && var_130_1:4.d == 0xf)
            switch (sx.d(**(r8_3 + 0x58)) - 0x43)
                case 0, 0x20
                    arg1[4].d = 0x20
                case 0xa, 0x2a
                    arg1[4].d = 0x10
                case 0xd, 0x2d
                    arg1[4].d = 8
        
        if (rax_2 != 0)
            sub_142b99980(rax_2, r8_3, r8_3)
        
        result = zx.q(result_1)
    else
        result = 6

__security_check_cookie(rax_1 ^ &var_158)
return result
