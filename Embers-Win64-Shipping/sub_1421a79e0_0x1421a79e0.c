// 函数: sub_1421a79e0
// 地址: 0x1421a79e0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* arg_20 = arg4
uint64_t result = zx.q(data_143db7a64)

if (result.d == 0)
    int64_t rbx_1 = data_143f4df88
    int64_t rcx
    
    if (data_143de5480 == result.b)
        rcx = 0
    else
        result = GetCurrentThreadId()
        arg4 = arg_20
        rcx.b = result.d != data_143de5470
    
    if (*(rbx_1 + (rcx << 2)) != 0)
        int64_t rdx
        rdx:result = mulu.dp.q(-0x1c71c71c71c71c71, 0x10000)
        int32_t i = arg4[1].d
        uint64_t rcx_2 = rdx u>> 6
        int64_t r13_1 = data_143a2f020
        uint64_t var_50_1 = rcx_2
        int64_t var_58_1 = r13_1
        int32_t var_68_1 = 0
        
        while (i s> 0)
            uint64_t i_1 = zx.q(rcx_2.d)
            int64_t* rcx_3 = data_143f0f180
            
            if (i s<= rcx_2.d)
                i_1 = zx.q(i)
            
            memcpy(
                (*(*rcx_3 + 0x130))(rcx_3, &data_143f02b98, r13_1, 0, (i_1 * 9).d << 3, 1, 
                    var_68_1, &(*1111")[sx.q(arg3)], 
                var_58_1, var_50_1), *arg4 + sx.q(var_68_1) * 0x48, i_1.d * 0x48)
            int64_t* rcx_7 = data_143f0f180
            (*(*rcx_7 + 0x138))(rcx_7, &data_143f02b98, r13_1)
            i -= i_1.d
            var_68_1 += i_1.d
            void* var_48
            sub_1419a2ec0(std::_Get_future_error_what((*1111")[sx.q(arg3)]), &var_48, 
                &data_143f4e5d0, 0)
            void* var_38
            sub_1419a2ec0(std::_Get_future_error_what((*1111")[sx.q(arg3)]), &var_38, 
                &data_143f4f3b0, 0)
            void* r13_2 = var_48
            *arg2 = data_143a2ef68
            int64_t rax_7 = 0
            
            if (r13_2 != 0)
                int64_t rdx_6 = sx.q(*(r13_2 + 0x10c))
                void* var_40
                int64_t* rbx_4 = *(var_40 + 0x10)
                int64_t* rax_9 = rbx_4[3]
                
                if (rax_9[rdx_6] == 0)
                    sub_1419ccf30(rbx_4, rdx_6.d)
                    rax_9 = rbx_4[3]
                
                rax_7 = rax_9[rdx_6]
            
            arg2[1] = rax_7
            int64_t rcx_13 = 0
            void* rax_10 = var_38
            
            if (rax_10 != 0)
                int64_t rdx_7 = sx.q(*(rax_10 + 0x10c))
                void* var_30
                int64_t* rbx_5 = *(var_30 + 0x10)
                int64_t* rax_12 = rbx_5[3]
                
                if (rax_12[rdx_7] == 0)
                    sub_1419ccf30(rbx_5, rdx_7.d)
                    rax_12 = rbx_5[3]
                
                rcx_13 = rax_12[rdx_7]
            
            arg2[4] = rcx_13
            arg2[0xb].d = 0
            sub_1419870b0(arg1, arg2, 2)
            int64_t r9 = sub_1421c22b0(r13_2, arg1)
            void*** rcx_19 = (*(arg1 + 0x30) + 7) & 0xfffffffffffffff8
            void* rax_13 = &rcx_19[5]
            
            if (rax_13 u> *(arg1 + 0x38))
                r9 = sub_140b0e3d0(arg1 + 0x30, 0x30)
                rcx_19 = (*(arg1 + 0x30) + 7) & 0xfffffffffffffff8
                rax_13 = &rcx_19[5]
            
            r13_1 = var_58_1
            *(arg1 + 0x30) = rax_13
            *(arg1 + 0x14) += 1
            **(arg1 + 8) = rcx_19
            *(arg1 + 8) = &rcx_19[1]
            *rcx_19 = &data_142d56618
            rcx_19[2].d = 0
            rcx_19[3] = r13_1
            rcx_19[4].d = 0
            rcx_19[1] = 0
            int64_t rbx_6 = data_143a2efc0
            void*** rcx_25 = (*(arg1 + 0x30) + 7) & 0xfffffffffffffff8
            void* rax_16 = &rcx_25[5]
            
            if (rax_16 u> *(arg1 + 0x38))
                r9 = sub_140b0e3d0(arg1 + 0x30, 0x30)
                rcx_25 = (*(arg1 + 0x30) + 7) & 0xfffffffffffffff8
                rax_16 = &rcx_25[5]
            
            *(arg1 + 0x30) = rax_16
            int64_t* rax_17 = *(arg1 + 8)
            *(arg1 + 0x14) += 1
            *rax_17 = rcx_25
            *(arg1 + 8) = &rcx_25[1]
            rcx_25[1] = 0
            *rcx_25 = &data_142d56618
            rcx_25[2].d = 1
            rcx_25[3] = rbx_6
            rcx_25[4].d = 0
            int64_t rbx_7 = data_143a2eff0
            
            if (rbx_7 == 0)
                sub_140af98a0("Unknown", 0xbc8, 
                    Tried to call DrawIndexedPrimitive with null IndexBuffer!", r9)
                sub_140afbb40()
            
            result = (*(arg1 + 0x30) + 7) & 0xfffffffffffffff8
            int64_t rcx_29 = result + 0x30
            
            if (rcx_29 u> *(arg1 + 0x38))
                sub_140b0e3d0(arg1 + 0x30, 0x38)
                result = (*(arg1 + 0x30) + 7) & 0xfffffffffffffff8
                rcx_29 = result + 0x30
            
            *(arg1 + 0x30) = rcx_29
            uint64_t* rcx_31 = *(arg1 + 8)
            *(arg1 + 0x14) += 1
            arg4 = arg_20
            *rcx_31 = result
            *(arg1 + 8) = result + 8
            *(result + 8) = 0
            *result = &data_142f11598
            *(result + 0x2c) = i_1.d
            rcx_2 = var_50_1
            *(result + 0x10) = rbx_7
            *(result + 0x18) = 0
            *(result + 0x20) = 4
            *(result + 0x28) = 2

return result
