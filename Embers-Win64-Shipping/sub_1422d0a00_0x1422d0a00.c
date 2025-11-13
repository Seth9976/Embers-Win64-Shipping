// 函数: sub_1422d0a00
// 地址: 0x1422d0a00
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

char rdi = arg4
char var_a8_1

if (arg9 != 0)
    var_a8_1 = 1

if (arg9 == 0 || data_143a2fd9c == 0)
    var_a8_1 = 0

uint64_t result = sub_1422cb580(arg6)

if (result.b != 0)
    result = arg1 + 0x38
    uint64_t result_1 = result
    bool cond:4_1
    
    do
        int64_t r9 = sx.q(arg6[6].d)
        int64_t* r15_3 = (r9 << 5) + *result
        int64_t* rbx_2 = sx.q(arg6[7].d) + sx.q(*(r15_3 + 0xc)) + arg7
        int64_t* var_c8
        int64_t var_c0
        int32_t var_b8
        int64_t* var_b0
        int32_t var_a4
        uint32_t var_9c
        
        if (*(r15_3 + 0x1c) == 0)
            var_9c = zx.d(*(arg6 + 0x2c))
            (*(*arg3 + 0x168))(arg3, &var_9c)
            
            if (rdi != 0)
                int64_t* rcx_2 = arg3[1]
                var_a4 = 0xabadf00d
                int32_t* rdx_1 = *rcx_2
                
                if (&rdx_1[1] u> rcx_2[1])
                    int32_t* rdx_2 = &var_a4
                    
                    if ((*(arg3 + 0x29) & 0x20) != 0)
                        sub_140b54070(arg3, rdx_2, arg5)
                    else
                        (*(*arg3 + 0x150))(arg3, rdx_2, 4)
                else
                    var_a4 = *rdx_1
                    *rcx_2 += 4
            
            int64_t* rcx_4 = arg3[1]
            int64_t rdi_1 = *rbx_2
            int16_t var_a0 = rbx_2[1].w
            int16_t* rdx_3 = *rcx_4
            
            if (&rdx_3[1] u> rcx_4[1])
                int16_t* rdx_4 = &var_a0
                
                if ((*(arg3 + 0x29) & 0x20) != 0)
                    sub_140b54000(arg3, rdx_4, arg5)
                else
                    (*(*arg3 + 0x150))(arg3, rdx_4, 2)
            else
                var_a0 = *rdx_3
                *rcx_4 += 2
            
            void* rax_11 = *arg6
            *(rax_11 + 8) += 1
            void* r8 = *(*arg6[2] + zx.q(*(r15_3 + 0x14)) * 0x10 - 8)
            int64_t var_88 = *arg6
            uint64_t result_2 = result_1
            var_b0 = arg9
            void* var_78_1 = r8
            int32_t var_70_1 = *(r8 + 8)
            uint32_t var_6c_1 = zx.d(*(r15_3 + 0xa))
            uint32_t var_68_1 = zx.d(var_a0)
            int32_t var_40_1 = 0xffffffff
            int32_t var_64_1 = arg6[6].d + 1
            int32_t var_60_1 = zx.d(r15_3[1].w) - 1
            int64_t var_48_1 = arg6[8]
            var_b8 = arg8 + 1
            var_c0 = rdi_1
            rdi = arg4
            var_c8 = &var_88
            sub_1422d0a00(arg1, arg2, arg3, zx.q(rdi), var_c8, var_c0, var_b8, var_b0, var_a8_1)
            void* rax_24 = *arg6
            var_9c = 0
            *(rax_24 + 8) += 1
            (*(*arg3 + 0x168))(arg3, &var_9c)
            
            if (rdi != 0)
                int64_t* rcx_10 = arg3[1]
                var_a4 = 0xabadf00d
                int32_t* rdx_9 = *rcx_10
                
                if (&rdx_9[1] u> rcx_10[1])
                    int32_t* rdx_10 = &var_a4
                    
                    if ((*(arg3 + 0x29) & 0x20) != 0)
                        sub_140b54070(arg3, rdx_10, arg5)
                    else
                        (*(*arg3 + 0x150))(arg3, rdx_10, 4)
                else
                    var_a4 = *rdx_9
                    *rcx_10 += 4
        else if (var_a8_1 == 0 || (*(r15_3 + 0x1d) & 1) == 0)
        label_1422d0cc7:
            data_143f4cf48 += 1
            var_9c = zx.d(*(arg6 + 0x2c))
            (*(*arg3 + 0x168))(arg3, &var_9c)
            
            if (rdi != 0)
                int64_t* rcx_19 = arg3[1]
                var_a4 = 0xabadf00d
                int32_t* rdx_17 = *rcx_19
                
                if (&rdx_17[1] u> rcx_19[1])
                    int32_t* rdx_20 = &var_a4
                    
                    if ((*(arg3 + 0x29) & 0x20) != 0)
                        sub_140b54070(arg3, rdx_20, arg5)
                    else
                        (*(*arg3 + 0x150))(arg3, rdx_20, 4)
                else
                    var_a4 = *rdx_17
                    *rcx_19 += 4
            
            int64_t* rcx_22 = *r15_3
            var_c8 = nullptr
            (*(*rcx_22 + 0x90))(rcx_22, arg3, arg3[0x17], rbx_2, 0, var_c0, var_b8, var_b0, 
                var_a8_1)
            
            if (rdi != 0)
                arg5 = sub_1422b3d30(r15_3, arg6[6].d, rbx_2, arg3, arg5)
        else
            void* rax_29 = *arg9
            void* r8_4 = (sx.q(arg9[1].d) << 5) + rax_29
            
            if (rax_29 == r8_4)
                goto label_1422d0cc7
            
            while (((*(rax_29 + 4) ^ *(arg6 + 0x34)) | (*(rax_29 + 8) ^ arg8)
                    | (*(rax_29 + 0xc) ^ rbx_2.d) | (r9.d ^ *rax_29)) != 0)
                rax_29 += 0x20
                
                if (rax_29 == r8_4)
                    goto label_1422d0cc7
            
            if (rax_29 == 0)
                goto label_1422d0cc7
            
            data_143f4cf44 += 1
            (*(*arg3 + 0x208))(arg3, *(arg9[2] + 0x90), zx.q(*(rax_29 + 0x10)), 
                sx.q(*(rax_29 + 0x14)), var_c8, var_c0, var_b8, var_b0, var_a8_1)
        cond:4_1 = sub_1422cb580(arg6) != 0
        result = result_1
    while (cond:4_1)

return result
