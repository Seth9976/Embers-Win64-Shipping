// 函数: sub_142313b50
// 地址: 0x142313b50
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t arg_20 = arg4
int32_t i = 0
int64_t* rbp = arg5
uint64_t result = sx.q(arg7) * 0xe8 + *rbp
uint64_t result_1 = result

if (arg2[1].d s> 0)
    int32_t rsi_1 = 1
    int64_t* r15_1 = nullptr
    
    do
        if ((arg4 & rsi_1) != 0)
            int64_t rbx_1 = *(r15_1 + *arg2)
            int32_t rax_3 = sub_14081f8e0(arg10, 1)
            int64_t* rdi_3 = zx.q(rax_3 s% 0x66) * 0xa0 + *(*arg10 + (sx.q(rax_3 s/ 0x66) << 3))
            result = sub_14230c3a0(arg1, rbx_1, rbp, arg6, arg7, arg8, rdi_3)
            
            if (rdi_3[0xf] != 0)
                int32_t rcx_6 = *(rdi_3 + 0x9c)
                int64_t* rbp_1 = rdi_3
                *(rdi_3 + 0x9c) = ((zx.d(*(arg1 + 0x178)) << 5 | rcx_6) & 0x40) | zx.d(arg9) << 0x13
                    | (rcx_6 & 0xfff7e03f)
                int64_t* rax_10 = rdi_3[0xd]
                
                if (rax_10 != 0)
                    rbp_1 = rax_10
                
                int32_t rax_11 = sub_1422e48a0(arg3)
                int64_t* rcx_9 = rdi_3[0xf]
                int64_t rax_13 = (*(*rcx_9 + 0x40))(rcx_9)
                
                if (sub_1423b4730(*arg8, rax_13, rax_11) != 0)
                    rbp_1[2] = arg5[5]
                    *(rdi_3 + 0x9c) = (*(rdi_3 + 0x9c) & 0xffffe8ff) | 0x880
                    rbp_1[8].d <<= 2
                
                rbp_1[0xa].d = *(result_1 + 0x10)
                *(rdi_3 + 0x9c) ^= (zx.d(*(arg1 + 0x35)) ^ *(rdi_3 + 0x9c)) & 1
                result = zx.q(*(rdi_3 + 0x9c)) & 0xfffdfffb
                *(rdi_3 + 0x9c) = ((zx.d(arg8[1].b) & 1) | 0x4000) << 2 | result.d
                int64_t* rcx_16 = rdi_3[0x10]
                
                if (rcx_16 != 0)
                    int64_t rax_28 = *rcx_16
                    uint64_t rdx_12 = zx.q(*(arg1 + 0x179))
                    int64_t var_48 = 0
                    result = (*(rax_28 + 0x40))(rcx_16, rdx_12, &var_48)
                    
                    if (result != 0)
                        result = sub_1422dd2a0(arg10, i, rdi_3)
                
                rbp = arg5
            
            arg4 = arg_20
        
        i += 1
        rsi_1 = rol.d(rsi_1, 1)
        r15_1 = &r15_1[1]
    while (i s< arg2[1].d)

return result
