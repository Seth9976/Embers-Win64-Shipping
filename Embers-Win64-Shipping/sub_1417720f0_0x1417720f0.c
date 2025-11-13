// 函数: sub_1417720f0
// 地址: 0x1417720f0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* rax = j_sub_140a82f30(0x10)

if (rax == 0)
    rax = nullptr
else
    *rax = 0

int64_t* var_30 = rax
int64_t* var_38 = rax
int64_t* rax_1 = j_sub_140a82f30(0x10)

if (rax_1 != 0)
    *rax_1 = 0
    rax_1[1].d = arg2
    int64_t** rcx = var_38
    var_38 = rax_1
    *rcx = rax_1

int64_t* result = var_30

if (*result != 0)
    int32_t var_48
    int32_t rsi_1 = var_48
    
    do
        int64_t* rdx = *var_30
        
        if (rdx != 0)
            rsi_1 = rdx[1].d
            int64_t* rcx_2 = var_30
            var_30 = rdx
            rdx[1].d = 0
            j_sub_140a74f90(rcx_2)
        
        int64_t rbp_1 = sx.q(rsi_1)
        int64_t* rbx_3 = (rbp_1 << 5) + *(arg1 + 8)
        
        if (rbx_3[3].d s< 0)
            int64_t* r8 = rbx_3[2]
            int64_t* rax_3 = nullptr
            
            if (*(r8 + 0xc) u>= 2)
                rax_3 = r8
            
            void var_44
            
            if (rax_3 == 0 || *(sx.q(rax_3[1].d) + *(*rax_3 + 0x398)) == 2)
                void var_40
                
                if (*sub_1408296b0(arg5, &var_44, r8) == 0xffffffff)
                    sub_140812a70(arg5, &var_40, &rbx_3[2], nullptr)
            else
                sub_140812a70(arg4, &var_48, &rbx_3[2], nullptr)
                rbx_3[3].d = arg3
                *(*(arg1 + 0xd8) + (rbp_1 << 2)) = zx.d(*(arg1 + 0xe8))
                int32_t* i = *rbx_3
                
                for (void* rbp_2 = &i[sx.q(rbx_3[1].d)]; i != rbp_2; i = &i[1])
                    int32_t r8_2 = -1
                    int64_t rcx_6 = sx.q(*i) * 3
                    int64_t rax_9 = *(arg1 + 0x18)
                    int32_t rbx_4 = *(rax_9 + (rcx_6 << 3))
                    int32_t rdx_4 = *(rax_9 + (rcx_6 << 3) + 4)
                    
                    if (rsi_1 == rbx_4)
                        r8_2 = rdx_4
                    
                    if (rsi_1 != rdx_4)
                        rbx_4 = r8_2
                    
                    if (rbx_4 != 0xffffffff)
                        int64_t* rax_10 = j_sub_140a82f30(0x10)
                        
                        if (rax_10 != 0)
                            *rax_10 = 0
                            rax_10[1].d = rbx_4
                            int64_t* rcx_7 = var_38
                            var_38 = rax_10
                            *rcx_7 = rax_10
        
        result = var_30
    while (*result != 0)

int64_t* i_2

for (int64_t* i_1 = var_30; i_1 != 0; i_1 = i_2)
    i_2 = *i_1
    result = j_sub_140a74f90(i_1)

return result
