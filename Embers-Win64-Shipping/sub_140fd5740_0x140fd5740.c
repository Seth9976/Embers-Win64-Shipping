// 函数: sub_140fd5740
// 地址: 0x140fd5740
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t r9 = sx.q(*(arg1 + 8))
void* rdi_1 = r9 + *arg1
int32_t rax

if (r9.d u>= 4)
    rax = *(rdi_1 - 4)
else
    rax = 0

char* rdi_2 = rdi_1 - sx.q(rax)
void* rdi_3

if (rdi_2 u>= rdi_1 - 4)
label_140fd579b:
    rdi_3 = nullptr
else
    while (true)
        uint64_t rcx = zx.q(*(rdi_2 + 1))
        rdi_3 = &rdi_2[5]
        
        if (*rdi_2 == 0x70 && rcx.d == 5)
            break
        
        rdi_2 = rdi_3 + rcx
        
        if (rdi_2 u>= rdi_1 - 4)
            goto label_140fd579b

int32_t* i = *(arg2 + 0x60)
int32_t r8_1 = 0

while (i != &i[sx.q(*(arg2 + 0x68))])
    int32_t rcx_1 = *i
    
    if (rcx_1 - 1 u> 0xfffffffd)
        break
    
    i = &i[1]
    r8_1 |= 1 << rcx_1.b

*(arg2 + 0xc2) = r8_1.w
*(arg2 + 0xc0) = *rdi_3
int64_t rdx = sx.q(*(arg1 + 8))
void* rbx_1 = rdx + *arg1
int32_t rax_7

if (rdx.d u>= 4)
    rax_7 = *(rbx_1 - 4)
else
    rax_7 = 0

int64_t rsi_1

for (char* i_1 = rbx_1 - sx.q(rax_7); i_1 u< rbx_1 - 4; i_1 = &i_1[5 + zx.q(rsi_1.d)])
    rsi_1 = sx.q(*(i_1 + 1))
    
    if (*i_1 == 0x76)
        if (i_1 != -5 && rsi_1.d s> 0)
            void** const var_b8
            sub_140b4c2a0(&var_b8)
            var_b8 = &data_142d84578
            int64_t var_20_1 = 0
            int64_t var_18_1 = rsi_1
            char var_10_1 = 0
            sub_140b55290(&var_b8, 1)
            var_b8[0x1b](&var_b8, 0)
            var_b8 = &data_142d847a8
            sub_140fdaf10(&var_b8, arg2 + 0xb0, arg3)
            var_b8 = &data_142d84578
            
            if (var_10_1 != 0)
                sub_140a74f90(&i_1[5])
                int64_t var_28_2 = 0
            
            sub_140b4cb40(&var_b8)
        
        break

char result = *rdi_3
*(arg2 + 0xc0) = result
return result
