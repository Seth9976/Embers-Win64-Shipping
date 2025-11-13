// 函数: sub_14242f280
// 地址: 0x14242f280
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_d8
int64_t rax_1 = __security_cookie ^ &var_d8

if (*(arg1 + 0x164) s< 3)
    sub_1407c4420(arg1 + 0x158, 3)

char* rdx = *(arg1 + 0x158)
int64_t rsi = sx.q(*(arg1 + 0x160))
char* rcx_1 = rdx
void* r14 = rsi * 0x78
void* rax_2 = r14 + rdx

if (rdx == rax_2)
label_14242f2fa:
    char* rcx_2 = rdx
    int32_t rdx_4
    
    if (rdx != rax_2)
        while (*rcx_2 != 0)
            rcx_2 = &rcx_2[0x78]
            
            if (rcx_2 == rax_2)
                goto label_14242f33e
        
        rdx_4 = ((rcx_2 - rdx) s/ 0x78).d
    
    if (rdx == rax_2 || rdx_4 == 0xffffffff)
    label_14242f33e:
        int16_t var_a8 = 0x100
        int64_t var_a0
        __builtin_memset(&var_a0, 0, 0x4c)
        int32_t var_4c_1 = 0
        int64_t var_40_1 = 0
        int32_t var_38_1 = 0
        int32_t rax_6 = (rsi + 1).d
        int32_t var_54_1 = 0x80
        int32_t var_50_1 = 0xffffffff
        *(arg1 + 0x160) = rax_6
        
        if (rax_6 s> *(arg1 + 0x164))
            sub_1407c3920(arg1 + 0x158)
        
        sub_142427ee0(*(arg1 + 0x158) + r14, &var_a8)
        sub_142429280(&var_a8)
        rdx_4 = rsi.d
    
    int64_t rcx_8 = *(arg1 + 0x158)
    *(arg1 + 0x168) = rdx_4
    *(sx.q(rdx_4) * 0x78 + rcx_8 + 0x20) = *(arg1 + 0x30)
    void* rbp_1 = *(arg1 + 0x30)
    
    if (*(rbp_1 + 0x248) == 0)
        int64_t rsi_1 = sx.q(*(arg1 + 0x168)) * 0x78
        void* var_b0 = rbp_1
        void* rsi_2 = rsi_1 + *(arg1 + 0x158)
        
        if (rbp_1 != 0)
            int32_t var_b8
            sub_140b91690(rsi_2 + 0x28, &var_b8, &var_b0, nullptr)
            *(rbp_1 + 0x248) = rsi_2
else
    while (*rcx_1 != 0)
        rcx_1 = &rcx_1[0x78]
        
        if (rcx_1 == rax_2)
            goto label_14242f2fa

char* i = *(arg1 + 0x158)
int64_t result = sx.q(*(arg1 + 0x160))
void* rdx_10

for (rdx_10 = result * 0x78 + i; i != rdx_10; i = &i[0x78])
    if (*i == 2)
        goto label_14242f48e

rdx_10.b = 2
result = sub_1424350b0(arg1, rdx_10.b)
*(result + 0x20) = *(arg1 + 0x30)
label_14242f48e:
__security_check_cookie(rax_1 ^ &var_d8)
return result
