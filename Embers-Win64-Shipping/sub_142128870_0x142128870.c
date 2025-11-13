// 函数: sub_142128870
// 地址: 0x142128870
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* rsi = arg2
void* result = sub_142129070(arg2)
void* result_1 = result
void* result_2 = result

if (arg4 != 0)
    int32_t rsi_5 =
        *(result + 0x88) + *(result + 0x78) + *(result + 0x68) + *(result + 0x58) + *(result + 0x48)
    int32_t i_3 = arg4[1].d
    int64_t* rbx_1 = *arg4
    
    if (i_3 != 0)
        int32_t i
        
        do
            int64_t rcx_1 = *rbx_1
            
            if (rcx_1 != 0)
                result = sub_140a74f90(rcx_1)
            
            rbx_1 = &rbx_1[2]
            i = i_3
            i_3 -= 1
        while (i != 1)
    
    arg4[1].d = 0
    
    if (*(arg4 + 0xc) != rsi_5)
        result = sub_1405a5410(arg4, rsi_5)
    
    rsi = arg2
    result_2 = result_1

int32_t i_1 = 0
void* r15 = result_2 + 0x40
int32_t i_2 = 0

do
    int32_t j = 0
    
    if (*(r15 + 8) s> 0)
        void* rbp_1 = nullptr
        void* var_48_1 = nullptr
        
        do
            char var_68_1 = 1
            int64_t k_1 = 0
            result = sub_142148880(result_2, i_1, j, arg1, rsi, &k_1)
            int64_t k = k_1
            
            if (k != 0)
                int64_t* rdx_2 = *arg3
                int64_t rdi = sx.q(arg3[1].d)
                int64_t* rbx_2 = rdx_2
                int64_t* rsi_6 = rdi << 3
                result = rsi_6 + rdx_2
                int32_t rbx_4
                
                if (rdx_2 != result)
                    while (*rbx_2 != k)
                        rbx_2 = &rbx_2[1]
                        
                        if (rbx_2 == result)
                            goto label_1421289bc
                    
                    rbx_4 = ((rbx_2 - rdx_2) s>> 3).d
                
                if (rdx_2 == result || rbx_4 == 0xffffffff)
                label_1421289bc:
                    int32_t rax = (rdi + 1).d
                    arg3[1].d = rax
                    
                    if (rax s> *(arg3 + 0xc))
                        sub_1405a4d70(arg3)
                        k = k_1
                    
                    result = *arg3
                    rbx_4 = rdi.d
                    *(rsi_6 + result) = k
                
                if (arg4 != 0)
                    void* rax_1 = *r15
                    
                    if ((rax_1.b & 1) != 0)
                        rax_1 = (rax_1 s>> 1) + r15
                    
                    int64_t rdi_1 = sx.q(arg4[1].d)
                    
                    if (rbx_4 s>= rdi_1.d)
                        int32_t rax_3 = rdi_1.d + rbx_4 - rdi_1.d + 1
                        arg4[1].d = rax_3
                        
                        if (rax_3 s> *(arg4 + 0xc))
                            sub_1405a4f90(arg4)
                        
                        memset((rdi_1 << 4) + *arg4, 0, sx.q(rbx_4 - rdi_1.d + 1) << 4)
                    
                    int64_t* rbx_7 = (sx.q(rbx_4) << 4) + *arg4
                    int64_t rdi_2 = sx.q(rbx_7[1].d)
                    int32_t rax_4 = (rdi_2 + 1).d
                    rbx_7[1].d = rax_4
                    
                    if (rax_4 s> *(rbx_7 + 0xc))
                        sub_1405a4cf0(rbx_7)
                    
                    result = zx.q(*(rbp_1 + rax_1 + 0x20))
                    rbp_1 = var_48_1
                    *(*rbx_7 + (rdi_2 << 2)) = result.d
                
                rsi = arg2
                result_2 = result_1
                i_1 = i_2
            
            rbp_1 += 0x28
            j += 1
            var_48_1 = rbp_1
        while (j s< *(r15 + 8))
    
    i_1 += 1
    r15 += 0x10
    i_2 = i_1
while (i_1 u< 5)

return result
