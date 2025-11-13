// 函数: sub_142111550
// 地址: 0x142111550
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

char rsi = arg4
int32_t rbx = arg3
arg2[1].d = 0

if (*(arg2 + 0xc) != 0)
    sub_1405c5570(arg2, 0)

if (rbx == 3)
    rbx = data_143a30368:0xc.d

int64_t rcx_1 = sx.q(arg5)
int64_t* rdx = &arg1[0x4a]
int64_t r8 = sx.q(rbx)
int64_t i = 0
int64_t var_40 = r8
int64_t i_1 = 0
int64_t* var_48 = rdx

do
    if (i == r8 || rsi != 0)
        int64_t j = 0
        int64_t* var_58_1 = rdx
        int64_t* rax = rdx
        
        do
            int64_t* r15_1 = *rax
            
            if (r15_1 != 0 && (j == rcx_1 || arg6 != 0))
                for (int32_t k = 0; k u< 5; k += 1)
                    int64_t* rax_1 = sub_142129130(r15_1, k)
                    void* rbx_1 = *rax_1
                    
                    if ((rbx_1.b & 1) != 0)
                        rbx_1 = (rbx_1 s>> 1) + rax_1
                    
                    for (void* rbp_1 = rbx_1 + sx.q(rax_1[1].d) * 0x28; rbx_1 != rbp_1; 
                            rbx_1 += 0x28)
                        int64_t arg_10 = 0
                        sub_1421487d0(rbx_1, arg1, r15_1, &arg_10)
                        int64_t rdx_3 = arg_10
                        
                        if (rdx_3 != 0)
                            uint64_t r8_2 = *arg2
                            int64_t r9_1 = sx.q(arg2[1].d)
                            uint64_t rax_3 = r8_2
                            int64_t rsi_1 = r9_1 << 3
                            int64_t rcx_5 = rsi_1 + r8_2
                            
                            if (r8_2 != rcx_5)
                                while (*rax_3 != rdx_3)
                                    rax_3 += 8
                                    
                                    if (rax_3 == rcx_5)
                                        goto label_14211169c
                            
                            if (r8_2 == rcx_5 || ((rax_3 - r8_2) s>> 3).d == 0xffffffff)
                            label_14211169c:
                                int32_t rax_6 = (r9_1 + 1).d
                                arg2[1].d = rax_6
                                
                                if (rax_6 s> *(arg2 + 0xc))
                                    sub_1405a4d70(arg2)
                                    rdx_3 = arg_10
                                
                                *(rsi_1 + *arg2) = rdx_3
                
                rax = var_58_1
                rcx_1 = sx.q(arg5)
            
            rax = &rax[1]
            j += 1
            var_58_1 = rax
        while (j s< 4)
        
        i = i_1
        rdx = var_48
        r8 = var_40
        rsi = arg4
    
    i += 1
    rdx = &rdx[4]
    i_1 = i
    var_48 = rdx
while (i s< 3)

return i
