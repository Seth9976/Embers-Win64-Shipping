// 函数: sub_14103c040
// 地址: 0x14103c040
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t r9 = sx.q(*(arg1 + 8))
void* r10_1 = r9 + *arg1
int32_t rax

if (r9.d u>= 4)
    rax = *(r10_1 - 4)
else
    rax = 0

int64_t rcx

for (char* i = r10_1 - sx.q(rax); i u< r10_1 - 4; i = &i[5 + rcx])
    rcx = zx.q(*(i + 1))
    
    if (*i == 0x70 && rcx.d == 5)
        if (i == -5)
            break
        
        *(arg2 + 0x108) = *(i + 5)
        *(arg2 + 0x10c) = i[9]
        int64_t rdx = sx.q(*(arg1 + 8))
        void* rbx_1 = rdx + *arg1
        int32_t rax_4
        
        if (rdx.d u>= 4)
            rax_4 = *(rbx_1 - 4)
        else
            rax_4 = 0
        
        int64_t rdi_1
        
        for (char* j = rbx_1 - sx.q(rax_4); j u< rbx_1 - 4; j = &j[5 + zx.q(rdi_1.d)])
            rdi_1 = sx.q(*(j + 1))
            
            if (*j == 0x76)
                if (j != -5 && rdi_1.d s> 0)
                    void** var_b8
                    sub_140b4c2a0(&var_b8)
                    var_b8 = &data_142d84578
                    int64_t var_20_1 = 0
                    int64_t var_18_1 = rdi_1
                    char var_10_1 = 0
                    sub_140b55290(&var_b8, 1)
                    var_b8[0x1b](&var_b8, 0)
                    var_b8 = &data_142d847a8
                    sub_140fdaf10(&var_b8, arg2 + 0x30, arg3)
                    var_b8 = &data_142d84578
                    
                    if (var_10_1 != 0)
                        sub_140a74f90(&j[5])
                        int64_t var_28_2 = 0
                    
                    sub_140b4cb40(&var_b8)
                
                break
        
        int64_t rax_5
        rax_5.b = 1
        return rax_5

int64_t rax_1
rax_1.b = 0
return rax_1
