// 函数: sub_14238d790
// 地址: 0x14238d790
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t r13 = arg4
int64_t* r15 = arg2
int64_t rsi

if ((*(arg1 + 0x37) & 8) == 0 || arg1[7].b s< 0)
    rsi.b = 0
else
    rsi.b = 1

int64_t rdi

if (*(arg1 + 0x35) s< 0 || (*(arg1 + 0x36) & 1) != 0)
    rdi.b = 1
else
    rdi.b = 0

uint64_t result

if (sub_1422a6980(arg3).b != 0)
    result.b = 1
else
    result = zx.q(*(arg1 + 0x36))
    
    if ((result.b & 4) != 0 || rdi.b != 0 || (result.b & 2) != 0 || rsi.b != 0
            || (arg1[7].b & 0x10) != 0)
        result.b = 1
    else
        result.b = 0

if ((*(arg3 + 0x2c) & 0x80) != 0 && result.b != 0)
    result = sub_1422e48a0(arg3)
    int32_t i = 0
    int32_t i_1 = 0
    
    if (r15[1].d s> 0)
        int64_t* rcx_2 = nullptr
        int32_t rbp_1 = 1
        int32_t var_70_1 = 1
        int64_t* var_60_1 = nullptr
        
        do
            uint64_t rbx_1 = *(rcx_2 + *r15)
            result = sub_1422a6b20(arg1, rbx_1)
            
            if (result.b != 0 && (r13 & rbp_1) != 0)
                int16_t arg_8
                result = sub_14238e150(arg1, &arg_8, rbx_1)
                int64_t* rcx_5 = arg1[0x2a]
                int32_t j = 0
                int32_t j_1 = 0
                
                if (rcx_5[1].d s> 0)
                    char rbx_2 = arg_8.b
                    result = 0
                    char r13_1 = arg_8:1.b
                    int32_t rdx_2 = sx.d(rbx_2)
                    int32_t var_74_1 = rdx_2
                    uint64_t result_1 = 0
                    
                    do
                        if (rdx_2 != j)
                            result = result_1
                        
                        if ((rdx_2 == j || sx.d(r13_1) == j) && j s>= *(arg1 + 0x624))
                            void* rbp_3 = *(*rcx_5 + result_1)
                            sub_1419c6730()
                            int32_t k = 0
                            
                            if (*(rbp_3 + 0x30) s> 0)
                                do
                                    int32_t rax_4 = (*(*arg1 + 0x188))(arg1)
                                    int32_t rsi_1 = 0
                                    
                                    if (rax_4 s> 0)
                                        do
                                            int32_t rax_5 = sub_14081f8e0(arg5, 1)
                                            int64_t* rdi_3 = zx.q(rax_5 s% 0x66) * 0xa0
                                                + *(*arg5 + (sx.q(rax_5 s/ 0x66) << 3))
                                            
                                            if ((*(*arg1 + 0x198))(arg1, zx.q(j_1), zx.q(rsi_1), 
                                                    zx.q(k), 0, 0, 1, rdi_3, i_1, var_70_1, 
                                                    result_1, var_60_1, rbp_3) == 0)
                                                i = i_1
                                            else
                                                int32_t rax_9 = *(rdi_3 + 0x9c)
                                                
                                                if (not(test_bit(rax_9, 0x15)) || rbx_2 == r13_1)
                                                    rax_9 &= 0xffdfffff
                                                
                                                *(rdi_3 + 0x9c) = (rax_9 & 0xfffdffff) | 0x10000
                                                i = i_1
                                                sub_1422dd2a0(arg5, i, rdi_3)
                                            
                                            rsi_1 += 1
                                        while (rsi_1 s< rax_4)
                                    
                                    k += 1
                                while (k s< *(rbp_3 + 0x30))
                                
                                j = j_1
                            
                            rdx_2 = var_74_1
                            result = result_1
                        
                        rcx_5 = arg1[0x2a]
                        j += 1
                        result += 8
                        j_1 = j
                        result_1 = result
                    while (j s< rcx_5[1].d)
                    
                    rbp_1 = var_70_1
                    r15 = arg2
                    r13 = arg4
            
            i += 1
            rcx_2 = &var_60_1[1]
            rbp_1 = rol.d(rbp_1, 1)
            i_1 = i
            var_70_1 = rbp_1
            var_60_1 = rcx_2
        while (i s< r15[1].d)

return result
