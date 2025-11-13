// 函数: sub_142bc9760
// 地址: 0x142bc9760
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t rbx = *(arg1 + 0x98)
void* rdi = *(arg1 + 0x2a0)
void var_278
memset(&var_278, 0, 0x238)
int32_t var_168 = 0
int32_t var_1d0 = 0
int32_t var_1b0 = 0
int32_t var_e8 = 0
int32_t var_148 = 0
int32_t arg_8
*(arg1 + 0x2a8) = sub_142b99860(rbx, 0xc, &arg_8)
int64_t var_1e0
int64_t var_160
int64_t var_100

if (arg_8 == 0)
    int64_t* rdx_1 = *(arg1 + 0xa0)
    *(arg1 + 0x2b0) = 0xc
    int32_t rax_1 = sub_142bc9e00(&var_278, rdx_1, rbx, rdi, arg2)
    arg_8 = rax_1
    
    if (rax_1 == 0)
        int32_t var_1d8
        int32_t rax_2 = sub_142bc9c10(arg1, &var_278, var_1e0, var_1d8, arg3)
        arg_8 = rax_2
        int32_t rcx_4 = rax_2
        
        if (rax_2 == 0)
            if (*(arg1 + 0x261) == 0x2a)
                *(arg1 + 0x240) = var_168
                
                if (var_e8 == 0)
                    rcx_4 = 3
                
                int32_t var_e8_1 = 0
                bool cond:1_1 = *(arg1 + 0x1e0) != 1
                *(arg1 + 0x210) = var_100
                int64_t var_d8
                *(arg1 + 0x250) = var_d8
                int64_t var_d0
                *(arg1 + 0x258) = var_d0
                *(arg1 + 0x218) = var_160
                int64_t var_138
                *(arg1 + 0x248) = var_138
                arg_8 = rcx_4
                var_160 = 0
                int64_t var_138_1 = 0
                
                if (not(cond:1_1))
                    int32_t rcx_5 = 0
                    int32_t r15_1 = 0
                    int32_t arg_10 = 0
                    int32_t rbx_1 = 0
                    int32_t var_1ac
                    
                    if (var_1ac s> 0)
                        char** r12_1 = nullptr
                        int64_t r13_1 = 0
                        
                        do
                            *(*(arg1 + 0x1f8) + r13_1) = 0
                            *(r12_1 + *(arg1 + 0x200)) = ".notdef"
                            int64_t var_1a0
                            char* rdi_1 = *(r12_1 + var_1a0)
                            
                            if (rdi_1 != 0)
                                int32_t r11_1 = *(arg1 + 0x240)
                                int32_t r9_3 = 0
                                
                                if (r11_1 s> 0)
                                    while (true)
                                        int64_t r10_1 = *(*(arg1 + 0x248) + (sx.q(r9_3) << 3))
                                        char* rax_13 = rdi_1
                                        uint32_t i
                                        uint32_t rdx_3
                                        
                                        do
                                            rdx_3 = zx.d(*rax_13)
                                            i = zx.d(*(rax_13 + r10_1 - rdi_1))
                                            
                                            if (rdx_3 != i)
                                                break
                                            
                                            rax_13 = &rax_13[1]
                                        while (i != 0)
                                        
                                        if (rdx_3 - i == 0)
                                            int64_t rcx_6 = 0
                                            *(*(arg1 + 0x1f8) + r13_1) = r9_3.w
                                            *(r12_1 + *(arg1 + 0x200)) = r10_1
                                            
                                            while (true)
                                                char rax_16 = (*".notdef")[rcx_6]
                                                rcx_6 += 1
                                                
                                                if (rax_16 != *(r10_1 + rcx_6 - 1))
                                                    rcx_5 = arg_10
                                                    
                                                    if (rbx_1 s< r15_1)
                                                        r15_1 = rbx_1
                                                    
                                                    if (rbx_1 s>= rcx_5)
                                                        rcx_5 = rbx_1 + 1
                                                        arg_10 = rcx_5
                                                    
                                                    break
                                                
                                                if (rcx_6 == 8)
                                                    rcx_5 = arg_10
                                                    break
                                            
                                            break
                                        
                                        r9_3 += 1
                                        
                                        if (r9_3 s>= r11_1)
                                            rcx_5 = arg_10
                                            break
                            
                            rbx_1 += 1
                            r13_1 += 2
                            r12_1 = &r12_1[1]
                        while (rbx_1 s< var_1ac)
                    
                    *(arg1 + 0x1ec) = r15_1
                    *(arg1 + 0x1e8) = var_1d0
                    *(arg1 + 0x1f0) = rcx_5
            else
                arg_8 = 2

int64_t var_170
void var_1c8

if (var_170 != 0)
    var_170(&var_1c8)
int64_t var_a8

if (var_a8 != 0)
    var_a8(&var_100)

int64_t var_108

if (var_108 != 0)
    var_108(&var_160)

int64_t var_48
void var_a0

if (var_48 != 0)
    var_48(&var_a0)
char var_1d4

if (var_1d4 == 0)
    int64_t var_258
    sub_142b99980(var_258, var_1e0)
    int64_t var_1e0_1 = 0

int64_t var_248
var_248(&var_278)
return zx.q(arg_8)
