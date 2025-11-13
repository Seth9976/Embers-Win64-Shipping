// 函数: sub_142006990
// 地址: 0x142006990
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void** result = sub_140cddf60(arg1, arg2)

if (arg1[6].b == 1 && *arg2 == 1)
    int32_t* arg_8 = arg2
    sub_141ff9520(&arg_8, &arg1[0x29])
    int64_t* i = arg1[0x2e]
    result = sx.q(arg1[0x2f].d)
    
    for (void* r15_2 = result * 0x38 + i; i != r15_2; i = &i[7])
        void* rbx_1 = *i
        result = sx.q(i[1].d)
        void* rbp_1 = rbx_1 + result * 0x28
        
        if (rbx_1 != rbp_1)
            void* rbx_2 = rbx_1 + 8
            
            do
                void* rax = sub_14082fb80(rbx_2)
                void* rax_1
                int64_t rax_2
                void* rdx_1
                
                if (rax != 0)
                    rax_1 = sub_1424acfc0()
                    rdx_1 = *(rax + 0x10)
                    rax_2 = sx.q(*(rax_1 + 0x38))
                
                if ((rax == 0 || rax_2.d s> *(rdx_1 + 0x38)
                        || *(*(rdx_1 + 0x30) + (rax_2 << 3)) != rax_1 + 0x30) && sub_140da8770(rbx_2) == 0)
                    sub_140a464c0()
                    int64_t* rax_5 = sub_140da7300(rbx_2)
                    int16_t* const rdx_2
                    
                    if (rax_5[1].d == 0)
                        rdx_2 = &data_142d40450
                    else
                        rdx_2 = *rax_5
                    
                    int64_t rax_7 = (*(data_14399ea08 + 0x108))(&data_14399ea08, rdx_2)
                    
                    if (rax_7 s> 0)
                        *(arg2 + 8) += rax_7
                
                rbx_2 += 0x28
                result = rbx_2 - 8
            while (result != rbp_1)

return result
